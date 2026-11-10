/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d2bdc; name: FUN_005d2bdc
 */


void FUN_005d2bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0418d688;
  FUN_003ee5f8(param_1 + 0x17);
  FUN_003ee5f8(param_1 + 0xd);
  if (*(char *)(param_1 + 9) != '\0') {
    if ((*(byte *)(param_1 + 10) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[0xc]);
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[5]);
  return;
}


