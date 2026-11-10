/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02858c08; name: FUN_02858c08
 */


bool FUN_02858c08(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (long)param_2 * 8 + 0x68);
  if (lVar1 == 0) {
    return true;
  }
  if (((*(char *)(lVar1 + 0xe0) == '\0') || ((*(byte *)(lVar1 + 0xe1) & 1) == 0)) ||
     (*(long *)(lVar1 + 0x70) == 0)) {
    return false;
  }
  return *(char *)(*(long *)(lVar1 + 0x70) + 0x1e1) != '\0';
}


