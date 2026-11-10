/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016135f4; name: FUN_016135f4
 */


void FUN_016135f4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined4 local_50;
  char *local_48;
  
  plVar12 = *(long **)(param_1 + 8);
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
  puVar13 = PTR_DAT_0437a508;
  puVar5 = PTR_DAT_04379528;
  puVar4 = PTR_DAT_04379520;
  if (plVar8 == (long *)0x0) {
    local_68 = 0;
    local_60 = 0;
    local_70 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      puVar13 = PTR_DAT_0437a508;
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01613a44;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = (long)(puVar13 + 0x10);
    plVar8[1] = 0;
    local_68 = 0x30;
    local_60 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    local_70 = plVar12;
  }
  local_78 = (long *)0x0;
  FUN_01615550(param_1 + 0x58,plVar8);
  *(long **)(param_1 + 0x60) = local_70;
  *(undefined8 *)(param_1 + 0x68) = local_68;
  *(undefined8 *)(param_1 + 0x70) = local_60;
  FUN_01615550(&local_78,0);
  local_a8 = (long *)0x391ef3f;
  FUN_009f1b84(&local_78,&local_a8);
  lVar9 = *(long *)(param_1 + 0x58);
  uVar10 = FUN_00938764(lVar9,1,&local_78,0,*(undefined8 *)(param_1 + 8),0);
  if (((uVar10 & 1) != 0) && (plVar8 = *(long **)(lVar9 + 0x28), plVar8 != (long *)0x0)) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01613a48;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  plVar12 = *(long **)(param_1 + 8);
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
  if (plVar8 == (long *)0x0) {
    local_98 = 0;
    local_90 = 0;
    local_a0 = (long *)0x0;
  }
  else {
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_01613a44:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = (long)(puVar13 + 0x10);
    plVar8[1] = 0;
    local_98 = 0x30;
    local_90 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    local_a0 = plVar12;
  }
  local_a8 = (long *)0x0;
  FUN_01615550(param_1 + 0x78,plVar8);
  *(long **)(param_1 + 0x80) = local_a0;
  *(undefined8 *)(param_1 + 0x88) = local_98;
  *(undefined8 *)(param_1 + 0x90) = local_90;
  FUN_01615550(&local_a8,0);
  local_48 = "bin/event/event_progress/ginkgo/ginkgo_item_table.bin";
  FUN_009f1b84(&local_a8,&local_48);
  plVar8 = local_78;
  local_78 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar8 = local_58;
  local_78 = local_a8;
  local_a8 = (long *)0x0;
  local_70 = local_a0;
  local_68 = local_98;
  local_60 = local_90;
  local_58 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_58 = local_88;
  local_88 = (long *)0x0;
  local_50 = local_80;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  lVar9 = *(long *)(param_1 + 0x78);
  uVar10 = FUN_00938764(lVar9,1,&local_78,0,*(undefined8 *)(param_1 + 8),0);
  if (((uVar10 & 1) != 0) && (plVar8 = *(long **)(lVar9 + 0x28), plVar8 != (long *)0x0)) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01613a48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


