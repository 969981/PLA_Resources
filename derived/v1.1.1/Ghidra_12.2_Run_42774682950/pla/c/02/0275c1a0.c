/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275c1a0; name: _INIT_369
 */


void _INIT_369(void)

{
  DAT_043ea4e8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043ea4ec = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043ea4f0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043ea4fc = 0;
  DAT_043ea4f8 = 0;
  DAT_043ea504 = 0xffff;
  DAT_043ea500 = 0xffffffff;
  DAT_043ea508 = 0;
  FUN_00100250(&LAB_027288c8,&DAT_043ea508,&PTR_LOOP_0411a000);
  return;
}


