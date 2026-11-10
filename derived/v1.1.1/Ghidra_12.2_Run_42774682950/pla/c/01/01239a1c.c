/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239a1c; name: FUN_01239a1c
 */


void FUN_01239a1c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar4) {
    lVar3 = lVar4;
  }
  else {
    do {
      if (*(long **)(lVar3 + -0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + -0x20) + 0x20))();
      }
      if (*(long **)(lVar3 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + -0x30) + 0x20))();
      }
      if (*(long **)(lVar3 + -0x38) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + -0x38) + 0x20))();
      }
      plVar1 = (long *)(lVar3 + -0x48);
      lVar3 = lVar3 + -0x50;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    } while (lVar4 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = FUN_02bcc75c(plVar1);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01239af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_02bcc824(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


