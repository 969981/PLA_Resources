/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cc2cd0; name: _INIT_331
 */


void _INIT_331(void)

{
  undefined1 auStack_220 [496];
  
  memcpy(auStack_220,&DAT_03a7cd98,0x1f0);
  DAT_043d33d8 = 0;
  DAT_043d33e0 = 0;
  DAT_043d33e8 = 0;
  DAT_043d33f0 = 0;
  DAT_043d33f8 = 0x3f800000;
  FUN_01cc37bc(auStack_220,auStack_220 + 0x1f0);
  FUN_00100250(&LAB_01cbe524,&DAT_043d33d8,&PTR_LOOP_0411a000);
  return;
}


