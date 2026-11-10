/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c5bc; name: FUN_0283c5bc
 */


void FUN_0283c5bc(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 local_48;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar9 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar9;
  plVar10 = *(long **)(*(long *)(lVar9 + 0x50) + 0x2ce0);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar9 = *(long *)(param_1 + 0xf0);
    lVar12 = lVar9 + *(long *)(param_1 + 0xf8) * 0x28;
    plVar2 = plVar10 + 0x41;
    do {
      lVar11 = *(long *)(*(long *)(lVar9 + 0x20) + 0x3d8);
      FUN_02bba5e0(&local_48,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x58) + 0x58) + 0x78),
                   param_1 + 0x1d0);
      plVar8 = *(long **)(lVar11 + 0x68);
      *(undefined8 *)(lVar11 + 0x68) = 0;
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(undefined8 *)(lVar11 + 0x68) = local_48;
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)((long)plVar10 + 0x1fc));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_0283c6e8;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0283c6e8:
      FUN_02a70468(plVar10,0,*(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x3c8));
      plVar10[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar10 + 0x1fc));
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != lVar12);
  }
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return;
}


