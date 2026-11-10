/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02797208; name: FUN_02797208
 */


void FUN_02797208(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_0279b098();
  if ((((uVar1 & 1) != 0) && (*param_2 != 0)) &&
     (plVar2 = (long *)FUN_013b36b8(), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x50))();
  }
  FUN_013b4a10(param_1 + 0x170,param_2);
  return;
}


