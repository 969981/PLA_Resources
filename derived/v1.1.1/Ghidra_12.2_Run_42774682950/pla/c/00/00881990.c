/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00881990; name: _INIT_129
 */


void _INIT_129(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_LAB_04379500;
  puVar2 = PTR_DAT_043794f8;
  puVar1 = PTR_DAT_043794f0;
  if ((*PTR_DAT_043794f0 & 1) == 0) {
    *(char **)PTR_DAT_043794f8 =
         "static const char *boost::detail::core_typeid_<void (*)(const void *)>::name() [T = void (*)(const void *)]"
    ;
    *(undefined **)(puVar2 + 8) = puVar3;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


