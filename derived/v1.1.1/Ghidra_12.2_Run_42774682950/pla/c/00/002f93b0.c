/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f93b0; name: FUN_002f93b0
 */


bool FUN_002f93b0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_002fde70();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(char *)(DAT_043997f8 + 8) != '\0';
}


