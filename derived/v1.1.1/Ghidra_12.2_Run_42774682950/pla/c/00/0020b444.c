/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b444; name: FUN_0020b444
 */


bool FUN_0020b444(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) == 0) {
    if ((((*(long *)(param_1 + 0x150) != 0) || (*(long *)(param_1 + 0x108) != 0)) ||
        (*(long *)(param_1 + 0x120) != 0)) ||
       ((iVar1 = FUN_00211710(param_1 + 0x38), iVar1 == 0 && (0 < *(int *)(param_1 + 0x94c))))) {
      return true;
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      return *(ulong *)(param_1 + 0x8e8) < (ulong)*(uint *)(param_1 + 0x96c);
    }
  }
  return false;
}


