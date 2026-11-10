/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba24c4; name: FUN_02ba24c4
 */


void FUN_02ba24c4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong local_c8;
  char *local_c0;
  ulong local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  long local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long lStack_48;
  
  FUN_02b8c2a8(param_1[0xb]);
  local_84 = 0;
  local_a8 = 1;
  uStack_a0 = 2;
  local_94 = 0x300000002;
  local_b8 = 0;
  local_b0 = (long *)0x0;
  local_8c = 0x500000004;
  local_98 = *(undefined4 *)(param_2 + 0x30);
  local_c8 = *(ulong *)(param_2 + 0x38);
  local_c0 = *(char **)(param_2 + 0x40);
  local_80 = 0x200000009;
  (**(code **)(*param_1 + 0x40))(&local_78,param_1,&local_c8,2,0,0);
  plVar8 = param_1 + 0x1b;
  plVar6 = (long *)*plVar8;
  *plVar8 = 0;
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_1[0x1b] = local_78;
  param_1[0x24] = 0;
  *(int *)(param_1 + 0x25) = (int)*(undefined8 *)(param_2 + 0x38);
  *(int *)((long)param_1 + 300) = (int)*(undefined8 *)(param_2 + 0x40);
  if (*(char *)(param_2 + 0x2f) != '\0') {
    plVar6 = param_1 + 0x1d;
    *plVar6 = 1;
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffffffffffff00;
    puVar7 = (ulong *)FUN_02bc0470(0,local_78 + 0x58);
    local_c8 = *puVar7;
    local_c0 = (char *)puVar7[1];
    puVar7 = (ulong *)FUN_02bc0470(1,param_1[0x1b] + 0x58);
    local_b8 = *puVar7;
    local_b0 = (long *)puVar7[1];
    FUN_02b7e270(param_1[0xb],plVar6,&local_c8,2);
    lVar10 = param_1[0xb];
    local_68 = lVar10 + 0x10;
    local_78 = *(undefined8 *)(lVar10 + 8);
    local_70 = *(ulong *)(lVar10 + 0x6098);
    auVar14 = FUN_02b9d2b4(*(undefined8 *)(lVar10 + 0x60c0),&local_78,0);
    lVar10 = param_1[0xb];
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar14;
    uVar11 = 0;
    if (((auVar14._0_8_ & 0xff) != 0) && ((char)*plVar6 != '\0')) {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x6030) + (ulong)*(uint *)((long)param_1 + 0xec) * 0x20)
      ;
      (*DAT_043f0298)(lVar10,auVar14._8_8_,&local_78);
      *(undefined4 *)(lVar10 + 400) = (undefined4)local_78;
      lVar10 = param_1[0xb];
      uVar11 = (undefined4)local_78;
    }
    *(undefined4 *)(param_1 + 0x26) = uVar11;
    local_78 = *(long *)(lVar10 + 8);
    local_70 = *(ulong *)(lVar10 + 0x6098);
    local_68 = lVar10 + 0x10;
    auVar14 = FUN_02b9d2b4(*(undefined8 *)(lVar10 + 0x60c0),&local_78,0);
    *(undefined1 (*) [16])(param_1 + 0x22) = auVar14;
    if ((auVar14._8_8_ != 0) && ((auVar14._0_8_ & 0xff) != 0)) {
      *(undefined2 *)(auVar14._8_8_ + 0x40) = 1;
    }
    local_68 = 0;
    lVar10 = param_1[0xb] + 0x10;
    local_70 = local_70 & 0xffffffff;
    local_60 = 1;
    (*DAT_043f0068)(lVar10,0x52,&local_78);
    (*DAT_043f0068)(lVar10,0x55,(ulong)&local_78 | 4);
    (*DAT_043f0068)(lVar10,0x5c,&local_70);
    if (0 < *(int *)(param_2 + 0x4c)) {
      local_78 = CONCAT44(local_78._4_4_,*(int *)(param_2 + 0x4c));
    }
    if (0 < *(int *)(param_2 + 0x50)) {
      local_78 = CONCAT44(*(int *)(param_2 + 0x50),(undefined4)local_78);
    }
    if (0 < *(int *)(param_2 + 0x54)) {
      local_70 = CONCAT44(local_70._4_4_,*(int *)(param_2 + 0x54));
    }
    if (0 < *(int *)(param_2 + 0x58)) {
      local_68 = (long)*(int *)(param_2 + 0x58);
    }
    lVar10 = param_1[0xb];
    lStack_48 = lVar10 + 0x10;
    local_58 = *(undefined8 *)(lVar10 + 8);
    local_50 = *(undefined8 *)(lVar10 + 0x6098);
    auVar14 = FUN_02b9c10c(*(undefined8 *)(lVar10 + 0x60a0),&local_58,&local_78);
    *(undefined1 (*) [16])(param_1 + 0x1e) = auVar14;
    if ((char)param_1[0x1d] != '\0') {
      (*DAT_043f02b0)(*(undefined8 *)
                       (*(long *)(param_1[0xb] + 0x6030) +
                       (ulong)*(uint *)((long)param_1 + 0xec) * 0x20),*(int *)(param_2 + 0x48) + 1);
    }
  }
  FUN_02bc128c(param_1[0x13],param_1 + 0x1e);
  local_c8 = 0x408068162787a77;
  local_c0 = "Final";
  local_b8 = 5;
  local_b0 = (long *)0x0;
  (**(code **)(*param_1 + 0x28))(&local_78,param_1,&local_c8);
  plVar6 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  lVar10 = local_78;
  local_78 = 0;
  param_1[0x1c] = lVar10;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
    lVar10 = param_1[0x1c];
  }
  if (*(int *)(lVar10 + 0x19c) != 0x7ffffffe) {
    *(undefined4 *)(lVar10 + 0x19c) = 0x7ffffffe;
    *(undefined1 *)(*(long *)(*(long *)(lVar10 + 0x58) + 0x78) + 0xa8) = 1;
    lVar10 = param_1[0x1c];
  }
  plVar6 = *(long **)(lVar10 + 0x80);
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_c8 = local_c8 & 0xffffffffffffff00;
  FUN_02bae22c(plVar6,0,plVar8,0xffffffff,&local_c8);
  plVar12 = (long *)param_1[1];
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x38,8);
  if (plVar8 == (long *)0x0) {
    lVar13 = 0;
    lVar10 = 0;
    plVar12 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *plVar8 = param_1[0xb];
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[6] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    *(undefined4 *)(plVar8 + 1) = 0x10;
    local_b8 = local_b8 & 0xffffffff00000000;
    local_c8 = 0x20;
    local_c0 = (char *)0x10;
    (**(code **)(*param_1 + 0x30))(&local_78,param_1,&local_c8,2,0,0);
    plVar9 = (long *)plVar8[2];
    plVar8[2] = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    plVar8[2] = local_78;
    plVar8[3] = 0;
    plVar8[5] = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar10 = 8;
    lVar13 = 0x38;
  }
  FUN_02ba2a78(param_1 + 0x17,plVar8);
  param_1[0x18] = (long)plVar12;
  param_1[0x19] = lVar13;
  param_1[0x1a] = lVar10;
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


