using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

inline constexpr auto kCatalan64 = []
{
    std::array<u64, 37> values{};
    values.front() = 1;
    for (u32 n = 1; n < values.size(); ++n)
    {
        u32 numerator = 4 * n - 2;
        u32 denominator = n + 1;
        u32 divisor = std::gcd(numerator, denominator);
        values.at(n) = (values.at(n - 1) / (denominator / divisor)) *
                       (numerator / divisor);
    }
    return values;
}();

template <u64 value>
using UintForValue = std::conditional_t < value < (1 << 8),
      u8,
      std::conditional_t <
          value<
              (1 << 16),
              u16,
              std::conditional_t<value<(1UL << 32), u32, u64>>>;

struct Data
{
    inline static constexpr u32 kMaxN = 8;

    using SizeIndex = UintForValue<kMaxN + 1>;
    using StorageIndex = UintForValue<kCatalan64[kMaxN]>;
    using Storage = decltype([]<std::size_t... Ns>(std::index_sequence<Ns...>)
    {
        return std::tuple<std::array<std::string, kCatalan64[Ns]>...>{};
    }(std::make_index_sequence<kMaxN + 1>{}));

    Storage storage;

    Data()
    {
        auto arrays = std::apply(
            [](auto&... values)
            { return std::array{std::span<std::string>{values}...}; },
            storage);
        for (SizeIndex n = 1; n != kMaxN + 1; ++n)
        {
            StorageIndex size = 0;
            for (SizeIndex gap = 0; gap != n; ++gap)
            {
                for (auto& l : arrays[gap])
                {
                    for (auto& r : arrays[n - (gap + 1)])
                    {
                        arrays[n][size++] = std::format("({}){}", l, r);
                    }
                }
            }
        }
    }

    std::span<const std::string> operator[](SizeIndex n) const noexcept
    {
        [[assume(n < kMaxN + 1)]];
        return std::apply(
            [n](const auto&... values)
            { return std::array{std::span<const std::string>{values}...}[n]; },
            storage);
    }
};

class Solution
{
public:
    inline static Data data;

    std::vector<std::string> generateParenthesis(
        Data::SizeIndex n) const noexcept
    {
        return std::ranges::to<std::vector>(data[n]);
    }
};