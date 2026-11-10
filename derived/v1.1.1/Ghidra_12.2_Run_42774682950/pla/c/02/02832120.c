/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02832120; name: FUN_02832120
 */


void FUN_02832120(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  
  puVar8 = PTR_DAT_0437b2b0;
  puVar7 = PTR_DAT_0437b2a8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  param_3 = param_3 & 0xffffffff;
  do {
    puVar10 = (undefined8 *)
              (*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    if (puVar10 != (undefined8 *)0x0) {
LAB_02832188:
      if (puVar10 != (undefined8 *)puVar8) goto code_r0x02832190;
      lVar13 = *param_2;
      if (lVar13 != 0) {
        piVar2 = (int *)(lVar13 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar12 = *(long **)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = 0;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
      }
      *(long *)(param_1 + 0xe8) = lVar13;
    }
LAB_028321e0:
    plVar12 = *(long **)(param_1 + 0x98);
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02832498;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar13 = plVar12[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
        plVar12 = *(long **)(param_1 + 0x98);
      }
      else {
        plVar12 = *(long **)(param_1 + 0x98);
      }
      if (plVar12 == (long *)0x0) {
        FUN_02832120(0,param_2,1);
      }
      else {
        lVar13 = plVar12[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02832498;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar11;
        }
        piVar2 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_02832120(plVar12,param_2,1);
        lVar13 = plVar12[0xb];
        piVar2 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    plVar12 = *(long **)(param_1 + 0x90);
    if (plVar12 == (long *)0x0) {
      return;
    }
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02832498;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar13 = plVar12[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    plVar12 = *(long **)(param_1 + 0x90);
    param_3 = 1;
    param_1 = 0;
  } while (plVar12 == (long *)0x0);
  lVar13 = plVar12[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02832120(plVar12,param_2,1);
    lVar13 = plVar12[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02832494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
    return;
  }
LAB_02832498:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
code_r0x02832190:
  puVar10 = (undefined8 *)*puVar10;
  if (puVar10 == (undefined8 *)0x0) goto LAB_028321e0;
  goto LAB_02832188;
}


