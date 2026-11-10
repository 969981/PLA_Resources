/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004013a0; name: FUN_004013a0
 */


void FUN_004013a0(void)

{
  int iVar1;
  
  iVar1 = FUN_004060f0(0,0);
  if (iVar1 != 0) {
    DAT_0439de50 = FUN_004000a0();
    if (DAT_0439de50 != 0) {
      DAT_0439de58 = FUN_00405620(&LAB_00402520,&LAB_00402570);
      if (DAT_0439de58 == 0) {
        FUN_00400180(DAT_0439de50);
        DAT_0439de50 = 0;
        DAT_0439de3c = 0;
        return;
      }
      DAT_0439de3c = 1;
      return;
    }
  }
  DAT_0439de3c = 0;
  return;
}


