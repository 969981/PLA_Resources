/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01160c04; name: FUN_01160c04
 */


void FUN_01160c04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_043ba770 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(&DAT_043ba770), puVar2 = PTR_DAT_0437b320, iVar3 == 0)) {
    return;
  }
  if (((*PTR_DAT_0437b318 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b318), puVar1 = PTR_DAT_04379c98, iVar3 != 0)) {
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0)) {
      uVar4 = FUN_009311a8();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_0437b318);
  }
  DAT_043ba768 = puVar2;
  __cxa_guard_release(&DAT_043ba770);
  return;
}


