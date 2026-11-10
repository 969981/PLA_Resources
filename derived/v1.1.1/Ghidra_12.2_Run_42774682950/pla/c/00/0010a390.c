/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010a390; name: FUN_0010a390
 */


undefined8 FUN_0010a390(void)

{
  undefined8 uVar1;
  
  if (*(code **)PTR_PTR_04372338 == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0010a3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)PTR_PTR_04372338)();
  return uVar1;
}


