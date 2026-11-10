/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00323230; name: FUN_00323230
 */


undefined1  [16] FUN_00323230(long param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar2._8_4_ = iVar1;
    auVar2._0_8_ = param_1 + 3;
    auVar2._12_4_ = 0;
    return auVar2;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar3._8_4_ = iVar1;
    auVar3._0_8_ = param_1 + 4;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  if (*(char *)(param_1 + 4) < 0) {
    return ZEXT816(0);
  }
  auVar4._8_4_ = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
  auVar4._0_8_ = param_1 + 5;
  auVar4._12_4_ = 0;
  return auVar4;
}


