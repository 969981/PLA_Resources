/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4d1b8; name: FUN_02e4d1b8
 */


bool FUN_02e4d1b8(long param_1)

{
  ulong uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xf0) == 0) {
    cVar2 = *(char *)(param_1 + 0x118);
  }
  else {
    uVar1 = FUN_02e4eefc(param_1);
    if ((uVar1 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 0x118);
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0x118) = cVar2;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return cVar2 != '\0';
}


