/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020448c; name: FUN_0020448c
 */


undefined8 FUN_0020448c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_043727c0;
  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    uVar2 = 1;
    *(long *)PTR_DAT_043727c0 = param_1;
    *(long *)(puVar1 + 8) = param_2;
    *(long *)(puVar1 + 0x20) = param_5;
    *(long *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
  }
  return uVar2;
}


