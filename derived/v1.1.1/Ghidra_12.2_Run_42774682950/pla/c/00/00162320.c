/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162320; name: FUN_00162320
 */


int FUN_00162320(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 0x100) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    uVar4 = uVar2;
    do {
      uVar2 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
      uVar1 = uVar4 >> 0x10;
      uVar4 = uVar2;
    } while (uVar1 != 0);
  }
  return iVar3 + (uint)*(byte *)((long)&DAT_039c5c38 + (ulong)uVar2);
}


