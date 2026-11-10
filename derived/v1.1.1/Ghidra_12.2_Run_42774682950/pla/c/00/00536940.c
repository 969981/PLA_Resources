/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536940; name: FUN_00536940
 */


void FUN_00536940(long param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int local_2c;
  undefined8 local_28;
  
  if (param_2 != 2) {
    local_28 = *(undefined8 *)(param_1 + 0x28);
    *(int *)(param_1 + 0x40) = param_2;
    plVar3 = *(long **)(param_1 + 0x48);
    local_2c = param_2;
    while (plVar3 != (long *)(param_1 + 0x50)) {
      FUN_00539d24(plVar3 + 5,&local_28,&local_2c);
      plVar4 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 2;
        bVar1 = *(long **)*plVar4 != plVar3;
        plVar3 = (long *)*plVar4;
        if (bVar1) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar3 = (long *)*plVar4;
          } while (*(long *)*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while (plVar4 != (long *)0x0);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00536a24 to 00536a27 has its CatchHandler @ 00536ab4 */
      (**(code **)*puVar2)();
    }
    return;
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    local_28 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = 1;
    local_2c = 1;
    plVar3 = *(long **)(param_1 + 0x48);
    while (plVar3 != (long *)(param_1 + 0x50)) {
      FUN_00539d24(plVar3 + 5,&local_28,&local_2c);
      plVar4 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 2;
        bVar1 = *(long **)*plVar4 != plVar3;
        plVar3 = (long *)*plVar4;
        if (bVar1) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar3 = (long *)*plVar4;
          } while (*(long *)*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  FUN_00539608(param_1);
  return;
}


