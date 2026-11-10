/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d0a0; name: FUN_0020d0a0
 */


undefined8 FUN_0020d0a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_0020c7ac();
  uVar1 = FUN_00205b90(*(undefined8 *)(lVar2 + 0x20),param_2 + 0x10,8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  return 0;
}


