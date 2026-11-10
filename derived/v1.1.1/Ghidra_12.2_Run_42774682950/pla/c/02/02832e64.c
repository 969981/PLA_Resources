/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02832e64; name: FUN_02832e64
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02832e64(long param_1,long *param_2,ulong param_3)

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
  undefined8 uVar10;
  long lVar11;
  
  puVar7 = PTR_DAT_0437b2b0;
  puVar6 = PTR_DAT_0437b2a8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  param_3 = param_3 & 0xffffffff;
  do {
    plVar9 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar7 = puVar5;
      __cxa_guard_release(puVar6);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar7) {
        *(byte *)(*param_2 + 0x90) = *(byte *)(*param_2 + 0x90) | *(char *)(param_1 + 0xa1) != '\0';
        break;
      }
    }
    plVar9 = *(long **)(param_1 + 0x98);
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_028331a4;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar11 = plVar9[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
        plVar9 = *(long **)(param_1 + 0x98);
      }
      else {
        plVar9 = *(long **)(param_1 + 0x98);
      }
      if (plVar9 == (long *)0x0) {
        FUN_02832e64(0,param_2,1);
      }
      else {
        lVar11 = plVar9[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_028331a4;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_02832e64(plVar9,param_2,1);
        lVar11 = plVar9[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    plVar9 = *(long **)(param_1 + 0x90);
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar11 = plVar9[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_028331a4;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    plVar9 = *(long **)(param_1 + 0x90);
    param_3 = 1;
    param_1 = 0;
  } while (plVar9 == (long *)0x0);
  lVar11 = plVar9[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02832e64(plVar9,param_2,1);
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x028331a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x20))(plVar9);
      return;
    }
    return;
  }
LAB_028331a4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


