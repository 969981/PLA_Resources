/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ce3c; name: FUN_02e8ce3c
 */


void FUN_02e8ce3c(undefined8 *param_1)

{
  long *plVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_042a7d58;
  lVar5 = param_1[8];
  if ((lVar5 != 0) && (lVar8 = param_1[0x1b], lVar8 != 0)) {
    plVar10 = *(long **)(lVar5 + 0x28);
    uVar6 = *(uint *)(lVar5 + 0x30);
    plVar4 = plVar10 + uVar6;
    if ((uVar6 != 0) && (*plVar10 != lVar8)) {
      lVar9 = (ulong)uVar6 * 8;
      plVar7 = plVar10;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_02e8ce60;
        plVar10 = plVar7 + 1;
        plVar1 = plVar7 + 1;
        plVar7 = plVar10;
      } while (*plVar1 != lVar8);
    }
    if (plVar4 != plVar10) {
      if (1 < uVar6) {
        *plVar10 = plVar4[-1];
        uVar6 = *(uint *)(lVar5 + 0x30);
      }
      *(uint *)(lVar5 + 0x30) = uVar6 - 1;
      if (uVar6 - 1 == 0) {
        *(undefined4 *)(lVar5 + 0x3c) = 6;
      }
    }
  }
LAB_02e8ce60:
  lVar5 = param_1[9];
  param_1[8] = 0;
  if ((lVar5 != 0) && (lVar8 = param_1[0x1b], lVar8 != 0)) {
    plVar10 = *(long **)(lVar5 + 0x28);
    uVar6 = *(uint *)(lVar5 + 0x30);
    plVar4 = plVar10 + uVar6;
    if ((uVar6 != 0) && (*plVar10 != lVar8)) {
      lVar9 = (ulong)uVar6 * 8;
      plVar7 = plVar10;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_02e8ce6c;
        plVar10 = plVar7 + 1;
        plVar1 = plVar7 + 1;
        plVar7 = plVar10;
      } while (*plVar1 != lVar8);
    }
    if (plVar4 != plVar10) {
      if (1 < uVar6) {
        *plVar10 = plVar4[-1];
        uVar6 = *(uint *)(lVar5 + 0x30);
      }
      *(uint *)(lVar5 + 0x30) = uVar6 - 1;
      if (uVar6 - 1 == 0) {
        *(undefined4 *)(lVar5 + 0x3c) = 6;
      }
    }
  }
LAB_02e8ce6c:
  lVar5 = param_1[10];
  param_1[9] = 0;
  if (lVar5 != 0) {
    plVar10 = (long *)*DAT_0440a158;
    uVar6 = *(uint *)(DAT_0440a158 + 1);
    plVar4 = plVar10;
    if ((uVar6 != 0) && (*plVar10 != lVar5)) {
      lVar8 = (ulong)uVar6 * 8;
      plVar7 = plVar10;
      do {
        lVar8 = lVar8 + -8;
        plVar4 = plVar10 + uVar6;
        if (lVar8 == 0) break;
        plVar4 = plVar7 + 1;
        plVar1 = plVar7 + 1;
        plVar7 = plVar4;
      } while (*plVar1 != lVar5);
    }
    if ((((plVar4 != (long *)0x0) && (plVar10 + uVar6 != plVar4)) &&
        ((sVar2 = *(short *)(lVar5 + 0x40), sVar2 == 0 ||
         (*(short *)(lVar5 + 0x40) = sVar2 + -1, sVar2 == 1)))) && (*(short *)(lVar5 + 0x42) == 0))
    {
      FUN_02edc4dc();
      plVar4 = (long *)param_1[0x1e];
      goto joined_r0x02e8cfa4;
    }
  }
  plVar4 = (long *)param_1[0x1e];
joined_r0x02e8cfa4:
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)param_1[0x1c];
  }
  else {
    (**(code **)(*plVar4 + 0x18))();
    param_1[0x1e] = 0;
    plVar4 = (long *)param_1[0x1c];
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (param_1[0x21] != 0) {
    FUN_02e8d1bc(param_1[0x21],param_1);
    FUN_02e7b4e0(param_1[0x21]);
    param_1[0x21] = 0;
  }
  plVar10 = (long *)param_1[0x22];
  plVar4 = plVar10;
  if (*(int *)(param_1 + 0x23) != 0) {
    do {
      *(int *)(*plVar4 + 0x84) = *(int *)(*plVar4 + 0x84) + -1;
      plVar7 = plVar4 + 1;
      FUN_02eb939c(*plVar4);
      plVar10 = (long *)param_1[0x22];
      plVar4 = plVar7;
    } while (plVar7 != plVar10 + *(uint *)(param_1 + 0x23));
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (plVar10 == (long *)0x0) {
    lVar5 = param_1[0xc];
  }
  else {
    *(undefined4 *)(param_1 + 0x23) = 0;
    (*DAT_0442d150)(0);
    param_1[0x22] = 0;
    *(undefined4 *)((long)param_1 + 0x11c) = 0;
    lVar5 = param_1[0xc];
  }
  if (lVar5 != 0) {
    iVar3 = *(int *)(lVar5 + 0x10) + -1;
    *(int *)(lVar5 + 0x10) = iVar3;
    if (iVar3 == 0) {
      FUN_02ea7e60(lVar5);
      (*DAT_0442d150)(0,lVar5);
    }
    param_1[0xc] = 0;
  }
  *param_1 = &PTR_FUN_042a72a0;
  if (param_1[5] != 0) {
    (*DAT_0442d150)(1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (*DAT_0442d150)(1);
  }
  param_1[4] = 0;
  *param_1 = &PTR_FUN_042a9740;
  return;
}


