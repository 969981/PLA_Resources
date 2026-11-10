/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0277e4f0; name: FUN_0277e4f0
 */


long FUN_0277e4f0(void)

{
  long lVar1;
  undefined *local_18;
  
  lVar1 = FUN_0277e540();
  if (lVar1 == 0) {
    local_18 = &DAT_0426bcf0;
    FUN_02bc5a90(&local_18);
    std::exception::~exception((exception *)&local_18);
  }
  return lVar1;
}


