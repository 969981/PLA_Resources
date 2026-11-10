/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028307d0; name: FUN_028307d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_028307d0(long *param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_0437b2b0;
  puVar6 = PTR_DAT_0437b2a8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  param_3 = param_3 & 0xffffffff;
  do {
    plVar9 = (long *)(**(code **)param_1[10])(param_1 + 10);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar11;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar7 = puVar5;
      __cxa_guard_release(puVar6);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar7) {
        uVar10 = (**(code **)(*param_1 + 200))(param_1,param_2[1] + 8);
        if (((((uVar10 & 1) != 0) && (*(char *)((long)param_1 + 0xa2) != '\0')) &&
            (*(char *)((long)param_1 + 0xa3) != '\0')) && (*(long *)*param_2 == 0)) {
          *(long *)*param_2 = (long)param_1;
          plVar9 = (long *)param_1[0x13];
          goto joined_r0x02830ae0;
        }
        break;
      }
    }
    plVar9 = (long *)param_1[0x13];
joined_r0x02830ae0:
    if (plVar9 != (long *)0x0) {
      lVar12 = *(long *)((long)plVar9 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02830b20;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
      lVar12 = *(long *)((long)plVar9 + 0x58);
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
        (**(code **)(*plVar9 + 0x20))(plVar9);
        plVar9 = (long *)param_1[0x13];
      }
      else {
        plVar9 = (long *)param_1[0x13];
      }
      if (plVar9 == (long *)0x0) {
        FUN_028307d0(0,param_2,1);
      }
      else {
        lVar12 = plVar9[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02830b20;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
        FUN_028307d0(plVar9,param_2,1);
        lVar12 = plVar9[0xb];
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
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    plVar9 = (long *)param_1[0x12];
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar12 = plVar9[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02830b20;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
    lVar12 = plVar9[0xb];
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
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    plVar9 = (long *)param_1[0x12];
    param_3 = 1;
    param_1 = (long *)0x0;
  } while (plVar9 == (long *)0x0);
  lVar12 = plVar9[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
    FUN_028307d0(plVar9,param_2,1);
    lVar12 = plVar9[0xb];
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
                    /* WARNING: Could not recover jumptable at 0x02830ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x20))(plVar9);
      return;
    }
    return;
  }
LAB_02830b20:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


