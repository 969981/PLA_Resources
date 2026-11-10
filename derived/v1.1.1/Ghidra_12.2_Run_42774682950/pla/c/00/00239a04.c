/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239a04; name: FUN_00239a04
 */


undefined * FUN_00239a04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04372c68 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04372c68), puVar3 = PTR_DAT_04372c70,
     puVar1 = PTR_DAT_04372a00, iVar4 != 0)) {
    if (((*PTR_DAT_043729f8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043729f8), puVar2 = PTR_DAT_04372a10, iVar4 != 0)) {
      if (((*PTR_DAT_04372a08 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04372a08), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04372a08);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_043729f8);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_04372c68);
  }
  return PTR_DAT_04372c70;
}


