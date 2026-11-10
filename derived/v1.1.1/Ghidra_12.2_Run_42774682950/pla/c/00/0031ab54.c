/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031ab54; name: FUN_0031ab54
 */


void FUN_0031ab54(byte *param_1)

{
  if ((*(int *)(param_1 + 0x18) == 9) && ((*param_1 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


