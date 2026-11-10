/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00560db0; name: FUN_00560db0
 */


void FUN_00560db0(void)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00560dc4 to 00560dc7 has its CatchHandler @ 00560de0 */
  FUN_00560df4();
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_04374d20,PTR__length_error_04374d28);
}


