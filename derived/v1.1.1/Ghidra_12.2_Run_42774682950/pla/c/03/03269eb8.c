/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03269eb8; name: FUN_03269eb8
 */


void FUN_03269eb8(undefined8 *param_1)

{
  float fVar1;
  
  *param_1 = 0x3dcccccd3f000000;
  param_1[1] = 0x38d1b7173c23d70a;
  fVar1 = cosf(0.08726646);
  *(float *)(param_1 + 2) = fVar1;
  fVar1 = cosf(1.0471976);
  *(float *)((long)param_1 + 0x14) = fVar1;
  param_1[3] = 0x3c23d70a3ca3d70a;
  *(undefined4 *)(param_1 + 4) = 0x3c23d70a;
  fVar1 = cosf(2.0943952);
  *(float *)((long)param_1 + 0x24) = fVar1;
  fVar1 = cosf(0.08726646);
  *(float *)(param_1 + 5) = fVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3727c5ac3fc25c20;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  return;
}


