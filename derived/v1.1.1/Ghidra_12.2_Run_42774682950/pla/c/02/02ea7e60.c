/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7e60; name: FUN_02ea7e60
 */


void FUN_02ea7e60(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)*param_1;
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  plVar5 = plVar4;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      if ((plVar5[3] != 0) && (plVar5[4] != 0)) {
        FUN_02ec7748();
        plVar4 = (long *)*param_1;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      }
      plVar5 = plVar5 + 5;
    } while (plVar5 != plVar4 + uVar3 * 5);
  }
  if (plVar4 != (long *)0x0) {
    if ((int)uVar3 != 0) {
      if ((long *)plVar4[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[1] + 0x10))();
        plVar4[1] = 0;
      }
      if ((long *)plVar4[3] == (long *)0x0) {
        plVar1 = (long *)*plVar4;
      }
      else {
        (**(code **)(*(long *)plVar4[3] + 0x18))();
        plVar4[3] = 0;
        plVar1 = (long *)*plVar4;
      }
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *plVar4 = 0;
      }
      while (plVar1 = plVar4 + 5, plVar1 != plVar5) {
        if ((long *)plVar4[6] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[6] + 0x10))();
          plVar4[6] = 0;
        }
        if ((long *)plVar4[8] == (long *)0x0) {
          plVar2 = (long *)*plVar1;
        }
        else {
          (**(code **)(*(long *)plVar4[8] + 0x18))();
          plVar4[8] = 0;
          plVar2 = (long *)*plVar1;
        }
        plVar4 = plVar1;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))();
          *plVar1 = 0;
        }
      }
      plVar4 = (long *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0,plVar4);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


