/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005af240; name: FUN_005af240
 */


void FUN_005af240(undefined8 *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = FUN_005af2b0;
  param_1[1] = 0;
  param_1[3] = &LAB_005af3a0;
  FUN_002f2710(&local_30);
  param_1[10] = uStack_28;
  param_1[9] = local_30;
  param_1[0xc] = uStack_18;
  param_1[0xb] = uStack_20;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_002f2710(&local_30);
  *(undefined1 *)((long)param_1 + 0xd4) = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[2] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x11] = uStack_28;
  param_1[0x10] = local_30;
  param_1[0x13] = uStack_18;
  param_1[0x12] = uStack_20;
  return;
}


