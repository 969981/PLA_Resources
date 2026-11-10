/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cd048; name: FUN_031cd048
 */


void FUN_031cd048(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  int *piVar19;
  long lVar20;
  int *piVar21;
  ulong local_68;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    plVar10 = *(long **)(param_2 + 0x20);
    lVar13 = (long)*(int *)(param_2 + 0x28) << 3;
    do {
      if ((*plVar10 != 0) && (*(int *)(*plVar10 + 0x100) != 0)) {
        lVar13 = tpidr_el0;
        lVar9 = *(long *)(lVar13 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar9;
        }
        plVar10 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x28,0);
        *puVar7 = &PTR_LAB_0430aaa8;
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        puVar7[3] = 0;
        puVar7[4] = 0x8000000000000000;
        iVar8 = *(int *)(param_2 + 0x28);
        if (iVar8 < 1) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_031cff04(PTR_PTR_0434a080,iVar8,(long)puVar7 + 0x24);
          puVar7[3] = lVar13;
          iVar8 = *(int *)(param_2 + 0x28);
        }
        if (iVar8 == 0) goto LAB_031cd294;
        plVar18 = *(long **)(param_2 + 0x20);
        plVar10 = plVar18 + iVar8;
        goto LAB_031cd150;
      }
      plVar10 = plVar10 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  *param_1 = 0;
  return;
LAB_031cd150:
  lVar9 = (long)*(int *)(puVar7 + 4);
  lVar14 = (lVar9 + 1) * 0x10;
  lVar20 = *plVar18;
  *(int *)(puVar7 + 4) = (int)(lVar9 + 1);
  plVar2 = (long *)(lVar13 + lVar9 * 0x10);
  uVar15 = (lVar14 + lVar9 * -0x10) - 0x10;
  uVar1 = ((uint)(uVar15 >> 4) & 0xfffffff) + 1;
  plVar12 = plVar2;
  if ((uVar1 & 7) != 0) {
    lVar16 = -((ulong)uVar1 & 7);
    plVar11 = plVar2;
    do {
      plVar12 = plVar11 + 2;
      *plVar11 = 0;
      plVar11[1] = -0x8000000000000000;
      bVar6 = lVar16 != -1;
      lVar16 = lVar16 + 1;
      plVar11 = plVar12;
    } while (bVar6);
  }
  if (0x6f < uVar15) {
    do {
      *plVar12 = 0;
      plVar12[1] = -0x8000000000000000;
      plVar12[2] = 0;
      plVar12[3] = -0x8000000000000000;
      plVar12[4] = 0;
      plVar12[5] = -0x8000000000000000;
      plVar12[6] = 0;
      plVar12[7] = -0x8000000000000000;
      plVar12[8] = 0;
      plVar12[9] = -0x8000000000000000;
      plVar12[10] = 0;
      plVar12[0xb] = -0x8000000000000000;
      plVar12[0xc] = 0;
      plVar12[0xd] = -0x8000000000000000;
      plVar12[0xe] = 0;
      plVar12[0xf] = -0x8000000000000000;
      plVar12 = plVar12 + 0x10;
    } while (plVar12 != (long *)(lVar13 + lVar14));
  }
  if ((lVar20 != 0) && ((long *)(lVar20 + 0xf8) != plVar2)) {
    lVar13 = lVar13 + lVar9 * 0x10;
    piVar21 = (int *)(lVar13 + 0xc);
    if (*piVar21 < 0) {
      FUN_032bcf10(plVar2,0x20,&local_68);
      piVar19 = (int *)(lVar13 + 8);
      if (*piVar19 == 0) {
        *piVar21 = 0;
        *plVar2 = 0;
        goto LAB_031cd220;
      }
      lVar9 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,local_68,&local_68);
      if (lVar9 == 0) goto LAB_031cd220;
      iVar8 = (int)(local_68 >> 5);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < *piVar19) {
        lVar14 = 0;
        lVar16 = 0;
        do {
          puVar3 = (undefined8 *)(*plVar2 + lVar14);
          uVar17 = puVar3[1];
          puVar4 = (undefined8 *)(lVar9 + lVar14);
          lVar14 = lVar14 + 0x20;
          puVar4[3] = puVar3[3];
          puVar4[1] = uVar17;
          uVar17 = *puVar3;
          puVar4[2] = puVar3[2];
          *puVar4 = uVar17;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *piVar19);
      }
      *plVar2 = lVar9;
      *piVar21 = iVar8;
      iVar8 = *(int *)(lVar20 + 0x104);
    }
    else {
LAB_031cd220:
      iVar8 = *(int *)(lVar20 + 0x104);
    }
    if (iVar8 < 0) {
      FUN_032bcf10((long *)(lVar20 + 0xf8),0x20,&local_68);
      if (*(int *)(lVar20 + 0x100) == 0) {
        *(undefined4 *)(lVar20 + 0x104) = 0;
        *(undefined8 *)(lVar20 + 0xf8) = 0;
      }
      else {
        lVar9 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,local_68,&local_68)
        ;
        if (lVar9 != 0) {
          iVar8 = (int)(local_68 >> 5);
          if (0x3ffffffe < iVar8) {
            iVar8 = 0x3fffffff;
          }
          if (0 < *(int *)(lVar20 + 0x100)) {
            lVar14 = 0;
            lVar16 = 0;
            do {
              puVar3 = (undefined8 *)(*(long *)(lVar20 + 0xf8) + lVar14);
              uVar17 = puVar3[1];
              puVar4 = (undefined8 *)(lVar9 + lVar14);
              lVar14 = lVar14 + 0x20;
              puVar4[3] = puVar3[3];
              puVar4[1] = uVar17;
              uVar17 = *puVar3;
              puVar4[2] = puVar3[2];
              *puVar4 = uVar17;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(lVar20 + 0x100));
          }
          *(long *)(lVar20 + 0xf8) = lVar9;
          *(int *)(lVar20 + 0x104) = iVar8;
        }
      }
    }
    lVar9 = *plVar2;
    *plVar2 = *(long *)(lVar20 + 0xf8);
    *(long *)(lVar20 + 0xf8) = lVar9;
    uVar5 = *(undefined4 *)(lVar13 + 8);
    *(undefined4 *)(lVar13 + 8) = *(undefined4 *)(lVar20 + 0x100);
    *(undefined4 *)(lVar20 + 0x100) = uVar5;
    iVar8 = *piVar21;
    *piVar21 = *(int *)(lVar20 + 0x104);
    *(int *)(lVar20 + 0x104) = iVar8;
  }
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar10) {
LAB_031cd294:
    *param_1 = puVar7;
    return;
  }
  lVar13 = puVar7[3];
  goto LAB_031cd150;
}


