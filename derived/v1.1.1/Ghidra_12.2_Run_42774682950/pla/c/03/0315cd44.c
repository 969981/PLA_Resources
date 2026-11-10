/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315cd44; name: FUN_0315cd44
 */


void FUN_0315cd44(undefined8 *param_1)

{
  float fVar1;
  
  *param_1 = &PTR_LAB_0430b128;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  if (*(float *)((long)param_1 + 0x1c) + 0.001 < 1.0) {
    fVar1 = 1.0 - *(float *)((long)param_1 + 0x1c);
    *(float *)(param_1 + 4) = fVar1 / 254.0;
    *(int *)((long)param_1 + 0x24) = (int)(254.0 / fVar1) + 1;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


