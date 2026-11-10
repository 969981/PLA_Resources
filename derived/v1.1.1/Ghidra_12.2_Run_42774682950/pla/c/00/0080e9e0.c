/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080e9e0; name: _INIT_106
 */


void _INIT_106(void)

{
  DAT_043a4078 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043a407c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043a4080 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043a4094 = 0xffff;
  DAT_043a408c = 0;
  DAT_043a4088 = 0;
  DAT_043a4090 = 0xffffffff;
  return;
}


