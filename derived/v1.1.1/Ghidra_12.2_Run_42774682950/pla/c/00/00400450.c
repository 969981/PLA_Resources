/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400450; name: FUN_00400450
 */


void * FUN_00400450(void *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if ((PTR_FUN_04157670 != (undefined *)0x0) && (PTR_FUN_04157670 != PTR_FUN_04374188)) {
                    /* WARNING: Could not recover jumptable at 0x004004c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_FUN_04157670)(param_3,param_4,param_5);
      return pvVar1;
    }
    if (param_3 != 0) {
      if ((DAT_0439cd98 & 1) == 0) {
        DAT_0439cd98 = 1;
      }
      pvVar1 = malloc(param_3);
      return pvVar1;
    }
    pvVar1 = (void *)0x0;
  }
  else if (param_3 == 0) {
    if (param_2 != 0) {
      FUN_004006a0(param_1,param_2);
    }
    if ((PTR_FUN_04157680 == (undefined *)0x0) || (PTR_FUN_04157680 == PTR_FUN_04374198)) {
      free(param_1);
      pvVar1 = (void *)0x0;
    }
    else {
      (*(code *)PTR_FUN_04157680)(param_1,param_4,param_5);
      pvVar1 = (void *)0x0;
    }
  }
  else if (param_2 < param_3 || param_2 - param_3 == 0) {
    if ((PTR_FUN_04157670 == (undefined *)0x0) || (PTR_FUN_04157670 == PTR_FUN_04374188)) {
      if ((DAT_0439cd98 & 1) == 0) {
        DAT_0439cd98 = 1;
      }
      pvVar1 = malloc(param_3);
    }
    else {
      pvVar1 = (void *)(*(code *)PTR_FUN_04157670)(param_3,param_4,param_5);
    }
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,param_1,param_2);
      if (param_2 != 0) {
        FUN_004006a0(param_1,param_2);
      }
      if ((PTR_FUN_04157680 == (undefined *)0x0) || (PTR_FUN_04157680 == PTR_FUN_04374198)) {
        free(param_1);
      }
      else {
        (*(code *)PTR_FUN_04157680)(param_1,param_4,param_5);
      }
    }
  }
  else {
    FUN_004006a0((long)param_1 + param_3,param_2 - param_3);
    pvVar1 = param_1;
  }
  return pvVar1;
}


