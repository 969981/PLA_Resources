/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01272648; name: FUN_01272648
 */


bool FUN_01272648(char *param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_2 == *param_1) {
    plVar1 = (long *)PTR_DAT_04379c88;
    if (*(long *)(param_2 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 8) + 0x58);
    }
    plVar2 = (long *)PTR_DAT_04379c88;
    if (*(long *)(param_1 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x58);
    }
    if (*plVar1 == *plVar2) {
      plVar1 = (long *)PTR_DAT_04379c88;
      if (*(long *)(param_2 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x10) + 0x58);
      }
      plVar2 = (long *)PTR_DAT_04379c88;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + 0x58);
      }
      if (*plVar1 == *plVar2) {
        return *(long *)(param_2 + 0x18) == *(long *)(param_1 + 0x18);
      }
    }
  }
  return false;
}


