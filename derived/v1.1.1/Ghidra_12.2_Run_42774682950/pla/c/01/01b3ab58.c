/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3ab58; name: FUN_01b3ab58
 */


bool FUN_01b3ab58(long param_1)

{
  bool bVar1;
  ushort uVar2;
  
  if (*(long *)(param_1 + 0x5e8) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98));
    bVar1 = *(byte *)(param_1 + 0x628) != uVar2;
  }
  return bVar1;
}


