/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0264752c; name: FUN_0264752c
 */


void FUN_0264752c(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  
  if ((*param_1 == '\0') || (uVar6 = FUN_01ac8150(param_1 + 0x10,param_2), (uVar6 & 1) == 0)) {
    local_88 = 0;
    uStack_80 = 0x3f80000000000000;
    local_98 = 0;
    local_90 = (long *)0x0;
    local_70 = 0;
    local_78 = 0x3f800000;
    local_a8 = 0;
    local_a0 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    uVar8 = param_2[3];
    uVar11 = param_2[1];
    local_b0 = (undefined8 *)0x0;
    uVar9 = *param_2;
    uVar12 = param_2[2];
    FUN_00b636fc(&local_b0,param_2 + 4);
    FUN_008c4b3c(&local_a0,param_2 + 6);
    plVar14 = (long *)param_2[8];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    if (local_90 != (long *)0x0) {
      lVar10 = *local_90;
      local_90 = plVar14;
      (**(code **)(lVar10 + 0x20))();
      plVar14 = local_90;
    }
    local_90 = plVar14;
    local_88 = param_2[9];
    uStack_80 = param_2[10];
    pcVar13 = param_1 + 0x30;
    local_78 = *(undefined4 *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    if (*param_1 == '\0') {
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      FUN_00b636fc(pcVar13,&local_b0);
      pcVar13 = param_1 + 0x40;
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
      param_1[0x4c] = '\0';
      param_1[0x4d] = '\0';
      param_1[0x4e] = '\0';
      param_1[0x4f] = '\0';
      FUN_008c4b3c(pcVar13,&local_a0);
      *(long **)(param_1 + 0x50) = local_90;
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x68) = local_78;
      *(undefined8 *)(param_1 + 0x58) = local_88;
      *(undefined8 *)(param_1 + 0x60) = uStack_80;
      param_1[0x80] = '\0';
      param_1[0x81] = '\0';
      param_1[0x82] = '\0';
      param_1[0x83] = '\0';
      param_1[0x84] = '\0';
      param_1[0x85] = '\0';
      param_1[0x86] = '\0';
      param_1[0x87] = '\0';
      *(undefined4 *)(param_1 + 0x70) = local_70;
      pcVar13 = param_1 + 0x78;
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      FUN_00b63bec(pcVar13,&local_68);
      *param_1 = '\x01';
      puVar4 = local_68;
    }
    else {
      FUN_00b636fc(pcVar13,&local_b0);
      FUN_008c4b3c(param_1 + 0x40,&local_a0);
      plVar14 = local_90;
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))(local_90);
      }
      plVar7 = *(long **)(param_1 + 0x50);
      *(long **)(param_1 + 0x50) = plVar14;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x68) = local_78;
      *(undefined8 *)(param_1 + 0x58) = local_88;
      *(undefined8 *)(param_1 + 0x60) = uStack_80;
      *(undefined4 *)(param_1 + 0x70) = local_70;
      FUN_00b63bec(param_1 + 0x78,&local_68);
      puVar4 = local_68;
    }
    local_68 = puVar4;
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
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    puVar4 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
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
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
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
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
  }
  return;
}


