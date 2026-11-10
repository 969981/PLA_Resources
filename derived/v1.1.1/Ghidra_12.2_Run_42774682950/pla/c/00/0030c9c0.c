/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030c9c0; name: _INIT_36
 */


void _INIT_36(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04373a20 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04373a20), puVar1 = PTR_DAT_04373a28, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04373a28 = PTR_LAB_04373a30;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_04373a20);
    FUN_003c3e90(PTR_DAT_04373a28);
    return;
  }
  FUN_003c3e90(PTR_DAT_04373a28);
  return;
}


