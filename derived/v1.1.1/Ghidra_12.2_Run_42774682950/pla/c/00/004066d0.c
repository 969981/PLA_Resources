/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004066d0; name: thunk_FUN_00400260
 */


void thunk_FUN_00400260(size_t param_1)

{
  if (PTR_FUN_04157670 != (undefined *)0x0 && PTR_FUN_04157670 != PTR_FUN_04374188) {
                    /* WARNING: Could not recover jumptable at 0x00400298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_04157670)();
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if ((DAT_0439cd98 & 1) == 0) {
    DAT_0439cd98 = 1;
  }
  malloc(param_1);
  return;
}


