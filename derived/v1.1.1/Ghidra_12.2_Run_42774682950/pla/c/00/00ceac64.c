/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ceac64; name: FUN_00ceac64
 */


void FUN_00ceac64(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  if ((param_1[0x42] == 0) || (*(char *)(param_1[0x42] + 0x80) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00ceacb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))(param_1,param_2);
    return;
  }
  return;
}


