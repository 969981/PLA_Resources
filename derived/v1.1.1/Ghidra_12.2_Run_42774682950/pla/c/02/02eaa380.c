/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa380; name: FUN_02eaa380
 */


void FUN_02eaa380(long param_1)

{
  if ((*(int *)(param_1 + 0x48) == 2) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_02ea99e8(param_1,0,4);
    return;
  }
  return;
}


