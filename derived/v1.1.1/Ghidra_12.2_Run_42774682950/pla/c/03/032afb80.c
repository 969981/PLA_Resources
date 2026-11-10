/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032afb80; name: FUN_032afb80
 */


size_t FUN_032afb80(ulong *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  size_t sVar2;
  
  uVar1 = (long)*param_1 + param_3;
  if (param_1[1] < uVar1) {
    sVar2 = FUN_0332224c(param_1,param_2,param_3);
    return sVar2;
  }
  memcpy((void *)*param_1,param_2,param_3);
  *param_1 = uVar1;
  return param_3;
}


