/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45f34; name: FUN_02e45f34
 */


long FUN_02e45f34(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  for (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
      (lVar3 != 0 && (*(long *)(lVar3 + 0x40) != param_2)); lVar3 = *(long *)(lVar3 + 0x48)) {
  }
  return lVar3;
}


