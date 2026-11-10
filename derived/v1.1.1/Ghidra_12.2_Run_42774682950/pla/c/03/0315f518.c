/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f518; name: FUN_0315f518
 */


float FUN_0315f518(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  plVar5 = (long *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x18);
  lVar2 = (long)(int)plVar5[1];
  fVar9 = 0.0;
  lVar6 = 8;
  lVar1 = 0;
  do {
    lVar8 = lVar1;
    if (lVar2 <= lVar8) {
      return 0.0;
    }
    lVar3 = *plVar5;
    pfVar7 = (float *)(lVar3 + lVar6);
    lVar6 = lVar6 + 0x18;
    lVar1 = lVar8 + 1;
  } while (*pfVar7 < 0.0);
  if ((int)(lVar8 + 1) != 0) {
    fVar9 = 0.0;
    do {
      iVar4 = (int)lVar8;
      lVar8 = (long)iVar4;
      lVar6 = (lVar8 + (long)iVar4 * 2) * 8;
      pfVar7 = (float *)(lVar3 + 0x20 + lVar6);
      fVar10 = *(float *)(lVar3 + lVar6 + 8);
      iVar4 = iVar4 + 1;
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      do {
        lVar8 = lVar8 + 1;
        if (lVar2 <= lVar8) {
          return fVar9;
        }
        fVar10 = *pfVar7;
        iVar4 = iVar4 + 1;
        pfVar7 = pfVar7 + 6;
      } while (fVar10 < 0.0);
    } while (iVar4 != 0);
  }
  return fVar9;
}


