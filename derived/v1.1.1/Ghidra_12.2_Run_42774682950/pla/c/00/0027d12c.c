/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027d12c; name: FUN_0027d12c
 */


/* WARNING: Removing unreachable block (ram,0x0027d164) */

int FUN_0027d12c(char *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  fVar8 = *(float *)(lVar3 + 0x800);
  lVar2 = *(long *)(*(long *)(param_1 + 0x238) + 0x2b8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar5 = 0;
        fVar9 = fVar8;
      }
      else {
        lVar5 = 0;
        pfVar7 = (float *)(lVar2 + 0x1c);
        do {
          fVar9 = pfVar7[-4];
          if (pfVar7[-4] <= fVar8) {
            fVar9 = fVar8;
          }
          fVar8 = *pfVar7;
          if (*pfVar7 <= fVar9) {
            fVar8 = fVar9;
          }
          lVar5 = lVar5 + 2;
          pfVar7 = pfVar7 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar5);
        fVar9 = fVar8;
        if ((uVar1 & 1) == 0) goto LAB_0027d1ac;
      }
      fVar8 = *(float *)(lVar2 + lVar5 * 0x10 + 0xc);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
    }
LAB_0027d1ac:
    if (fVar8 < 1.0) {
      fVar8 = 1.0;
    }
  }
  fVar9 = 1.0;
  if (*(int *)(lVar3 + 0x7fc) != 0) {
    fVar9 = (float)*(int *)(lVar3 + 0x7fc);
  }
  fVar10 = (float)(*(int *)(lVar3 + 0x808) + 1);
  iVar4 = (int)(fVar9 / fVar10);
  iVar6 = (int)((float)param_2 / fVar10);
  if (iVar6 <= iVar4 && *(char *)(lVar3 + 0x8a8) == '\0' || *(char *)(lVar3 + 0x7f0) == '\0') {
    iVar4 = iVar6;
  }
  iVar4 = (int)((float)(int)fVar8 + (float)(int)(fVar8 * (float)iVar4));
  if (*(int *)(lVar3 + 0x874) == 0) {
    if (*(char *)(lVar3 + 0x838) == '\r') {
      iVar6 = *(int *)(lVar3 + 0x888);
    }
    else {
      if (*(char *)(lVar3 + 0x838) != '\x02') goto LAB_0027d240;
      iVar6 = *(int *)(lVar3 + 0x880);
    }
    iVar4 = iVar6 * iVar4;
  }
LAB_0027d240:
  if ((*param_1 == '\0') || (*(char *)(lVar3 + 0x7e4) != '\0')) {
    return iVar4;
  }
  return *(int *)(*(long *)(param_1 + 0x548) + 0x230) * iVar4;
}


