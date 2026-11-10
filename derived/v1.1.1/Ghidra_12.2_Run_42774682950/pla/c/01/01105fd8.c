/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01105fd8; name: FUN_01105fd8
 */


void FUN_01105fd8(long param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = FUN_011085ac();
  if ((cVar1 == '\0') && (plVar2 = *(long **)(param_1 + 0x60), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01106020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
    return;
  }
  return;
}


