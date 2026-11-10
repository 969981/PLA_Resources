/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013966c8; name: FUN_013966c8
 */


void FUN_013966c8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_01396aa8(param_1,param_1[1]);
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar2 = FUN_02bcc75c(plVar4);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01396728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar1 - lVar3,8);
    return;
  }
  FUN_02bcc824(plVar4,lVar3,lVar1 - lVar3,8);
  return;
}


