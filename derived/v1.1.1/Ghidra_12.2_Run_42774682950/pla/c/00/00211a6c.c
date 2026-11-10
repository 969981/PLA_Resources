/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211a6c; name: FUN_00211a6c
 */


undefined8 FUN_00211a6c(long param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xe4) & (param_2 ^ 0xff);
  *(byte *)(param_1 + 0xe4) = bVar1;
  if ((bVar1 & 0xc) == 0) {
    uVar2 = FUN_00211c68(*(undefined8 *)(param_1 + 0x70),param_1);
    return uVar2;
  }
  return 0;
}


