/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d80b4; name: FUN_010d80b4
 */


undefined8 FUN_010d80b4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 5,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      local_38[0] = 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,local_38,1,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      local_34 = (undefined4)param_3;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,4,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_34,4,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_3;
      return 1;
    }
  }
  return 0;
}


