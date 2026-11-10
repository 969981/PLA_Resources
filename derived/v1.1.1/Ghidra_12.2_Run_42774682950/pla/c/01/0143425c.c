/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143425c; name: FUN_0143425c
 */


void FUN_0143425c(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *local_28;
  
  if ((param_2 & 1) == *(byte *)(param_1 + 0x4fa)) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x4fe) != '\0') {
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar6 = *(long *)PTR_DAT_04379698;
      *(long *)PTR_DAT_043796a0 = lVar6;
      plVar7 = *(long **)(*(long *)(lVar6 + 0x50) + 0x30);
      if (plVar7 == (long *)0x0) {
        FUN_0146a9d0(0);
        FUN_014656bc(0);
        *(undefined1 *)(param_1 + 0x4fe) = 0;
      }
      else {
        lVar6 = plVar7[0xb];
        if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar6 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
          *(undefined8 *)(lVar6 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_0146a9d0(plVar7);
        FUN_014656bc(plVar7);
        *(undefined1 *)(param_1 + 0x4fe) = 0;
        if (plVar7 != (long *)0x0) {
          lVar6 = plVar7[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x4f9) = 1;
    if ((((*(long *)(param_1 + 0x4c8) == 0) || (*(int *)(*(long *)(param_1 + 0x4c8) + 0xc) == 0)) ||
        (*(long *)(param_1 + 0x4c8) == 0)) || (FUN_00b907c8(&local_28), local_28 == (long *)0x0))
    goto LAB_01434308;
    *(undefined1 *)((long)local_28 + 0x61a) = 1;
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(undefined1 *)(param_1 + 0x4f9) = 0;
    if (((*(long *)(param_1 + 0x4c8) == 0) || (*(int *)(*(long *)(param_1 + 0x4c8) + 0xc) == 0)) ||
       ((*(long *)(param_1 + 0x4c8) == 0 || (FUN_00b907c8(&local_28), local_28 == (long *)0x0))))
    goto LAB_01434308;
    *(undefined1 *)((long)local_28 + 0x61a) = 1;
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar4 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))();
  }
LAB_01434308:
  *(byte *)(param_1 + 0x4fa) = param_2 & 1;
  return;
}


