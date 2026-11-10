/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da9688; name: FUN_00da9688
 */


void FUN_00da9688(long param_1)

{
  char cVar1;
  
  FUN_00da96cc();
  if (*(char *)(param_1 + 0x140) == '\0') {
    cVar1 = *(char *)(param_1 + 0x68);
  }
  else {
    *(undefined1 *)(param_1 + 0x140) = 0;
    cVar1 = *(char *)(param_1 + 0x68);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}


