/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb5abc; name: FUN_01eb5abc
 */


void FUN_01eb5abc(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1[2] - param_1[1];
  if (lVar4 == 0) {
    lVar4 = *param_1;
  }
  else {
    param_1[2] = param_1[2] + (lVar4 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    lVar4 = *param_1;
  }
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar2 = (long *)param_1[4];
  uVar3 = FUN_02bcc75c(plVar2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01eb5b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,0x10);
    return;
  }
  FUN_02bcc824(plVar2,lVar4,lVar1 - lVar4,0x10);
  return;
}


