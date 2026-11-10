/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ec624; name: FUN_011ec624
 */


void FUN_011ec624(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  FUN_011ec708();
  plVar6 = *(long **)(param_2 + 0x68);
  if (plVar6 == (long *)0x0) {
    FUN_00d42bd8(0,*param_1);
    return;
  }
  lVar7 = plVar6[0xb];
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
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_00d42bd8(plVar6,*param_1);
  lVar7 = plVar6[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
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
    *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x011ec6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x20))(plVar6);
    return;
  }
  return;
}


