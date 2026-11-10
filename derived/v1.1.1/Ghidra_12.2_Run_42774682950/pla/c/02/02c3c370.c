/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3c370; name: FUN_02c3c370
 */


void FUN_02c3c370(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x02c3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x70))
            (*(long **)(param_1 + 0x60),*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x3010,param_2
            );
  return;
}


