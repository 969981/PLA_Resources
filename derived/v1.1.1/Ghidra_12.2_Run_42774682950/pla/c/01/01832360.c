/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832360; name: FUN_01832360
 */


bool FUN_01832360(undefined8 *param_1,undefined8 *param_2)

{
  if ((((float)param_1[2] == (float)param_2[2]) &&
      ((float)((ulong)param_1[2] >> 0x20) == (float)((ulong)param_2[2] >> 0x20))) &&
     ((float)param_1[3] == (float)param_2[3])) {
    if (((((float)*param_1 == (float)*param_2) &&
         ((float)((ulong)*param_1 >> 0x20) == (float)((ulong)*param_2 >> 0x20))) &&
        (((float)param_1[1] == (float)param_2[1] &&
         ((*(float *)(param_1 + 4) == *(float *)(param_2 + 4) &&
          (*(float *)((long)param_1 + 0x24) == *(float *)((long)param_2 + 0x24))))))) &&
       (*(float *)(param_1 + 5) == *(float *)(param_2 + 5))) {
      return *(float *)((long)param_1 + 0x2c) == *(float *)((long)param_2 + 0x2c);
    }
  }
  return false;
}


