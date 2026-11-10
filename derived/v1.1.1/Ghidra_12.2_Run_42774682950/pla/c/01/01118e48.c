/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01118e48; name: FUN_01118e48
 */


undefined8 FUN_01118e48(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_34 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 << 2 | 1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    local_34[0] = 10;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_34,1,0);
    }
    param_3 = param_3 * 4;
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    if (param_2 != 0) {
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,0);
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_3;
    uVar5 = 1;
  }
  return uVar5;
}


