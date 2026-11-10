/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9ac98; name: FUN_01e9ac98
 */


void FUN_01e9ac98(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  (**(code **)(*param_1 + 0x10))(&local_60);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_01eacb9c(&local_70,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *local_60;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01ead384(&local_60,&local_70);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_01912b7c(&local_80,param_1 + 0xa6);
  FUN_01e9b5c4(&local_60,local_80);
  puVar5 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
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
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_01912b7c(&local_90,param_1 + 0xa8);
  FUN_01e9b5c4(&local_60,local_90);
  puVar5 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
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
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_01912b7c(&local_a0,param_1 + 0xaa);
  FUN_01e9b5c4(&local_60,local_a0);
  puVar5 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
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
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01912b7c(&local_b0,param_1 + 0xac);
  FUN_01e9b5c4(&local_60,local_b0);
  puVar5 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
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
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_01912b7c(&local_c0,param_1 + 0xae);
  FUN_01e9b5c4(&local_60,local_c0);
  puVar5 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
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
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_01912b7c(&local_d0,param_1 + 0xb0);
  FUN_01e9b5c4(&local_60,local_d0);
  puVar5 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0 + 1);
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
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_01912b7c(&local_e0,param_1 + 0xb2);
  FUN_01e9b5c4(&local_60,local_e0);
  puVar5 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e0 + 1);
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
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar11 = param_1[0xb4];
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar12 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        uVar10 = FUN_00ad3750();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01e9b0b4;
        if (plVar12 == (long *)puVar7) break;
        plVar12 = (long *)*plVar12;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01e9b414;
        lVar11 = *(long *)(lVar11 + 0x18);
        plVar12 = (long *)(lVar11 + -0x50);
        if (lVar11 != 0) {
          FUN_02c90d40(plVar12);
          lVar11 = *(long *)(lVar11 + 8);
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
          if (iVar8 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
          lVar11 = param_1[0xb6];
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01e9b4b4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01e9b414:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01e9b0b4:
  lVar11 = param_1[0xb6];
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01e9b4b4:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar12 = *(long **)(lVar11 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
        uVar10 = FUN_00ad3750();
        *puVar5 = uVar10;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01e9b0bc;
        if (plVar12 == puVar5) break;
        plVar12 = (long *)*plVar12;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01e9b500;
        lVar11 = *(long *)(lVar11 + 0x18);
        plVar12 = (long *)(lVar11 + -0x50);
        if (lVar11 != 0) {
          FUN_02c90d40(plVar12);
          lVar11 = *(long *)(lVar11 + 8);
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
          if (iVar8 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
          if (local_60 == (undefined8 *)0x0) goto LAB_01e9b11c;
          goto LAB_01e9b0c4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01e9b500:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01e9b0bc:
  if (local_60 != (undefined8 *)0x0) {
LAB_01e9b0c4:
    puVar5 = local_60;
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
LAB_01e9b11c:
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
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
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_60 = (undefined8 *)*puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_60);
    }
  }
  return;
}


