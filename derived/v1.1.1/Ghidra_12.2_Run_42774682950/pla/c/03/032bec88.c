/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bec88; name: FUN_032bec88
 */


void FUN_032bec88(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  
  if (*(int *)(param_3 + 1) != 0) {
    iVar12 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 8) == 0) {
      if (iVar12 != 0) {
        *(undefined8 *)(param_2[1] + (long)*(int *)(param_2 + 0xb) * 8) =
             **(undefined8 **)(param_1 + 0x10);
        iVar7 = *(int *)(param_2 + 0xb);
        iVar12 = iVar7 + 1;
        *(int *)(param_2 + 0xb) = iVar12;
        if (*(int *)((long)param_2 + 0x5c) <= iVar12) {
          iVar7 = iVar7 + -5;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar7 * 8,6);
          *(int *)(param_2 + 0xb) = iVar7;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      puVar3 = PTR_PTR_0434a080;
      uVar16 = *(uint *)(param_3 + 3);
      puVar17 = (undefined8 *)param_3[2];
      puVar8 = (uint *)(param_1 + 0x1c);
      uVar15 = *puVar8;
      if ((int)(uVar15 & 0x3fffffff) < (int)uVar16) {
        uVar18 = *(undefined8 *)(param_1 + 0x10);
        if (0x3fffffff < (int)uVar16) {
          FUN_032bd0a8(uVar16);
          uVar15 = *puVar8;
        }
        uVar15 = (uVar15 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar15) {
          uVar15 = 0x3fffffff;
        }
        uVar14 = uVar16;
        if ((int)uVar16 <= (int)uVar15) {
          uVar14 = uVar15;
        }
        puVar4 = (undefined8 *)FUN_032bd1d4(puVar3,uVar14,8,uVar18,0,puVar8);
        *(undefined8 **)(param_1 + 0x10) = puVar4;
      }
      else {
        puVar4 = *(undefined8 **)(param_1 + 0x10);
      }
      if ((uVar16 != 0) && (*puVar4 = *puVar17, uVar16 != 1)) {
        lVar9 = (long)(int)uVar16 * 8 + -8;
        do {
          puVar4 = puVar4 + 1;
          puVar17 = puVar17 + 1;
          lVar9 = lVar9 + -8;
          *puVar4 = *puVar17;
        } while (lVar9 != 0);
      }
      *(uint *)(param_1 + 0x18) = uVar16;
    }
    else {
      lVar9 = (long)iVar12;
      puVar17 = (undefined8 *)param_3[2];
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + (long)(iVar12 + -1) * 8) + 8) = *puVar17
      ;
      puVar3 = PTR_PTR_0434a080;
      iVar7 = *(int *)(param_3 + 3);
      uVar16 = *(uint *)(param_1 + 0x18);
      if (0 < iVar7) {
        puVar8 = (uint *)(param_1 + 0x1c);
        uVar14 = *puVar8;
        uVar15 = uVar16 + iVar7;
        uVar2 = uVar16 - iVar12;
        if ((int)(uVar14 & 0x3fffffff) < (int)uVar15) {
          uVar18 = *(undefined8 *)(param_1 + 0x10);
          if (0x3fffffff < (int)uVar15) {
            FUN_032bd0a8(uVar15);
            uVar14 = *puVar8;
          }
          uVar14 = (uVar14 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar14) {
            uVar14 = 0x3fffffff;
          }
          uVar1 = uVar15;
          if ((int)uVar15 <= (int)uVar14) {
            uVar1 = uVar14;
          }
          lVar5 = FUN_032bd1d4(puVar3,uVar1,8,uVar18,uVar16,puVar8);
          *(long *)(param_1 + 0x10) = lVar5;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x10);
        }
        puVar4 = (undefined8 *)(lVar5 + lVar9 * 8);
        if (0 < (int)uVar2) {
          FUN_032d57d0(puVar4 + iVar7,puVar4,
                       -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
        }
        *puVar4 = *puVar17;
        if (iVar7 != 1) {
          iVar7 = iVar7 + -1;
          do {
            puVar4 = puVar4 + 1;
            puVar17 = puVar17 + 1;
            iVar7 = iVar7 + -1;
            *puVar4 = *puVar17;
          } while (iVar7 != 0);
        }
        *(uint *)(param_1 + 0x18) = uVar15;
        uVar16 = uVar15;
      }
      if (iVar12 < (int)uVar16) {
        *(int *)(*(long *)(*(long *)(param_1 + 0x10) + lVar9 * 8) + 4) = iVar12;
        while (lVar9 = lVar9 + 1, lVar9 != (int)uVar16) {
          *(int *)(*(long *)(*(long *)(param_1 + 0x10) + lVar9 * 8) + 4) = (int)lVar9;
        }
      }
    }
    *(undefined4 *)(param_3 + 3) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_3 + 1);
    goto LAB_032becd4;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar12 = *(int *)(param_2 + 0xb) + -1;
    if (*(int *)(param_2 + 0xb) < 1) {
      (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,param_2[1],6);
      *(undefined4 *)(param_2 + 0xb) = 5;
      puVar17 = (undefined8 *)(param_2[1] + 0x28);
    }
    else {
      *(int *)(param_2 + 0xb) = iVar12;
      puVar17 = (undefined8 *)(param_2[1] + (long)iVar12 * 8);
    }
    puVar17 = (undefined8 *)*puVar17;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *puVar17 = 0;
    puVar17[1] = 0;
    *(undefined4 *)((long)puVar17 + 4) = *(undefined4 *)(param_1 + 0x18);
    puVar3 = PTR_PTR_0434a080;
    iVar12 = *(int *)(param_1 + 0x18);
    puVar8 = (uint *)(param_1 + 0x1c);
    uVar15 = *puVar8;
    uVar16 = iVar12 + 1;
    if (iVar12 < (int)(uVar15 & 0x3fffffff)) {
      lVar9 = *(long *)(param_1 + 0x10);
    }
    else {
      uVar18 = *(undefined8 *)(param_1 + 0x10);
      if (0x3ffffffe < iVar12) {
        FUN_032bd0a8(uVar16);
        uVar15 = *puVar8;
      }
      uVar15 = (uVar15 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar15) {
        uVar15 = 0x3fffffff;
      }
      uVar14 = uVar16;
      if ((int)uVar16 <= (int)uVar15) {
        uVar14 = uVar15;
      }
      lVar9 = FUN_032bd1d4(puVar3,uVar14,8,uVar18,iVar12,puVar8);
      iVar12 = *(int *)(param_1 + 0x18);
      *(long *)(param_1 + 0x10) = lVar9;
    }
    *(undefined8 **)(lVar9 + (long)iVar12 * 8) = puVar17;
    *(uint *)(param_1 + 0x18) = uVar16;
  }
  uVar16 = *(uint *)(param_3 + 3);
  if (*(char *)((long)param_3 + 0xc) != '\0') {
    plVar6 = (long *)param_3[2];
    if ((int)uVar16 < 1) {
      plVar11 = plVar6;
    }
    else {
      plVar11 = plVar6;
      if (*plVar6 != 0) {
        *plVar6 = *plVar6;
        plVar11 = plVar6 + 1;
      }
      if (uVar16 != 1) {
        if (plVar6[1] != 0) {
          *plVar11 = plVar6[1];
          plVar11 = plVar11 + 1;
        }
        if (uVar16 != 2) {
          iVar12 = uVar16 - 2;
          plVar6 = plVar6 + 2;
          plVar10 = plVar11;
          do {
            plVar11 = plVar10;
            if (*plVar6 != 0) {
              plVar11 = plVar10 + 1;
              *plVar10 = *plVar6;
            }
            plVar6 = plVar6 + 1;
            iVar12 = iVar12 + -1;
            plVar10 = plVar11;
          } while (iVar12 != 0);
        }
      }
      plVar6 = plVar11;
      plVar11 = (long *)param_3[2];
    }
    *(undefined1 *)((long)param_3 + 0xc) = 0;
    uVar16 = (uint)((ulong)((long)plVar6 - (long)plVar11) >> 3);
  }
  if (uVar16 != 0) {
    if (param_2 == (undefined8 *)0x0) {
      plVar6 = (long *)*param_3;
      lVar9 = *plVar6;
      puVar17 = (undefined8 *)param_3[2];
    }
    else {
      puVar17 = (undefined8 *)param_3[2];
      if ((int)uVar16 < 6) {
        iVar12 = *(int *)(param_2 + 0xb);
        if (*(int *)((long)param_2 + 0x5c) <= (int)(iVar12 + uVar16)) {
          iVar7 = iVar12;
          if (5 < iVar12) {
            iVar7 = 6;
          }
          iVar12 = iVar12 - iVar7;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar12 * 8);
          *(int *)(param_2 + 0xb) = iVar12;
        }
        if (0 < (int)uVar16) {
          *(undefined8 *)(param_2[1] + (long)iVar12 * 8) = *puVar17;
          iVar12 = *(int *)(param_2 + 0xb);
          if (uVar16 != 1) {
            uVar13 = 1;
            do {
              *(undefined8 *)(param_2[1] + (long)((int)uVar13 + iVar12) * 8) = puVar17[uVar13];
              iVar12 = *(int *)(param_2 + 0xb);
              uVar13 = uVar13 + 1;
            } while (uVar16 != uVar13);
          }
        }
        iVar7 = *(int *)((long)param_2 + 0x5c);
        iVar12 = iVar12 + uVar16;
        *(int *)(param_2 + 0xb) = iVar12;
        if (iVar7 < iVar12) {
          (**(code **)(*(long *)*param_2 + 0x28))
                    ((long *)*param_2,param_2[1] + (long)iVar7 * 8,iVar12 - iVar7);
          *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)((long)param_2 + 0x5c);
        }
        goto LAB_032becd0;
      }
      plVar6 = (long *)*param_2;
      lVar9 = *plVar6;
    }
    (**(code **)(lVar9 + 0x28))(plVar6,puVar17,uVar16);
  }
LAB_032becd0:
  *(undefined4 *)(param_3 + 3) = 0;
LAB_032becd4:
  *(undefined4 *)(param_3 + 1) = 0;
  return;
}


