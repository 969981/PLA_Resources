/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064f564; name: FUN_0064f564
 */


void FUN_0064f564(undefined8 param_1,long param_2,undefined8 param_3)

{
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    FUN_0064fba0(param_1,param_2,param_2 + 0x11,param_3);
    return;
  }
  FUN_0064fba0(param_1,param_2,*(undefined8 *)(param_2 + 0x20),param_3);
  return;
}


