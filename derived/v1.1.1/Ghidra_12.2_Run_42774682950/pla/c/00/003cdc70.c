/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cdc70; name: FUN_003cdc70
 */


void FUN_003cdc70(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_002f93f0();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_002f5c10(), (uVar1 & 1) == 0)) {
    FUN_002ef6d0(&DAT_0439a8a0);
    DAT_04156990 = 2;
    DAT_04156998 = 0x20;
    PTR_LAB_041569a0 = FUN_003cdcf0;
    PTR_LAB_041569a8 = &LAB_003cde50;
    PTR_LAB_041569b0 = &LAB_003cdff0;
    PTR_LAB_041569b8 = &LAB_003ce000;
    PTR_LAB_041569c0 = &LAB_003ce0e0;
    DAT_041569d8 = &LAB_003ce380;
    DAT_041569c8 = 0;
    DAT_041569d0 = 0;
  }
  return;
}


