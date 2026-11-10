/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f33298; name: FUN_02f33298
 */


void FUN_02f33298(void)

{
  int iVar1;
  
  FUN_02ef4690(DAT_0440a540,(undefined4)DAT_0440a1b0);
  nn::os::InitializeEvent(&DAT_0440b270,0,1);
  iVar1 = FUN_02f137e8();
  if (iVar1 == 2) {
    return;
  }
  FUN_02f33c9c(&DAT_0440b2d8);
  return;
}


