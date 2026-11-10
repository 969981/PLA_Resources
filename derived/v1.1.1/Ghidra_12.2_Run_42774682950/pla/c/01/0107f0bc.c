/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107f0bc; name: FUN_0107f0bc
 */


void FUN_0107f0bc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined8 local_60;
  long local_58;
  long *local_50;
  undefined2 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (long *)0x0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3 + 6,auStack_c0);
    local_e0 = param_3[2];
    local_d8 = (code *)param_3[3];
    local_d0 = param_3[4];
    uStack_c8 = param_3[5];
  }
  local_60 = param_3[1];
  lVar12 = *(long *)(*(long *)PTR_DAT_0437e368 + 8);
  uVar8 = FUN_0094cba4(lVar12 + 8);
  if ((uVar8 & 1) == 0) {
    lVar12 = 0;
  }
  plVar13 = (long *)*param_3;
  local_58 = lVar12;
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0107f4a0;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_50 != (long *)0x0) {
    lVar12 = local_50[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      lVar12 = *local_50;
      local_50 = plVar13;
      (**(code **)(lVar12 + 0x20))();
      plVar13 = local_50;
    }
  }
  local_50 = plVar13;
  local_48 = *(undefined2 *)(param_3 + 0x12);
  local_40 = param_3[0x13];
  plVar13 = (long *)param_3[1];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x1a0,0x10);
  if (lVar10 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_0107cf6c(lVar10,&local_e0);
  *(long **)(lVar10 + 8) = plVar13;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x1a0;
  *(undefined8 *)(lVar10 + 0x20) = 0x10;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  *param_1 = lVar10;
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_0107f4a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar13 = *(long **)(lVar12 + 0xf8);
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar13[0x11];
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = plVar13 + 10;
  do {
    iVar7 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  if (plVar11[0xc] == plVar11[0xd]) {
    FUN_010804a8(plVar11 + 0xb,param_1);
  }
  else {
    FUN_01080308(plVar11 + 0xe,plVar11[0xc],param_1);
    plVar11[0xc] = plVar11[0xc] + 8;
  }
  plVar13 = plVar11 + 10;
  do {
    iVar7 = (int)*plVar13 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  pcVar5 = local_d8;
  if (local_50 != (long *)0x0) {
    lVar12 = local_50[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
      pcVar5 = local_d8;
    }
  }
  if (pcVar5 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  return;
}


