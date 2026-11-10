/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026de60; name: FUN_0026de60
 */


/* WARNING: Removing unreachable block (ram,0x0026deb0) */
/* WARNING: Removing unreachable block (ram,0x0026df34) */

int FUN_0026de60(char *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = *(long *)(param_1 + 0xa0);
  if (*(char *)(lVar4 + 0x7f2) != '\0') {
    iVar5 = *(int *)(lVar4 + 0x834);
    cVar2 = *param_1;
    goto joined_r0x0026e054;
  }
  fVar10 = *(float *)(lVar4 + 0x800);
  lVar6 = *(long *)(*(long *)(param_1 + 0x238) + 0x2b8);
  fVar11 = fVar10;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        pfVar9 = (float *)(lVar6 + 0x1c);
        do {
          fVar11 = pfVar9[-4];
          if (pfVar9[-4] <= fVar10) {
            fVar11 = fVar10;
          }
          fVar10 = *pfVar9;
          if (*pfVar9 <= fVar11) {
            fVar10 = fVar11;
          }
          lVar8 = lVar8 + 2;
          pfVar9 = pfVar9 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar8);
        fVar11 = fVar10;
        if ((uVar1 & 1) == 0) goto LAB_0026def8;
      }
      fVar11 = *(float *)(lVar6 + lVar8 * 0x10 + 0xc);
      if (fVar11 <= fVar10) {
        fVar11 = fVar10;
      }
    }
LAB_0026def8:
    if (fVar11 < 1.0) {
      fVar11 = 1.0;
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x238) + 0x2c0);
  iVar5 = *(int *)(lVar4 + 0x8b8);
  if (lVar6 != 0) {
    fVar10 = (float)iVar5;
    uVar1 = *(uint *)(lVar6 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar8 = 0;
        fVar12 = fVar10;
      }
      else {
        lVar8 = 0;
        pfVar9 = (float *)(lVar6 + 0x1c);
        do {
          fVar12 = pfVar9[-4];
          if (pfVar9[-4] <= fVar10) {
            fVar12 = fVar10;
          }
          fVar10 = *pfVar9;
          if (*pfVar9 <= fVar12) {
            fVar10 = fVar12;
          }
          lVar8 = lVar8 + 2;
          pfVar9 = pfVar9 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar8);
        fVar12 = fVar10;
        if ((uVar1 & 1) == 0) goto LAB_0026df7c;
      }
      fVar10 = *(float *)(lVar6 + lVar8 * 0x10 + 0xc);
      if (fVar10 <= fVar12) {
        fVar10 = fVar12;
      }
    }
LAB_0026df7c:
    iVar5 = (int)fVar10;
  }
  fVar10 = 1.0;
  if (*(int *)(lVar4 + 0x7fc) != 0) {
    fVar10 = (float)*(int *)(lVar4 + 0x7fc);
  }
  fVar12 = (float)(*(int *)(lVar4 + 0x808) + 1);
  iVar3 = (int)(fVar10 / fVar12);
  iVar5 = (int)((float)iVar5 / fVar12);
  if (iVar5 <= iVar3 && *(char *)(lVar4 + 0x8a8) == '\0' || *(char *)(lVar4 + 0x7f0) == '\0') {
    iVar3 = iVar5;
  }
  iVar5 = (int)((float)(int)fVar11 + (float)(int)(fVar11 * (float)iVar3));
  if (*(int *)(lVar4 + 0x874) == 0) {
    if (*(char *)(lVar4 + 0x838) == '\r') {
      iVar3 = *(int *)(lVar4 + 0x888);
    }
    else {
      if (*(char *)(lVar4 + 0x838) != '\x02') goto LAB_0026e014;
      iVar3 = *(int *)(lVar4 + 0x880);
    }
    iVar5 = iVar3 * iVar5;
  }
LAB_0026e014:
  if ((*(char *)(lVar4 + 0x7f0) == '\0') && (*(char *)(lVar4 + 0x752) == '\x02')) {
    iVar3 = (int)(float)(int)fVar11;
    if (*(int *)(lVar4 + 0x874) == 0) {
      if (*(char *)(lVar4 + 0x838) == '\r') {
        iVar7 = *(int *)(lVar4 + 0x888);
      }
      else {
        if (*(char *)(lVar4 + 0x838) != '\x02') goto LAB_0026e04c;
        iVar7 = *(int *)(lVar4 + 0x880);
      }
      iVar3 = iVar7 * iVar3;
    }
LAB_0026e04c:
    iVar5 = iVar3 + iVar5;
  }
  cVar2 = *param_1;
joined_r0x0026e054:
  if ((cVar2 == '\0') || (*(char *)(lVar4 + 0x7e4) != '\0')) {
    return iVar5;
  }
  return *(int *)(param_2 + 0x230) * iVar5;
}


