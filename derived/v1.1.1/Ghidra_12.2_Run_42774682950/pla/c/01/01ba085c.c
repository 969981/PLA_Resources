/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba085c; name: FUN_01ba085c
 */


bool FUN_01ba085c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if ((((*(char *)(param_1 + 0x8d9) == '\0') && (*(char *)(param_1 + 0x821) == '\0')) &&
      (*(char *)(param_1 + 0x81d) == '\0')) &&
     ((*(char *)(param_1 + 0x956) == '\0' && (uVar2 = FUN_01ba0550(param_1), (uVar2 & 1) == 0)))) {
    bVar1 = *(char *)(param_1 + 0xa90) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


