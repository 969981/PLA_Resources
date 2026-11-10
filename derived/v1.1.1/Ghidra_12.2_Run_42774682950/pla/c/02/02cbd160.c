/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbd160; name: _INIT_425
 */


void _INIT_425(void)

{
  DAT_044089d0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_044089d4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_044089d8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_044089e4 = 0;
  DAT_044089e0 = 0;
  DAT_044089ec = 0xffff;
  DAT_044089e8 = 0xffffffff;
  DAT_044089f0 = 0;
  DAT_044089f8 = 0;
  DAT_04408a00 = 0;
  DAT_04408a08 = 0;
  FUN_00100250(&LAB_02cb92c4,&DAT_044089f0,&PTR_LOOP_0411a000);
  DAT_04408a10 = 0;
  DAT_04408a18 = 0;
  DAT_04408a20 = 0;
  DAT_04408a28 = 0;
  FUN_00100250(&LAB_02cb9530,&DAT_04408a10,&PTR_LOOP_0411a000);
  DAT_04408a30 = 0;
  DAT_04408a38 = 0;
  DAT_04408a40 = 0;
  DAT_04408a48 = 0;
  FUN_00100250(&LAB_02cb979c,&DAT_04408a30,&PTR_LOOP_0411a000);
  return;
}


