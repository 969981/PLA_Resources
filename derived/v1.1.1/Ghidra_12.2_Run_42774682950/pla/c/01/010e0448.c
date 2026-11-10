/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0448; name: FUN_010e0448
 */


void FUN_010e0448(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
                    /* WARNING: Could not recover jumptable at 0x010e047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 0x28))
              ((long *)*param_2,param_1 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x68);
    return;
  }
  return;
}


