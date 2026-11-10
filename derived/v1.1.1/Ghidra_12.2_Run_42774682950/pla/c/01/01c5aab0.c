/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5aab0; name: FUN_01c5aab0
 */


undefined8 FUN_01c5aab0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar6 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar8 = PTR_DAT_04379c38;
  puVar7 = PTR_DAT_04379c30;
  local_80 = 0;
  uStack_78 = 0;
  uVar12 = *(undefined8 *)PTR_DAT_04379c30;
  local_60 = 0x19;
  local_58 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = (undefined1 *)0x7d6ae7ce61d9193d;
  pcStack_68 = "STOP_SPACETIME_DISTORTION";
  *(undefined8 *)PTR_DAT_04379c38 = uVar12;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_02913338(uVar12,&local_70,&local_f0,0,0,0);
  pcVar9 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar9)(&local_d0);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar12 = *(undefined8 *)puVar7;
  local_60 = 0x26;
  local_58 = (long *)0x0;
  *(undefined8 *)puVar8 = uVar12;
  local_70 = (undefined1 *)0xa35eb9c6592a6635;
  pcStack_68 = "SET_STATE_WORMHOLE_MATERIALIZATION_END";
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_02913338(uVar12,&local_70,&local_f0,0,0,0);
  pcVar9 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar9)(&local_d0);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar6 = PTR_DAT_04379e40;
  local_70 = &DAT_8d81cfe451e0a778;
  pcStack_68 = "WORMHOLE";
  local_60 = 8;
  local_58 = (long *)0x0;
  if (((*PTR_DAT_04379e40 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  puVar8 = PTR_DAT_04379e50;
  puVar7 = PTR_DAT_04379e48;
  uVar12 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar12;
  FUN_029278b4(&local_f0,uVar12,&local_70);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_02928c7c(uVar12,&local_e8,0,0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar13 = *(long *)(param_1 + 0x3e0);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01c5ac98;
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5ae2c;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_02c90d40(plVar14);
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar13 = *(long *)(param_1 + 0x3f0);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5aebc;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5ae2c:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ac98:
  lVar13 = *(long *)(param_1 + 0x3f0);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5aebc:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01c5aca0;
        if (plVar14 == puVar5) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5af08;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_02c90d40(plVar14);
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar13 = *(long *)(param_1 + 0x420);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5af98;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5af08:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5aca0:
  lVar13 = *(long *)(param_1 + 0x420);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5af98:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01c5aca8;
        if (plVar14 == puVar5) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5afe4;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_02c90d40(plVar14);
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar13 = *(long *)(param_1 + 0x3b0);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5b074;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5afe4:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5aca8:
  lVar13 = *(long *)(param_1 + 0x3b0);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5b074:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01c5acb0;
        if (plVar14 == puVar5) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5b0c0;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_02c90d40(plVar14);
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar13 = *(long *)(param_1 + 0x3c0);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5b150;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5b0c0:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5acb0:
  lVar13 = *(long *)(param_1 + 0x3c0);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5b150:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01c5acb8;
        if (plVar14 == puVar5) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5b19c;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_02c90d40(plVar14);
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar13 = *(long *)(param_1 + 0x3d0);
          if (lVar13 == 0) {
            return 1;
          }
          goto LAB_01c5b230;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5b19c:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5acb8:
  lVar13 = *(long *)(param_1 + 0x3d0);
  if (lVar13 != 0) {
LAB_01c5b230:
    puVar7 = PTR_DAT_0437a6e0;
    puVar6 = PTR_DAT_0437a6d8;
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar10 = *(int *)(lVar13 + 0xc);
      do {
        plVar14 = *(long **)(lVar13 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar12 = FUN_00ad3750();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) {
            return 1;
          }
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            if (lVar13 == 0) {
              return 1;
            }
            plVar14 = (long *)(lVar13 + -0x50);
            FUN_02c90d40(plVar14);
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
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
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
              return 1;
            }
            return 1;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
  }
  return 1;
}


