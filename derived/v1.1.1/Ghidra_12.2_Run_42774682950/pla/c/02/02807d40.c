/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02807d40; name: FUN_02807d40
 */


void FUN_02807d40(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_0437b2b0;
  puVar6 = PTR_DAT_0437b2a8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  param_2 = param_2 & 0xffffffff;
  do {
    puVar9 = (undefined8 *)(**(code **)param_1[10])(param_1 + 10);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar7 = puVar5;
      __cxa_guard_release(puVar6);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02807da8:
      if (puVar9 != (undefined8 *)puVar7) goto code_r0x02807db0;
      if ((char)param_1[0x14] != '\0') {
        (**(code **)(*param_1 + 0xa8))(param_1,0);
        for (plVar11 = (long *)param_1[0x11]; plVar11 != (long *)0x0;
            plVar11 = (long *)plVar11[0x11]) {
          (**(code **)(*plVar11 + 0xb0))(plVar11,0,param_1);
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
        plVar11 = (long *)param_1[0x13];
        goto joined_r0x02807fd4;
      }
    }
LAB_02807dc4:
    plVar11 = (long *)param_1[0x13];
joined_r0x02807fd4:
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02808084;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
        plVar11 = (long *)param_1[0x13];
      }
      else {
        plVar11 = (long *)param_1[0x13];
      }
      if (plVar11 == (long *)0x0) {
        FUN_02807d40(0,1);
      }
      else {
        lVar12 = plVar11[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02808084;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_02807d40(plVar11,1);
        lVar12 = plVar11[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
    }
    if ((param_2 & 1) == 0) {
      return;
    }
    plVar11 = (long *)param_1[0x12];
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02808084;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    plVar11 = (long *)param_1[0x12];
    param_2 = 1;
    param_1 = (long *)0x0;
  } while (plVar11 == (long *)0x0);
  lVar12 = plVar11[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02807d40(plVar11,1);
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02808058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x20))(plVar11);
      return;
    }
    return;
  }
LAB_02808084:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
code_r0x02807db0:
  puVar9 = (undefined8 *)*puVar9;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02807dc4;
  goto LAB_02807da8;
}


