/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e2110; name: FUN_025e2110
 */


void FUN_025e2110(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  
  if (*param_1 != '\0') {
    uVar6 = FUN_01ac8150(param_1 + 0x10,param_2);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x78) != 0) && (FUN_00b911c4(&local_e0), local_e0 != (long *)0x0)) {
      local_e0[0x153] = local_e0[0x153] & 0xfffffffffffffff1;
      lVar9 = local_e0[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_e0 + 0x20))();
      }
    }
  }
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_80 = 0;
  local_88 = 0x3f800000;
  local_b8 = 0;
  local_b0 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_c8 = param_2[3];
  local_d8 = param_2[1];
  local_c0 = (undefined8 *)0x0;
  local_e0 = (long *)*param_2;
  local_d0 = param_2[2];
  FUN_00b636fc(&local_c0,param_2 + 4);
  FUN_008c4b3c(&local_b0,param_2 + 6);
  plVar8 = (long *)param_2[8];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if (local_a0 != (long *)0x0) {
    lVar9 = *local_a0;
    local_a0 = plVar8;
    (**(code **)(lVar9 + 0x20))();
    plVar8 = local_a0;
  }
  local_a0 = plVar8;
  local_98 = param_2[9];
  uStack_90 = param_2[10];
  pcVar10 = param_1 + 0x30;
  local_88 = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0x20) = local_d0;
  *(undefined8 *)(param_1 + 0x28) = local_c8;
  *(long **)(param_1 + 0x10) = local_e0;
  *(undefined8 *)(param_1 + 0x18) = local_d8;
  if (*param_1 == '\0') {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    FUN_00b636fc(pcVar10,&local_c0);
    pcVar10 = param_1 + 0x40;
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    FUN_008c4b3c(pcVar10,&local_b0);
    *(long **)(param_1 + 0x50) = local_a0;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x68) = local_88;
    *(undefined8 *)(param_1 + 0x58) = local_98;
    *(undefined8 *)(param_1 + 0x60) = uStack_90;
    param_1[0x80] = '\0';
    param_1[0x81] = '\0';
    param_1[0x82] = '\0';
    param_1[0x83] = '\0';
    param_1[0x84] = '\0';
    param_1[0x85] = '\0';
    param_1[0x86] = '\0';
    param_1[0x87] = '\0';
    *(undefined4 *)(param_1 + 0x70) = local_80;
    pcVar10 = param_1 + 0x78;
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    FUN_00b63bec(pcVar10,&local_78);
    *(undefined8 *)(param_1 + 0x88) = local_68;
    *(undefined8 *)(param_1 + 0x90) = uStack_60;
    *param_1 = '\x01';
    puVar4 = local_78;
  }
  else {
    FUN_00b636fc(pcVar10,&local_c0);
    FUN_008c4b3c(param_1 + 0x40,&local_b0);
    plVar8 = local_a0;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x18))(local_a0);
    }
    plVar7 = *(long **)(param_1 + 0x50);
    *(long **)(param_1 + 0x50) = plVar8;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x68) = local_88;
    *(undefined8 *)(param_1 + 0x58) = local_98;
    *(undefined8 *)(param_1 + 0x60) = uStack_90;
    *(undefined4 *)(param_1 + 0x70) = local_80;
    FUN_00b63bec(param_1 + 0x78,&local_78);
    *(undefined8 *)(param_1 + 0x88) = local_68;
    *(undefined8 *)(param_1 + 0x90) = uStack_60;
    puVar4 = local_78;
  }
  local_78 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  puVar4 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  puVar4 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  return;
}


