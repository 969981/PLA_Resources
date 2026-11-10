/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5fdac; name: FUN_01e5fdac
 */


void FUN_01e5fdac(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  long local_38;
  
  uVar1 = param_1[2] - param_1[1];
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = uVar1 * 0x40 + -1;
  }
  if ((ulong)(lVar2 - (param_1[9] + param_1[8])) < 0x200) {
    plVar6 = param_1 + 10;
    uVar8 = param_1[3] - *param_1;
    if (uVar1 < uVar8) {
      if (param_1[1] == *param_1) {
        local_68 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x1000,8);
        if (local_68 == 0) {
          (**(code **)(*(long *)*plVar6 + 0xb8))();
        }
        FUN_01e5f200(param_1,&local_68);
        local_68 = *(long *)(param_1[2] + -8);
        param_1[2] = param_1[2] + -8;
        FUN_01e60054(param_1,&local_68);
      }
      else {
        local_68 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x1000,8);
        if (local_68 == 0) {
          (**(code **)(*(long *)*plVar6 + 0xb8))();
        }
        FUN_01e5f38c(param_1,&local_68);
      }
      if (param_1[2] - param_1[1] == 8) {
        param_1[8] = 0x100;
      }
      else {
        param_1[8] = param_1[8] + 0x200;
      }
    }
    else {
      local_50 = 0;
      lVar2 = (long)uVar8 >> 2;
      if (uVar8 == 0) {
        lVar2 = 1;
      }
      plStack_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar2 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
      }
      local_50 = local_68 + lVar2 * 8;
      local_60 = local_68;
      local_58 = local_68;
      local_38 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x1000,8);
      if (local_38 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
      uStack_70 = 0x200;
      local_78 = plVar6;
      FUN_01e5f524(&local_68,&local_38);
      local_80 = 0;
      lVar3 = param_1[1];
      lVar2 = lVar3;
      if (lVar3 != param_1[2]) {
        do {
          FUN_01e601ec(&local_68,lVar2);
          lVar2 = lVar2 + 8;
        } while (lVar2 != param_1[2]);
        lVar3 = param_1[1];
      }
      lVar7 = *param_1;
      *param_1 = local_68;
      lVar4 = param_1[3];
      param_1[1] = local_60;
      param_1[2] = local_58;
      param_1[3] = local_50;
      if (local_58 - local_60 == 8) {
        lVar5 = 0x100;
      }
      else {
        lVar5 = param_1[8] + 0x200;
      }
      param_1[8] = lVar5;
      local_68 = lVar7;
      local_60 = lVar3;
      local_58 = lVar2;
      local_50 = lVar4;
      FUN_01e5fb50(&local_80);
      FUN_01e5f848(&local_68);
    }
  }
  else {
    param_1[8] = param_1[8] + 0x200;
    plVar6 = (long *)(param_1[2] + -8);
    local_68 = *plVar6;
    param_1[2] = (long)plVar6;
    FUN_01e60054(param_1,&local_68);
  }
  return;
}


