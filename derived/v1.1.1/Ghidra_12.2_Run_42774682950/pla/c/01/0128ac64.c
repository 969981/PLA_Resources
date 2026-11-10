/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128ac64; name: FUN_0128ac64
 */


bool FUN_0128ac64(long param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = 0x54;
  cVar1 = *(char *)(param_1 + 0x1678);
  pcVar2 = (char *)(param_1 + 0x1679);
  while( true ) {
    if (cVar1 != '\0') {
      return true;
    }
    if (lVar3 == 0) break;
    if (*pcVar2 != '\0') {
      return true;
    }
    lVar3 = lVar3 + -2;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
  }
  if (*(char *)(param_1 + 0x16cd) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16ce) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16cf) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d0) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d1) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d2) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d3) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d4) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d5) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d6) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d7) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d8) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16d9) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16da) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16db) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16dc) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16dd) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16de) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16df) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16e0) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16e1) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x16e2) == '\0') {
    return *(char *)(param_1 + 0x16e3) != '\0';
  }
  return true;
}


