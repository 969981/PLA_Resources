/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00587870; name: FUN_00587870
 */


void FUN_00587870(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 == (long *)0x0) {
    FUN_005878a0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x587898);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00587890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  return;
}


