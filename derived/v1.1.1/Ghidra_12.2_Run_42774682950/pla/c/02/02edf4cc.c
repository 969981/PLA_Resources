/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edf4cc; name: FUN_02edf4cc
 */


/* WARNING: Removing unreachable block (ram,0x02edf590) */

void FUN_02edf4cc(undefined8 param_1,ulong param_2,undefined8 *param_3,long *param_4)

{
  ulong *puVar1;
  int iVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  int iVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  
  puVar8 = (ulong *)*param_3;
  uVar5 = *(uint *)(param_3 + 1);
  uVar6 = (ulong)uVar5;
  puVar4 = puVar8 + uVar6;
  lVar7 = uVar6 * 8;
  puVar11 = puVar8;
  if ((uVar5 != 0) && (*puVar8 != param_2)) {
    puVar16 = puVar8;
    lVar15 = lVar7;
    do {
      lVar15 = lVar15 + -8;
      if (lVar15 == 0) {
        return;
      }
      puVar11 = puVar16 + 1;
      puVar1 = puVar16 + 1;
      puVar16 = puVar11;
    } while (*puVar1 != param_2);
  }
  if (puVar4 != puVar11) {
    if (uVar5 != 0) {
      iVar14 = 0;
      do {
        iVar2 = iVar14 + ((uint)uVar6 >> 1);
        uVar17 = puVar8[iVar2];
        if (uVar17 == param_2) {
          puVar8 = puVar8 + iVar2;
          if (puVar8 != (ulong *)0x0) {
            if (puVar8 < puVar4 + -1) {
              uVar6 = (lVar7 + (long)iVar2 * -8) - 9;
              uVar5 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
              if ((uVar5 & 3) != 0) {
                lVar7 = -((ulong)uVar5 & 3);
                puVar11 = puVar8;
                do {
                  puVar8 = puVar11 + 1;
                  *puVar11 = *puVar8;
                  bVar3 = lVar7 != -1;
                  lVar7 = lVar7 + 1;
                  puVar11 = puVar8;
                } while (bVar3);
              }
              if (0x17 < uVar6) {
                do {
                  *puVar8 = puVar8[1];
                  puVar8[1] = puVar8[2];
                  puVar8[2] = puVar8[3];
                  puVar11 = puVar8 + 4;
                  puVar8[3] = *puVar11;
                  puVar8 = puVar11;
                } while (puVar11 < puVar4 + -1);
              }
              uVar5 = *(uint *)(param_3 + 1);
            }
            *(uint *)(param_3 + 1) = uVar5 - 1;
          }
          break;
        }
        if ((*(int *)(uVar17 + 0x48) < *(int *)(param_2 + 0x48)) ||
           ((uVar17 < param_2 && (*(int *)(uVar17 + 0x48) == *(int *)(param_2 + 0x48))))) {
          iVar14 = iVar2 + 1;
          uVar6 = (ulong)((uint)uVar6 - 1);
        }
        uVar6 = uVar6 >> 1;
      } while ((int)uVar6 != 0);
    }
    uVar5 = *(uint *)(param_4 + 1);
    iVar14 = 0;
    lVar7 = *param_4;
    iVar2 = iVar14;
    if (uVar5 != 0) {
      uVar9 = uVar5;
      do {
        iVar2 = iVar14 + (uVar9 >> 1);
        uVar6 = *(ulong *)(lVar7 + (long)iVar2 * 8);
        if (uVar6 == param_2) break;
        if ((*(int *)(uVar6 + 0x48) < *(int *)(param_2 + 0x48)) ||
           ((uVar6 < param_2 && (*(int *)(uVar6 + 0x48) == *(int *)(param_2 + 0x48))))) {
          iVar14 = iVar2 + 1;
          uVar9 = uVar9 - 1;
        }
        uVar9 = uVar9 >> 1;
        iVar2 = iVar14;
      } while (uVar9 != 0);
    }
    lVar15 = lVar7 + (long)iVar2 * 8;
    if (lVar15 == 0) {
      puVar4 = (ulong *)FUN_02ec6314(param_4);
    }
    else {
      uVar9 = *(uint *)((long)param_4 + 0xc);
      if (uVar9 <= uVar5) {
        uVar6 = FUN_02ec6380(param_4);
        if ((uVar6 & 1) == 0) {
          return;
        }
        uVar9 = *(uint *)((long)param_4 + 0xc);
      }
      if (uVar9 <= uVar5) {
        return;
      }
      uVar6 = lVar15 - lVar7;
      lVar7 = *param_4;
      puVar12 = (undefined8 *)(lVar7 + (ulong)*(uint *)(param_4 + 1) * 8);
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + 1;
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = 0;
        lVar7 = *param_4;
      }
      uVar17 = uVar6 >> 3 & 0xffffffff;
      puVar10 = (undefined8 *)(lVar7 + (uVar6 >> 3 & 0xffffffff) * 8);
      if (puVar10 < puVar12) {
        do {
          puVar13 = puVar12 + -1;
          *puVar12 = *puVar13;
          lVar7 = *param_4;
          puVar10 = (undefined8 *)(lVar7 + uVar17 * 8);
          puVar12 = puVar13;
        } while (puVar10 < puVar13);
      }
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        lVar7 = *param_4;
      }
      puVar4 = (ulong *)(lVar7 + uVar17 * 8);
    }
    if (puVar4 != (ulong *)0x0) {
      *puVar4 = param_2;
    }
  }
  return;
}


