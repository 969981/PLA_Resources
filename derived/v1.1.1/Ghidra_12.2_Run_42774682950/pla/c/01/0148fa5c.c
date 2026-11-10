/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148fa5c; name: FUN_0148fa5c
 */


void FUN_0148fa5c(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = (char *)(param_1 + 0x2b90);
  if ((*pcVar1 == '\0') || (*(char *)(param_1 + 0x2b91) != '\0')) {
    FUN_0149139c(param_1 + 0x29d0);
    FUN_0149139c(param_1 + 0x2ab0);
    FUN_0149139c(param_1 + 0x28f0);
  }
  if ((*(long *)(param_1 + 0x2a88) == 0) ||
     (FUN_0148cc94(param_1,4), *(char *)(param_1 + 0x1570) != '\0')) {
    lVar2 = *(long *)(param_1 + 0x2b68);
  }
  else {
    *(char *)(param_1 + 0x1570) = '\x01';
    lVar2 = *(long *)(param_1 + 0x2b68);
  }
  if ((lVar2 == 0) || (FUN_0148cc94(param_1,6), *(char *)(param_1 + 0x1c50) != '\0')) {
    lVar2 = *(long *)(param_1 + 0x29a8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1c50) = 1;
    lVar2 = *(long *)(param_1 + 0x29a8);
  }
  if ((lVar2 != 0) && (FUN_0148cc94(param_1,5), *(char *)(param_1 + 0x18e0) == '\0')) {
    *(undefined1 *)(param_1 + 0x18e0) = 1;
  }
  pcVar1[0] = '\x01';
  pcVar1[1] = '\0';
  return;
}


