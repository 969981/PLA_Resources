/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02880e70; name: FUN_02880e70
 */


void FUN_02880e70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_0288ff74();
  uVar2 = FUN_0289023c(param_1);
  FUN_0288ffd0(&DAT_043ec270,uVar2);
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  lVar1 = 0;
  if (DAT_043ec270 != 0) {
    lVar1 = DAT_043ec270 + 0x48;
  }
  *(long *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = lVar1;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  return;
}


