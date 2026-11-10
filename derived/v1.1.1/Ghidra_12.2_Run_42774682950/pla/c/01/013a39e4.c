/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a39e4; name: FUN_013a39e4
 */


void FUN_013a39e4(long param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xd0);
  memcpy((void *)(param_1 + 0xd8),param_2,0x2c8);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  return;
}


