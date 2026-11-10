/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192b88c; name: FUN_0192b88c
 */


void FUN_0192b88c(long param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  uint local_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float afStack_70 [2];
  float local_68;
  float local_64;
  float local_60 [2];
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(char *)(param_1 + 0x54) != '\0') {
    local_80 = local_80 & 0xffffff00;
    fStack_7c = 0.5;
    fStack_78 = 0.5;
    fVar6 = 1.0;
    local_74 = 0.0;
    afStack_70[0] = 0.0;
    uVar1 = *(int *)(param_1 + 0x80) + 1;
    *(uint *)(param_1 + 0x80) = uVar1;
    if (*(uint *)(param_1 + 0x84) != 0) {
      fVar6 = (float)uVar1 / (float)*(uint *)(param_1 + 0x84);
    }
    local_60[0] = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x88) * 8))
                                   (fVar6);
    local_68 = 1.0;
    local_64 = 0.0;
    pfVar4 = &local_68;
    if (local_60[0] <= 1.0) {
      pfVar4 = local_60;
    }
    if (local_60[0] < 0.0) {
      pfVar4 = &local_64;
    }
    fVar6 = *pfVar4;
    if (fVar6 < 1.0) {
      fVar7 = 1.0 - fVar6;
      fStack_7c = fVar7 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x70) * fVar6;
      fStack_78 = fVar7 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x74) * fVar6;
      local_74 = fVar7 * *(float *)(param_1 + 100) + *(float *)(param_1 + 0x78) * fVar6;
      afStack_70[0] = fVar7 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x7c) * fVar6;
      local_64 = 1.4013e-45;
      local_80 = CONCAT31(local_80._1_3_,1);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x6c);
      afStack_70[0] = *(float *)(param_1 + 0x7c);
      local_80 = (uint)uVar5;
      uVar1 = local_80;
      fStack_7c = (float)((ulong)uVar5 >> 0x20);
      fStack_78 = (float)*(undefined8 *)(param_1 + 0x74);
      local_74 = (float)((ulong)*(undefined8 *)(param_1 + 0x74) >> 0x20);
      if (*(char *)(param_1 + 0x6c) == '\0') {
        local_80._1_3_ = (uint3)((ulong)uVar5 >> 8);
        local_80 = (uint)local_80._1_3_ << 8;
        bVar2 = 0;
      }
      else {
        local_80._0_1_ = (byte)uVar5;
        bVar2 = (byte)local_80;
        local_80 = uVar1;
      }
      local_64 = (float)(uint)bVar2;
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
    *(float *)(param_1 + 0x100) = afStack_70[0];
    *(ulong *)(param_1 + 0xf0) = CONCAT44(fStack_7c,local_80);
    *(ulong *)(param_1 + 0xf8) = CONCAT44(local_74,fStack_78);
    local_60[0] = -3.4144379e+24;
    local_60[1] = -5.6913874e+13;
    pcStack_58 = "kRadialBlurEnable";
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    plVar3 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar3 + 0x30))(plVar3,local_60,&local_64);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60[0] = -1.5434579e+32;
    local_60[1] = -8.675097e+11;
    pcStack_58 = "RadialBlurX";
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    plVar3 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar3 + 0x10))(plVar3,local_60,(ulong)&local_80 | 4);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60[0] = -1.5434159e+32;
    local_60[1] = -8.6749295e+11;
    pcStack_58 = "RadialBlurY";
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    plVar3 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar3 + 0x10))(plVar3,local_60,&fStack_78);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60[0] = 0.0037873262;
    local_60[1] = 2.555533e+15;
    pcStack_58 = "RadialBlurStrength";
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    plVar3 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar3 + 0x10))(plVar3,local_60,&local_74);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60[0] = 1.7886472e+10;
    local_60[1] = -2.8024858e+08;
    pcStack_58 = "RadialBlurRadius";
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    plVar3 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar3 + 0x10))(plVar3,local_60,afStack_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


