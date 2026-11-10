/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305ad80; name: FUN_0305ad80
 */


void FUN_0305ad80(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  if (*(int *)(param_2 + 8) != 0) {
    puVar7 = (uint *)**(undefined8 **)(param_2 + 0x10);
    lVar6 = *(long *)(param_4 + 0x10);
    if ((*puVar7 & 0xffff) != 0) {
      puVar10 = puVar7 + 8;
      uVar9 = *puVar7 & 0xffff;
      uVar8 = 0x7fffffff;
      do {
        while( true ) {
          lVar13 = lVar6 + (ulong)*puVar10 * 0x80;
          iVar12 = *(int *)(lVar13 + 0x4c);
          if (iVar12 != 0x7fffffff) {
            lVar1 = lVar6 + (ulong)puVar10[1] * 0x80;
            iVar14 = *(int *)(lVar1 + 0x4c);
            if (iVar14 != 0x7fffffff) {
              iVar12 = *(int *)(*param_3 + (ulong)*(byte *)(lVar13 + 0x5e) * 8) + iVar12;
              plVar11 = (long *)*param_1;
              lVar13 = *plVar11;
              iVar2 = iVar12;
              for (iVar4 = *(int *)(lVar13 + (long)iVar12 * 4); -1 < iVar4;
                  iVar4 = *(int *)(lVar13 + (long)iVar4 * 4)) {
                iVar2 = iVar4;
              }
              iVar4 = *(int *)(lVar13 + (long)iVar12 * 4);
              iVar14 = *(int *)(*param_3 + (ulong)*(byte *)(lVar1 + 0x5e) * 8) + iVar14;
              if (-1 < iVar4) {
                *(int *)(lVar13 + (long)iVar12 * 4) = iVar2;
                lVar13 = *plVar11;
                piVar3 = (int *)(lVar13 + (long)iVar4 * 4);
                iVar5 = *piVar3;
                if (*piVar3 < 0) {
                  iVar12 = iVar4;
                }
                else {
                  do {
                    *piVar3 = iVar2;
                    lVar13 = *plVar11;
                    piVar3 = (int *)(lVar13 + (long)iVar5 * 4);
                    iVar12 = iVar5;
                    iVar5 = *piVar3;
                  } while (-1 < *piVar3);
                }
              }
              iVar2 = iVar14;
              for (iVar4 = *(int *)(lVar13 + (long)iVar14 * 4); -1 < iVar4;
                  iVar4 = *(int *)(lVar13 + (long)iVar4 * 4)) {
                iVar2 = iVar4;
              }
              iVar4 = *(int *)(lVar13 + (long)iVar14 * 4);
              if (-1 < iVar4) {
                *(int *)(lVar13 + (long)iVar14 * 4) = iVar2;
                lVar13 = *plVar11;
                piVar3 = (int *)(lVar13 + (long)iVar4 * 4);
                iVar14 = iVar4;
                iVar4 = *piVar3;
                while (-1 < iVar4) {
                  *piVar3 = iVar2;
                  lVar13 = *plVar11;
                  piVar3 = (int *)(lVar13 + (long)iVar4 * 4);
                  iVar14 = iVar4;
                  iVar4 = *piVar3;
                }
              }
              if (iVar12 != iVar14) {
                iVar4 = *(int *)(lVar13 + (long)iVar12 * 4) + iVar4;
                if (iVar12 < iVar14) {
                  *(int *)(lVar13 + (long)iVar12 * 4) = iVar4;
                  *(int *)(*plVar11 + (long)iVar14 * 4) = iVar12;
                }
                else {
                  *(int *)(lVar13 + (long)iVar14 * 4) = iVar4;
                  *(int *)(*plVar11 + (long)iVar12 * 4) = iVar14;
                }
              }
            }
          }
          uVar9 = uVar9 - 1;
          if (0 < (int)uVar9) break;
          if (uVar8 == 0) {
            return;
          }
          puVar7 = *(uint **)(puVar7 + 2);
          if (puVar7 == (uint *)0x0) {
            return;
          }
          uVar9 = *puVar7 & 0xffff;
          if ((int)uVar8 <= (int)(*puVar7 & 0xffff)) {
            uVar9 = uVar8;
          }
          if ((int)uVar9 < 1) {
            return;
          }
          uVar8 = uVar8 - uVar9;
          puVar10 = puVar7 + 8;
          Hint_Prefetch(*(long *)(puVar7 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar7 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar7 + 0x20,0,0,0);
          Hint_Prefetch(puVar7 + 0x30,0,0,0);
          if (puVar10 == (uint *)0x0) {
            return;
          }
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != (uint *)0x0);
    }
  }
  return;
}


