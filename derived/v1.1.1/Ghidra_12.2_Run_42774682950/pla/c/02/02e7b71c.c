/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b71c; name: FUN_02e7b71c
 */


undefined8 FUN_02e7b71c(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x29) != *(char *)(param_2 + 0x29)) {
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x28);
  uVar2 = bVar3 - 0x80;
  if (0x20 < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  uVar2 = *(byte *)(param_2 + 0x28) - 0x80;
  if (0x20 < uVar2) {
    return 0;
  }
  if ((1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2a) != *(char *)(param_2 + 0x2a)) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x30) >> 2 & 1) != 0) {
    return 0;
  }
  if (bVar3 == 0x80) {
LAB_02e7b7a8:
    if ((*(byte *)(param_2 + 0x28) == 0x90) && (*(char *)(param_2 + 0x2b) != '\0')) {
      *(undefined1 *)(param_1 + 0x28) = 0x80;
      *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
      piVar4 = *(int **)(param_2 + 0x10);
      *(int **)(param_1 + 0x10) = piVar4;
      *piVar4 = *piVar4 + 1;
      bVar3 = *(byte *)(param_1 + 0x28);
    }
LAB_02e7b7e0:
    if (bVar3 == 0x80) {
      bVar3 = 4;
      goto LAB_02e7b800;
    }
    if (bVar3 != 0x90) {
      bVar3 = 0;
      goto LAB_02e7b800;
    }
    cVar1 = *(char *)(param_1 + 0x2b);
  }
  else {
    if (bVar3 != 0x90) goto LAB_02e7b7e0;
    cVar1 = *(char *)(param_1 + 0x2b);
    if (cVar1 == '\0') goto LAB_02e7b7a8;
  }
  bVar3 = (cVar1 == '\0') << 2;
LAB_02e7b800:
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfb | bVar3;
  return 1;
}


