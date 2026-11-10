/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181bb88; name: FUN_0181bb88
 */


undefined8 FUN_0181bb88(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  code *local_118;
  code *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 local_58;
  
  if ((char)param_1[0x74] != '\0') {
    return 0;
  }
  if ((char)param_1[0x4c] == '\0') {
    uVar9 = FUN_01f56528(0x40800000,param_2,(int)param_1[0x46],&local_80);
  }
  else {
    uVar9 = FUN_01f566c8(0x40800000,param_2,(int)param_1[0x46],param_1 + 0x4e,&local_80);
  }
  if ((uVar9 & 1) == 0) {
    if ((char)param_1[0x4c] == '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x4c) = 0;
    return 0;
  }
  uVar9 = FUN_0181b79c(param_1,&local_80);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  param_1[0x4a] = local_80;
  param_1[0x4b] = lStack_78;
  if ((char)param_1[0x48] == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  local_90 = *(long *)PTR_DAT_0437a100;
  local_88 = *(long *)(PTR_DAT_0437a100 + 8);
  param_1[0x4f] = lStack_78;
  param_1[0x4e] = local_80;
  param_1[0x50] = local_70;
  param_1[0x52] = local_90;
  param_1[0x53] = local_88;
  param_1[0x51] = local_98;
  param_1[0x54] = 0x3dcccccd3c23d70a;
  if ((char)param_1[0x4c] == '\0') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  FUN_0181c08c(param_1[0x81],1);
  FUN_0181c23c(param_1);
  FUN_0181d68c(&local_120,param_1);
  puVar4 = local_120;
  puVar6 = PTR_DAT_0437de28;
  puVar5 = PTR_DAT_0437de20;
  if (local_120 == (undefined8 *)0x0) {
    return 1;
  }
  if (*(int *)((long)local_120 + 0xc) != 0) {
    piVar1 = (int *)((long)local_120 + 0xc);
    iVar8 = *(int *)((long)local_120 + 0xc);
    do {
      plVar13 = (long *)puVar4[2];
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_00fd7558();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_0181bfc8;
        if (plVar13 == (long *)puVar6) break;
        plVar13 = (long *)*plVar13;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = puVar4[3];
          plVar13 = (long *)0x0;
          puVar4 = local_120;
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + -0x50);
          }
          goto joined_r0x0181bd4c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0181bfc8:
  plVar13 = (long *)0x0;
  puVar4 = local_120;
joined_r0x0181bd4c:
  local_120 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_130 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_130);
    }
  }
  if (plVar13 == (long *)0x0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x10))(&local_120,param_1);
  local_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  FUN_00ac4a8c(&local_130,&local_120);
  if (local_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_120 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_120[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *local_120;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  local_110 = (code *)0x0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_00ac4d8c(&local_100,&local_130);
  local_120 = (undefined8 *)&LAB_01825010;
  local_118 = FUN_01825258;
  local_110 = FUN_01825318;
  local_108 = &LAB_0182532c;
  pcVar12 = (code *)plVar13[0x6d];
  if (pcVar12 != (code *)0x0) {
    plVar13[0x6e] = 0;
    plVar13[0x6f] = 0;
    plVar13[0x6c] = 0;
    plVar13[0x6d] = 0;
    (*pcVar12)(plVar13 + 0x70);
    if (local_110 == (code *)0x0) goto LAB_0181bec8;
  }
  (*local_110)(&local_100,plVar13 + 0x70);
  plVar13[0x6d] = (long)local_118;
  plVar13[0x6f] = (long)local_108;
  plVar13[0x6e] = (long)local_110;
  plVar13[0x6c] = (long)local_120;
LAB_0181bec8:
  pcVar12 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (undefined1 *)0x0;
    local_120 = (undefined8 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar12)(&local_100);
  }
  puVar4 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_130 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  if (((int)plVar13[0xd] == 2) && (*(char *)((long)plVar13 + 0x3ec) != '\x01')) {
    *(undefined2 *)((long)plVar13 + 0x3ec) = 0x101;
  }
  *(undefined1 *)(param_1 + 0x83) = 0;
  lVar11 = plVar13[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return 1;
}


