/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010a3b0; name: FUN_0010a3b0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0010a3b0(undefined8 param_1)

{
  int iVar1;
  
  FUN_0010a430();
  if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
    (**(code **)PTR_PTR_043722f8)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlemalloc.cpp",0xc,
               "OODLE ERROR : Oodle_Core_Malloc_Failed ; %lld bytes\n",param_1);
  }
  FUN_0010a450();
  iVar1 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\oodlemalloc.cpp",0xf,
                       "Oodle_Core_Malloc_Failed","false");
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


