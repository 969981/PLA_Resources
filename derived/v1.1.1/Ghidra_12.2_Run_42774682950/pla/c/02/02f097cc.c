/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f097cc; name: FUN_02f097cc
 */


void FUN_02f097cc(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(param_1 + 0x120);
  puVar3 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[3];
    while( true ) {
      if (plVar1 != (long *)0x0) {
        *(undefined4 *)(plVar2 + 4) = 0;
        if (plVar2 + 2 != plVar1) {
          (*DAT_0442d158)(0);
        }
        plVar2[3] = 0;
        *(undefined4 *)((long)plVar2 + 0x24) = 0;
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) break;
      plVar1 = (long *)plVar2[3];
    }
    puVar3 = *(undefined8 **)(param_1 + 0x120);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = *puVar3;
    if (*(undefined8 **)(param_1 + 0x128) == puVar3) {
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 **)(param_1 + 0x130) = puVar3;
    while( true ) {
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
      puVar3 = *(undefined8 **)(param_1 + 0x120);
      if (puVar3 == (undefined8 *)0x0) break;
      *(undefined8 *)(param_1 + 0x120) = *puVar3;
      if (*(undefined8 **)(param_1 + 0x128) == puVar3) {
        *(undefined8 *)(param_1 + 0x128) = 0;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x130);
      *(undefined8 **)(param_1 + 0x130) = puVar3;
    }
  }
  return;
}


