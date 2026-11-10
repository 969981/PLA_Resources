/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02810d40; name: FUN_02810d40
 */


undefined8 FUN_02810d40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_38;
  
  if (*(int *)(*(long *)(param_1 + 0x420) + 0x68) == 0) {
    lVar4 = *(long *)(param_1 + 0x448);
    plVar6 = *(long **)(param_1 + 0xe8);
    local_68 = *(long **)(lVar4 + 0xa8);
    local_60 = *(undefined8 *)(lVar4 + 0xb0);
    local_58 = *(undefined8 *)(lVar4 + 0xb8);
    local_50 = *(long **)(lVar4 + 0xc0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    (**(code **)(*plVar6 + 0x50))(plVar6,&local_68,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    puVar5 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) +
             (ulong)*(uint *)(param_1 + 0x418) * 0x28);
    uVar3 = *puVar5;
    uVar2 = puVar5[1];
    uVar1 = puVar5[2];
    plVar6 = (long *)puVar5[3];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_68 = &local_38;
    local_38 = 0;
    local_60 = uVar3;
    local_58 = uVar2;
    local_50 = (long *)uVar1;
    local_48 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_02813244(param_1,&local_68,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    lVar4 = local_38;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    local_68 = *(long **)(lVar4 + 0xa8);
    plVar6 = *(long **)(param_1 + 0xe8);
    local_60 = *(undefined8 *)(lVar4 + 0xb0);
    local_58 = *(undefined8 *)(lVar4 + 0xb8);
    local_50 = *(long **)(lVar4 + 0xc0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    (**(code **)(*plVar6 + 0x50))(plVar6,&local_68,1);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_028106b0(*(undefined8 *)(param_1 + 0x408));
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


