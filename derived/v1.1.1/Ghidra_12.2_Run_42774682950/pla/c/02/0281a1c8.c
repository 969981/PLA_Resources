/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a1c8; name: FUN_0281a1c8
 */


undefined8 FUN_0281a1c8(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x8d0);
  if (plVar5 != (long *)0x0) {
    plVar2 = (long *)(**(code **)plVar5[10])(plVar5 + 10);
    if (((*PTR_DAT_0437f840 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar1 != 0)) {
      uVar3 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_0437f848 = uVar3;
      __cxa_guard_release(PTR_DAT_0437f840);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_0437f848) {
        uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x970) == 0) {
          (**(code **)(*plVar5 + 0x50))(plVar5,param_2 & 1);
          *(undefined1 *)(param_1 + 0xa1) = 1;
          FUN_02820854(param_1,0);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


