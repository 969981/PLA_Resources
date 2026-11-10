/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cccc; name: FUN_0020cccc
 */


undefined8 FUN_0020cccc(long param_1)

{
  if ((*(byte *)(param_1 + 0xd) >> 5 & 1) == 0) {
    FUN_00205bfc();
  }
  else {
    FUN_0020cc8c(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 0;
}


