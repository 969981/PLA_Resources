/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3e40; name: FUN_031f3e40
 */


void FUN_031f3e40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_031f390c(param_2,param_3,param_4);
  if ((*(byte *)(param_2 + 0x5c) | 2) == 3) {
    FUN_031f30a0(param_1,*(undefined8 *)(param_2 + 0x60));
    return;
  }
  return;
}


