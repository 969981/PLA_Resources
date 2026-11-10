/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fdcc0; name: _INIT_386
 */


void _INIT_386(void)

{
  DAT_043eb158 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043eb15c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043eb160 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043eb16c = 0;
  DAT_043eb168 = 0;
  DAT_043eb174 = 0xffff;
  DAT_043eb170 = 0xffffffff;
  return;
}


