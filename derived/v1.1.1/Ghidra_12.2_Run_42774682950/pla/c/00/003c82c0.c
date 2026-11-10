/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c82c0; name: _INIT_40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_40(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_04373fd0;
  uRam000000000439a6b0 = 0;
  _DAT_0439a6a8 = 0;
  DAT_0439a6a0 = 0;
  uRam000000000439a6c0 = 0;
  _DAT_0439a6b8 = 0;
  uRam000000000439a6d0 = 0;
  _DAT_0439a6c8 = 0;
  FUN_00100250(PTR_FUN_04373fd0,&DAT_0439a6a0,&PTR_LOOP_0411a000);
  DAT_0439a6d8 = 1;
  DAT_0439a6e0 = 0;
  *(undefined4 **)PTR_DAT_04373fc0 = &DAT_0439a6a0;
  DAT_0439a708 = 0;
  uRam000000000439a700 = 0;
  _DAT_0439a6f8 = 0;
  DAT_0439a6f0 = 0;
  DAT_0439a6e8 = 0;
  FUN_00100250(puVar1,&DAT_0439a6d8,&PTR_LOOP_0411a000);
  *(undefined4 **)PTR_DAT_04373fc8 = &DAT_0439a6d8;
  return;
}


