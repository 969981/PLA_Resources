/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009d0c90; name: FUN_009d0c90
 */


bool FUN_009d0c90(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar7 = *(long **)(param_1 + 0x1f0);
  if (plVar7 == (long *)0x0) {
    bVar4 = false;
  }
  else {
    lVar8 = plVar7[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_009d0e4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = nn::os::GetCurrentThread();
    plVar9 = (long *)(param_1 + 0x208);
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1fc));
          while (*plVar9 == 0) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_009d0d34;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_009d0d34:
    if (10 < *(uint *)(plVar7 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_009d1250();
    }
    plVar9 = (long *)plVar7[(ulong)*(uint *)(plVar7 + 0x18) + 0xd];
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_009d0e4c;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    iVar5 = FUN_009d1020(plVar7,param_2);
    bVar4 = iVar5 == 3;
    (**(code **)(*plVar9 + 0x70))(plVar9,param_2,bVar4);
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1fc));
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return bVar4;
}


