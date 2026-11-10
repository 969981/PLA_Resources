/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01838390; name: FUN_01838390
 */


void FUN_01838390(long param_1)

{
  if ((*(uint *)(param_1 + 0x220) < 8 &&
       (1 << (ulong)(*(uint *)(param_1 + 0x220) & 0x1f) & 0xd4U) != 0) &&
     (*(char *)(param_1 + 0x366) != '\0')) {
    FUN_015916d0(param_1,1,0x80,(int)DAT_042284a0);
    return;
  }
  return;
}


