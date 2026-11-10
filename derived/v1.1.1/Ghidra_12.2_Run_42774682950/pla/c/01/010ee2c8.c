/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ee2c8; name: FUN_010ee2c8
 */


undefined8 FUN_010ee2c8(long *param_1,char *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    local_34[0] = 3;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_34,1,0);
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = 1;
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if (param_3 != 0) {
      do {
        local_38[0] = 1;
        if (*param_2 != '\0') {
          local_38[0] = 2;
        }
        plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,local_38,1,0);
        }
        lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
        *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      } while (param_3 != 0);
      uVar5 = 1;
    }
  }
  return uVar5;
}


