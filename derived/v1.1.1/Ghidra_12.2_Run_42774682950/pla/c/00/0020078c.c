/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020078c; name: FUN_0020078c
 */


undefined8 FUN_0020078c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) &&
     (iVar1 = FUN_001f8bd0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10)),
     iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


