/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f361b0; name: FUN_02f361b0
 */


void FUN_02f361b0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    DAT_0442c068 = 0x3f800000;
  }
  else {
    DAT_0442c068 = *param_1;
  }
  FUN_02f52aa0(&DAT_0442c010);
  DAT_0442c06c = 0;
  DAT_0442c070 = 0;
  FUN_02f36768();
  return;
}


