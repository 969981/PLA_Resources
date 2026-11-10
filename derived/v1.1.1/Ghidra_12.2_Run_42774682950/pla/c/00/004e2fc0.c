/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2fc0; name: FUN_004e2fc0
 */


void FUN_004e2fc0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x004e2fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x488) + 0x1f8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(long *)(param_1 + 0x488) + 0x208));
  return;
}


