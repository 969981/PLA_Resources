/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280ee4c; name: FUN_0280ee4c
 */


undefined8 FUN_0280ee4c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (**(long **)(param_1 + 0x488) != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x488) + 0x50))();
    if (((*PTR_DAT_0437f840 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar1 != 0)) {
      uVar3 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_0437f848 = uVar3;
      __cxa_guard_release(PTR_DAT_0437f840);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_0437f848) {
        return 1;
      }
    }
  }
  return 0;
}


