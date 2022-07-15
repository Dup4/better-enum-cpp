#include "benchmark/benchmark.h"

#include "better-enum/better-enum.h"

#include "./data/a.h"

static void BenchmarkFromInteger(benchmark::State& state) {
    for (auto _ : state) {
        BetterEnum::FromInteger<test::data::AEnum>(255);
    }
}

static void BenchmarkToInteger(benchmark::State& state) {
    for (auto _ : state) {
        BetterEnum::ToInteger(test::data::AEnum::END);
    }
}

BENCHMARK(BenchmarkFromInteger);
BENCHMARK(BenchmarkToInteger);
