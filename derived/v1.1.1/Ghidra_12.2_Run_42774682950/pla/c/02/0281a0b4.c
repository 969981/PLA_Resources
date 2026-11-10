/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a0b4; name: FUN_0281a0b4
 */


undefined8 FUN_0281a0b4(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = (long *)**(undefined8 **)(param_1 + 0x8d0);
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)(**(code **)plVar4[10])(plVar4 + 10);
    if (((*PTR_DAT_0437f840 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar1 != 0)) {
      uVar3 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_0437f848 = uVar3;
      __cxa_guard_release(PTR_DAT_0437f840);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_0437f848) {
        if (*(int *)(param_1 + 0x970) != 0) {
          return 0;
        }
        if (*(char *)((long)plVar4 + 0x74) == '\0') {
          (**(code **)(*plVar4 + 0x48))();
          *(undefined1 *)(param_1 + 0xa1) = 1;
          FUN_02820364(param_1,0);
          return 1;
        }
        (**(code **)(*plVar4 + 0x58))();
        *(undefined1 *)(param_1 + 0xa1) = 1;
        FUN_028205e4(param_1,0);
        return 1;
      }
    }
  }
  return 0;
}


