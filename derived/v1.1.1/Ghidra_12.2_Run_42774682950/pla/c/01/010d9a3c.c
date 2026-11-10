/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d9a3c; name: FUN_010d9a3c
 */


undefined8 FUN_010d9a3c(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined1 local_24 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,5,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    local_24[0] = 10;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_24,1,0);
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    local_28 = *param_2;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,4,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,4,0);
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
    uVar5 = 1;
  }
  return uVar5;
}


