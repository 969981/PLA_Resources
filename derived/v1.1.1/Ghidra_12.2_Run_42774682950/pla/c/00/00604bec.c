/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00604bec; name: FUN_00604bec
 */


void FUN_00604bec(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *local_38;
  
  puVar1 = PTR_LAB_04373088;
  if (param_3 <= (ulong)(param_2[1] - *param_2 >> 3)) {
    puVar4 = (undefined8 *)(*param_2 + param_3 * 8);
    if (puVar4 != (undefined8 *)param_2[1]) {
      do {
        puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,param_1);
        if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00604c5c to 00604c67 has its CatchHandler @ 00604d1c */
          local_38 = puVar2;
          FUN_00604d54(param_1 + 0x20,&local_38);
          puVar2 = local_38;
          local_38 = (undefined8 *)0x0;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
            FUN_002e2ea0(puVar1,puVar2);
          }
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined8 *)param_2[1]);
    }
    plVar3 = *(long **)PTR_DAT_04375250;
    if (plVar3 != (long *)0x0) {
      local_38 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,param_1);
                    /* try { // try from 00604cbc to 00604cc7 has its CatchHandler @ 00604d08 */
      FUN_00604d54(param_1 + 0x20,&local_38);
      puVar4 = local_38;
      local_38 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      }
    }
  }
  return;
}


