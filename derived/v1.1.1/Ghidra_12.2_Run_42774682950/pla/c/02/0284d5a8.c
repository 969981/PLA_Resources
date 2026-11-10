/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284d5a8; name: FUN_0284d5a8
 */


void FUN_0284d5a8(long param_1,long *param_2,long *param_3,undefined4 param_4,undefined8 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  long *local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  long local_150 [12];
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  code *local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [104];
  long *local_58;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = (**(code **)(*param_2 + 0x10))(param_2,0x290,0x10);
  if (lVar10 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_02c4c634(lVar10,param_2);
  *(long **)(lVar10 + 8) = param_2;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x290;
  *(undefined8 *)(lVar10 + 0x20) = 0x10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = lVar10;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  FUN_01309a54(&local_f0,param_3);
  local_d0 = 0;
  lStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3 + 6,auStack_c0);
    local_e0 = param_3[2];
    local_d8 = (code *)param_3[3];
    local_d0 = param_3[4];
    lStack_c8 = param_3[5];
  }
  FUN_02c4cbd8(lVar10,&local_f0,param_4);
  pcVar13 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    lStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar13)(auStack_c0);
  }
  puVar7 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_170 = (long *)*puVar7;
      FUN_02a44274(lVar9 + 0xd8,&local_170);
    }
  }
  if (*param_3 == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0284dc38(&local_58);
  }
  local_168 = (code *)(param_3 + 2);
  local_170 = local_58;
  uVar12 = FUN_0284da90(&local_170);
  FUN_00249960(uVar12,param_1 + 0x10,0);
  if (local_170 != (long *)0x0) {
    lVar9 = local_170[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  pcVar13 = *(code **)(param_1 + 0x48);
  if (pcVar13 == (code *)0x0) {
    pcVar13 = (code *)param_5[2];
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*pcVar13)(param_1 + 0x60);
    pcVar13 = (code *)param_5[2];
  }
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(param_5 + 4,param_1 + 0x60);
    uVar12 = *param_5;
    uVar2 = param_5[1];
    uVar3 = param_5[3];
    *(undefined8 *)(param_1 + 0x50) = param_5[2];
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  lVar9 = *(long *)(param_1 + 8);
  local_170 = (long *)&LAB_0284ddac;
  local_168 = FUN_0284dfd0;
  local_160 = FUN_0284dfd4;
  local_158 = &LAB_0284dfe0;
  pcVar13 = *(code **)(lVar9 + 0x208);
  local_150[0] = param_1;
  if (pcVar13 == (code *)0x0) {
LAB_0284d808:
    (*local_160)(local_150,lVar9 + 0x220);
    *(code **)(lVar9 + 0x208) = local_168;
    *(undefined1 **)(lVar9 + 0x218) = local_158;
    *(code **)(lVar9 + 0x210) = local_160;
    *(undefined8 *)(lVar9 + 0x200) = local_170;
  }
  else {
    *(undefined8 *)(lVar9 + 0x210) = 0;
    *(undefined8 *)(lVar9 + 0x218) = 0;
    *(undefined8 *)(lVar9 + 0x200) = 0;
    *(undefined8 *)(lVar9 + 0x208) = 0;
    (*pcVar13)(lVar9 + 0x220);
    if (local_160 != (code *)0x0) goto LAB_0284d808;
  }
  pcVar13 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (long *)0x0;
    local_168 = (code *)0x0;
    (*pcVar13)(local_150);
  }
  lVar9 = *(long *)(param_1 + 8);
  local_170 = (long *)&LAB_0284dfec;
  local_168 = FUN_0284e458;
  local_160 = FUN_0284e45c;
  local_158 = &LAB_0284e468;
  pcVar13 = *(code **)(lVar9 + 0x188);
  local_150[0] = param_1;
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar13)(lVar9 + 0x1a0);
    if (local_160 == (code *)0x0) goto LAB_0284d8ac;
  }
  (*local_160)(local_150,lVar9 + 0x1a0);
  *(code **)(lVar9 + 0x188) = local_168;
  *(undefined1 **)(lVar9 + 0x198) = local_158;
  *(code **)(lVar9 + 400) = local_160;
  *(undefined8 *)(lVar9 + 0x180) = local_170;
LAB_0284d8ac:
  pcVar13 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (long *)0x0;
    local_168 = (code *)0x0;
    (*pcVar13)(local_150);
  }
  return;
}


