/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01140db4; name: FUN_01140db4
 */


void FUN_01140db4(long param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = FUN_01141e9c();
  if ((cVar1 == '\0') && (plVar2 = *(long **)(param_1 + 0x60), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01140dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2,&DAT_03a79190);
    return;
  }
  return;
}


