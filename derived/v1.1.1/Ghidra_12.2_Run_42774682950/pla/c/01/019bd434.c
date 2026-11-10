/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019bd434; name: FUN_019bd434
 */


void FUN_019bd434(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined1 auStack_108 [16];
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [16];
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [16];
  long local_88;
  long local_80;
  long local_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar5 = PTR_DAT_0437a780;
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x2c0);
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar7 = PTR_DAT_0437a790;
  puVar6 = PTR_DAT_0437a788;
  lVar12 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar12;
  puVar8 = PTR_DAT_0437ace8;
  lVar12 = *(long *)(lVar12 + 0x78);
  local_a0 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(auStack_98,lVar12 + 0x490);
  local_88 = *(long *)(lVar12 + 0x4a0);
  if (local_88 != 0) {
    piVar1 = (int *)(local_88 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_80 = *(long *)(lVar12 + 0x4a8);
  if (local_80 != 0) {
    piVar1 = (int *)(local_80 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_78 = *(long *)(lVar12 + 0x4b0);
  if (local_78 != 0) {
    lVar12 = *(long *)(local_78 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_019bdabc;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_0437a508;
  local_a0 = PTR_DAT_0437a508 + 0x10;
  FUN_01e3c684(uVar13,&local_a0);
  FUN_00936104(&local_a0);
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x2b0);
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  lVar12 = *(long *)(lVar12 + 0x78);
  local_d0 = puVar8 + 0x10;
  FUN_00937ea0(auStack_c8,lVar12 + 0x4c0);
  local_b8 = *(long *)(lVar12 + 0x4d0);
  if (local_b8 != 0) {
    piVar1 = (int *)(local_b8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b0 = *(long *)(lVar12 + 0x4d8);
  if (local_b0 != 0) {
    piVar1 = (int *)(local_b0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = *(long *)(lVar12 + 0x4e0);
  if (local_a8 != 0) {
    lVar12 = *(long *)(local_a8 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_019bdabc;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_d0 = puVar4 + 0x10;
  (**(code **)(**(long **)(*(long *)(param_1 + 0x3b0) + 0x2c0) + 0x10))(local_70);
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_019be1cc(&local_e0,local_70);
  puVar9 = local_70[0];
  if (local_70[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70[0] + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_70[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar9;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  FUN_018c5de4(uVar13,&local_d0,&local_e0);
  puVar9 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e0 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70[0] = (undefined8 *)*puVar9;
      FUN_02a44274(lVar12 + 0xd8,local_70);
    }
  }
  FUN_00936104(&local_d0);
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x2b8);
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  lVar12 = *(long *)(lVar12 + 0x78);
  local_110 = puVar8 + 0x10;
  FUN_00937ea0(auStack_108,lVar12 + 0x4f0);
  local_f8 = *(long *)(lVar12 + 0x500);
  if (local_f8 != 0) {
    piVar1 = (int *)(local_f8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_f0 = *(long *)(lVar12 + 0x508);
  if (local_f0 != 0) {
    piVar1 = (int *)(local_f0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_e8 = *(long *)(lVar12 + 0x510);
  if (local_e8 != 0) {
    lVar12 = *(long *)(local_e8 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_019bdabc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_110 = puVar4 + 0x10;
  (**(code **)(**(long **)(*(long *)(param_1 + 0x3b0) + 0x2c0) + 0x10))(local_70);
  local_120 = (undefined8 *)0x0;
  uStack_118 = 0;
  FUN_019be1cc(&local_120,local_70);
  puVar9 = local_70[0];
  if (local_70[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70[0] + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_70[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar9;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  FUN_018c5de4(uVar13,&local_110,&local_120);
  puVar9 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_120 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_120[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70[0] = (undefined8 *)*puVar9;
      FUN_02a44274(lVar12 + 0xd8,local_70);
    }
  }
  FUN_00936104(&local_110);
  return;
}


