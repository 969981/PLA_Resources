/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01918e30; name: _INIT_289
 */


void _INIT_289(void)

{
  DAT_043d1b60 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043d1b64 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043d1b68 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043d1b74 = 0;
  DAT_043d1b70 = 0;
  DAT_043d1b7c = 0xffff;
  DAT_043d1b78 = 0xffffffff;
  DAT_043d1b80 = 0x50c47b8870be066f;
  DAT_043d1b88 = "throw";
  DAT_043d1b90 = 5;
  DAT_043d1b98 = 0;
  FUN_00100250(&LAB_01917664,&DAT_043d1b80,&PTR_LOOP_0411a000);
  DAT_043d1ba0 = &DAT_27e3c7e98334479c;
  DAT_043d1ba8 = "throwable_after_hit";
  DAT_043d1bb0 = 0x13;
  DAT_043d1bb8 = 0;
  FUN_00100250(&LAB_01917664,&DAT_043d1ba0,&PTR_LOOP_0411a000);
  return;
}


