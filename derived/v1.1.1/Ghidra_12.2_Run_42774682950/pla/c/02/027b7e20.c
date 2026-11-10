/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027b7e20; name: FUN_027b7e20
 */


long FUN_027b7e20(void)

{
  long lVar1;
  undefined *local_18;
  
  lVar1 = FUN_027b7e70();
  if (lVar1 == 0) {
    local_18 = PTR_DAT_04387d20 + 0x10;
    FUN_02bc5a90(&local_18);
    std::exception::~exception((exception *)&local_18);
  }
  return lVar1;
}


