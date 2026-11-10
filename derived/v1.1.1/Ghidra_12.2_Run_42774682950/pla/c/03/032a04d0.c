/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a04d0; name: FUN_032a04d0
 */


/* WARNING: Removing unreachable block (ram,0x032a06b4) */

void FUN_032a04d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong local_68;
  
  FUN_0329c898();
  *param_1 = &PTR_LAB_0433f390;
  FUN_0329c8d0(param_1 + 3);
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x15c) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  FUN_0329c948(param_1 + 3,param_2 + 3);
  puVar3 = PTR_PTR_0434a080;
  if (param_2 == param_1) {
    uVar1 = *(uint *)(param_1 + 0x2a);
    goto joined_r0x032a05d0;
  }
  uVar1 = *(uint *)(param_2 + 0x28);
  lVar21 = param_2[0x27];
  lVar18 = param_1[0x27];
  lVar4 = lVar18;
  if ((int)(*(uint *)((long)param_1 + 0x144) & 0x3fffffff) < (int)uVar1) {
    uVar7 = *(uint *)(param_1 + 0x28);
    uVar20 = (ulong)uVar7;
    FUN_032bd100(uVar1,2,*(uint *)((long)param_1 + 0x144),&local_68);
    uVar2 = *(uint *)((long)param_1 + 0x144);
    lVar4 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_68,&local_68);
    if (0 < (int)uVar7) {
      uVar8 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar11 = (undefined2 *)(lVar4 + 4);
        puVar14 = (undefined2 *)(lVar18 + 4);
        do {
          puVar11[-2] = puVar14[-2];
          puVar11[-1] = puVar14[-1];
          *puVar11 = *puVar14;
          puVar12 = puVar14 + 1;
          lVar10 = lVar10 + 4;
          puVar14 = puVar14 + 4;
          puVar11[1] = *puVar12;
          puVar11 = puVar11 + 4;
        } while (uVar20 - uVar8 != lVar10);
      }
      if ((uVar7 & 3) != 0) {
        puVar11 = (undefined2 *)(lVar18 + lVar10 * 2);
        puVar14 = (undefined2 *)(lVar4 + lVar10 * 2);
        do {
          uVar8 = uVar8 - 1;
          *puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar8 != 0);
      }
    }
    if (-1 < (int)uVar2) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar18,(uVar2 & 0x3fffffff) << 1);
    }
    if (local_68 < 0x7ffffffe) {
      uVar6 = (undefined4)(local_68 >> 1);
    }
    else {
      uVar6 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x144) = uVar6;
    param_1[0x27] = lVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar7 = uVar2;
  if ((int)uVar1 <= (int)uVar2) {
    uVar7 = uVar1;
  }
  if ((lVar4 != lVar21) && (0 < (int)uVar7)) {
    if (uVar7 == 1) {
      lVar18 = 0;
LAB_032a06ec:
      *(undefined2 *)(lVar4 + lVar18 * 2) = *(undefined2 *)(lVar21 + lVar18 * 2);
    }
    else {
      lVar18 = 0;
      do {
        lVar10 = lVar18 * 2;
        lVar18 = lVar18 + 2;
        puVar11 = (undefined2 *)(lVar21 + lVar10);
        puVar14 = (undefined2 *)(lVar4 + lVar10);
        *puVar14 = *puVar11;
        puVar14[1] = puVar11[1];
      } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar18);
      if ((uVar7 & 1) != 0) goto LAB_032a06ec;
    }
    lVar4 = param_1[0x27];
  }
  if ((int)uVar2 < (int)uVar1) {
    uVar2 = uVar1 - uVar7 & 3;
    puVar11 = (undefined2 *)(lVar21 + (long)(int)uVar7 * 2);
    puVar14 = (undefined2 *)(lVar4 + (long)(int)uVar7 * 2);
    if (2 < uVar1 + ~uVar7) {
      iVar16 = (uVar1 - uVar7) - uVar2;
      puVar12 = puVar11;
      puVar15 = puVar14;
      do {
        *puVar15 = *puVar12;
        puVar15[1] = puVar12[1];
        puVar15[2] = puVar12[2];
        puVar11 = puVar12 + 4;
        puVar14 = puVar15 + 4;
        iVar16 = iVar16 + -4;
        puVar15[3] = puVar12[3];
        puVar12 = puVar11;
        puVar15 = puVar14;
      } while (iVar16 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  plVar19 = (long *)param_2[0x29];
  uVar1 = *(uint *)(param_2 + 0x2a);
  if ((int)(*(uint *)((long)param_1 + 0x154) & 0x3fffffff) < (int)uVar1) {
    plVar17 = (long *)param_1[0x29];
    uVar7 = *(uint *)(param_1 + 0x2a);
    uVar20 = (ulong)uVar7;
    FUN_032bd100(uVar1,0x18,*(uint *)((long)param_1 + 0x154),&local_68);
    uVar2 = *(uint *)((long)param_1 + 0x154);
    lVar4 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_68,&local_68);
    if (0 < (int)uVar7) {
      plVar9 = (long *)(lVar4 + 8);
      plVar13 = plVar17;
      uVar8 = uVar20;
      do {
        plVar9[-1] = *plVar13;
        lVar18 = plVar13[1];
        uVar8 = uVar8 - 1;
        *plVar13 = 0;
        *(char *)(plVar9 + 1) = (char)plVar13[2];
        plVar13 = plVar13 + 3;
        *plVar9 = lVar18;
        plVar9 = plVar9 + 3;
      } while (uVar8 != 0);
      lVar18 = *plVar17;
      plVar13 = plVar17;
      while( true ) {
        if (lVar18 != 0) {
          FUN_032d647c();
        }
        uVar20 = uVar20 - 1;
        plVar13 = plVar13 + 3;
        if (uVar20 == 0) break;
        lVar18 = *plVar13;
      }
    }
    if (-1 < (int)uVar2) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,plVar17,((ulong)uVar2 & 0x3fffffff) * 0x18);
    }
    if (local_68 < 0x5ffffffe8) {
      uVar6 = (undefined4)(local_68 / 0x18);
    }
    else {
      uVar6 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x154) = uVar6;
    param_1[0x29] = lVar4;
  }
  uVar7 = *(uint *)(param_1 + 0x2a);
  if ((int)uVar1 < (int)uVar7) {
    lVar4 = (long)(int)uVar7 * -0x18 + (long)(int)uVar1 * 0x18;
    plVar17 = (long *)((long)(int)uVar7 * 0x18 + param_1[0x29] + -0x18);
    lVar18 = *plVar17;
    while( true ) {
      if (lVar18 != 0) {
        FUN_032d647c();
      }
      lVar4 = lVar4 + 0x18;
      plVar17 = plVar17 + -3;
      if (lVar4 == 0) break;
      lVar18 = *plVar17;
    }
    uVar7 = *(uint *)(param_1 + 0x2a);
  }
  plVar17 = (long *)param_1[0x29];
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = uVar1;
  }
  if ((plVar17 != plVar19) && (0 < (int)uVar7)) {
    uVar20 = (ulong)uVar7;
    plVar13 = plVar19;
    do {
      lVar4 = *plVar17;
      lVar18 = *plVar13;
      if (lVar4 != lVar18) {
        lVar21 = 0;
        if (lVar18 != 0) {
          FUN_032d645c(lVar18);
          lVar4 = *plVar17;
          lVar21 = *plVar13;
        }
        *plVar17 = lVar21;
        if (lVar4 != 0) {
          FUN_032d647c();
        }
      }
      lVar4 = plVar13[1];
      uVar20 = uVar20 - 1;
      *(char *)(plVar17 + 2) = (char)plVar13[2];
      plVar17[1] = lVar4;
      plVar13 = plVar13 + 3;
      plVar17 = plVar17 + 3;
    } while (uVar20 != 0);
    plVar17 = (long *)param_1[0x29];
  }
  iVar16 = uVar1 - uVar7;
  if (0 < iVar16) {
    plVar19 = plVar19 + (long)(int)uVar7 * 3;
    plVar17 = plVar17 + (long)(int)uVar7 * 3;
    do {
      lVar4 = *plVar19;
      *plVar17 = lVar4;
      if (lVar4 != 0) {
        FUN_032d645c();
      }
      lVar4 = plVar19[1];
      iVar16 = iVar16 + -1;
      *(char *)(plVar17 + 2) = (char)plVar19[2];
      plVar17[1] = lVar4;
      plVar19 = plVar19 + 3;
      plVar17 = plVar17 + 3;
    } while (iVar16 != 0);
  }
  *(uint *)(param_1 + 0x2a) = uVar1;
joined_r0x032a05d0:
  if (0 < (int)uVar1) {
    lVar4 = 0;
    uVar20 = (ulong)uVar1;
    do {
      lVar21 = param_1[0x29];
      lVar18 = (**(code **)(**(long **)(lVar21 + lVar4) + 0x20))();
      if (lVar18 != 0) {
        FUN_032d645c(lVar18);
      }
      lVar10 = *(long *)(lVar21 + lVar4);
      *(long *)(lVar21 + lVar4) = lVar18;
      if (lVar10 != 0) {
        FUN_032d647c();
        lVar18 = *(long *)(lVar21 + lVar4);
      }
      FUN_032d647c(lVar18);
      uVar20 = uVar20 - 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar20 != 0);
  }
  iVar16 = *(int *)(param_1 + 0x23);
  if ((int)(*(uint *)((long)param_1 + 300) & 0x3fffffff) < iVar16) {
    uVar5 = FUN_032a1320(PTR_PTR_0434a080,iVar16,param_1[0x24],*(undefined4 *)(param_1 + 0x25),
                         (long)param_1 + 300);
    param_1[0x24] = uVar5;
  }
  if (*(int *)(param_1 + 0x25) != iVar16) {
    *(int *)(param_1 + 0x25) = iVar16;
  }
  *(undefined1 *)((long)param_1 + 0x166) = 0;
  return;
}


