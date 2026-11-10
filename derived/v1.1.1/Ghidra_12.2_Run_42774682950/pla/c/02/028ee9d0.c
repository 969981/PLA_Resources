/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ee9d0; name: FUN_028ee9d0
 */


void FUN_028ee9d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    puVar1 = (undefined8 *)(**(code **)(**(long **)(param_3 + 0x10) + 0x40))();
    puVar2 = (undefined8 *)(**(code **)(**(long **)(param_3 + 0x10) + 0x48))();
    local_48 = *puVar2;
    local_68 = *puVar1;
    local_60 = puVar1[1];
    local_58 = puVar1[2];
    plVar4 = (long *)puVar1[3];
    local_70 = param_3;
    local_50 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    pcVar3 = *(code **)(*(long *)(param_3 + 0x18) + 0x80);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(long *)(param_3 + 0x18) + 0xa0,&local_70);
      plVar4 = local_50;
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
  }
  plVar4 = *(long **)(param_3 + 0x28);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0xd8))();
  }
  plVar4 = *(long **)(param_3 + 0x30);
  if (plVar4 != (long *)0x0) {
    if (0.0 <= (float)param_2) {
      (**(code **)(*plVar4 + 200))(param_2,param_1,plVar4,1);
      plVar4 = *(long **)(param_3 + 0x30);
    }
    (**(code **)(*plVar4 + 0xd0))(param_1,plVar4,1);
  }
  *(long *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  return;
}


