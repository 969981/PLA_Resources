/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006eeaf8; name: FUN_006eeaf8
 */


void FUN_006eeaf8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  FUN_003c73c4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x006eeb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,0x198,8);
  return;
}


