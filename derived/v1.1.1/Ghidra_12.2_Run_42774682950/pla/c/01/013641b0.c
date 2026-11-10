/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013641b0; name: _INIT_211
 */


void _INIT_211(void)

{
  undefined *puVar1;
  
  DAT_043c23e0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_043c23e4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_043c23e8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_FUN_0437a0e0;
  DAT_043c23f4 = 0;
  DAT_043c23f0 = 0;
  DAT_043c23fc = 0xffff;
  DAT_043c23f8 = 0xffffffff;
  DAT_043c2400 = 0x4e2373f16172decd;
  DAT_043c2408 = "to_ba10_waitA01";
  DAT_043c2410 = 0xf;
  DAT_043c2418 = 0;
  FUN_00100250(PTR_FUN_0437a0e0,&DAT_043c2400,&PTR_LOOP_0411a000);
  DAT_043c2420 = 0x59012c66faf11e1b;
  DAT_043c2428 = "to_kw01_wait01";
  DAT_043c2430 = 0xe;
  DAT_043c2438 = 0;
  FUN_00100250(puVar1,&DAT_043c2420,&PTR_LOOP_0411a000);
  DAT_043c2440 = 0xa512b890fa78b18b;
  DAT_043c2448 = "to_ba20_buturi01";
  DAT_043c2450 = 0x10;
  DAT_043c2458 = 0;
  FUN_00100250(puVar1,&DAT_043c2440,&PTR_LOOP_0411a000);
  DAT_043c2460 = 0x348d6009bf5aa49;
  DAT_043c2468 = "to_ba21_tokusyu01";
  DAT_043c2470 = 0x11;
  DAT_043c2478 = 0;
  FUN_00100250(puVar1,&DAT_043c2460,&PTR_LOOP_0411a000);
  DAT_043c2490 = 0x10;
  DAT_043c2498 = 0;
  DAT_043c2480 = 0xbc451bba79bd37d0;
  DAT_043c2488 = "to_kw32_happyB01";
  FUN_00100250(puVar1,&DAT_043c2480,&PTR_LOOP_0411a000);
  DAT_043c24b0 = 0xe;
  DAT_043c24b8 = 0;
  DAT_043c24a0 = 0x6751a4f0604c5a2a;
  DAT_043c24a8 = "to_kw30_hate01";
  FUN_00100250(puVar1,&DAT_043c24a0,&PTR_LOOP_0411a000);
  return;
}


