/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00594320; name: FUN_00594320
 */


void FUN_00594320(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_0058f370(*param_1);
  FUN_0058f6d0(param_1[1]);
  free(param_1);
  return;
}


