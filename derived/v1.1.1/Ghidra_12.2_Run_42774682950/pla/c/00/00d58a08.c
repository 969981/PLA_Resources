/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d58a08; name: FUN_00d58a08
 */


void FUN_00d58a08(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  
  if (param_3 == 0xffffffff) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar7 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar7;
    lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x2d10) + 8);
    if (lVar7 == 0) {
      *param_1 = 0;
    }
    else {
      plVar5 = *(long **)(lVar7 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
        if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_00d58c04;
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar6;
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
      }
      lVar7 = plVar5[0xd];
      *param_1 = lVar7;
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x50);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = plVar5[0xb];
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
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x20);
        goto LAB_00d58b54;
      }
    }
  }
  else {
    if ((param_3 < 0x10) &&
       (plVar5 = *(long **)(*(long *)(*(long *)(param_2 + 0x68) + 0xb0) + (ulong)param_3 * 0x18 +
                           0x18), plVar5 != (long *)0x0)) {
      lVar7 = plVar5[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_00d58c04:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
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
    }
    else {
      plVar5 = (long *)0x0;
    }
    lVar7 = plVar5[0xd];
    *param_1 = lVar7;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
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
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x20);
LAB_00d58b54:
                    /* WARNING: Could not recover jumptable at 0x00d58b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar5);
        return;
      }
    }
  }
  return;
}


