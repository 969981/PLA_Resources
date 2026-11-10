/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f5350; name: FUN_013f5350
 */


void FUN_013f5350(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x6d8) != '\0') &&
     (uVar1 = FUN_01363370(*(undefined8 *)(param_1 + 0x5b8)), (uVar1 & 1) != 0)) {
    FUN_01091160(*(undefined4 *)(param_1 + 0x6c0),*(undefined2 *)(param_1 + 0x6c4),0,0);
    *(undefined1 *)(param_1 + 0x6d9) = 1;
  }
  return;
}


