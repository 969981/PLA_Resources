/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c128; name: FUN_02f0c128
 */


undefined8 FUN_02f0c128(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_02f06d0c(DAT_0440a138);
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else if (*(long *)(lVar1 + 0x28) == 0) {
    *(long *)(lVar1 + 0x20) = param_1;
    *(long *)(lVar1 + 0x28) = param_1;
    uVar2 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *(long *)(param_1 + 8) = *(long *)(lVar1 + 0x28);
    uVar2 = 1;
    *(long *)(lVar1 + 0x28) = param_1;
  }
  return uVar2;
}


