/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00516a34; name: FUN_00516a34
 */


void FUN_00516a34(char *param_1)

{
  long *plVar1;
  
  if (*param_1 != '\0') {
    plVar1 = (long *)(param_1 + 8);
    if (*plVar1 != 0) {
      FUN_0051e9cc(plVar1);
      FUN_002e2ea0(PTR_LAB_04373088,*plVar1);
    }
    *param_1 = '\0';
  }
  return;
}


