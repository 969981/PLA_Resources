/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4b978; name: FUN_02f4b978
 */


void FUN_02f4b978(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_042af050;
  plVar2 = (long *)param_1[4];
  uVar3 = *(uint *)(param_1 + 5);
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)*plVar2;
    plVar1 = plVar2;
    while( true ) {
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (*DAT_0442d150)(2,puVar4);
        plVar2 = (long *)param_1[4];
        uVar3 = *(uint *)(param_1 + 5);
      }
      plVar1 = plVar1 + 1;
      if (plVar1 == plVar2 + uVar3) break;
      puVar4 = (undefined8 *)*plVar1;
    }
  }
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (*DAT_0442d150)(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  return;
}


