/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbdd28; name: FUN_00bbdd28
 */


void FUN_00bbdd28(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  (**(code **)(*param_2 + 0x78))(param_1);
  if (1 < *param_1 - 3U) {
    (**(code **)(*param_2 + 0x70))(param_2,param_4,param_1);
    plVar1 = (long *)param_2[0x14];
    plVar2 = (long *)param_2[0x15];
    if (plVar1 != plVar2) {
      plVar4 = (long *)*plVar1;
      if ((plVar4[0x13] == 0x2c02645014d5a2a5) &&
         (uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,param_4), (uVar5 & 1) != 0)) {
        (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,param_4);
      }
      (**(code **)(*(long *)*plVar1 + 0x40))((long *)*plVar1,param_4,param_1);
      while (plVar1 = plVar1 + 1, plVar1 != plVar2) {
        plVar4 = (long *)*plVar1;
        if ((plVar4[0x13] == 0x2c02645014d5a2a5) &&
           (uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,param_4), (uVar5 & 1) != 0)) {
          (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,param_4);
        }
        (**(code **)(*(long *)*plVar1 + 0x40))((long *)*plVar1,param_4,param_1);
      }
    }
    puVar3 = (undefined8 *)param_2[0xe];
    for (puVar6 = (undefined8 *)param_2[0xd]; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      (**(code **)(*(long *)*puVar6 + 0x40))((long *)*puVar6,param_4,param_1);
    }
  }
  return;
}


