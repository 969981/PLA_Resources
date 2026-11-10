/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d473c; name: FUN_018d473c
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_018d473c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar6 = *(long **)(param_1 + 0x1f0);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar7 = plVar6[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_018d48e8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar7 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x208);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1fc));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_018d47dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_018d47dc:
  if (*(uint *)(plVar6 + 0x12) < 5) {
    plVar8 = (long *)plVar6[(ulong)*(uint *)(plVar6 + 0x12) + 0xd];
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        iVar4 = FUN_018e3c58(plVar6);
        (**(code **)(*plVar8 + 0x70))(plVar8,10,iVar4 == 3);
        lVar7 = plVar8[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        *(undefined8 *)(param_1 + 0x208) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1fc));
        lVar7 = plVar6[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018d48e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x20))(plVar6);
          return;
        }
        return;
      }
      goto LAB_018d48e8;
    }
  }
  else {
    FUN_018e3f80();
  }
  FUN_018e3c58(plVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


