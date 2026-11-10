/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142fd64; name: FUN_0142fd64
 */


void FUN_0142fd64(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = FUN_00d2eb20(lVar2 + 0x180,"grid_panel");
  if (lVar1 != 0) {
    lVar1 = FUN_0280f49c();
    lVar1 = thunk_FUN_00d2e944(lVar2 + 0x180,(long)&DAT_043c2fd8 + ((lVar1 << 0x20) >> 0x1b));
    if (lVar1 != 0) {
      FUN_02808d3c();
      return;
    }
  }
  return;
}


