/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff3b64; name: FUN_02ff3b64
 */


long FUN_02ff3b64(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *(long *)(lVar2 + 0x40);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + lVar2 + 0x40;
  }
  if ((*(int *)(lVar2 + 0x50) == 0) || (*(int *)(lVar2 + 0x98) < 1)) {
    uVar3 = (ulong)*(uint *)(param_1 + 1);
  }
  else {
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x90 + (long)(int)param_1[1] * 2 + *(long *)(lVar2 + 0x90));
  }
  return lVar1 + 0x48 + (uVar3 & 0xffff) * 0x40 + *(long *)(lVar1 + 0x48);
}


