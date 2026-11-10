/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e5560; name: _INIT_251
 */


void _INIT_251(void)

{
  DAT_043c5010 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043c5014 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043c5018 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043c5024 = 0;
  DAT_043c5020 = 0;
  DAT_043c502c = 0xffff;
  DAT_043c5028 = 0xffffffff;
  return;
}


