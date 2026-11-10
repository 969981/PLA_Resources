/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00233ea8; name: FUN_00233ea8
 */


void FUN_00233ea8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  void *pvVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  void *pvVar21;
  
  puVar8 = PTR_DAT_04372bb8;
  puVar7 = PTR_DAT_04372ba8;
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_2 + 0x48);
    uVar6 = *(uint *)(param_2 + 0x60);
    uVar1 = uVar6 + uVar5;
    if (uVar1 != 0) {
      puVar9 = *(uint **)(param_1 + 0x58);
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)(**(code **)PTR_DAT_04372ba8)(0x10,4,*(undefined8 *)PTR_DAT_04372bb8);
        if (puVar9 != (uint *)0x0) {
          puVar9[0] = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
        }
        *(uint **)(param_1 + 0x58) = puVar9;
        lVar11 = *(long *)(puVar9 + 2);
      }
      else {
        lVar11 = *(long *)(puVar9 + 2);
      }
      if (lVar11 == 0) {
        *puVar9 = uVar5;
        *(uint *)(*(long *)(param_1 + 0x58) + 4) = uVar6;
        pvVar10 = (void *)(**(code **)puVar7)(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                              (ulong)uVar1 << 3,4,*(undefined8 *)puVar8);
        if ((pvVar10 != (void *)0x0) && (0 < (int)uVar1)) {
          memset(pvVar10,0,(ulong)uVar1 << 3);
        }
        lVar11 = 0;
        *(void **)(*(long *)(param_1 + 0x58) + 8) = pvVar10;
        uVar1 = uVar6;
      }
      else {
        uVar3 = *puVar9;
        iVar2 = puVar9[1] + uVar6;
        uVar1 = iVar2 + uVar3 + uVar5;
        pvVar10 = (void *)(**(code **)puVar7)(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                              (ulong)uVar1 << 3,4,*(undefined8 *)puVar8);
        if (pvVar10 == (void *)0x0) {
          pvVar21 = (void *)0x0;
        }
        else {
          if (0 < (int)uVar1) {
            memset(pvVar10,0,(ulong)uVar1 << 3);
          }
          pvVar21 = pvVar10;
        }
        memcpy(pvVar10,*(void **)(*(long *)(param_1 + 0x58) + 8),
               (long)*(int *)(*(long *)(param_1 + 0x58) + 4) << 3);
        piVar12 = *(int **)(param_1 + 0x58);
        memcpy((void *)((long)pvVar21 + (long)iVar2 * 8),
               (void *)(*(long *)(piVar12 + 2) + (long)piVar12[1] * 8),(long)*piVar12 << 3);
        piVar12 = *(int **)(param_1 + 0x58);
        if (*(long *)(piVar12 + 2) != 0) {
          (**(code **)PTR_DAT_04372bb0)(*(long *)(piVar12 + 2),*(undefined8 *)puVar8);
          piVar12 = *(int **)(param_1 + 0x58);
        }
        iVar4 = *piVar12;
        *piVar12 = uVar3 + uVar5;
        lVar11 = (long)piVar12[1];
        *(int *)(*(long *)(param_1 + 0x58) + 4) = iVar2;
        *(void **)(*(long *)(param_1 + 0x58) + 8) = pvVar10;
        uVar1 = iVar4 + iVar2;
      }
      if (0 < (int)uVar5) {
        lVar14 = *(long *)(param_2 + 0x40);
        uVar13 = 0;
        while( true ) {
          uVar19 = uVar13;
          uVar13 = uVar19 + 1;
          *(undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x58) + 8) + (uVar19 + (long)(int)uVar1) * 8) =
               *(undefined8 *)(lVar14 + -0x20);
          if (uVar13 == uVar5) break;
          lVar14 = *(long *)(param_2 + 0x40);
          if (uVar13 != 0) {
            uVar16 = uVar13 & 7;
            if (6 < uVar19) {
              uVar19 = uVar16;
              do {
                uVar19 = uVar19 + 8;
                lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar13 != uVar19);
            }
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              lVar14 = *(long *)(lVar14 + 8);
            }
          }
        }
      }
      if ((int)uVar6 < 1) {
LAB_00234174:
        piVar12 = *(int **)(param_1 + 0x58);
        qsort((void *)(*(long *)(piVar12 + 2) + (long)piVar12[1] * 8),(long)*piVar12,8,
              (__compar_fn_t)&LAB_00234280);
        return;
      }
      uVar13 = 0;
      lVar14 = param_2 + 0x50;
      lVar15 = 1;
      lVar17 = *(long *)(param_2 + 0x58);
      if (lVar14 != lVar17) goto LAB_00234150;
LAB_00234120:
      do {
        uVar18 = 0;
        while( true ) {
          lVar17 = uVar13 + lVar11;
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 1;
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar17 * 8) = uVar18;
          if (uVar13 == uVar6) goto LAB_00234174;
          lVar17 = *(long *)(param_2 + 0x58);
          if (lVar14 == lVar17) break;
LAB_00234150:
          lVar20 = lVar15;
          while (lVar20 = lVar20 + -1, lVar20 != 0) {
            lVar17 = *(long *)(lVar17 + 8);
            if (lVar14 == lVar17) goto LAB_00234120;
          }
          uVar18 = *(undefined8 *)(lVar17 + -8);
        }
      } while( true );
    }
  }
  return;
}


