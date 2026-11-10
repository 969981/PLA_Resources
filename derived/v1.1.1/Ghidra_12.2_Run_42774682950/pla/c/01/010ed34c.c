/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ed34c; name: FUN_010ed34c
 */


ulong FUN_010ed34c(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char local_38 [4];
  undefined4 local_34;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_38,1,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = 0;
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      goto LAB_010ed48c;
    }
    uVar3 = 0;
    if (local_38[0] != '\x05') goto LAB_010ed48c;
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_34,4,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
    if ((uVar3 & 1) != 0) {
      uVar5 = FUN_010ed4c8(param_1,local_34,param_2,param_3);
      uVar3 = uVar5 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xff;
      goto LAB_010ed48c;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_010ed48c:
  return uVar3 | uVar5;
}


