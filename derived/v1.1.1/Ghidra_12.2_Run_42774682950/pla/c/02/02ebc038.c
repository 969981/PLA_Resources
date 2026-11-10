/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebc038; name: FUN_02ebc038
 */


long FUN_02ebc038(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char local_14 [4];
  
  if (*param_2 == 0) {
    lVar2 = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      lVar2 = param_1 + 8;
    }
  }
  else {
    lVar1 = FUN_02ebc0f0(param_1 + 0x18,*param_2,local_14);
    lVar2 = 0;
    if (local_14[0] != '\0') {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


