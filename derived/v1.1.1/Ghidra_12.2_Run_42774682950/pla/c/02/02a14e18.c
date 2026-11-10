/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14e18; name: FUN_02a14e18
 */


char FUN_02a14e18(long param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x10) + 0x28);
  cVar2 = *pcVar3;
  if (cVar2 != '\0') {
    if (*(uint *)(pcVar3 + 4) == 0xff) {
      return '\0';
    }
    iVar1 = *(int *)(pcVar3 + 0xc);
    *(uint *)(pcVar3 + 0xc) = iVar1 + 1U;
    if (iVar1 + 1U < *(uint *)(pcVar3 + 4)) {
      return '\0';
    }
    *pcVar3 = '\0';
    pcVar3[0x10] = '\x1f';
  }
  return cVar2;
}


