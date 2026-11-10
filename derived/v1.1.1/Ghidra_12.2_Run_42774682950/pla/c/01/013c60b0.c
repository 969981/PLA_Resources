/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c60b0; name: FUN_013c60b0
 */


undefined8 FUN_013c60b0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((*(int *)(param_1 + 0x68) == 0) && (uVar2 = FUN_013c6104(), (uVar2 & 1) == 0)) {
    FUN_013c61bc(param_1);
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x78) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


