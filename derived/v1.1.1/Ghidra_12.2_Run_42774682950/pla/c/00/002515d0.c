/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002515d0; name: FUN_002515d0
 */


void FUN_002515d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x002515f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_04372a88 + 0x20))
            (*(long **)PTR_DAT_04372a88,param_1,param_2,param_3,param_4,param_5);
  return;
}


