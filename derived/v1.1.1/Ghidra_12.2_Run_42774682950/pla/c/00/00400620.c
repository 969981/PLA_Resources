/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400620; name: FUN_00400620
 */


void FUN_00400620(void *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_004006a0(param_1);
  }
  if ((PTR_FUN_04157680 == (undefined *)0x0) || (PTR_FUN_04157680 == PTR_FUN_04374198)) {
    free(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00400674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_04157680)(param_1,param_3,param_4);
  return;
}


