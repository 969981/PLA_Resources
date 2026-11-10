/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f4d980; name: FUN_01f4d980
 */


void FUN_01f4d980(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_88 [2];
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  if ((ulong)param_1[8] < 0x80) {
    plVar1 = param_1 + 10;
    uVar6 = param_1[2] - param_1[1] >> 3;
    lVar5 = param_1[3] - *param_1;
    if ((ulong)(lVar5 >> 3) <= uVar6) {
      local_50 = 0;
      lVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        lVar2 = 1;
      }
      plStack_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar2 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
      }
      local_60 = local_68 + uVar6 * 8;
      local_50 = local_68 + lVar2 * 8;
      local_58 = local_60;
      local_88[0] = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0x1000,8);
      if (local_88[0] == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
      uStack_70 = 0x80;
      local_78 = plVar1;
      FUN_01f4e068(&local_68,local_88);
      local_88[1] = 0;
      lVar5 = param_1[2];
      lVar2 = lVar5;
      if (lVar5 != param_1[1]) {
        do {
          lVar2 = lVar2 + -8;
          FUN_01f4e1f4(&local_68,lVar2);
        } while (lVar2 != param_1[1]);
        lVar5 = param_1[2];
      }
      lVar4 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[2] = local_58;
      lVar3 = param_1[3];
      param_1[3] = local_50;
      local_68 = lVar4;
      local_60 = lVar2;
      local_58 = lVar5;
      local_50 = lVar3;
      FUN_01f4e694(local_88 + 1);
      FUN_01f4e38c(&local_68);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0x1000,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
      FUN_01f4dd44(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0x1000,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
    FUN_01f4ded0(param_1,&local_68);
  }
  else {
    param_1[8] = param_1[8] - 0x80;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_01f4dbb8(param_1,&local_68);
  return;
}


