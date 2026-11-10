/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d23c; name: FUN_0020d23c
 */


undefined8 FUN_0020d23c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_0020c7ac();
  FUN_002056f0(*(undefined8 *)(lVar2 + 0x20),*(undefined2 *)(puVar1 + 1));
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 2;
  FUN_0020c4a8(param_1,*puVar1,puVar1[1]);
  FUN_0020c4a8(param_1,puVar1[2],puVar1[3]);
  return 0;
}


