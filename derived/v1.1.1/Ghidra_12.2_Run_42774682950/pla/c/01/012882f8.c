/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012882f8; name: FUN_012882f8
 */


void FUN_012882f8(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  long *local_c0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  uint local_68;
  undefined1 local_64;
  long *local_60;
  undefined1 *puStack_58;
  char *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined4 local_38;
  
  local_a8 = 3;
  local_a0 = 0x98967f00000000;
  local_98 = 7;
  local_64 = 1;
  local_80 = &DAT_cbf29ce484222645;
  local_78 = &DAT_cbf29ce484222645;
  local_90 = (long *)0x0;
  puStack_88 = &DAT_cbf29ce484222645;
  local_70 = &DAT_cbf29ce484222645;
  local_68 = 0;
  local_40 = (long *)0x0;
  local_38 = 0;
  local_60 = (long *)0x0;
  puStack_58 = &DAT_cbf29ce484222645;
  local_50 = "";
  uStack_48 = 0;
  FUN_00d58a08(local_c0,*(undefined8 *)(param_1 + 0x1a8),0);
  plVar3 = local_90;
  local_90 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar11 = plVar3 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = local_60;
  local_90 = local_c0[0];
  local_68 = local_68 & 0xffff;
  local_64 = 0;
  local_78 = (undefined1 *)0xb04cc27b5a91b547;
  local_70 = (undefined1 *)0xb04cc17b5a91b394;
  plVar11 = *(long **)(*(long *)(param_1 + 0x1a8) + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = local_40;
  local_40 = (long *)0x0;
  puStack_58 = (undefined1 *)0x863cc7f464823e95;
  local_50 = "pane_N_pos_multiple_00";
  uStack_48 = 0x16;
  local_60 = plVar11;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  local_40 = (long *)0x0;
  local_ac = 0;
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(local_c0);
    FUN_010db7c0(local_c0[0],0,param_3,&local_ac);
    if (local_c0[0] != (long *)0x0) {
      lVar10 = local_c0[0][0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01288538;
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(local_c0);
    plVar3 = local_c0[0];
    uVar7 = FUN_0111d41c(local_c0[0]);
    puVar9 = (undefined4 *)FUN_0111d434(plVar3,uVar7,param_3);
    local_ac = *puVar9;
    if (local_c0[0] != (long *)0x0) {
      lVar10 = local_c0[0][0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01288538:
      if (iVar8 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_c0[0] + 0x20))();
        uVar7 = local_ac;
        uVar6 = local_a8;
        goto joined_r0x01288540;
      }
    }
  }
  uVar7 = local_ac;
  uVar6 = local_a8;
joined_r0x01288540:
  local_ac = uVar7;
  if (((short)local_ac == 0) || (local_ac._2_2_ = (short)((uint)uVar7 >> 0x10), local_ac._2_2_ == 0)
     ) {
    local_a8 = uVar6;
    FUN_012879b8(param_1);
  }
  else {
    local_a8._6_2_ = (undefined2)((ulong)uVar6 >> 0x30);
    local_a8._0_6_ = CONCAT24(local_ac._2_2_,(int)uVar6);
    FUN_02c4fb44(local_c0);
    uVar7 = FUN_02c4fc60(local_c0,0x1d);
    local_a0 = CONCAT44(local_a0._4_4_,uVar7);
    FUN_02c4fc5c(local_c0);
    FUN_00d66128(*(undefined8 *)(param_1 + 0x1b0),&local_a8);
    FUN_0128f690(*(undefined8 *)(param_1 + 0x1a8));
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    plVar3 = local_60 + 10;
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar3 = local_90 + 10;
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  return;
}


