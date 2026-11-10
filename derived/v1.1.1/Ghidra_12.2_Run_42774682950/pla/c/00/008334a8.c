/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008334a8; name: FUN_008334a8
 */


void FUN_008334a8(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x7e0) == -3) || (*(char *)(param_1 + 0x7e1) == -3)) {
    lVar1 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    if (*(long *)(lVar1 + 0x98) != 0) {
      *(undefined2 *)(param_1 + 0x7e0) = *(undefined2 *)(*(long *)(lVar1 + 0x98) + 0x90);
    }
  }
  return;
}


