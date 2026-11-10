/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee1924; name: FUN_02ee1924
 */


void FUN_02ee1924(long param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x50);
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    iVar6 = 0;
    uVar9 = uVar3;
    do {
      iVar1 = iVar6 + (uVar9 >> 1);
      uVar10 = *(ulong *)(lVar4 + (long)iVar1 * 8);
      if (uVar10 == param_2) {
        puVar8 = (undefined8 *)(lVar4 + (long)iVar1 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)(lVar4 + (ulong)uVar3 * 8 + -8);
          if (puVar8 < puVar5) {
            uVar10 = ((ulong)uVar3 * 8 + (long)iVar1 * -8) - 9;
            uVar3 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
            if ((uVar3 & 3) != 0) {
              lVar4 = -((ulong)uVar3 & 3);
              puVar7 = puVar8;
              do {
                puVar8 = puVar7 + 1;
                *puVar7 = *puVar8;
                bVar2 = lVar4 != -1;
                lVar4 = lVar4 + 1;
                puVar7 = puVar8;
              } while (bVar2);
            }
            if (0x17 < uVar10) {
              do {
                *puVar8 = puVar8[1];
                puVar8[1] = puVar8[2];
                puVar8[2] = puVar8[3];
                puVar7 = puVar8 + 4;
                puVar8[3] = *puVar7;
                puVar8 = puVar7;
              } while (puVar7 < puVar5);
            }
            uVar3 = *(uint *)(param_1 + 0x50);
          }
          *(uint *)(param_1 + 0x50) = uVar3 - 1;
        }
        break;
      }
      if ((*(int *)(uVar10 + 0x48) < *(int *)(param_2 + 0x48)) ||
         ((uVar10 < param_2 && (*(int *)(uVar10 + 0x48) == *(int *)(param_2 + 0x48))))) {
        iVar6 = iVar1 + 1;
        uVar9 = uVar9 - 1;
      }
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    iVar6 = 0;
    uVar9 = uVar3;
    do {
      iVar1 = iVar6 + (uVar9 >> 1);
      uVar10 = *(ulong *)(lVar4 + (long)iVar1 * 8);
      if (uVar10 == param_2) {
        puVar8 = (undefined8 *)(lVar4 + (long)iVar1 * 8);
        if (puVar8 == (undefined8 *)0x0) {
          return;
        }
        puVar5 = (undefined8 *)(lVar4 + (ulong)uVar3 * 8 + -8);
        if (puVar8 < puVar5) {
          uVar10 = ((ulong)uVar3 * 8 + (long)iVar1 * -8) - 9;
          uVar3 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
          if ((uVar3 & 3) != 0) {
            lVar4 = -((ulong)uVar3 & 3);
            puVar7 = puVar8;
            do {
              puVar8 = puVar7 + 1;
              *puVar7 = *puVar8;
              bVar2 = lVar4 != -1;
              lVar4 = lVar4 + 1;
              puVar7 = puVar8;
            } while (bVar2);
          }
          if (0x17 < uVar10) {
            do {
              *puVar8 = puVar8[1];
              puVar8[1] = puVar8[2];
              puVar8[2] = puVar8[3];
              puVar7 = puVar8 + 4;
              puVar8[3] = *puVar7;
              puVar8 = puVar7;
            } while (puVar7 < puVar5);
          }
          uVar3 = *(uint *)(param_1 + 0x60);
        }
        *(uint *)(param_1 + 0x60) = uVar3 - 1;
        return;
      }
      if ((*(int *)(uVar10 + 0x48) < *(int *)(param_2 + 0x48)) ||
         ((uVar10 < param_2 && (*(int *)(uVar10 + 0x48) == *(int *)(param_2 + 0x48))))) {
        iVar6 = iVar1 + 1;
        uVar9 = uVar9 - 1;
      }
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
  }
  return;
}


