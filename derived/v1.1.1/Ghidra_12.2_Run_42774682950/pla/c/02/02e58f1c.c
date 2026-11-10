/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58f1c; name: FUN_02e58f1c
 */


long FUN_02e58f1c(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  lVar5 = (ulong)*(uint *)(param_1 + 0x18) * 0x8c;
  lVar4 = *(long *)(param_1 + 0x10);
  fVar6 = 3.4028235e+38;
  lVar3 = 0;
  do {
    bVar2 = fVar6 <= *(float *)(lVar4 + 0x80);
    fVar6 = (float)NEON_fminnm(*(float *)(lVar4 + 0x80),fVar6);
    lVar1 = lVar4;
    if (bVar2) {
      lVar1 = lVar3;
    }
    lVar4 = lVar4 + 0x8c;
    lVar5 = lVar5 + -0x8c;
    lVar3 = lVar1;
  } while (lVar5 != 0);
  return lVar1;
}


