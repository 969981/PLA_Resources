/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011eadec; name: FUN_011eadec
 */


void FUN_011eadec(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_011eaedc(param_2,param_4);
  if ((param_3 == (long *)0x0) && (param_3 = *(long **)(param_2 + 0x68), param_3 == (long *)0x0)) {
    FUN_00d42bd8(0,*param_1);
    return;
  }
  lVar6 = param_3[0xb];
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
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_00d42bd8(param_3,*param_1);
  lVar6 = param_3[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
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
    *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x011eaea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x20))(param_3);
    return;
  }
  return;
}


