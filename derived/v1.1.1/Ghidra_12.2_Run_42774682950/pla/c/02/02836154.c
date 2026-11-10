/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02836154; name: FUN_02836154
 */


void FUN_02836154(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 200) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 200) + 0x3d8);
    FUN_02bba5e0(&local_38,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x58) + 0x58) + 0x78),
                 param_1 + 0x2a0);
    plVar6 = *(long **)(lVar8 + 0x68);
    *(undefined8 *)(lVar8 + 0x68) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(undefined8 *)(lVar8 + 0x68) = local_38;
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar8 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar8;
    plVar6 = *(long **)(*(long *)(lVar8 + 0x50) + 0x2ce0);
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar8 = nn::os::GetCurrentThread();
    plVar1 = plVar6 + 0x41;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar6 + 0x1fc));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02836270;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02836270:
    FUN_02a70468(plVar6,0,*(undefined8 *)(*(long *)(param_1 + 200) + 0x3c8));
    plVar6[0x41] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar6 + 0x1fc));
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
  }
  return;
}


