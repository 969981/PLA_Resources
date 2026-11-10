/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009cc370; name: _INIT_139
 */


void _INIT_139(void)

{
  DAT_043a90e0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043a90e4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043a90e8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_043a90fc = 0xffff;
  DAT_043a90f4 = 0;
  DAT_043a90f8 = 0xffffffff;
  DAT_043a90f0 = 0;
  FUN_00100250(&LAB_009c6f74,&DAT_043a9100,&PTR_LOOP_0411a000);
  return;
}


