/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d73e80; name: FUN_00d73e80
 */


void FUN_00d73e80(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x736b6264)) {
    return;
  }
  plVar5 = *(long **)(param_1 + 2);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 4);
  uVar6 = FUN_02bcc75c(plVar5);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d73efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1,0x18,8);
    return;
  }
  FUN_02bcc824(plVar5,param_1,0x18,8);
  return;
}


