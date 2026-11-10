/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bab40; name: FUN_032bab40
 */


void FUN_032bab40(uint *param_1,uint *param_2,uint param_3)

{
  *param_1 = (((int)*param_2 >> 0x1f | 0x80000000U) ^ *param_2) >> 1;
  param_1[1] = (((int)param_2[1] >> 0x1f | 0x80000000U) ^ param_2[1]) >> 1;
  param_1[2] = (((int)param_2[2] >> 0x1f | 0x80000000U) ^ param_2[2]) >> 1;
  param_1[3] = param_3;
  param_1[4] = ((((int)param_2[4] >> 0x1f | 0x80000000U) ^ param_2[4]) >> 1) + 1;
  param_1[5] = ((((int)param_2[5] >> 0x1f | 0x80000000U) ^ param_2[5]) >> 1) + 1;
  param_1[6] = ((((int)param_2[6] >> 0x1f | 0x80000000U) ^ param_2[6]) >> 1) + 1;
  return;
}


