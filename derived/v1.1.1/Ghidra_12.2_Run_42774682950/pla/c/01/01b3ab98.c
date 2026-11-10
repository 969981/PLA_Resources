/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3ab98; name: FUN_01b3ab98
 */


void FUN_01b3ab98(long param_1,byte param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98));
  if (((param_2 < 0x13) && (iVar2 == 0x1ed)) &&
     (uVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98)), uVar1 != param_2)) {
    *(byte *)(param_1 + 0x628) = param_2;
  }
  return;
}


