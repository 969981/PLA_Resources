/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbf0b0; name: _INIT_320
 */


void _INIT_320(void)

{
  undefined *puVar1;
  
  DAT_043d2d20 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043d2d24 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043d2d28 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_FUN_0437a0e0;
  DAT_043d2d34 = 0;
  DAT_043d2d30 = 0;
  DAT_043d2d3c = 0xffff;
  DAT_043d2d38 = 0xffffffff;
  DAT_043d2d40 = 0xf93bfb66c4b8059b;
  DAT_043d2d48 = "LookAtPos00";
  DAT_043d2d50 = 0xb;
  DAT_043d2d58 = 0;
  FUN_00100250(PTR_FUN_0437a0e0,&DAT_043d2d40,&PTR_LOOP_0411a000);
  DAT_043d2d60 = 0xe1a60e31891b9b6a;
  DAT_043d2d68 = "kinomi_locator01";
  DAT_043d2d70 = 0x10;
  DAT_043d2d78 = 0;
  FUN_00100250(puVar1,&DAT_043d2d60,&PTR_LOOP_0411a000);
  DAT_043d2d90 = 0x10;
  DAT_043d2d98 = 0;
  DAT_043d2d80 = 0xe1a60d31891b99b7;
  DAT_043d2d88 = "kinomi_locator02";
  FUN_00100250(puVar1,&DAT_043d2d80,&PTR_LOOP_0411a000);
  DAT_043d2db0 = 0x10;
  DAT_043d2db8 = 0;
  DAT_043d2da0 = 0xe1a60c31891b9804;
  DAT_043d2da8 = "kinomi_locator03";
  FUN_00100250(puVar1,&DAT_043d2da0,&PTR_LOOP_0411a000);
  DAT_043d2dd0 = 0x10;
  DAT_043d2dd8 = 0;
  DAT_043d2dc0 = 0xe1a60b31891b9651;
  DAT_043d2dc8 = "kinomi_locator04";
  FUN_00100250(puVar1,&DAT_043d2dc0,&PTR_LOOP_0411a000);
  DAT_043d2df0 = 0x10;
  DAT_043d2df8 = 0;
  DAT_043d2de0 = 0xe1a60a31891b949e;
  DAT_043d2de8 = "kinomi_locator05";
  FUN_00100250(puVar1,&DAT_043d2de0,&PTR_LOOP_0411a000);
  return;
}


