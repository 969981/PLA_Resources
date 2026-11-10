/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e6430; name: _INIT_94
 */


void _INIT_94(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_043761e0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_043761e0), puVar1 = PTR_DAT_043761e8, iVar2 != 0)) {
    *(undefined **)PTR_DAT_043761e8 = PTR_LAB_043761f0;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_043761e0);
    FUN_003c3e90(PTR_DAT_043761e8);
    return;
  }
  FUN_003c3e90(PTR_DAT_043761e8);
  return;
}


