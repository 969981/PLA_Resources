/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025f9ed8; name: FUN_025f9ed8
 */


void FUN_025f9ed8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined1 *)(param_1 + 900) = 1;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar6 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar6;
  if ((lVar6 != 0) && (plVar7 = *(long **)(*(long *)(lVar6 + 0x50) + 0x30), plVar7 != (long *)0x0))
  {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_025fa044:
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
    lVar6 = FUN_01467b34(plVar7[0x99],"View_Top");
    if (lVar6 == 0) goto LAB_025fa044;
    lVar6 = *(long *)(lVar6 + 0x3f30);
    if (lVar6 != 0) {
      *(ulong *)(lVar6 + 0x30) = *(ulong *)(lVar6 + 0x30) & 0xfffffffffffffeff;
    }
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
      cVar2 = *(char *)(param_1 + 0x360);
      goto joined_r0x025f9fac;
    }
  }
  cVar2 = *(char *)(param_1 + 0x360);
joined_r0x025f9fac:
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  if (*(char *)(param_1 + 0x340) != '\0') {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  return;
}


