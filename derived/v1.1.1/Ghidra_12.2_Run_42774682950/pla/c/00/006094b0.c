/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006094b0; name: FUN_006094b0
 */


size_t FUN_006094b0(void *param_1,size_t param_2,char *param_3,size_t param_4)

{
  bool bVar1;
  size_t sVar2;
  
  if (param_2 != 0) {
    if (param_4 == 0xffffffffffffffff) {
      param_4 = strlen(param_3);
    }
    sVar2 = param_2 - 1;
    bVar1 = param_2 <= param_4;
    param_2 = param_4;
    if (bVar1) {
      param_2 = sVar2;
    }
    memcpy(param_1,param_3,param_2);
    *(undefined1 *)((long)param_1 + param_2) = 0;
  }
  return param_2;
}


