/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c939e0; name: FUN_01c939e0
 */


void FUN_01c939e0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_043d3330 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_043d3330), puVar1 = PTR_DAT_0437af68, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_0437af60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437af60), iVar2 != 0))
  {
    uVar3 = FUN_00bd09ac();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_0437af60);
  }
  DAT_043d3328 = puVar1;
  __cxa_guard_release(&DAT_043d3330);
  return;
}


