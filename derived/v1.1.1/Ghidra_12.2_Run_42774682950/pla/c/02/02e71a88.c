/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71a88; name: FUN_02e71a88
 */


void FUN_02e71a88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_042a7010;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = DAT_0440a108;
  puVar1 = &DAT_0440a110;
  if (DAT_0440a110 != 0) {
    puVar1 = (undefined8 *)((long)DAT_0440a108 + 0x10);
  }
  *puVar1 = param_1;
  DAT_0440a100 = DAT_0440a100 + 1;
  DAT_0440a108 = param_1;
  *param_1 = &PTR_FUN_042a6fe8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined8 *)((long)param_1 + 100) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  return;
}


