/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01929dbc; name: FUN_01929dbc
 */


void FUN_01929dbc(long param_1)

{
  FUN_01929df0(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x01929dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x40))(*(long **)(param_1 + 0x68),0);
  return;
}


