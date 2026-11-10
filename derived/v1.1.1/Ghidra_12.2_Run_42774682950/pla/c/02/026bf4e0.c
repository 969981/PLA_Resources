/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026bf4e0; name: FUN_026bf4e0
 */


void FUN_026bf4e0(undefined8 param_1,int param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar7 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar7;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(lVar7 + 0x50) + 0x30);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar7 = plVar8[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
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
  if (param_2 == 1) {
    if ((param_3 & 1) != 0) {
      uVar6 = 2;
      goto LAB_026bf580;
    }
    lVar7 = 1;
  }
  else {
    lVar7 = (long)param_2;
  }
  uVar6 = *(undefined4 *)(&DAT_03a7dd28 + lVar7 * 4);
LAB_026bf580:
  FUN_01469774(plVar8,uVar6);
  lVar7 = plVar8[0xb];
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
                    /* WARNING: Could not recover jumptable at 0x026bf5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x20))(plVar8);
    return;
  }
  return;
}


