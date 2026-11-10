/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002185e0; name: FUN_002185e0
 */


undefined8 FUN_002185e0(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  uVar5 = *(uint *)(param_1 + 10);
  if (param_1[3] - 5U <= (ulong)uVar5) {
    uVar5 = (uint)(param_1[3] - 5U);
  }
  plVar7 = (long *)*param_1;
  lVar10 = plVar7[1];
  do {
    uVar6 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    uVar9 = *(uint *)(plVar7 + 4) - uVar6;
    if (*(uint *)(plVar7 + 4) < uVar6) {
LAB_002188d0:
      bVar3 = false;
      iVar1 = (int)plVar7[1];
      goto joined_r0x002188e0;
    }
    uVar2 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x13];
    uVar6 = uVar2 + *(uint *)(plVar7 + 1);
    uVar15 = uVar6;
    if (0xfffe < (ulong)uVar2 + (ulong)*(uint *)(plVar7 + 1)) {
      uVar15 = 0xffff;
    }
    if (uVar15 <= uVar9) {
      uVar9 = uVar15;
    }
    if ((uVar9 < uVar5) && ((uVar9 != uVar6 || param_2 == 0) || param_2 != 4 && uVar9 == 0))
    goto LAB_002188d0;
    bVar3 = uVar9 == uVar6;
    FUN_00219d30(param_1,0,0,param_2 == 4 && bVar3);
    *(char *)(param_1[5] + param_1[2] + -4) = (char)uVar9;
    *(char *)(param_1[5] + param_1[2] + -3) = (char)(uVar9 >> 8);
    *(char *)(param_1[5] + param_1[2] + -2) = (char)~uVar9;
    *(char *)(param_1[5] + param_1[2] + -1) = (char)(~uVar9 >> 8);
    lVar14 = *param_1;
    lVar11 = *(long *)(lVar14 + 0x38);
    FUN_00219ea0(lVar11);
    uVar6 = *(uint *)(lVar14 + 0x20);
    if (*(uint *)(lVar11 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
      uVar6 = *(uint *)(lVar11 + 0x28);
    }
    if (uVar6 != 0) {
      uVar13 = (ulong)uVar6;
      memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar11 + 0x20),uVar13);
      *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar13;
      *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar13;
      *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar13;
      *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar6;
      lVar14 = *(long *)(lVar11 + 0x28) - uVar13;
      *(long *)(lVar11 + 0x28) = lVar14;
      if (lVar14 == 0) {
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
      }
    }
    if (uVar2 != 0) {
      uVar6 = uVar9;
      if (uVar2 <= uVar9) {
        uVar6 = uVar2;
      }
      uVar13 = (ulong)uVar6;
      memcpy(*(void **)(*param_1 + 0x18),(void *)(param_1[0xc] + param_1[0x13]),uVar13);
      uVar9 = uVar9 - uVar6;
      *(ulong *)(*param_1 + 0x18) = *(long *)(*param_1 + 0x18) + uVar13;
      *(uint *)(*param_1 + 0x20) = *(int *)(*param_1 + 0x20) - uVar6;
      *(ulong *)(*param_1 + 0x28) = *(long *)(*param_1 + 0x28) + uVar13;
      param_1[0x13] = param_1[0x13] + uVar13;
    }
    if (uVar9 != 0) {
      plVar7 = (long *)*param_1;
      uVar15 = *(uint *)(plVar7 + 1);
      pvVar12 = (void *)plVar7[3];
      uVar6 = uVar9;
      if (uVar15 <= uVar9) {
        uVar6 = uVar15;
      }
      if (uVar6 != 0) {
        uVar13 = (ulong)uVar6;
        *(uint *)(plVar7 + 1) = uVar15 - uVar6;
        memcpy(pvVar12,(void *)*plVar7,uVar13);
        if (*(int *)(plVar7[7] + 0x30) == 2) {
          lVar11 = FUN_00215640(plVar7[0xc],pvVar12,uVar6);
LAB_0021863c:
          plVar7[0xc] = lVar11;
        }
        else if (*(int *)(plVar7[7] + 0x30) == 1) {
          lVar11 = FUN_00215360(plVar7[0xc],pvVar12,uVar6);
          goto LAB_0021863c;
        }
        *plVar7 = *plVar7 + uVar13;
        plVar7[2] = plVar7[2] + uVar13;
        plVar7 = (long *)*param_1;
        pvVar12 = (void *)plVar7[3];
      }
      plVar7[3] = (long)pvVar12 + (ulong)uVar9;
      *(uint *)(*param_1 + 0x20) = *(int *)(*param_1 + 0x20) - uVar9;
      *(ulong *)(*param_1 + 0x28) = *(long *)(*param_1 + 0x28) + (ulong)uVar9;
    }
    plVar7 = (long *)*param_1;
  } while (param_2 != 4 || !bVar3);
  bVar3 = true;
  iVar1 = (int)plVar7[1];
joined_r0x002188e0:
  uVar5 = (int)lVar10 - iVar1;
  if (uVar5 == 0) {
    uVar6 = *(uint *)((long)param_1 + 0xac);
    uVar13 = (ulong)uVar6;
    if ((ulong)param_1[0x2e7] < uVar13) {
LAB_002189e4:
      param_1[0x2e7] = uVar13;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 10);
    uVar13 = (ulong)uVar6;
    if (uVar5 < uVar6) {
      uVar8 = (ulong)uVar5;
      if (param_1[0xd] - (ulong)*(uint *)((long)param_1 + 0xac) <= uVar8) {
        uVar6 = *(uint *)((long)param_1 + 0xac) - uVar6;
        *(uint *)((long)param_1 + 0xac) = uVar6;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar13),(ulong)uVar6);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
      }
      memcpy((void *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac)),
             (void *)(*(long *)*param_1 - uVar8),uVar8);
      uVar6 = *(int *)((long)param_1 + 0xac) + uVar5;
      *(uint *)((long)param_1 + 0xac) = uVar6;
      uVar9 = *(uint *)(param_1 + 10);
    }
    else {
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy((void *)param_1[0xc],(void *)(*plVar7 - uVar13),uVar13);
      uVar6 = *(uint *)(param_1 + 10);
      *(uint *)((long)param_1 + 0xac) = uVar6;
      uVar9 = uVar6;
    }
    uVar9 = uVar9 - *(int *)((long)param_1 + 0x172c);
    if (uVar5 <= uVar9) {
      uVar9 = uVar5;
    }
    uVar13 = (ulong)uVar6;
    param_1[0x13] = uVar13;
    *(uint *)((long)param_1 + 0x172c) = uVar9 + *(int *)((long)param_1 + 0x172c);
    if ((ulong)param_1[0x2e7] < uVar13) goto LAB_002189e4;
  }
  if (bVar3) {
    return 3;
  }
  plVar7 = (long *)*param_1;
  uVar5 = *(uint *)(plVar7 + 1);
  if (((param_2 & 0xfffffffb) == 0) || (uVar5 != 0)) {
    uVar9 = (int)param_1[0xd] + ~uVar6;
    if (uVar9 < uVar5) {
      uVar13 = (ulong)*(uint *)(param_1 + 10);
      if ((long)uVar13 <= param_1[0x13]) {
        uVar6 = uVar6 - *(uint *)(param_1 + 10);
        *(uint *)((long)param_1 + 0xac) = uVar6;
        param_1[0x13] = param_1[0x13] - uVar13;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar13),(ulong)uVar6);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        plVar7 = (long *)*param_1;
        uVar9 = (int)param_1[10] + uVar9;
        uVar5 = *(uint *)(plVar7 + 1);
      }
    }
    uVar6 = uVar5;
    if (uVar9 <= uVar5) {
      uVar6 = uVar9;
    }
    if (uVar6 == 0) goto LAB_00218b18;
    lVar10 = param_1[0xc];
    uVar13 = (ulong)uVar6;
    uVar9 = *(uint *)((long)param_1 + 0xac);
    *(uint *)(plVar7 + 1) = uVar5 - uVar6;
    pvVar12 = (void *)(lVar10 + (ulong)uVar9);
    memcpy(pvVar12,(void *)*plVar7,uVar13);
    if (*(int *)(plVar7[7] + 0x30) == 2) {
      lVar10 = FUN_00215640(plVar7[0xc],pvVar12,uVar6);
LAB_00218b40:
      plVar7[0xc] = lVar10;
    }
    else if (*(int *)(plVar7[7] + 0x30) == 1) {
      lVar10 = FUN_00215360(plVar7[0xc],pvVar12,uVar6);
      goto LAB_00218b40;
    }
    *plVar7 = *plVar7 + uVar13;
    plVar7[2] = plVar7[2] + uVar13;
    uVar6 = *(int *)((long)param_1 + 0xac) + uVar6;
    *(uint *)((long)param_1 + 0xac) = uVar6;
    uVar13 = (ulong)uVar6;
    if (uVar13 <= (ulong)param_1[0x2e7]) goto LAB_00218b7c;
  }
  else {
    if (param_1[0x13] == uVar13) {
      return 1;
    }
LAB_00218b18:
    uVar13 = (ulong)*(uint *)((long)param_1 + 0xac);
    if (uVar13 <= (ulong)param_1[0x2e7]) goto LAB_00218b7c;
  }
  param_1[0x2e7] = uVar13;
LAB_00218b7c:
  uVar8 = param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
  uVar5 = (uint)uVar8;
  if (0xfffe < uVar8) {
    uVar5 = 0xffff;
  }
  uVar6 = *(uint *)(param_1 + 10);
  if (uVar5 <= *(uint *)(param_1 + 10)) {
    uVar6 = uVar5;
  }
  uVar9 = (int)uVar13 - (int)param_1[0x13];
  if (uVar9 < uVar6) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 4 && uVar9 == 0) {
      return 0;
    }
    if (uVar5 < uVar9) {
      return 0;
    }
    if (*(int *)(*param_1 + 8) != 0) {
      return 0;
    }
  }
  uVar6 = uVar5;
  if (uVar9 <= uVar5) {
    uVar6 = uVar9;
  }
  if (param_2 == 4) {
    bVar3 = uVar9 <= uVar5 && *(int *)(*param_1 + 8) == 0;
  }
  else {
    bVar3 = false;
  }
  FUN_00219d30(param_1,param_1[0xc] + param_1[0x13],(ulong)uVar6,bVar3);
  lVar11 = *param_1;
  param_1[0x13] = param_1[0x13] + (ulong)uVar6;
  lVar10 = *(long *)(lVar11 + 0x38);
  FUN_00219ea0(lVar10);
  uVar5 = *(uint *)(lVar11 + 0x20);
  if (*(uint *)(lVar10 + 0x28) <= *(uint *)(lVar11 + 0x20)) {
    uVar5 = *(uint *)(lVar10 + 0x28);
  }
  if (uVar5 != 0) {
    uVar13 = (ulong)uVar5;
    memcpy(*(void **)(lVar11 + 0x18),*(void **)(lVar10 + 0x20),uVar13);
    *(ulong *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) + uVar13;
    *(ulong *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + uVar13;
    *(ulong *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + uVar13;
    *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) - uVar5;
    lVar11 = *(long *)(lVar10 + 0x28) - uVar13;
    *(long *)(lVar10 + 0x28) = lVar11;
    if (lVar11 == 0) {
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
    }
  }
  if (bVar3 == false) {
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


