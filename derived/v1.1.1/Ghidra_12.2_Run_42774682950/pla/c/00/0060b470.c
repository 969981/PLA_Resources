/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b470; name: _INIT_91
 */


void _INIT_91(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04375330 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04375330), puVar1 = PTR_DAT_04375338, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04375338 = PTR_LAB_04375340;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_04375330);
    FUN_003c3e90(PTR_DAT_04375338);
    return;
  }
  FUN_003c3e90(PTR_DAT_04375338);
  return;
}


