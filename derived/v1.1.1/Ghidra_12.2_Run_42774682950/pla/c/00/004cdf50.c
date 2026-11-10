/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cdf50; name: FUN_004cdf50
 */


bool FUN_004cdf50(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  if ((*(long *)(*(long *)(param_1 + 0xb0) + 0x1f8) == 0) &&
     (*(long *)(*(long *)(param_1 + 0xb0) + 0x200) == 0)) {
    return false;
  }
  FUN_004281c0(&local_20);
  lVar1 = *(long *)(param_1 + 0xb0);
  if ((local_20 <= *(long *)(lVar1 + 0x1f8)) &&
     ((*(long *)(lVar1 + 0x1f8) != local_20 || (local_18 < *(long *)(lVar1 + 0x200))))) {
    local_20 = *(long *)(lVar1 + 0x1f8) - local_20;
    local_18 = *(long *)(lVar1 + 0x200) - local_18;
    if (local_18 < 0) {
      local_20 = local_20 + -1;
      local_18 = local_18 + 1000000;
    }
    if ((14999 < local_18) || (local_20 != 0)) {
      if (0 < local_20) {
        return false;
      }
      goto LAB_004cdfe0;
    }
  }
  local_18 = 0;
LAB_004cdfe0:
  return local_18 < 1;
}


