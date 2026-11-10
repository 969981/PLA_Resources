/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6b7a8; name: FUN_01b6b7a8
 */


void FUN_01b6b7a8(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_38;
  
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01a68b78(&local_58,param_1 + 0x200);
  if (local_58 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
    plVar4 = local_48;
  }
  else {
    FUN_00bbaa24(&local_48);
    puVar5 = local_58;
    plVar4 = local_48;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
        plVar4 = local_48;
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    lVar11 = *(long *)(&DAT_04241828 + (long)param_2 * 0x18);
    local_48 = plVar4;
    lVar7 = nn::os::GetCurrentThread();
    plVar9 = plVar4 + 0x6c;
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar4 + 0x354));
          while (*plVar9 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01b6b844;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01b6b844:
    lVar7 = plVar4[0x24] - plVar4[0x23];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      plVar9 = (long *)(plVar4[0x23] + 8);
      uVar8 = 0;
      do {
        if (*plVar9 == lVar11) {
          uVar10 = 1;
          goto LAB_01b6b858;
        }
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 6;
      } while (uVar8 < (ulong)((lVar7 >> 4) * -0x5555555555555555));
    }
    uVar10 = 0;
LAB_01b6b858:
    plVar4[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar4 + 0x354));
    local_58 = (undefined8 *)(uVar10 | uVar8 << 0x20);
    FUN_028b3278(plVar4,&local_58,1);
    if (local_48 != (long *)0x0) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


