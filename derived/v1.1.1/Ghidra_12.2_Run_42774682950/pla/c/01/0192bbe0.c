/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192bbe0; name: FUN_0192bbe0
 */


void FUN_0192bbe0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  float *pfVar5;
  float fVar6;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  float local_58 [2];
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x104) != '\0') {
    local_78 = local_78 & 0xffffff00;
    fVar6 = 1.0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uVar1 = *(int *)(param_1 + 0x148) + 1;
    *(uint *)(param_1 + 0x148) = uVar1;
    if (*(uint *)(param_1 + 0x14c) != 0) {
      fVar6 = (float)uVar1 / (float)*(uint *)(param_1 + 0x14c);
    }
    local_58[1] = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x150) * 8))
                                   (fVar6);
    local_58[0] = 1.0;
    pfVar5 = local_58;
    if (local_58[1] <= 1.0) {
      pfVar5 = local_58 + 1;
    }
    local_50 = (ulong)local_50._4_4_ << 0x20;
    if (local_58[1] < 0.0) {
      pfVar5 = (float *)&local_50;
    }
    local_58[1] = *pfVar5;
    if (local_58[1] < 1.0) {
      FUN_0192b3d0(&local_50,param_1 + 0x108,param_1 + 0x128);
      uStack_74 = (undefined4)((ulong)local_50 >> 0x20);
      uStack_60 = SUB84(local_38,0);
      local_5c = (undefined4)((ulong)local_38 >> 0x20);
      uStack_70 = SUB84(pcStack_48,0);
      uStack_6c = (undefined4)((ulong)pcStack_48 >> 0x20);
      uStack_68 = (undefined4)local_40;
      local_64 = (undefined4)((ulong)local_40 >> 0x20);
      local_58[1] = 1.4013e-45;
      local_78._1_3_ = (uint3)((ulong)local_50 >> 8);
      local_78 = CONCAT31(local_78._1_3_,1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x128);
      uStack_68 = (undefined4)*(undefined8 *)(param_1 + 0x138);
      local_64 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20);
      uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x140);
      local_5c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
      local_78 = (uint)uVar2;
      uVar1 = local_78;
      uStack_74 = (undefined4)((ulong)uVar2 >> 0x20);
      uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x130);
      uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20);
      if (*(char *)(param_1 + 0x128) == '\0') {
        local_78._1_3_ = (uint3)((ulong)uVar2 >> 8);
        local_78 = (uint)local_78._1_3_ << 8;
        bVar3 = 0;
      }
      else {
        local_78._0_1_ = (byte)uVar2;
        bVar3 = (byte)local_78;
        local_78 = uVar1;
      }
      local_58[1] = (float)(uint)bVar3;
      *(undefined1 *)(param_1 + 0x104) = 0;
    }
    *(ulong *)(param_1 + 0x20c) = CONCAT44(local_5c,uStack_60);
    *(ulong *)(param_1 + 500) = CONCAT44(uStack_74,local_78);
    *(ulong *)(param_1 + 0x204) = CONCAT44(local_64,uStack_68);
    *(ulong *)(param_1 + 0x1fc) = CONCAT44(uStack_6c,uStack_70);
    local_50 = 0xb4bfbee18610b807;
    pcStack_48 = "kFeedbackEffectEnable";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,local_58 + 1);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x53102b59be45b20f;
    pcStack_48 = "kFeedbackEffectBlendWeight";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,(ulong)&local_78 | 4);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xc6348d3d797a100e;
    pcStack_48 = "kFeedbackEffectRotation";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,&uStack_70);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x940e51031997e66a;
    pcStack_48 = "kFeedbackEffectScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,&uStack_6c);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x3b6e6c9453ca71e;
    pcStack_48 = "kFeedbackEffectHue";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,&uStack_68);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xbbb3fa1bde9a2d70;
    pcStack_48 = "kFeedbackEffectSaturation";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,&local_64);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xda6decd96736364f;
    pcStack_48 = "kFeedbackEffectBrightness";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,&uStack_60);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x1bff7b41de4d93aa;
    pcStack_48 = "kFeedbackEffectContrast";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_50,&local_5c);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


