/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d36468; name: FUN_00d36468
 */


void FUN_00d36468(long param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  param_3 = param_3 & 0xffffffff;
  do {
    lVar5 = FUN_00d35700(param_1 + 0x50);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x68) != param_2[1])) || (*(long *)*param_2 != 0)) {
      plVar7 = *(long **)(param_1 + 0x98);
    }
    else {
      *(long *)*param_2 = lVar5;
      plVar7 = *(long **)(param_1 + 0x98);
    }
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[0xb];
      if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_00d36704;
      if (*(long *)(lVar5 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = plVar7[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
        plVar7 = *(long **)(param_1 + 0x98);
      }
      else {
        plVar7 = *(long **)(param_1 + 0x98);
      }
      if (plVar7 == (long *)0x0) {
        FUN_00d36468(0,param_2,1);
      }
      else {
        lVar5 = plVar7[0xb];
        if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_00d36704;
        if (*(long *)(lVar5 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
          *(undefined8 *)(lVar5 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_00d36468(plVar7,param_2,1);
        lVar5 = plVar7[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x90);
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar5 = plVar7[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_00d36704;
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = plVar7[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    plVar7 = *(long **)(param_1 + 0x90);
    param_3 = 1;
    param_1 = 0;
  } while (plVar7 == (long *)0x0);
  lVar5 = plVar7[0xb];
  if (*(undefined8 **)(lVar5 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00d36468(plVar7,param_2,1);
    lVar5 = plVar7[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d36700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x20))(plVar7);
      return;
    }
    return;
  }
LAB_00d36704:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


