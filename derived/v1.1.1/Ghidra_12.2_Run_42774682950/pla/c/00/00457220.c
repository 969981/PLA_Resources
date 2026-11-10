/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00457220; name: FUN_00457220
 */


uint FUN_00457220(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_40 [12];
  
  uVar1 = param_1 - 1;
  if (8 < uVar1) {
    if (DAT_0439e920 == 0) {
      return 0xffffffff;
    }
    local_40[0] = param_1;
    iVar2 = FUN_00407710(DAT_0439e920,local_40);
    uVar1 = iVar2 + 9;
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


