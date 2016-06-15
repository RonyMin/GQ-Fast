#ifndef smdb_bb_0threads_
#define smdb_bb_0threads_

#include "../fastr_index.hpp"
#include "../global_vars.hpp"

#define NUM_THREADS 1
#define BUFFER_POOL_SIZE 1

using namespace std;

static int* R;
static int* RC;

static uint64_t*** index0_col0_buffer;
static uint64_t*** index1_col0_buffer;
static uint64_t*** index2_col0_buffer;
static uint64_t*** index3_col0_buffer;
static uint64_t*** index4_col0_buffer;
static uint64_t*** index5_col0_buffer;

static bool* sentence1_bool_array;

extern inline void smdb_bb_0threads_concept_semtype1_col0_decode_BB(unsigned char* concept_semtype1_col0_ptr, uint32_t concept_semtype1_col0_bytes, uint32_t & concept_semtype1_fragment_size) __attribute__((always_inline));

extern inline void smdb_bb_0threads_predication1_col0_decode_BB(unsigned char* predication1_col0_ptr, uint32_t predication1_col0_bytes, uint32_t & predication1_fragment_size) __attribute__((always_inline));

extern inline void smdb_bb_0threads_sentence1_col0_decode_BB(unsigned char* sentence1_col0_ptr, uint32_t sentence1_col0_bytes, uint32_t & sentence1_fragment_size) __attribute__((always_inline));

extern inline void smdb_bb_0threads_predication2_col0_decode_BB(unsigned char* predication2_col0_ptr, uint32_t predication2_col0_bytes, uint32_t & predication2_fragment_size) __attribute__((always_inline));

extern inline void smdb_bb_0threads_concept_semtype2_col0_decode_BB(unsigned char* concept_semtype2_col0_ptr, uint32_t concept_semtype2_col0_bytes, uint32_t & concept_semtype2_fragment_size) __attribute__((always_inline));

extern inline void smdb_bb_0threads_concept2_col0_decode_BB(unsigned char* concept2_col0_ptr, uint32_t concept2_col0_bytes, uint32_t & concept2_fragment_size) __attribute__((always_inline));

void smdb_bb_0threads_concept_semtype1_col0_decode_BB(unsigned char* concept_semtype1_col0_ptr, uint32_t concept_semtype1_col0_bytes, uint32_t & concept_semtype1_fragment_size) {

	index0_col0_buffer[0][0][0] = 0;

	int shiftbits = 0;
	do { 
		concept_semtype1_col0_bytes--;
		uint32_t next_seven_bits = *concept_semtype1_col0_ptr & 127;
		next_seven_bits = next_seven_bits << shiftbits;
		index0_col0_buffer[0][0][0] |= next_seven_bits;
		shiftbits += 7;
	} while (!(*concept_semtype1_col0_ptr++ & 128));
	concept_semtype1_fragment_size++;

	while (concept_semtype1_col0_bytes > 0) {
		shiftbits = 0;
		uint32_t result = 0;

		do {

			concept_semtype1_col0_bytes--;
			uint32_t next_seven_bits = *concept_semtype1_col0_ptr & 127;
			next_seven_bits = next_seven_bits << shiftbits;
			result |= next_seven_bits;
			shiftbits += 7;

		} while (!(*concept_semtype1_col0_ptr++ & 128));
		index0_col0_buffer[0][0][concept_semtype1_fragment_size] = index0_col0_buffer[0][0][concept_semtype1_fragment_size-1]+1+result;
		concept_semtype1_fragment_size++;
	}
}

void smdb_bb_0threads_predication1_col0_decode_BB(unsigned char* predication1_col0_ptr, uint32_t predication1_col0_bytes, uint32_t & predication1_fragment_size) {

	index1_col0_buffer[0][0][0] = 0;

	int shiftbits = 0;
	do { 
		predication1_col0_bytes--;
		uint32_t next_seven_bits = *predication1_col0_ptr & 127;
		next_seven_bits = next_seven_bits << shiftbits;
		index1_col0_buffer[0][0][0] |= next_seven_bits;
		shiftbits += 7;
	} while (!(*predication1_col0_ptr++ & 128));
	predication1_fragment_size++;

	while (predication1_col0_bytes > 0) {
		shiftbits = 0;
		uint32_t result = 0;

		do {

			predication1_col0_bytes--;
			uint32_t next_seven_bits = *predication1_col0_ptr & 127;
			next_seven_bits = next_seven_bits << shiftbits;
			result |= next_seven_bits;
			shiftbits += 7;

		} while (!(*predication1_col0_ptr++ & 128));
		index1_col0_buffer[0][0][predication1_fragment_size] = index1_col0_buffer[0][0][predication1_fragment_size-1]+1+result;
		predication1_fragment_size++;
	}
}

void smdb_bb_0threads_sentence1_col0_decode_BB(unsigned char* sentence1_col0_ptr, uint32_t sentence1_col0_bytes, uint32_t & sentence1_fragment_size) {

	index2_col0_buffer[0][0][0] = 0;

	int shiftbits = 0;
	do { 
		sentence1_col0_bytes--;
		uint32_t next_seven_bits = *sentence1_col0_ptr & 127;
		next_seven_bits = next_seven_bits << shiftbits;
		index2_col0_buffer[0][0][0] |= next_seven_bits;
		shiftbits += 7;
	} while (!(*sentence1_col0_ptr++ & 128));
	sentence1_fragment_size++;

	while (sentence1_col0_bytes > 0) {
		shiftbits = 0;
		uint32_t result = 0;

		do {

			sentence1_col0_bytes--;
			uint32_t next_seven_bits = *sentence1_col0_ptr & 127;
			next_seven_bits = next_seven_bits << shiftbits;
			result |= next_seven_bits;
			shiftbits += 7;

		} while (!(*sentence1_col0_ptr++ & 128));
		index2_col0_buffer[0][0][sentence1_fragment_size] = index2_col0_buffer[0][0][sentence1_fragment_size-1]+1+result;
		sentence1_fragment_size++;
	}
}

void smdb_bb_0threads_predication2_col0_decode_BB(unsigned char* predication2_col0_ptr, uint32_t predication2_col0_bytes, uint32_t & predication2_fragment_size) {

	index3_col0_buffer[0][0][0] = 0;

	int shiftbits = 0;
	do { 
		predication2_col0_bytes--;
		uint32_t next_seven_bits = *predication2_col0_ptr & 127;
		next_seven_bits = next_seven_bits << shiftbits;
		index3_col0_buffer[0][0][0] |= next_seven_bits;
		shiftbits += 7;
	} while (!(*predication2_col0_ptr++ & 128));
	predication2_fragment_size++;

	while (predication2_col0_bytes > 0) {
		shiftbits = 0;
		uint32_t result = 0;

		do {

			predication2_col0_bytes--;
			uint32_t next_seven_bits = *predication2_col0_ptr & 127;
			next_seven_bits = next_seven_bits << shiftbits;
			result |= next_seven_bits;
			shiftbits += 7;

		} while (!(*predication2_col0_ptr++ & 128));
		index3_col0_buffer[0][0][predication2_fragment_size] = index3_col0_buffer[0][0][predication2_fragment_size-1]+1+result;
		predication2_fragment_size++;
	}
}

void smdb_bb_0threads_concept_semtype2_col0_decode_BB(unsigned char* concept_semtype2_col0_ptr, uint32_t concept_semtype2_col0_bytes, uint32_t & concept_semtype2_fragment_size) {

	index4_col0_buffer[0][0][0] = 0;

	int shiftbits = 0;
	do { 
		concept_semtype2_col0_bytes--;
		uint32_t next_seven_bits = *concept_semtype2_col0_ptr & 127;
		next_seven_bits = next_seven_bits << shiftbits;
		index4_col0_buffer[0][0][0] |= next_seven_bits;
		shiftbits += 7;
	} while (!(*concept_semtype2_col0_ptr++ & 128));
	concept_semtype2_fragment_size++;

	while (concept_semtype2_col0_bytes > 0) {
		shiftbits = 0;
		uint32_t result = 0;

		do {

			concept_semtype2_col0_bytes--;
			uint32_t next_seven_bits = *concept_semtype2_col0_ptr & 127;
			next_seven_bits = next_seven_bits << shiftbits;
			result |= next_seven_bits;
			shiftbits += 7;

		} while (!(*concept_semtype2_col0_ptr++ & 128));
		index4_col0_buffer[0][0][concept_semtype2_fragment_size] = index4_col0_buffer[0][0][concept_semtype2_fragment_size-1]+1+result;
		concept_semtype2_fragment_size++;
	}
}

void smdb_bb_0threads_concept2_col0_decode_BB(unsigned char* concept2_col0_ptr, uint32_t concept2_col0_bytes, uint32_t & concept2_fragment_size) {

	index5_col0_buffer[0][0][0] = 0;

	int shiftbits = 0;
	do { 
		concept2_col0_bytes--;
		uint32_t next_seven_bits = *concept2_col0_ptr & 127;
		next_seven_bits = next_seven_bits << shiftbits;
		index5_col0_buffer[0][0][0] |= next_seven_bits;
		shiftbits += 7;
	} while (!(*concept2_col0_ptr++ & 128));
	concept2_fragment_size++;

	while (concept2_col0_bytes > 0) {
		shiftbits = 0;
		uint32_t result = 0;

		do {

			concept2_col0_bytes--;
			uint32_t next_seven_bits = *concept2_col0_ptr & 127;
			next_seven_bits = next_seven_bits << shiftbits;
			result |= next_seven_bits;
			shiftbits += 7;

		} while (!(*concept2_col0_ptr++ & 128));
		index5_col0_buffer[0][0][concept2_fragment_size] = index5_col0_buffer[0][0][concept2_fragment_size-1]+1+result;
		concept2_fragment_size++;
	}
}

extern "C" int* smdb_bb_0threads(int** null_checks) {

	benchmark_t1 = chrono::steady_clock::now();

	int max_frag;

	max_frag = metadata.idx_max_fragment_sizes[0];
	index0_col0_buffer = buffer_arrays[0][0];
	for (int i=0; i<NUM_THREADS; i++) {
		index0_col0_buffer[i] = new uint64_t*[BUFFER_POOL_SIZE];
		for (int j=0; j<BUFFER_POOL_SIZE; j++) {
			index0_col0_buffer[i][j] = new uint64_t[max_frag];
		}
	}

	max_frag = metadata.idx_max_fragment_sizes[1];
	index1_col0_buffer = buffer_arrays[1][0];
	for (int i=0; i<NUM_THREADS; i++) {
		index1_col0_buffer[i] = new uint64_t*[BUFFER_POOL_SIZE];
		for (int j=0; j<BUFFER_POOL_SIZE; j++) {
			index1_col0_buffer[i][j] = new uint64_t[max_frag];
		}
	}

	max_frag = metadata.idx_max_fragment_sizes[2];
	index2_col0_buffer = buffer_arrays[2][0];
	for (int i=0; i<NUM_THREADS; i++) {
		index2_col0_buffer[i] = new uint64_t*[BUFFER_POOL_SIZE];
		for (int j=0; j<BUFFER_POOL_SIZE; j++) {
			index2_col0_buffer[i][j] = new uint64_t[max_frag];
		}
	}

	max_frag = metadata.idx_max_fragment_sizes[3];
	index3_col0_buffer = buffer_arrays[3][0];
	for (int i=0; i<NUM_THREADS; i++) {
		index3_col0_buffer[i] = new uint64_t*[BUFFER_POOL_SIZE];
		for (int j=0; j<BUFFER_POOL_SIZE; j++) {
			index3_col0_buffer[i][j] = new uint64_t[max_frag];
		}
	}

	max_frag = metadata.idx_max_fragment_sizes[4];
	index4_col0_buffer = buffer_arrays[4][0];
	for (int i=0; i<NUM_THREADS; i++) {
		index4_col0_buffer[i] = new uint64_t*[BUFFER_POOL_SIZE];
		for (int j=0; j<BUFFER_POOL_SIZE; j++) {
			index4_col0_buffer[i][j] = new uint64_t[max_frag];
		}
	}

	max_frag = metadata.idx_max_fragment_sizes[5];
	index5_col0_buffer = buffer_arrays[5][0];
	for (int i=0; i<NUM_THREADS; i++) {
		index5_col0_buffer[i] = new uint64_t*[BUFFER_POOL_SIZE];
		for (int j=0; j<BUFFER_POOL_SIZE; j++) {
			index5_col0_buffer[i][j] = new uint64_t[max_frag];
		}
	}

	RC = new int[metadata.idx_domains[5][0]]();
	R = new int[metadata.idx_domains[5][0]]();

	sentence1_bool_array = new bool[metadata.idx_domains[2][0]]();

	uint64_t concept1_list[1];
	concept1_list[0] = 2019;

	for (int concept1_it = 0; concept1_it<1; concept1_it++) {

		uint64_t concept1_col0_element = concept1_list[concept1_it];

		uint32_t* row_concept_semtype1 = idx[0]->index_map[concept1_col0_element];
		uint32_t concept_semtype1_col0_bytes = idx[0]->index_map[concept1_col0_element+1][0] - row_concept_semtype1[0];
		if(concept_semtype1_col0_bytes) {

			unsigned char* concept_semtype1_col0_ptr = &(idx[0]->fragment_data[0][row_concept_semtype1[0]]);
			uint32_t concept_semtype1_fragment_size = 0;
			smdb_bb_0threads_concept_semtype1_col0_decode_BB(concept_semtype1_col0_ptr, concept_semtype1_col0_bytes, concept_semtype1_fragment_size);

			for (uint32_t concept_semtype1_it = 0; concept_semtype1_it < concept_semtype1_fragment_size; concept_semtype1_it++) {

				uint32_t concept_semtype1_col0_element = index0_col0_buffer[0][0][concept_semtype1_it];

				uint32_t* row_predication1 = idx[1]->index_map[concept_semtype1_col0_element];
				uint32_t predication1_col0_bytes = idx[1]->index_map[concept_semtype1_col0_element+1][0] - row_predication1[0];
				if(predication1_col0_bytes) {

					unsigned char* predication1_col0_ptr = &(idx[1]->fragment_data[0][row_predication1[0]]);
					uint32_t predication1_fragment_size = 0;
					smdb_bb_0threads_predication1_col0_decode_BB(predication1_col0_ptr, predication1_col0_bytes, predication1_fragment_size);

					for (uint32_t predication1_it = 0; predication1_it < predication1_fragment_size; predication1_it++) {

						uint32_t predication1_col0_element = index1_col0_buffer[0][0][predication1_it];

						uint32_t* row_sentence1 = idx[2]->index_map[predication1_col0_element];
						uint32_t sentence1_col0_bytes = idx[2]->index_map[predication1_col0_element+1][0] - row_sentence1[0];
						if(sentence1_col0_bytes) {

							unsigned char* sentence1_col0_ptr = &(idx[2]->fragment_data[0][row_sentence1[0]]);
							uint32_t sentence1_fragment_size = 0;
							smdb_bb_0threads_sentence1_col0_decode_BB(sentence1_col0_ptr, sentence1_col0_bytes, sentence1_fragment_size);

							for (uint32_t sentence1_it = 0; sentence1_it < sentence1_fragment_size; sentence1_it++) {


								if (!(sentence1_bool_array[index2_col0_buffer[0][0][sentence1_it]])) {
									sentence1_bool_array[index2_col0_buffer[0][0][sentence1_it]] = true;
									uint32_t sentence1_col0_element = index2_col0_buffer[0][0][sentence1_it];

									uint32_t* row_predication2 = idx[3]->index_map[sentence1_col0_element];
									uint32_t predication2_col0_bytes = idx[3]->index_map[sentence1_col0_element+1][0] - row_predication2[0];
									if(predication2_col0_bytes) {

										unsigned char* predication2_col0_ptr = &(idx[3]->fragment_data[0][row_predication2[0]]);
										uint32_t predication2_fragment_size = 0;
										smdb_bb_0threads_predication2_col0_decode_BB(predication2_col0_ptr, predication2_col0_bytes, predication2_fragment_size);

										for (uint32_t predication2_it = 0; predication2_it < predication2_fragment_size; predication2_it++) {

											uint32_t predication2_col0_element = index3_col0_buffer[0][0][predication2_it];

											uint32_t* row_concept_semtype2 = idx[4]->index_map[predication2_col0_element];
											uint32_t concept_semtype2_col0_bytes = idx[4]->index_map[predication2_col0_element+1][0] - row_concept_semtype2[0];
											if(concept_semtype2_col0_bytes) {

												unsigned char* concept_semtype2_col0_ptr = &(idx[4]->fragment_data[0][row_concept_semtype2[0]]);
												uint32_t concept_semtype2_fragment_size = 0;
												smdb_bb_0threads_concept_semtype2_col0_decode_BB(concept_semtype2_col0_ptr, concept_semtype2_col0_bytes, concept_semtype2_fragment_size);

												for (uint32_t concept_semtype2_it = 0; concept_semtype2_it < concept_semtype2_fragment_size; concept_semtype2_it++) {

													uint32_t concept_semtype2_col0_element = index4_col0_buffer[0][0][concept_semtype2_it];

													uint32_t* row_concept2 = idx[5]->index_map[concept_semtype2_col0_element];
													uint32_t concept2_col0_bytes = idx[5]->index_map[concept_semtype2_col0_element+1][0] - row_concept2[0];
													if(concept2_col0_bytes) {

														unsigned char* concept2_col0_ptr = &(idx[5]->fragment_data[0][row_concept2[0]]);
														uint32_t concept2_fragment_size = 0;
														smdb_bb_0threads_concept2_col0_decode_BB(concept2_col0_ptr, concept2_col0_bytes, concept2_fragment_size);

														for (uint32_t concept2_it = 0; concept2_it < concept2_fragment_size; concept2_it++) {
															uint32_t concept2_col0_element = index5_col0_buffer[0][0][concept2_it];

															RC[concept2_col0_element] = 1;
															R[concept2_col0_element] += 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}


	for (int j=0; j<NUM_THREADS; j++) {
		for (int k=0; k<BUFFER_POOL_SIZE; k++) {
			delete[] index0_col0_buffer[j][k];
		}
		delete[] index0_col0_buffer[j];
	}
	for (int j=0; j<NUM_THREADS; j++) {
		for (int k=0; k<BUFFER_POOL_SIZE; k++) {
			delete[] index1_col0_buffer[j][k];
		}
		delete[] index1_col0_buffer[j];
	}
	for (int j=0; j<NUM_THREADS; j++) {
		for (int k=0; k<BUFFER_POOL_SIZE; k++) {
			delete[] index2_col0_buffer[j][k];
		}
		delete[] index2_col0_buffer[j];
	}
	for (int j=0; j<NUM_THREADS; j++) {
		for (int k=0; k<BUFFER_POOL_SIZE; k++) {
			delete[] index3_col0_buffer[j][k];
		}
		delete[] index3_col0_buffer[j];
	}
	for (int j=0; j<NUM_THREADS; j++) {
		for (int k=0; k<BUFFER_POOL_SIZE; k++) {
			delete[] index4_col0_buffer[j][k];
		}
		delete[] index4_col0_buffer[j];
	}
	for (int j=0; j<NUM_THREADS; j++) {
		for (int k=0; k<BUFFER_POOL_SIZE; k++) {
			delete[] index5_col0_buffer[j][k];
		}
		delete[] index5_col0_buffer[j];
	}

	delete[] sentence1_bool_array;


	*null_checks = RC;
	return R;

}

#endif
