/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003db800; name: FUN_003db800
 */


void FUN_003db800(void)

{
  void *__s;
  
  __s = (void *)FUN_002e2e80(PTR_FUN_04373078,0x3f00);
  if (__s != (void *)0x0) {
    memset(__s,0,0x3f00);
    FUN_003dba34(__s);
  }
  *(long *)PTR_DAT_04373fe0 = (long)__s + 0x1448;
  *(long *)PTR_DAT_043740c8 = (long)__s + 8;
  DAT_0439c3c8 = __s;
  *(long *)PTR_DAT_043740b0 = (long)__s + 0x21c8;
  *(long *)PTR_DAT_04373ff0 = (long)__s + 0x3c58;
  return;
}


