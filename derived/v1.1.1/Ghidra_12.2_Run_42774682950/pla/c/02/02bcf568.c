/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf568; name: FUN_02bcf568
 */


void FUN_02bcf568(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return;
  }
  bVar2 = *(byte *)(param_2 + -1);
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  uVar3 = *(ulong *)((param_2 - (ulong)bVar2) + -0x10);
  lVar1 = uVar3 + 0x18;
  if (uVar3 < 0x11) {
    lVar1 = 0x28;
  }
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - lVar1;
  FUN_02bced14();
  return;
}


