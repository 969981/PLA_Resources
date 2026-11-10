/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304ee3c; name: FUN_0304ee3c
 */


void FUN_0304ee3c(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  
  puVar6 = PTR_PTR_0434a080;
  plVar18 = *(long **)(param_1[0x73] + (long)param_2 * 8);
  plVar19 = *(long **)(param_1[0x73] + (long)param_3 * 8);
  if (plVar18 == plVar19) {
    return;
  }
  if (0 < (int)plVar19[3]) {
    puVar17 = *(undefined4 **)plVar19[2];
    *puVar17 = (int)plVar18[4];
    puVar17[1] = (int)plVar18[3];
    puVar15 = (uint *)((long)plVar18 + 0x1c);
    uVar11 = *puVar15;
    iVar9 = (int)plVar18[3];
    uVar1 = iVar9 + 1;
    if (iVar9 < (int)(uVar11 & 0x3fffffff)) {
      lVar7 = plVar18[2];
    }
    else {
      lVar7 = plVar18[2];
      if (0x3ffffffe < iVar9) {
        FUN_032bd0a8(uVar1);
        uVar11 = *puVar15;
      }
      uVar11 = (uVar11 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar11) {
        uVar11 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar11) {
        uVar2 = uVar11;
      }
      lVar7 = FUN_032bd1d4(puVar6,uVar2,8,lVar7,iVar9,puVar15);
      iVar9 = (int)plVar18[3];
      plVar18[2] = lVar7;
    }
    *(undefined4 **)(lVar7 + (long)iVar9 * 8) = puVar17;
    *(uint *)(plVar18 + 3) = uVar1;
    if (1 < (int)plVar19[3]) {
      lVar7 = 1;
      do {
        puVar17 = *(undefined4 **)(plVar19[2] + lVar7 * 8);
        *puVar17 = (int)plVar18[4];
        puVar17[1] = (int)plVar18[3];
        iVar9 = (int)plVar18[3];
        uVar11 = *(uint *)((long)plVar18 + 0x1c);
        uVar1 = iVar9 + 1;
        if (iVar9 < (int)(uVar11 & 0x3fffffff)) {
          lVar14 = plVar18[2];
        }
        else {
          lVar14 = plVar18[2];
          if (0x3ffffffe < iVar9) {
            FUN_032bd0a8(uVar1);
            uVar11 = *puVar15;
          }
          uVar11 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar2 = uVar1;
          if ((int)uVar1 <= (int)uVar11) {
            uVar2 = uVar11;
          }
          lVar14 = FUN_032bd1d4(puVar6,uVar2,8,lVar14,iVar9,puVar15);
          plVar18[2] = lVar14;
          iVar9 = (int)plVar18[3];
        }
        *(undefined4 **)(lVar14 + (long)iVar9 * 8) = puVar17;
        lVar7 = lVar7 + 1;
        *(uint *)(plVar18 + 3) = uVar1;
      } while (lVar7 < (int)plVar19[3]);
    }
  }
  puVar17 = (undefined4 *)*plVar19;
  iVar9 = (int)plVar19[1];
  uVar11 = *(uint *)((long)plVar18 + 0xc);
  iVar4 = (int)plVar18[1];
  uVar1 = iVar4 + iVar9;
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar1) {
    lVar7 = *plVar18;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar11 = *(uint *)((long)plVar18 + 0xc);
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar11) {
      uVar2 = uVar11;
    }
    lVar7 = FUN_032bd1d4(puVar6,uVar2,4,lVar7,iVar4);
    *plVar18 = lVar7;
  }
  else {
    lVar7 = *plVar18;
  }
  if (iVar9 != 0) {
    puVar13 = (undefined4 *)(lVar7 + (long)iVar4 * 4);
    *puVar13 = *puVar17;
    if ((iVar9 != 1) && (puVar13[1] = puVar17[1], iVar9 != 2)) {
      lVar7 = (long)iVar9 * 4 + -8;
      puVar17 = puVar17 + 2;
      puVar13 = puVar13 + 2;
      do {
        lVar7 = lVar7 + -4;
        *puVar13 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
    }
  }
  uVar11 = *(uint *)((long)plVar18 + 100);
  *(uint *)(plVar18 + 1) = uVar1;
  iVar9 = (int)plVar19[0xc];
  iVar4 = (int)plVar18[0xc];
  puVar20 = (undefined8 *)plVar19[0xb];
  uVar1 = iVar4 + iVar9;
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar1) {
    lVar7 = plVar18[0xb];
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar11 = *(uint *)((long)plVar18 + 100);
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar11) {
      uVar2 = uVar11;
    }
    lVar7 = FUN_032bd1d4(puVar6,uVar2,8,lVar7,iVar4);
    plVar18[0xb] = lVar7;
  }
  else {
    lVar7 = plVar18[0xb];
  }
  if (iVar9 != 0) {
    lVar14 = (long)iVar9 << 3;
    puVar16 = (undefined8 *)(lVar7 + (long)iVar4 * 8);
    do {
      lVar14 = lVar14 + -8;
      *puVar16 = *puVar20;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    } while (lVar14 != 0);
  }
  *(uint *)(plVar18 + 0xc) = uVar1;
  uVar12 = plVar18[5];
  if ((ulong)plVar19[5] <= (ulong)plVar18[5]) {
    uVar12 = plVar19[5];
  }
  plVar18[5] = uVar12;
  iVar9 = (int)plVar19[1];
  if (0 < iVar9) {
    uVar12 = (ulong)*(uint *)*plVar19 & 0xffffff;
    if (((((uint)uVar12 != 0xffffff) && ((uint)uVar12 < *(uint *)(*param_1 + 0x40))) &&
        (lVar7 = *(long *)(*param_1 + 0x38), (*(byte *)(lVar7 + uVar12 * 0xc0 + 0x54) & 3) != 0)) &&
       (*(uint *)(lVar7 + uVar12 * 0xc0 + 0x50) == *(uint *)*plVar19)) {
      *(int *)(param_1[0x71] + (long)*(int *)(lVar7 + uVar12 * 0xc0 + 0x80) * 0x20 + 0x10) = param_2
      ;
      iVar9 = (int)plVar19[1];
    }
    if (1 < iVar9) {
      uVar12 = (ulong)*(uint *)(*plVar19 + 4) & 0xffffff;
      if ((((uint)uVar12 != 0xffffff) && ((uint)uVar12 < *(uint *)(*param_1 + 0x40))) &&
         ((lVar7 = *(long *)(*param_1 + 0x38), (*(byte *)(lVar7 + uVar12 * 0xc0 + 0x54) & 3) != 0 &&
          (*(uint *)(lVar7 + uVar12 * 0xc0 + 0x50) == *(uint *)(*plVar19 + 4))))) {
        *(int *)(param_1[0x71] + (long)*(int *)(lVar7 + uVar12 * 0xc0 + 0x80) * 0x20 + 0x10) =
             param_2;
        iVar9 = (int)plVar19[1];
      }
      if (2 < iVar9) {
        lVar7 = 2;
        do {
          uVar1 = *(uint *)(*plVar19 + lVar7 * 4);
          uVar12 = (ulong)uVar1 & 0xffffff;
          if ((((uint)uVar12 != 0xffffff) && ((uint)uVar12 < *(uint *)(*param_1 + 0x40))) &&
             ((lVar14 = *(long *)(*param_1 + 0x38),
              (*(byte *)(lVar14 + uVar12 * 0xc0 + 0x54) & 3) != 0 &&
              (*(uint *)(lVar14 + uVar12 * 0xc0 + 0x50) == uVar1)))) {
            *(int *)(param_1[0x71] + (long)*(int *)(lVar14 + uVar12 * 0xc0 + 0x80) * 0x20 + 0x10) =
                 param_2;
            iVar9 = (int)plVar19[1];
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar9);
      }
    }
  }
  if (*(char *)((long)plVar18 + 0x25) == '\0') {
    bVar8 = 0;
    if (*(char *)((long)plVar19 + 0x25) != '\0') {
      uVar11 = *(uint *)((long)param_1 + 0x33c);
      iVar9 = (int)param_1[0x67];
      uVar1 = iVar9 + 1;
      if (iVar9 < (int)(uVar11 & 0x3fffffff)) {
        lVar7 = param_1[0x66];
      }
      else {
        lVar7 = param_1[0x66];
        if (0x3ffffffe < iVar9) {
          FUN_032bd0a8(uVar1);
          uVar11 = *(uint *)((long)param_1 + 0x33c);
        }
        uVar11 = (uVar11 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar11) {
          uVar11 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar11) {
          uVar2 = uVar11;
        }
        lVar7 = FUN_032bd1d4(puVar6,uVar2,4,lVar7,iVar9,(uint *)((long)param_1 + 0x33c));
        iVar9 = (int)param_1[0x67];
        param_1[0x66] = lVar7;
      }
      *(int *)(lVar7 + (long)iVar9 * 4) = param_2;
      *(uint *)(param_1 + 0x67) = uVar1;
      bVar8 = *(byte *)((long)plVar18 + 0x25);
    }
  }
  else {
    bVar8 = 1;
  }
  *(byte *)((long)plVar18 + 0x25) = *(byte *)((long)plVar19 + 0x25) | bVar8;
  *(byte *)((long)plVar18 + 0x24) =
       *(byte *)((long)plVar18 + 0x24) | *(byte *)((long)plVar19 + 0x24);
  *(undefined4 *)(plVar19 + 3) = 0;
  *(undefined4 *)(plVar19 + 1) = 0;
  *(undefined4 *)(plVar19 + 0xc) = 0;
  if (*(uint *)(plVar18 + 10) < *(uint *)(plVar19 + 10)) {
    *(undefined4 *)(plVar18 + 7) = 0;
    iVar9 = (int)plVar19[7];
    puVar16 = (undefined8 *)plVar19[6];
    puVar20 = (undefined8 *)plVar18[6];
    if ((int)(*(uint *)((long)plVar18 + 0x3c) & 0x3fffffff) < iVar9) {
      puVar20 = (undefined8 *)FUN_0305b29c(puVar6,iVar9,puVar20,0);
      plVar18[6] = (long)puVar20;
    }
    if (iVar9 != 0) {
      lVar7 = (long)iVar9 << 4;
      do {
        uVar3 = puVar16[1];
        *puVar20 = *puVar16;
        puVar20[1] = uVar3;
        lVar7 = lVar7 + -0x10;
        puVar20 = puVar20 + 2;
        puVar16 = puVar16 + 2;
      } while (lVar7 != 0);
    }
    *(int *)(plVar18 + 7) = iVar9;
    *(int *)(plVar18 + 10) = (int)plVar19[10];
  }
  else {
    if (*(uint *)(plVar18 + 10) != *(uint *)(plVar19 + 10)) goto LAB_0304f0a4;
    iVar4 = (int)plVar19[7];
    puVar20 = (undefined8 *)plVar19[6];
    iVar5 = (int)plVar18[7];
    lVar7 = plVar18[6];
    iVar9 = iVar5 + iVar4;
    if ((int)(*(uint *)((long)plVar18 + 0x3c) & 0x3fffffff) < iVar9) {
      lVar7 = FUN_0305b29c(puVar6,iVar9,lVar7,iVar5);
      plVar18[6] = lVar7;
    }
    if (iVar4 != 0) {
      lVar14 = (long)iVar4 << 4;
      puVar16 = (undefined8 *)(lVar7 + (long)iVar5 * 0x10);
      do {
        uVar3 = puVar20[1];
        *puVar16 = *puVar20;
        puVar16[1] = uVar3;
        lVar14 = lVar14 + -0x10;
        puVar16 = puVar16 + 2;
        puVar20 = puVar20 + 2;
      } while (lVar14 != 0);
    }
    *(int *)(plVar18 + 7) = iVar9;
  }
  *(undefined4 *)(plVar19 + 7) = 0;
LAB_0304f0a4:
  uVar11 = *(uint *)((long)param_1 + 0x34c);
  iVar9 = (int)param_1[0x69];
  uVar1 = iVar9 + 1;
  if (iVar9 < (int)(uVar11 & 0x3fffffff)) {
    lVar7 = param_1[0x68];
  }
  else {
    lVar7 = param_1[0x68];
    if (0x3ffffffe < iVar9) {
      FUN_032bd0a8(uVar1);
      uVar11 = *(uint *)((long)param_1 + 0x34c);
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar11) {
      uVar2 = uVar11;
    }
    lVar7 = FUN_032bd1d4(puVar6,uVar2,4,lVar7,iVar9,(uint *)((long)param_1 + 0x34c));
    iVar9 = (int)param_1[0x69];
    param_1[0x68] = lVar7;
  }
  *(int *)(lVar7 + (long)iVar9 * 4) = param_3;
  lVar7 = param_1[0x73];
  *(uint *)(param_1 + 0x69) = uVar1;
  lVar14 = *(long *)(lVar7 + (long)param_3 * 8);
  if (lVar14 != 0) {
    FUN_0304f680(lVar14);
    lVar7 = tpidr_el0;
    lVar10 = *(long *)(lVar7 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar10;
    }
    plVar18 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,0x70);
    lVar7 = param_1[0x73];
  }
  *(undefined8 *)(lVar7 + (long)param_3 * 8) = 0;
  return;
}


