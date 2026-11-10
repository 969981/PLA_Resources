/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cd08; name: FUN_0020cd08
 */


undefined8 FUN_0020cd08(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -9;
  FUN_0020c7ac();
  FUN_0020cb34(*(undefined8 *)(lVar1 + 0x20),param_2 + 0x10);
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 5;
  return 0;
}


