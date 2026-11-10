/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026bf32c; name: FUN_026bf32c
 */


void FUN_026bf32c(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar6 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar6;
  plVar7 = *(long **)(*(long *)(lVar6 + 0x50) + 0x30);
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_026bf4d0;
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
  }
  if (param_1 == 0) {
LAB_026bf3b0:
    iVar4 = FUN_026b95f8();
LAB_026bf3b4:
    lVar6 = FUN_01467b34(plVar7[0x99],"View_Top");
    if (iVar4 < 2) goto joined_r0x026bf410;
    if (lVar6 == 0) goto LAB_026bf4d0;
    lVar6 = *(long *)(lVar6 + 0x3f30);
    if (lVar6 == 0) goto LAB_026bf3e4;
    uVar5 = 1;
  }
  else {
    if (param_1 == 3) {
      iVar4 = FUN_026b9dec();
      goto LAB_026bf3b4;
    }
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        goto LAB_026bf3e4;
      }
      goto LAB_026bf3b0;
    }
    lVar6 = FUN_01467b34(plVar7[0x99],"View_Top");
joined_r0x026bf410:
    if (lVar6 == 0) {
LAB_026bf4d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar6 = *(long *)(lVar6 + 0x3f30);
    if (lVar6 == 0) goto LAB_026bf3e4;
    uVar5 = 0;
  }
  FUN_014603c4(lVar6,uVar5);
LAB_026bf3e4:
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
                    /* WARNING: Could not recover jumptable at 0x026bf450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x20))(plVar7);
    return;
  }
  return;
}


