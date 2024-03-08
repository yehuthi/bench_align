#include <benchmark/benchmark.h>
#include "align.h"

static void BM_AlignUpTwosComplement(benchmark::State& state) {
	for (auto _ : state) {
		benchmark::DoNotOptimize(
			align_up_twos_complement(1001, state.range(0))
		);
	}
}

static void BM_AlignUpArithmetic(benchmark::State& state) {
	for (auto _ : state) {
		benchmark::DoNotOptimize(
			align_up_arithmetic(1001, state.range(0))
		);
	}
}

static void BM_AlignUpFromDownMasked1(benchmark::State& state) {
	for (auto _ : state) {
		benchmark::DoNotOptimize(
			align_up_from_down(1001, state.range(0))
		);
	}
}

static void BM_AlignDown1(benchmark::State& state) {
	for (auto _ : state) {
		benchmark::DoNotOptimize(
			align_down(1001, state.range(0))
		);
	}
}

static void BM_AlignDownArithmetic(benchmark::State& state) {
	for (auto _ : state) {
		benchmark::DoNotOptimize(
			align_down_arithmetic(1001, state.range(0))
		);
	}
}

BENCHMARK(BM_AlignUpTwosComplement)->Arg(4);
BENCHMARK(BM_AlignUpArithmetic)->Arg(4);
BENCHMARK(BM_AlignUpFromDownMasked1)->Arg(4);
BENCHMARK(BM_AlignDown1)->Arg(4);
BENCHMARK(BM_AlignDownArithmetic)->Arg(4);
BENCHMARK_MAIN();
