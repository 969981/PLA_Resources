/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3026c; name: FUN_01c3026c
 */


long FUN_01c3026c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3e0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3d4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01c302d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01c302d4:
  local_100 = 0;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_90 = (long *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_d8 = param_2[3];
  uStack_d0 = param_2[4];
  local_e8 = param_2[1];
  uStack_e0 = param_2[2];
  local_b8 = param_2[7];
  uStack_b0 = param_2[8];
  local_c8 = param_2[5];
  uStack_c0 = param_2[6];
  local_f0 = *param_2;
  FUN_008c4b3c(&local_a0,param_2 + 10);
  local_90 = (long *)param_2[0xc];
  uStack_88 = param_2[0xd];
  local_68 = *(undefined4 *)(param_2 + 0x11);
  local_80 = param_2[0xe];
  uStack_78 = param_2[0xf];
  local_70 = param_2[0x10];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x10))(local_58);
    local_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    FUN_0087f944(&local_110,local_58);
    puVar5 = local_58[0];
    if (local_58[0] != (undefined8 *)0x0) {
      piVar2 = (int *)(local_58[0] + 1);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_58[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_48 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_48);
      }
    }
    FUN_0087fcf0(&local_a0,&local_110);
    puVar5 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_110 + 1);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_58[0] = (undefined8 *)*puVar5;
        FUN_02a44274(lVar7 + 0xd8,local_58);
      }
    }
  }
  if ((local_a0 != (undefined8 *)0x0) && (*(int *)((long)local_a0 + 0xc) != 0)) {
    local_100 = CONCAT11(1,(undefined1)local_100);
  }
  local_90 = (long *)0x0;
  local_60 = (long)*(int *)(param_1 + 0x3c8);
  *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
  FUN_01c31098(param_1 + 0x360,&local_60,&local_100);
  puVar5 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_a0 + 1);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_58[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar7 + 0xd8,local_58);
    }
  }
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3d4));
  return local_60;
}


