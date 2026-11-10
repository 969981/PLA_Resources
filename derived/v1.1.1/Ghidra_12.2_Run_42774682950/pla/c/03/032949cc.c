/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032949cc; name: FUN_032949cc
 */


/* WARNING: Removing unreachable block (ram,0x03294d5c) */

long FUN_032949cc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  long lVar28;
  ulong local_68;
  
  FUN_032c7e9c(param_1 + 0x18,param_2 + 0x18);
  puVar7 = PTR_PTR_0434a080;
  if (param_2 == param_1) {
    return param_1;
  }
  pvVar19 = *(void **)(param_2 + 0x20);
  iVar24 = *(int *)(param_2 + 0x28);
  pvVar9 = *(void **)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar24) {
    pvVar9 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar24,2,pvVar9,*(undefined4 *)(param_1 + 0x28));
    *(void **)(param_1 + 0x20) = pvVar9;
  }
  memcpy(pvVar9,pvVar19,(long)iVar24 << 1);
  *(int *)(param_1 + 0x28) = iVar24;
  uVar5 = *(uint *)(param_2 + 0x38);
  lVar28 = *(long *)(param_2 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar5) {
    puVar20 = *(undefined8 **)(param_1 + 0x30);
    uVar11 = *(uint *)(param_1 + 0x38);
    uVar17 = (ulong)uVar11;
    FUN_032bd100(uVar5,0x10,*(uint *)(param_1 + 0x3c),&local_68);
    uVar6 = *(uint *)(param_1 + 0x3c);
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_68,&local_68);
    if (0 < (int)uVar11) {
      puVar26 = puVar20;
      if (puVar20 == puVar8) {
        uVar13 = uVar17 & 3;
        if (uVar17 - 1 < 3) {
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          puVar16 = puVar20 + 4;
          do {
            lVar18 = lVar18 + 4;
            puVar16[-4] = 0;
            puVar16[-2] = 0;
            *puVar16 = 0;
            puVar16[2] = 0;
            puVar16 = puVar16 + 8;
          } while (uVar17 - uVar13 != lVar18);
        }
        if ((uVar11 & 3) != 0) {
          puVar16 = puVar20 + lVar18 * 2;
          do {
            uVar13 = uVar13 - 1;
            *puVar16 = 0;
            puVar16 = puVar16 + 2;
          } while (uVar13 != 0);
        }
      }
      else {
        puVar25 = puVar8;
        puVar16 = puVar20;
        uVar13 = uVar17;
        do {
          *puVar25 = 0;
          FUN_032c7e9c(puVar25,puVar16);
          puVar1 = puVar16 + 1;
          uVar13 = uVar13 - 1;
          puVar16 = puVar16 + 2;
          *(undefined1 *)(puVar25 + 1) = *(undefined1 *)puVar1;
          puVar25 = puVar25 + 2;
        } while (uVar13 != 0);
      }
      do {
        FUN_032c7b9c(puVar26);
        uVar17 = uVar17 - 1;
        puVar26 = puVar26 + 2;
      } while (uVar17 != 0);
    }
    if (-1 < (int)uVar6) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar20,((ulong)uVar6 & 0x3fffffff) << 4);
    }
    if (local_68 < 0x3fffffff0) {
      uVar10 = (undefined4)(local_68 >> 4);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar10;
    *(undefined8 **)(param_1 + 0x30) = puVar8;
  }
  uVar11 = *(uint *)(param_1 + 0x38);
  if ((int)uVar5 < (int)uVar11) {
    lVar18 = (long)(int)uVar5 * 0x10 + (long)(int)uVar11 * -0x10;
    lVar21 = (long)(int)uVar11 * 0x10 + *(long *)(param_1 + 0x30);
    do {
      lVar21 = lVar21 + -0x10;
      FUN_032c7b9c(lVar21);
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0);
    uVar11 = *(uint *)(param_1 + 0x38);
  }
  lVar18 = *(long *)(param_1 + 0x30);
  if ((int)uVar5 <= (int)uVar11) {
    uVar11 = uVar5;
  }
  if ((lVar18 != lVar28) && (0 < (int)uVar11)) {
    uVar17 = (ulong)uVar11;
    lVar21 = lVar28;
    do {
      FUN_032c7e9c(lVar18,lVar21);
      puVar2 = (undefined1 *)(lVar21 + 8);
      uVar17 = uVar17 - 1;
      lVar21 = lVar21 + 0x10;
      *(undefined1 *)(lVar18 + 8) = *puVar2;
      lVar18 = lVar18 + 0x10;
    } while (uVar17 != 0);
    lVar18 = *(long *)(param_1 + 0x30);
  }
  iVar24 = uVar5 - uVar11;
  if (0 < iVar24) {
    puVar8 = (undefined8 *)(lVar18 + (long)(int)uVar11 * 0x10);
    puVar20 = (undefined8 *)(lVar28 + (long)(int)uVar11 * 0x10);
    do {
      *puVar8 = 0;
      if (puVar8 != puVar20) {
        FUN_032c7e9c(puVar8,puVar20);
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar20 + 1);
      }
      iVar24 = iVar24 + -1;
      puVar8 = puVar8 + 2;
      puVar20 = puVar20 + 2;
    } while (iVar24 != 0);
  }
  *(uint *)(param_1 + 0x38) = uVar5;
  iVar24 = *(int *)(param_2 + 0x48);
  pvVar19 = *(void **)(param_2 + 0x40);
  pvVar9 = *(void **)(param_1 + 0x40);
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar24) {
    pvVar9 = (void *)FUN_032bd1d4(puVar7,iVar24,0x30,pvVar9,*(undefined4 *)(param_1 + 0x48));
    *(void **)(param_1 + 0x40) = pvVar9;
  }
  memcpy(pvVar9,pvVar19,(long)iVar24 * 0x30);
  *(int *)(param_1 + 0x48) = iVar24;
  iVar24 = *(int *)(param_2 + 0x58);
  pvVar19 = *(void **)(param_2 + 0x50);
  pvVar9 = *(void **)(param_1 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar24) {
    pvVar9 = (void *)FUN_032bd1d4(puVar7,iVar24,4,pvVar9,*(undefined4 *)(param_1 + 0x58));
    *(void **)(param_1 + 0x50) = pvVar9;
  }
  memcpy(pvVar9,pvVar19,(long)iVar24 << 2);
  *(int *)(param_1 + 0x58) = iVar24;
  uVar5 = *(uint *)(param_2 + 0x68);
  lVar28 = *(long *)(param_2 + 0x60);
  if ((int)uVar5 <= (int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff)) goto LAB_03294dfc;
  lVar21 = *(long *)(param_1 + 0x60);
  uVar11 = *(uint *)(param_1 + 0x68);
  uVar17 = (ulong)uVar11;
  FUN_032bd100(uVar5,8,*(uint *)(param_1 + 0x6c),&local_68);
  uVar6 = *(uint *)(param_1 + 0x6c);
  lVar18 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_68,&local_68);
  if (0 < (int)uVar11) {
    if (uVar11 == 1) {
      lVar14 = 0;
LAB_03294d98:
      lVar14 = lVar14 * 8;
      *(undefined8 *)(lVar18 + lVar14) = *(undefined8 *)(lVar21 + lVar14);
      *(undefined8 *)(lVar21 + lVar14) = 0;
    }
    else {
      lVar14 = 0;
      puVar8 = (undefined8 *)(lVar21 + 8);
      do {
        puVar20 = (undefined8 *)(lVar18 + lVar14 * 8);
        lVar14 = lVar14 + 2;
        *puVar20 = puVar8[-1];
        puVar8[-1] = 0;
        puVar20[1] = *puVar8;
        *puVar8 = 0;
        puVar8 = puVar8 + 2;
      } while (uVar17 - (uVar17 & 1) != lVar14);
      if ((uVar11 & 1) != 0) goto LAB_03294d98;
    }
    lVar14 = lVar21;
    do {
      FUN_032c7b9c(lVar14);
      uVar17 = uVar17 - 1;
      lVar14 = lVar14 + 8;
    } while (uVar17 != 0);
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar21,((ulong)uVar6 & 0x3fffffff) << 3);
  }
  if (local_68 < 0x1fffffff8) {
    uVar10 = (undefined4)(local_68 >> 3);
  }
  else {
    uVar10 = 0x3fffffff;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar10;
  *(long *)(param_1 + 0x60) = lVar18;
LAB_03294dfc:
  uVar11 = *(uint *)(param_1 + 0x68);
  if ((int)uVar5 < (int)uVar11) {
    lVar18 = (long)(int)uVar5 * 8 + (long)(int)uVar11 * -8;
    lVar21 = (long)(int)uVar11 * 8 + *(long *)(param_1 + 0x60);
    do {
      lVar21 = lVar21 + -8;
      FUN_032c7b9c(lVar21);
      lVar18 = lVar18 + 8;
    } while (lVar18 != 0);
    uVar11 = *(uint *)(param_1 + 0x68);
  }
  lVar18 = *(long *)(param_1 + 0x60);
  if ((int)uVar5 <= (int)uVar11) {
    uVar11 = uVar5;
  }
  if ((lVar18 != lVar28) && (0 < (int)uVar11)) {
    uVar17 = (ulong)uVar11;
    lVar21 = lVar28;
    do {
      FUN_032c7e9c(lVar18,lVar21);
      uVar17 = uVar17 - 1;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + 8;
    } while (uVar17 != 0);
    lVar18 = *(long *)(param_1 + 0x60);
  }
  iVar24 = uVar5 - uVar11;
  if (0 < iVar24) {
    lVar18 = lVar18 + (long)(int)uVar11 * 8;
    lVar28 = lVar28 + (long)(int)uVar11 * 8;
    do {
      FUN_032c7b0c(lVar18,lVar28);
      iVar24 = iVar24 + -1;
      lVar18 = lVar18 + 8;
      lVar28 = lVar28 + 8;
    } while (iVar24 != 0);
  }
  *(uint *)(param_1 + 0x68) = uVar5;
  uVar5 = *(uint *)(param_2 + 0x78);
  plVar27 = *(long **)(param_2 + 0x70);
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x3fffffff) < (int)uVar5) {
    plVar22 = *(long **)(param_1 + 0x70);
    uVar11 = *(uint *)(param_1 + 0x78);
    uVar17 = (ulong)uVar11;
    FUN_032bd100(uVar5,0x10,*(uint *)(param_1 + 0x7c),&local_68);
    uVar6 = *(uint *)(param_1 + 0x7c);
    lVar28 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_68,&local_68);
    if (0 < (int)uVar11) {
      puVar12 = (undefined2 *)(lVar28 + 8);
      plVar15 = plVar22;
      uVar13 = uVar17;
      do {
        *(long *)(puVar12 + -4) = *plVar15;
        plVar3 = plVar15 + 1;
        *plVar15 = 0;
        uVar13 = uVar13 - 1;
        plVar15 = plVar15 + 2;
        *puVar12 = (short)*plVar3;
        puVar12 = puVar12 + 8;
      } while (uVar13 != 0);
      plVar15 = plVar22;
      do {
        if (*plVar15 != 0) {
          FUN_032d647c();
        }
        uVar17 = uVar17 - 1;
        plVar15 = plVar15 + 2;
      } while (uVar17 != 0);
    }
    if (-1 < (int)uVar6) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,plVar22,((ulong)uVar6 & 0x3fffffff) << 4);
    }
    if (local_68 < 0x3fffffff0) {
      uVar10 = (undefined4)(local_68 >> 4);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar10;
    *(long *)(param_1 + 0x70) = lVar28;
  }
  uVar11 = *(uint *)(param_1 + 0x78);
  if ((int)uVar5 < (int)uVar11) {
    lVar28 = (long)(int)uVar5 * 0x10 + (long)(int)uVar11 * -0x10;
    plVar22 = (long *)((long)(int)uVar11 * 0x10 + *(long *)(param_1 + 0x70));
    do {
      plVar22 = plVar22 + -2;
      if (*plVar22 != 0) {
        FUN_032d647c();
      }
      lVar28 = lVar28 + 0x10;
    } while (lVar28 != 0);
    uVar11 = *(uint *)(param_1 + 0x78);
  }
  plVar22 = *(long **)(param_1 + 0x70);
  if ((int)uVar5 <= (int)uVar11) {
    uVar11 = uVar5;
  }
  if ((plVar22 != plVar27) && (0 < (int)uVar11)) {
    uVar17 = (ulong)uVar11;
    plVar15 = plVar27;
    do {
      lVar28 = *plVar22;
      lVar18 = *plVar15;
      if (lVar28 != lVar18) {
        if (lVar18 == 0) {
          *plVar22 = 0;
        }
        else {
          FUN_032d645c(lVar18);
          lVar28 = *plVar22;
          *plVar22 = *plVar15;
        }
        if (lVar28 != 0) {
          FUN_032d647c();
        }
      }
      plVar3 = plVar15 + 1;
      uVar17 = uVar17 - 1;
      plVar15 = plVar15 + 2;
      *(short *)(plVar22 + 1) = (short)*plVar3;
      plVar22 = plVar22 + 2;
    } while (uVar17 != 0);
    plVar22 = *(long **)(param_1 + 0x70);
  }
  iVar24 = uVar5 - uVar11;
  if (0 < iVar24) {
    plVar27 = plVar27 + (long)(int)uVar11 * 2;
    plVar22 = plVar22 + (long)(int)uVar11 * 2;
    do {
      lVar28 = *plVar27;
      *plVar22 = lVar28;
      if (lVar28 != 0) {
        FUN_032d645c();
      }
      plVar15 = plVar27 + 1;
      iVar24 = iVar24 + -1;
      plVar27 = plVar27 + 2;
      *(short *)(plVar22 + 1) = (short)*plVar15;
      plVar22 = plVar22 + 2;
    } while (iVar24 != 0);
  }
  *(uint *)(param_1 + 0x78) = uVar5;
  lVar28 = *(long *)(param_2 + 0x80);
  uVar5 = *(uint *)(param_2 + 0x88);
  if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) < (int)uVar5) {
    lVar21 = *(long *)(param_1 + 0x80);
    uVar11 = *(uint *)(param_1 + 0x88);
    uVar17 = (ulong)uVar11;
    FUN_032bd100(uVar5,0x10,*(uint *)(param_1 + 0x8c),&local_68);
    uVar6 = *(uint *)(param_1 + 0x8c);
    lVar18 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_68,&local_68);
    if (0 < (int)uVar11) {
      lVar23 = lVar18;
      lVar14 = lVar21;
      uVar13 = uVar17;
      do {
        FUN_032c7b0c(lVar23,lVar14);
        *(undefined2 *)(lVar23 + 8) = *(undefined2 *)(lVar14 + 8);
        puVar12 = (undefined2 *)(lVar14 + 10);
        uVar13 = uVar13 - 1;
        lVar14 = lVar14 + 0x10;
        *(undefined2 *)(lVar23 + 10) = *puVar12;
        lVar23 = lVar23 + 0x10;
      } while (uVar13 != 0);
      lVar14 = lVar21;
      do {
        FUN_032c7b9c(lVar14);
        uVar17 = uVar17 - 1;
        lVar14 = lVar14 + 0x10;
      } while (uVar17 != 0);
    }
    if (-1 < (int)uVar6) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar21,((ulong)uVar6 & 0x3fffffff) << 4);
    }
    if (local_68 < 0x3fffffff0) {
      uVar10 = (undefined4)(local_68 >> 4);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar10;
    *(long *)(param_1 + 0x80) = lVar18;
  }
  uVar11 = *(uint *)(param_1 + 0x88);
  if ((int)uVar5 < (int)uVar11) {
    lVar18 = (long)(int)uVar5 * 0x10 + (long)(int)uVar11 * -0x10;
    lVar21 = (long)(int)uVar11 * 0x10 + *(long *)(param_1 + 0x80);
    do {
      lVar21 = lVar21 + -0x10;
      FUN_032c7b9c(lVar21);
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0);
    uVar11 = *(uint *)(param_1 + 0x88);
  }
  lVar18 = *(long *)(param_1 + 0x80);
  if ((int)uVar5 <= (int)uVar11) {
    uVar11 = uVar5;
  }
  if ((lVar18 != lVar28) && (0 < (int)uVar11)) {
    uVar17 = (ulong)uVar11;
    lVar21 = lVar28;
    do {
      FUN_032c7e9c(lVar18,lVar21);
      puVar4 = (undefined4 *)(lVar21 + 8);
      uVar17 = uVar17 - 1;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)(lVar18 + 8) = *puVar4;
      lVar18 = lVar18 + 0x10;
    } while (uVar17 != 0);
    lVar18 = *(long *)(param_1 + 0x80);
  }
  iVar24 = uVar5 - uVar11;
  if (0 < iVar24) {
    lVar28 = lVar28 + (long)(int)uVar11 * 0x10;
    lVar18 = lVar18 + (long)(int)uVar11 * 0x10;
    do {
      FUN_032c7b0c(lVar18,lVar28);
      *(undefined2 *)(lVar18 + 8) = *(undefined2 *)(lVar28 + 8);
      puVar12 = (undefined2 *)(lVar28 + 10);
      iVar24 = iVar24 + -1;
      lVar28 = lVar28 + 0x10;
      *(undefined2 *)(lVar18 + 10) = *puVar12;
      lVar18 = lVar18 + 0x10;
    } while (iVar24 != 0);
  }
  *(uint *)(param_1 + 0x88) = uVar5;
  return param_1;
}


