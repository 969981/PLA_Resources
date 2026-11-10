/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e7834; name: FUN_010e7834
 */


undefined1  [16] FUN_010e7834(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char local_34 [4];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 <= param_4) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_34,1,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if (((uVar3 & 1) != 0) && (local_34[0] == '\b')) {
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      if (param_3 != 0) {
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_2,0);
          lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_2;
          if ((uVar3 & 1) != 0) {
            uVar5 = 1;
            goto LAB_010e795c;
          }
          goto LAB_010e7990;
        }
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(ulong *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_2;
    }
  }
LAB_010e7990:
  uVar5 = 0;
LAB_010e795c:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


