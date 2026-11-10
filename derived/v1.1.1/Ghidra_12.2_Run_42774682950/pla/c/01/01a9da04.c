/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9da04; name: FUN_01a9da04
 */


void FUN_01a9da04(long param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  if (param_3 == param_4) {
    return;
  }
  puVar4 = (undefined8 *)(param_1 + 0x18);
  plVar2 = (long *)(**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,0x30,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)*puVar4 + 0xb8))();
  }
  lVar5 = 1;
  *plVar2 = 0;
  uStack_68 = 1;
  local_70 = puVar4;
  FUN_018102d8(puVar4,plVar2 + 2,param_3 + 0x10);
  local_78 = (undefined8 *)0x0;
  lVar7 = *(long *)(param_3 + 8);
  plVar6 = plVar2;
  if (lVar7 != param_4) {
    lVar5 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,0x30,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*puVar4 + 0xb8))();
    }
    FUN_01a9dd54(&local_78,lVar5);
    puVar1 = local_78;
    FUN_018102d8(puVar4,local_78 + 2,lVar7 + 0x10);
    plVar2[1] = (long)puVar1;
    lVar5 = 2;
    *puVar1 = plVar2;
    plVar6 = (long *)plVar2[1];
    for (lVar7 = *(long *)(lVar7 + 8); lVar7 != param_4; lVar7 = *(long *)(lVar7 + 8)) {
      local_78 = (undefined8 *)0x0;
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,0x30,0x10);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*puVar4 + 0xb8))();
      }
      FUN_01a9dd54(&local_78,lVar3);
      puVar1 = local_78;
      FUN_018102d8(puVar4,local_78 + 2,lVar7 + 0x10);
      plVar6[1] = (long)puVar1;
      lVar5 = lVar5 + 1;
      *puVar1 = plVar6;
      plVar6 = (long *)plVar6[1];
    }
  }
  local_78 = (undefined8 *)0x0;
  *(long **)(*param_2 + 8) = plVar2;
  *plVar2 = *param_2;
  *param_2 = (long)plVar6;
  plVar6[1] = (long)param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar5;
  FUN_01a9dd54(&local_78,0);
  return;
}


