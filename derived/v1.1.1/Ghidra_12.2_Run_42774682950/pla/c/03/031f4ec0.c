/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4ec0; name: FUN_031f4ec0
 */


void FUN_031f4ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_031f4a08(param_1,param_2,param_3,0);
    return;
  }
  FUN_031f4d04(param_1);
  FUN_031f4a08(param_1,param_2,param_3,1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}


