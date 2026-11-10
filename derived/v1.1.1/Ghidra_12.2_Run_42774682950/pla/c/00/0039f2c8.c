/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039f2c8; name: FUN_0039f2c8
 */


void FUN_0039f2c8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
  if (iVar1 != 0 && *(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80)) {
                    /* try { // try from 0039f2ec to 0039f2ef has its CatchHandler @ 0039f334 */
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),iVar1);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x18));
  return;
}


