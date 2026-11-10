/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00169b00; name: FUN_00169b00
 */


void FUN_00169b00(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (param_3 + -1) / 0x32 + 1;
  uVar2 = 0;
  if (param_4 != -1) {
    uVar2 = param_4 << 0x17;
  }
  uVar2 = uVar2 | param_2 << 6 | 0x2b;
  if (iVar1 < 0x200) {
    uVar3 = iVar1 * 0x4000;
  }
  else {
    FUN_001674a0(param_1,uVar2);
    uVar2 = iVar1 * 0x40;
    uVar3 = 0x2e;
  }
  FUN_001674a0(param_1,uVar2 | uVar3);
  *(char *)(param_1 + 0x3c) = (char)param_2 + '\x01';
  return;
}


