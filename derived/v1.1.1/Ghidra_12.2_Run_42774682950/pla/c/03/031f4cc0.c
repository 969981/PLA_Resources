/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4cc0; name: FUN_031f4cc0
 */


undefined1  [16] FUN_031f4cc0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = (param_3 - param_2) - 2;
  uVar2 = uVar2 | (int)uVar2 >> 0x10;
  uVar2 = uVar2 | (int)uVar2 >> 8;
  uVar2 = uVar2 | (int)uVar2 >> 4;
  uVar2 = uVar2 | (int)uVar2 >> 2;
  iVar1 = 0;
  if (*param_1 <= (int)(uVar2 | (int)uVar2 >> 1)) {
    iVar1 = *param_1;
  }
  auVar3._4_4_ = iVar1;
  auVar3._0_4_ = param_3 - param_2;
  *param_1 = iVar1 + 1;
  auVar3._8_8_ = (ulong)(param_2 - 1) | 0x200000000;
  return auVar3;
}


