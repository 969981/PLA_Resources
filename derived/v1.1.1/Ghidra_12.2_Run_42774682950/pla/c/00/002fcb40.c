/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fcb40; name: FUN_002fcb40
 */


void FUN_002fcb40(void)

{
  int iVar1;
  
  if ((*(int *)PTR_DAT_04373950 == 0) ||
     (iVar1 = (**(code **)(PTR_PTR_04373958 + 0x20))(), iVar1 == 0)) {
    *(undefined4 *)PTR_DAT_04373960 = 0;
    return;
  }
  return;
}


