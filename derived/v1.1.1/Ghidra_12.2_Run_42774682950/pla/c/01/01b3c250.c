/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3c250; name: _INIT_313
 */


void _INIT_313(void)

{
  undefined *puVar1;
  
  DAT_043d2960 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043d2964 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043d2968 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_FUN_0437a0e0;
  DAT_043d2974 = 0;
  DAT_043d2970 = 0;
  DAT_043d297c = 0xffff;
  DAT_043d2978 = 0xffffffff;
  DAT_043d2980 = 0x113052c096300d8;
  DAT_043d2988 = "EffHeadCenter01";
  DAT_043d2990 = 0xf;
  DAT_043d2998 = 0;
  FUN_00100250(PTR_FUN_0437a0e0,&DAT_043d2980,&PTR_LOOP_0411a000);
  DAT_043d29a0 = 0x113052c096300d8;
  DAT_043d29a8 = "EffHeadCenter01";
  DAT_043d29b0 = 0xf;
  DAT_043d29b8 = 0;
  FUN_00100250(puVar1,&DAT_043d29a0,&PTR_LOOP_0411a000);
  return;
}


