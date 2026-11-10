/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad72f0; name: FUN_01ad72f0
 */


void FUN_01ad72f0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar3) {
    param_1[2] = lVar2 + -0xe0;
    FUN_0195d204(param_1[4]);
    lVar2 = param_1[2];
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar1 = FUN_02bcc75c(plVar4);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01ad7384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar2 - lVar3,0x10);
    return;
  }
  FUN_02bcc824(plVar4,lVar3,lVar2 - lVar3,0x10);
  return;
}


