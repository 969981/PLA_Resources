/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395cb4; name: FUN_01395cb4
 */


void FUN_01395cb4(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_01395d44();
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  lVar4 = *param_1;
  uVar3 = FUN_02bcc75c(plVar2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01395d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,8);
    return;
  }
  FUN_02bcc824(plVar2,lVar4,lVar1 - lVar4,8);
  return;
}


