/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022a354; name: FUN_0022a354
 */


undefined * FUN_0022a354(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_043729f8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_043729f8), puVar2 = PTR_DAT_04372a10,
     puVar1 = PTR_DAT_04372a00, iVar3 != 0)) {
    if (((*PTR_DAT_04372a08 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04372a08), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04372a08);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_043729f8);
  }
  return PTR_DAT_04372a00;
}


