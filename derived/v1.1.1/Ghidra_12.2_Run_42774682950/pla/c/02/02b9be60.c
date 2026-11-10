/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9be60; name: FUN_02b9be60
 */


bool FUN_02b9be60(long param_1,int *param_2)

{
  if (((((((*(char *)(param_1 + 0x6c) == '\0') || (*(int *)(param_1 + 0x20) != *param_2)) ||
         (*(int *)(param_1 + 0x24) != param_2[1])) ||
        ((*(int *)(param_1 + 0x28) != param_2[2] || (*(int *)(param_1 + 0x2c) != param_2[3])))) ||
       ((*(float *)(param_1 + 0x30) != (float)param_2[4] ||
        ((*(float *)(param_1 + 0x34) != (float)param_2[5] ||
         (*(float *)(param_1 + 0x38) != (float)param_2[6])))))) ||
      (*(float *)(param_1 + 0x3c) != (float)param_2[7])) ||
     (((((*(float *)(param_1 + 0x40) != (float)param_2[8] ||
         (*(int *)(param_1 + 0x44) != param_2[9])) || (*(int *)(param_1 + 0x48) != param_2[10])) ||
       (((*(int *)(param_1 + 0x4c) != param_2[0xb] ||
         (*(float *)(param_1 + 0x50) != (float)param_2[0xc])) ||
        ((*(float *)(param_1 + 0x54) != (float)param_2[0xd] ||
         ((*(float *)(param_1 + 0x58) != (float)param_2[0xe] ||
          (*(float *)(param_1 + 0x5c) != (float)param_2[0xf])))))))) ||
      (*(int *)(param_1 + 0x60) != param_2[0x10])))) {
    return false;
  }
  return *(char *)(param_1 + 100) == (char)param_2[0x11];
}


