/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d73a70; name: _INIT_147
 */


void _INIT_147(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_0437a0e0;
  DAT_043acdb8 = 0x994cd76cf26dfc40;
  DAT_043acdc0 = "anime_wake";
  DAT_043acdc8 = 10;
  DAT_043acdd0 = 0;
  FUN_00100250(PTR_FUN_0437a0e0,&DAT_043acdb8,&PTR_LOOP_0411a000);
  DAT_043acdd8 = 0x4a0f571a28d293b4;
  DAT_043acde0 = "anime_close";
  DAT_043acde8 = 0xb;
  DAT_043acdf0 = 0;
  FUN_00100250(puVar1,&DAT_043acdd8,&PTR_LOOP_0411a000);
  DAT_043acdf8 = 0xb1865b02e7e78e92;
  DAT_043ace00 = "anime_slide_in_l";
  DAT_043ace08 = 0x10;
  DAT_043ace10 = 0;
  FUN_00100250(puVar1,&DAT_043acdf8,&PTR_LOOP_0411a000);
  DAT_043ace28 = 0x10;
  DAT_043ace30 = 0;
  DAT_043ace18 = 0xb1866d02e7e7ad28;
  DAT_043ace20 = "anime_slide_in_r";
  FUN_00100250(puVar1,&DAT_043ace18,&PTR_LOOP_0411a000);
  DAT_043ace38 = 0x8158e72a82381501;
  DAT_043ace40 = "anime_slide_out_l";
  DAT_043ace48 = 0x11;
  DAT_043ace50 = 0;
  FUN_00100250(puVar1,&DAT_043ace38,&PTR_LOOP_0411a000);
  DAT_043ace68 = 0x11;
  DAT_043ace70 = 0;
  DAT_043ace58 = 0x8158d12a8237ef9f;
  DAT_043ace60 = "anime_slide_out_r";
  FUN_00100250(puVar1,&DAT_043ace58,&PTR_LOOP_0411a000);
  DAT_043ace88 = 10;
  DAT_043ace90 = 0;
  DAT_043ace78 = 0x3b8f5513c2470901;
  DAT_043ace80 = "anime_keep";
  FUN_00100250(puVar1,&DAT_043ace78,&PTR_LOOP_0411a000);
  return;
}


