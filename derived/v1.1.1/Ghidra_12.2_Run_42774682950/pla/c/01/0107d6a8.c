/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107d6a8; name: FUN_0107d6a8
 */


void FUN_0107d6a8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined2 local_d8;
  long alStack_c0 [12];
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  if (param_2[0x14] == 0) {
    plVar11 = (long *)param_2[0x10];
    lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x60,8);
    if (lVar8 == 0) {
      plVar11 = (long *)0x0;
      uVar12 = 0;
      uVar10 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar11;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      FUN_02bc36c4(lVar8,param_2[0x10],param_2[0x11]);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      uVar10 = 8;
      uVar12 = 0x60;
    }
    lVar9 = *(long *)(param_1 + 0x128);
    *(long *)(param_1 + 0x128) = lVar8;
    if (lVar9 != 0) {
      FUN_0107e1fc(param_1 + 0x130);
      lVar8 = *(long *)(param_1 + 0x128);
    }
    *(long **)(param_1 + 0x130) = plVar11;
    *(undefined8 *)(param_1 + 0x138) = uVar12;
    *(undefined8 *)(param_1 + 0x140) = uVar10;
    lVar9 = nn::os::GetCurrentThread();
    plVar11 = (long *)(lVar8 + 0x50);
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x44));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0107d95c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0107d95c:
    uVar10 = *(undefined8 *)(lVar8 + 8);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
    }
    puVar1 = (undefined8 *)(lVar5 + 0x20);
    uVar12 = *puVar1;
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *puVar1 = uVar10;
    *(undefined2 *)(lVar5 + 0x28) = 1;
    local_60 = *(undefined8 *)(lVar8 + 0x10);
    (*(code *)*param_2)(param_2 + 4,&local_60);
    *puVar1 = uVar12;
    local_d8 = (undefined2)uVar2;
    *(undefined2 *)(lVar5 + 0x28) = local_d8;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x44));
    lVar8 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x110);
  }
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x128);
  }
  FUN_02bc3b98(lVar8,param_2[0x12] + 0x68);
  *(undefined8 *)(param_1 + 0x150) = param_2[0x11];
  lVar8 = *(long *)(param_1 + 0x110);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x128);
  }
  alStack_c0[0] = param_1;
  lVar9 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar8 + 0x50);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x44));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0107d780;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0107d780:
  uVar10 = *(undefined8 *)(lVar8 + 8);
  if (*(long *)(lVar5 + 0x20) == 0) {
    *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
  }
  local_60 = *(undefined8 *)(lVar5 + 0x20);
  local_58 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x20) = uVar10;
  *(undefined2 *)(lVar5 + 0x28) = 1;
  local_48 = lVar8 + 0x30;
  FUN_0107ea14(alStack_c0,&local_48);
  if (*(char *)(lVar8 + 0x58) == '\0') {
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 8),5,0x14);
  }
  *(undefined8 *)(lVar5 + 0x20) = local_60;
  *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_58;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x44));
  FUN_0107eb90(alStack_c0);
  return;
}


