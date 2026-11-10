/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7600; name: FUN_02ea7600
 */


void FUN_02ea7600(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar2 = FUN_02ea6eb8(param_1 + 0x20);
  if ((cVar1 == '\0') || ((uVar2 & 1) != 0)) {
    FUN_02ea7404(param_1);
    return;
  }
  return;
}


