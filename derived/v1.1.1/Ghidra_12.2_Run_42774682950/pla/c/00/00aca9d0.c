/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aca9d0; name: FUN_00aca9d0
 */


void FUN_00aca9d0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  long *local_58;
  
  if (param_3 == (long *)0x0) {
    param_3 = *(long **)(param_1 + 8);
  }
  FUN_009c69bc(&local_58,param_1);
  plVar8 = local_58;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x360,0x10);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  local_170 = (long *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_02a99684(plVar12,param_2,1,&local_170,1);
  pcVar6 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
    pcVar6 = local_158;
  }
  else {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar6)(auStack_c0);
    pcVar6 = local_158;
  }
  local_158 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  plVar12[1] = (long)param_3;
  plVar12[2] = (long)plVar12;
  plVar12[3] = 0x360;
  plVar12[4] = 0x10;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar3 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 9;
  }
  (**(code **)(*plVar3 + 0xb8))(plVar3,plVar8);
  local_170 = (long *)0x0;
  uStack_168 = 0;
  FUN_009ad580(&local_170,plVar8 + 99);
  (**(code **)(*plVar3 + 0xc0))(plVar3,&local_170);
  plVar9 = local_170;
  if (local_170 != (long *)0x0) {
    plVar1 = local_170 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_170[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_180 = (long *)*plVar9;
      FUN_02a44274(lVar11 + 0xd8,&local_180);
    }
  }
  (**(code **)(*plVar3 + 200))(plVar3,*(undefined1 *)((long)plVar8 + 0x33b));
  (**(code **)(*plVar3 + 0x90))(plVar3);
  local_180 = plVar12;
  FUN_02a4dad4(plVar8 + 0x1e,&local_180);
  if (local_180 != (long *)0x0) {
    lVar11 = local_180[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_180 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  local_170 = (long *)0x0;
  uStack_168 = 0;
  FUN_008802f0(&local_170,plVar12 + 0xb);
  local_180 = (long *)0x0;
  uStack_178 = 0;
  FUN_00ab3c84(&local_180,&local_170);
  plVar8 = local_170;
  if (local_170 != (long *)0x0) {
    plVar12 = local_170 + 1;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_170[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = (long *)*plVar8;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  FUN_00ab196c(param_1 + 0x4a0,&local_180);
  plVar8 = local_180;
  if (local_180 != (long *)0x0) {
    plVar12 = local_180 + 1;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_180[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_170 = (long *)*plVar8;
      FUN_02a44274(lVar11 + 0xd8,&local_170);
    }
  }
  return;
}


