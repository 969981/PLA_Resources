/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c0148c; name: FUN_01c0148c
 */


bool FUN_01c0148c(long param_1)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_60 [2];
  long *local_50;
  undefined8 local_48;
  
  FUN_01a55fe8(local_60);
  if (local_60[0] == (undefined8 *)0x0) {
    local_50 = (long *)0x0;
    plVar5 = local_50;
  }
  else {
    FUN_00bbaa24(&local_50);
    plVar5 = local_50;
    if (local_60[0] != (undefined8 *)0x0) {
      piVar2 = (int *)(local_60[0] + 1);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = *local_60[0];
        FUN_02a44274(lVar8 + 0xd8,&local_48);
        plVar5 = local_50;
      }
    }
  }
  if (plVar5 == (long *)0x0) {
    bVar6 = false;
  }
  else {
    local_50 = plVar5;
    if (*(char *)(param_1 + 0x12f0) == '\0') {
      bVar6 = false;
    }
    else {
      lVar8 = nn::os::GetCurrentThread();
      plVar1 = plVar5 + 0x6c;
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar5 + 0x354));
            while (*plVar1 == 0) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01c0151c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01c0151c:
      if ((ulong)((plVar5[0x1d] - plVar5[0x1c] >> 4) * -0x5555555555555555) <=
          (ulong)*(uint *)(param_1 + 0x12f4)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      bVar6 = *(char *)(plVar5[0x1c] + (ulong)*(uint *)(param_1 + 0x12f4) * 0x30 + 0x28) != '\0';
      plVar5[0x6c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar5 + 0x354));
      if (local_50 == (long *)0x0) {
        return bVar6;
      }
    }
    lVar8 = local_50[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar3) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))(local_50);
    }
  }
  return bVar6;
}


