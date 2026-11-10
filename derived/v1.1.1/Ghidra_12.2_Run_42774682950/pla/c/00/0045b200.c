/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b200; name: FUN_0045b200
 */


void FUN_0045b200(long param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x18);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045b214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}


