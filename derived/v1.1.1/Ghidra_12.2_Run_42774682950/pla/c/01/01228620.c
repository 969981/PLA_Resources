/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01228620; name: _INIT_192
 */


void _INIT_192(void)

{
  DAT_043bf690 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043bf694 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043bf698 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043bf6a4 = 0;
  DAT_043bf6a0 = 0;
  DAT_043bf6ac = 0xffff;
  DAT_043bf6a8 = 0xffffffff;
  return;
}


