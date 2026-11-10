/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008094a0; name: _INIT_100
 */


void _INIT_100(void)

{
  DAT_043a3fa8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043a3fac = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043a3fb0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043a3fc4 = 0xffff;
  DAT_043a3fbc = 0;
  DAT_043a3fb8 = 0;
  DAT_043a3fc0 = 0xffffffff;
  return;
}


