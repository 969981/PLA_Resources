/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dceb8; name: FUN_001dceb8
 */


char * FUN_001dceb8(void)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_002044f4();
  if (pcVar1 != (char *)0x0) {
    __n = strlen(pcVar1);
    if (*pcVar1 == '\"') {
      memmove(pcVar1,pcVar1 + 1,__n);
      __n = __n - 1;
    }
    if ((__n != 0) && (sVar2 = __n - 1, pcVar1[sVar2] == '\"')) {
      pcVar1[sVar2] = '\0';
      __n = sVar2;
    }
    if (*pcVar1 != '/') {
      FUN_002044d4(pcVar1);
      pcVar1 = (char *)FUN_002044f4(&DAT_0389ffa9);
      return pcVar1;
    }
    if ((__n != 0) && (pcVar1[__n - 1] == '/')) {
      pcVar1[__n - 1] = '\0';
    }
  }
  return pcVar1;
}


