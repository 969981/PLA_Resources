/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00810020; name: _INIT_110
 */


void _INIT_110(void)

{
  DAT_043a40f8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043a40fc = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043a4100 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043a4114 = 0xffff;
  DAT_043a410c = 0;
  DAT_043a4108 = 0;
  DAT_043a4110 = 0xffffffff;
  return;
}


