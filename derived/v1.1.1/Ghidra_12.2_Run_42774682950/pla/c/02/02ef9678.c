/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef9678; name: FUN_02ef9678
 */


void FUN_02ef9678(undefined8 param_1,long param_2,void *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  uint local_24;
  
  iVar7 = (int)param_1 + 2;
  uVar1 = iVar7 * iVar7;
  lVar3 = FUN_02ef97b0(param_1,&local_24);
  if (lVar3 == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    uVar4 = (ulong)local_24;
    if (local_24 != 0) {
      lVar5 = 0;
      uVar6 = 0;
      if (2 < uVar4 - 1) goto LAB_02ef9708;
      do {
        lVar8 = 0;
        fVar11 = 0.0;
        while( true ) {
          if ((local_24 & 3) != 0) {
            uVar10 = uVar4 & 3;
            do {
              iVar7 = (int)lVar8;
              lVar2 = lVar8 * 4;
              lVar8 = lVar8 + 1;
              fVar11 = fVar11 + *(float *)(lVar3 + (ulong)(uint)((int)lVar5 + iVar7) * 4) *
                                *(float *)(param_2 + lVar2);
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          *(float *)((long)param_3 + uVar6 * 4) = fVar11;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + uVar4;
          if (uVar6 == uVar1) {
            return;
          }
          if (uVar4 - 1 < 3) break;
LAB_02ef9708:
          fVar11 = 0.0;
          lVar8 = 0;
          pfVar9 = (float *)(param_2 + 8);
          do {
            uVar10 = lVar5 + lVar8;
            lVar8 = lVar8 + 4;
            iVar7 = (int)uVar10;
            fVar11 = fVar11 + *(float *)(lVar3 + (uVar10 & 0xffffffff) * 4) * pfVar9[-2] +
                     *(float *)(lVar3 + (ulong)(iVar7 + 1) * 4) * pfVar9[-1] +
                     *(float *)(lVar3 + (ulong)(iVar7 + 2) * 4) * *pfVar9 +
                     *(float *)(lVar3 + (ulong)(iVar7 + 3) * 4) * pfVar9[1];
            pfVar9 = pfVar9 + 4;
          } while (uVar4 - (uVar4 & 3) != lVar8);
        }
      } while( true );
    }
  }
  memset(param_3,0,(ulong)uVar1 << 2);
  return;
}


