/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0250c978; name: FUN_0250c978
 */


void FUN_0250c978(ulong param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = DAT_043f1798;
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02507c10();
  }
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar3 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0250c9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1 << 4,8);
  return;
}


