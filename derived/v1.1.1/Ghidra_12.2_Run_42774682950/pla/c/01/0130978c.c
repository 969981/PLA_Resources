/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130978c; name: FUN_0130978c
 */


undefined8 FUN_0130978c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0xc0) == 0) &&
     (uVar1 = FUN_02c4d8d4(*(undefined8 *)(param_1 + 8)), (uVar1 & 1) != 0)) {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


