/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f23f0; name: FUN_003f23f0
 */


void FUN_003f23f0(void)

{
  undefined1 auVar1 [16];
  
  FUN_002ef9f0(&DAT_0439c478,&LAB_003f20f0);
  FUN_002ef750(&DAT_0439c480);
  if ((DAT_0439c47c != 1) || ((DAT_0439c470 & 1) == 0)) {
                    /* try { // try from 003f2430 to 003f2473 has its CatchHandler @ 003f248c */
    auVar1 = FUN_002eefd0(1);
    FUN_002ef8a0(&DAT_0439c4c0,&DAT_0439c480,auVar1._0_8_,auVar1._8_8_);
    if ((DAT_0439c47c != 1) || (DAT_0439c470 != 1)) goto LAB_003f2474;
  }
  DAT_0439c47c = 0;
  FUN_003f2140();
LAB_003f2474:
                    /* try { // try from 003f2474 to 003f247f has its CatchHandler @ 003f2488 */
  FUN_002ef790(&DAT_0439c480);
  return;
}


