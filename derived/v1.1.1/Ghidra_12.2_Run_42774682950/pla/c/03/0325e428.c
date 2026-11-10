/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325e428; name: FUN_0325e428
 */


void FUN_0325e428(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_0430af38;
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_032cf244(puVar1,param_1[0x10],4,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    FUN_032cf244(puVar1,param_1[0xe],0x10,*(uint *)((long)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  FUN_031f12b4(param_1);
  return;
}


