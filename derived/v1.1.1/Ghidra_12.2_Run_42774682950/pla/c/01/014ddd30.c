/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ddd30; name: FUN_014ddd30
 */


void FUN_014ddd30(long param_1)

{
  long lVar1;
  
  FUN_00d42438(param_1,1,1);
  FUN_00d428b0(param_1,0);
  FUN_014ddd90(param_1);
  lVar1 = FUN_00d2eb20(param_1 + 0x180,"grid_panel");
  if (lVar1 == 0) {
    return;
  }
  FUN_0280779c(lVar1,1);
  return;
}


