/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021d3d8; name: FUN_0021d3d8
 */


void FUN_0021d3d8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372848;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_0087e420(param_1 + 0x12);
  FUN_0087e420(param_1 + 0x16);
  FUN_0087e420(param_1 + 0x1a);
  FUN_0087e420(param_1 + 0x1e);
  FUN_0087e420(param_1 + 0x22);
  FUN_0087e420(param_1 + 0x26);
  FUN_00878478(param_1 + 0x2a);
  FUN_008772a4(param_1 + 0x4e);
  FUN_008772a4(param_1 + 0x57);
  FUN_008772a4(param_1 + 0x60);
  FUN_008772a4(param_1 + 0x69);
  FUN_0087cb74(param_1 + 0x72);
  param_1[0x81] = -1;
  param_1[0x82] = 0;
  return;
}


