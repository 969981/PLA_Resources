/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01434f8c; name: FUN_01434f8c
 */


void FUN_01434f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0420f7d0;
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x20))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  if ((long *)param_1[6] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01434fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x20))();
  return;
}


