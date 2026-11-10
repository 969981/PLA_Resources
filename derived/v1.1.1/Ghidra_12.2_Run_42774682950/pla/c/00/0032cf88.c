/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032cf88; name: FUN_0032cf88
 */


void FUN_0032cf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(code **)(param_1 + 0x58) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0032cfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  return;
}


