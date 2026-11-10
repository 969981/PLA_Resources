/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012527b4; name: FUN_012527b4
 */


void FUN_012527b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_0437e9e0 + 0x10);
  if ((long *)param_1[0x110] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x110] + 0x20))();
  }
  if ((long *)param_1[0x10e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10e] + 0x20))();
  }
  if ((long *)param_1[0x10d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10d] + 0x20))();
  }
  if ((long *)param_1[0x10b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10b] + 0x20))();
  }
  lVar2 = 0x420;
  do {
    plVar1 = *(long **)((long)param_1 + lVar2 + 0x408);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)((long)param_1 + lVar2 + 0x3f8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)((long)param_1 + lVar2 + 0x3f0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)((long)param_1 + lVar2 + 0x3e0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar2 = lVar2 + -0x58;
  } while (lVar2 != 0);
  lVar2 = 0x420;
  do {
    plVar1 = *(long **)((long)param_1 + lVar2 + -0x18);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)((long)param_1 + lVar2 + -0x28);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)((long)param_1 + lVar2 + -0x30);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)((long)param_1 + lVar2 + -0x40);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar2 = lVar2 + -0x58;
  } while (lVar2 != 0);
  return;
}


