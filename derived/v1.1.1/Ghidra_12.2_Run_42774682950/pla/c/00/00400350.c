/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400350; name: FUN_00400350
 */


void * FUN_00400350(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if (PTR_FUN_04157678 != (undefined *)0x0 && PTR_FUN_04157678 != PTR_FUN_04374190) {
                    /* WARNING: Could not recover jumptable at 0x00400384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_04157678)();
    return pvVar1;
  }
  if (param_1 == (void *)0x0) {
    if ((PTR_FUN_04157670 != (undefined *)0x0) && (PTR_FUN_04157670 != PTR_FUN_04374188)) {
                    /* WARNING: Could not recover jumptable at 0x004003b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_FUN_04157670)(param_2,param_3,param_4);
      return pvVar1;
    }
    if (param_2 != 0) {
      if ((DAT_0439cd98 & 1) == 0) {
        DAT_0439cd98 = 1;
      }
      pvVar1 = malloc(param_2);
      return pvVar1;
    }
  }
  else {
    if (param_2 != 0) {
      pvVar1 = realloc(param_1,param_2);
      return pvVar1;
    }
    if ((PTR_FUN_04157680 != (undefined *)0x0) && (PTR_FUN_04157680 != PTR_FUN_04374198)) {
      (*(code *)PTR_FUN_04157680)(param_1,param_3,param_4);
      return (void *)0x0;
    }
    free(param_1);
  }
  return (void *)0x0;
}


