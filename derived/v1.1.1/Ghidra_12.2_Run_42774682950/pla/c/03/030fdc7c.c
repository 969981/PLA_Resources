/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fdc7c; name: FUN_030fdc7c
 */


void FUN_030fdc7c(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong local_68;
  
  lVar17 = *param_2;
  if (lVar17 != param_2[1]) {
    if (0 < (int)((ulong)(param_2[1] - lVar17) >> 2)) {
      lVar14 = 0;
      do {
        lVar1 = lVar14 * 4;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)*(int *)(lVar17 + lVar1)) = 1;
        lVar17 = *param_2;
      } while (lVar14 < (int)((ulong)(param_2[1] - lVar17) >> 2));
    }
    if (*(long *)(param_1 + 0x1660) != 0) {
      *(undefined1 *)(param_1 + 0x1668) = 1;
      piVar5 = (int *)param_2[1];
      plVar8 = (long *)PTR_PTR_0434a080;
      for (piVar4 = (int *)*param_2; PTR_PTR_0434a080 = (undefined *)plVar8, piVar4 != piVar5;
          piVar4 = piVar4 + 1) {
        uVar10 = *(uint *)(param_1 + 0x1644);
        iVar6 = *piVar4;
        uVar7 = *(uint *)(param_1 + 0x1640);
        puVar18 = *(undefined8 **)(param_1 + 0x1638);
        uVar2 = uVar7 + 1;
        if ((int)uVar7 < (int)(uVar10 & 0x3fffffff)) {
          puVar9 = puVar18;
          uVar10 = uVar7;
        }
        else {
          if (0x3ffffffe < (int)uVar7) {
            FUN_032bd0a8(uVar2);
            uVar10 = *(uint *)(param_1 + 0x1644);
          }
          uVar11 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar3 = uVar2;
          if ((int)uVar2 <= (int)uVar11) {
            uVar3 = uVar11;
          }
          FUN_032bd100(uVar3,0x10,uVar10,&local_68);
          uVar10 = *(uint *)(param_1 + 0x1644);
          puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,local_68,&local_68);
          if (0 < (int)uVar7) {
            puVar9[1] = puVar18[1];
            *puVar9 = *puVar18;
            if (uVar7 != 1) {
              puVar9[3] = puVar18[3];
              puVar9[2] = puVar18[2];
              if (uVar7 != 2) {
                puVar9[5] = puVar18[5];
                puVar9[4] = puVar18[4];
                if (uVar7 != 3) {
                  lVar17 = (ulong)uVar7 - 3;
                  puVar15 = puVar18 + 6;
                  puVar16 = puVar9 + 6;
                  do {
                    puVar16[1] = puVar15[1];
                    lVar17 = lVar17 + -1;
                    *puVar16 = *puVar15;
                    puVar15 = puVar15 + 2;
                    puVar16 = puVar16 + 2;
                  } while (lVar17 != 0);
                }
              }
            }
          }
          if (-1 < (int)uVar10) {
            (**(code **)(*plVar8 + 0x18))(plVar8,puVar18,((ulong)uVar10 & 0x3fffffff) << 4);
          }
          if (local_68 < 0x3fffffff0) {
            uVar12 = (undefined4)(local_68 >> 4);
          }
          else {
            uVar12 = 0x3fffffff;
          }
          *(undefined4 *)(param_1 + 0x1644) = uVar12;
          uVar10 = *(uint *)(param_1 + 0x1640);
          *(undefined8 **)(param_1 + 0x1638) = puVar9;
        }
        puVar9 = puVar9 + (long)(int)uVar10 * 2;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(int *)((long)puVar9 + 0xc) = iVar6;
        *(uint *)(param_1 + 0x1640) = uVar2;
        *(uint *)(*(long *)(param_1 + 0x1648) + (long)iVar6 * 4) = uVar7;
        plVar8 = (long *)PTR_PTR_0434a080;
      }
    }
    uVar13 = (ulong)*(uint *)(param_1 + 0x150) & 0xffffff;
    if (((((uint)uVar13 != 0xffffff) &&
         ((uint)uVar13 < *(uint *)(*(long *)(param_1 + 0x140) + 0x40))) &&
        (lVar17 = *(long *)(*(long *)(param_1 + 0x140) + 0x38),
        (*(byte *)(lVar17 + uVar13 * 0xc0 + 0x54) & 3) != 0)) &&
       ((*(uint *)(lVar17 + uVar13 * 0xc0 + 0x50) == *(uint *)(param_1 + 0x150) &&
        ((*(byte *)(lVar17 + uVar13 * 0xc0 + 0x88) & 1) != 0)))) {
      FUN_030fdf5c(param_1,*param_2,param_2[1]);
    }
    *(int *)(param_1 + 0x15d4) =
         *(int *)(param_1 + 0x15d4) + (int)((ulong)(param_2[1] - *param_2) >> 2);
    *(undefined1 *)(param_1 + 0x16a0) = 1;
  }
  return;
}


