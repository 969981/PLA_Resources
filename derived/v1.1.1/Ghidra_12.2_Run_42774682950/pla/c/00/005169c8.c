/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005169c8; name: FUN_005169c8
 */


void FUN_005169c8(char *param_1)

{
  long *plVar1;
  
  if (*param_1 != '\0') {
    if (param_1[0x20] != '\0') {
      plVar1 = (long *)(param_1 + 0x28);
      if (*plVar1 != 0) {
        FUN_0051e9cc(plVar1);
        FUN_002e2ea0(PTR_LAB_04373088,*plVar1);
      }
      param_1[0x20] = '\0';
    }
    if ((param_1[8] & 1U) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x18));
    }
    *param_1 = '\0';
  }
  return;
}


