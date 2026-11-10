/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bafc18; name: FUN_01bafc18
 */


void FUN_01bafc18(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x8a6) == '\0') || (uVar1 = FUN_01a5afec(), (uVar1 & 1) != 0)) {
    return;
  }
  FUN_01a4f4d4(param_1,&DAT_03a7ca80,1);
  FUN_01a59a8c(param_1);
  return;
}


