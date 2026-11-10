/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166fd0c; name: FUN_0166fd0c
 */


void FUN_0166fd0c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  long local_38;
  
  if ((ulong)param_1[8] < 0x200) {
    uVar5 = param_1[2] - param_1[1] >> 3;
    lVar4 = param_1[3] - *param_1;
    if ((ulong)(lVar4 >> 3) <= uVar5) {
      local_50 = 0;
      lVar1 = lVar4 >> 2;
      if (lVar4 == 0) {
        lVar1 = 1;
      }
      plStack_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar1 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
      }
      local_60 = local_68 + uVar5 * 8;
      local_50 = local_68 + lVar1 * 8;
      local_58 = local_60;
      local_38 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (local_38 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      FUN_016703d8(&local_68,&local_38);
      lVar4 = param_1[2];
      lVar1 = lVar4;
      if (lVar4 != param_1[1]) {
        do {
          lVar1 = lVar1 + -8;
          FUN_01670564(&local_68,lVar1);
        } while (lVar1 != param_1[1]);
        lVar4 = param_1[2];
      }
      lVar3 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[2] = local_58;
      lVar2 = param_1[3];
      param_1[3] = local_50;
      local_68 = lVar3;
      local_60 = lVar1;
      local_58 = lVar4;
      local_50 = lVar2;
      FUN_016706fc(&local_68);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      FUN_016700b4(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    FUN_01670240(param_1,&local_68);
  }
  else {
    param_1[8] = param_1[8] - 0x200;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_0166ff2c(param_1,&local_68);
  return;
}


