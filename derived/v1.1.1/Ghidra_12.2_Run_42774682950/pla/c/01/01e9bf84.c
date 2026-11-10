/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9bf84; name: FUN_01e9bf84
 */


void FUN_01e9bf84(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined1 in_q3 [16];
  undefined8 uVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50 [3];
  long *local_38;
  long local_28;
  
  uVar14 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0108d5c0(local_50,param_2[0x41]);
  if (local_50[0] == (long *)0xa570af3d0e1f6bc1) {
    uVar12 = 3;
  }
  else if (local_50[0] == (long *)0x2a660b626de4810e) {
    uVar12 = 1;
  }
  else if (local_50[0] == (long *)0x8d5ad3ec876f52db) {
    uVar12 = 2;
  }
  else {
    uVar12 = 0;
  }
  *(undefined4 *)param_1 = uVar12;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  pcVar8 = (char *)param_2[0x41];
  if (*pcVar8 == '\0') {
    piVar9 = *(int **)(pcVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(pcVar8 + 8);
    }
    uVar3 = *(ushort *)((long)piVar9 + (0x62 - (long)*piVar9));
  }
  else {
    piVar9 = *(int **)(pcVar8 + 0x18);
    uVar3 = *(ushort *)((long)piVar9 + (0x5e - (long)*piVar9));
  }
  *(undefined4 *)(param_1 + 1) =
       *(undefined4 *)
        ((long)((long)piVar9 + (ulong)uVar3) + (ulong)*(uint *)((long)piVar9 + (ulong)uVar3) + 4);
  if (*pcVar8 == '\0') {
    piVar9 = *(int **)(pcVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(pcVar8 + 8);
    }
    uVar3 = *(ushort *)((long)piVar9 + (0x62 - (long)*piVar9));
  }
  else {
    piVar9 = *(int **)(pcVar8 + 0x18);
    uVar3 = *(ushort *)((long)piVar9 + (0x5e - (long)*piVar9));
  }
  *(undefined4 *)((long)param_1 + 0xc) =
       *(undefined4 *)
        ((long)((long)piVar9 + (ulong)uVar3) + (ulong)*(uint *)((long)piVar9 + (ulong)uVar3) + 8);
  FUN_0108d70c(local_50);
  if ((long)local_50[0] < 0x90c21479b7b68be) {
    if (local_50[0] == (long *)0xe6c700ec50c2ddc7) {
      uVar12 = 3;
    }
    else if (local_50[0] == (long *)0xb5d2a5bc68771fb1) {
      uVar12 = 6;
    }
    else {
      if (local_50[0] != (long *)0xca2f14e76502a4dd) goto LAB_01e9c0f8;
      uVar12 = 1;
    }
  }
  else if ((long)local_50[0] < 0x2bf44522a4f8d7f5) {
    if (local_50[0] == (long *)0x90c21479b7b68be) {
      uVar12 = 4;
    }
    else {
LAB_01e9c0f8:
      uVar12 = 0;
    }
  }
  else if (local_50[0] == (long *)0x2bf44522a4f8d7f5) {
    uVar12 = 2;
  }
  else if (local_50[0] == (long *)0x611151121b429d7e) {
    uVar12 = 7;
  }
  else {
    if (local_50[0] != (long *)0x7e16edb6f6dd8bf4) goto LAB_01e9c0f8;
    uVar12 = 5;
  }
  *(undefined4 *)((long)param_1 + 4) = uVar12;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar12 = FUN_0108d858(param_2[0x41],0);
  *(undefined4 *)(param_1 + 2) = uVar12;
  uVar12 = FUN_0108d858(param_2[0x41],1);
  *(undefined4 *)((long)param_1 + 0x14) = uVar12;
  uVar12 = FUN_0108d858(param_2[0x41],2);
  *(undefined4 *)(param_1 + 3) = uVar12;
  uVar12 = FUN_0108d858(param_2[0x41],3);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar12;
  pcVar8 = (char *)param_2[0x41];
  if (*pcVar8 == '\0') {
    piVar9 = *(int **)(pcVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(pcVar8 + 8);
    }
    uVar12 = 0;
    if (0x16 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[0xb];
      goto joined_r0x01e9c1b0;
    }
  }
  else {
    piVar9 = *(int **)(pcVar8 + 0x18);
    uVar12 = 0;
    if (0x14 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[10];
joined_r0x01e9c1b0:
      uVar12 = 0;
      if ((ulong)uVar3 != 0) {
        uVar12 = *(undefined4 *)((long)piVar9 + (ulong)uVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar12;
  if (*pcVar8 == '\0') {
    piVar9 = *(int **)(pcVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(pcVar8 + 8);
    }
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0x1b) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xd], uVar11 == 0))
    goto LAB_01e9c1e4;
LAB_01e9c4d0:
    uVar12 = *(undefined4 *)((long)piVar9 + uVar11);
  }
  else {
    piVar9 = *(int **)(pcVar8 + 0x18);
    if ((0x16 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xb], uVar11 != 0))
    goto LAB_01e9c4d0;
LAB_01e9c1e4:
    uVar12 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar12;
  if (*pcVar8 == '\0') {
    piVar9 = *(int **)(pcVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(pcVar8 + 8);
    }
    uVar12 = 0;
    if (0x68 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[0x34];
      goto joined_r0x01e9c244;
    }
  }
  else {
    piVar9 = *(int **)(pcVar8 + 0x18);
    uVar12 = 0;
    if (100 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[0x32];
joined_r0x01e9c244:
      uVar12 = 0;
      if ((ulong)uVar3 != 0) {
        uVar12 = *(undefined4 *)((long)piVar9 + (ulong)uVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 5) = uVar12;
  if (*pcVar8 == '\0') {
    piVar9 = *(int **)(pcVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(pcVar8 + 8);
      if (0x40 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
        uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[0x20];
        goto joined_r0x01e9c3f4;
      }
    }
    else if (0x40 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0x20];
      bVar6 = false;
      if (uVar11 == 0) goto LAB_01e9c284;
      cVar2 = *(char *)((long)piVar9 + uVar11);
      goto LAB_01e9c27c;
    }
  }
  else {
    piVar9 = *(int **)(pcVar8 + 0x18);
    if (0x44 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[0x22];
joined_r0x01e9c3f4:
      if ((ulong)uVar3 != 0) {
        cVar2 = *(char *)((long)piVar9 + (ulong)uVar3);
LAB_01e9c27c:
        bVar6 = cVar2 != '\0';
        goto LAB_01e9c284;
      }
    }
  }
  bVar6 = false;
LAB_01e9c284:
  *(bool *)((long)param_1 + 0x2c) = bVar6;
  (**(code **)(*param_2 + 0x18))(local_50,param_2);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01eacb9c(&local_60,local_50);
  plVar5 = local_50[0];
  if (local_50[0] != (long *)0x0) {
    plVar1 = local_50[0] + 1;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *plVar5;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  FUN_01eacf70(param_1 + 6,&local_60);
  puVar4 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar9 = (int *)(local_60 + 1);
    do {
      iVar7 = *piVar9;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar6) {
        *piVar9 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_50[0] = (long *)*puVar4;
      FUN_02a44274(lVar10 + 0xd8,local_50);
    }
  }
  FUN_00956dac(local_50,param_2 + 0x35);
  (**(code **)(*local_50[0] + 0x40))();
  param_1[9] = uVar14;
  param_1[8] = uVar13;
  if (local_50[0] != (long *)0x0) {
    lVar10 = local_50[0][0xb];
    piVar9 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar9;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar6) {
        *piVar9 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_50[0] + 0x20))();
    }
  }
  return;
}


