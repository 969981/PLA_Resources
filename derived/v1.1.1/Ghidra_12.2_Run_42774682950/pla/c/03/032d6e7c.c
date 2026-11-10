/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d6e7c; name: FUN_032d6e7c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_032d6e7c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_250;
  char local_248;
  undefined7 uStack_247;
  ulong local_240;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0 [16];
  ulong local_70 [2];
  
  lVar3 = FUN_032d6ddc();
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_032c53d8(param_3,&DAT_038bd9bd,lVar3);
    return *puVar4;
  }
  plVar9 = (long *)(param_1 + 8);
  lVar3 = *plVar9;
  uVar5 = FUN_032e35d8(lVar3);
  if (lVar3 == 0) {
    return 0;
  }
  if ((uVar5 & 0x1f) != 4) {
    return 0;
  }
  if ((param_2[1] == 0) || (uVar5 = FUN_032e35d8(), (uVar5 & 0x1f) != 4)) {
    uVar5 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *param_2;
    uVar11 = param_2[1];
    uVar5 = param_2[2];
    if ((uVar5 & 1) != 0) {
      FUN_032e0c28(uVar5 & 0xfffffffffffffffe);
      uVar5 = param_2[2];
    }
  }
  local_250 = 0;
  plVar10 = (long *)(uVar5 & 0xfffffffffffffffe);
  local_248 = '\0';
  (**(code **)(*plVar10 + 0x38))(plVar10,uVar12,uVar11,&local_250);
  local_70[0] = -local_250;
  if (local_248 == '\0') {
    local_70[0] = local_250;
  }
  if ((uVar5 & 1) != 0) {
    FUN_032e0c40(plVar10);
  }
  if (local_70[0] == 0) {
    return 0;
  }
  local_100 = local_f0;
  local_f8 = 0x8000001000000000;
  if (*(int *)(param_1 + 0x10) < 1) {
    if (local_70[0] != 0) goto LAB_032d7130;
  }
  else {
    uVar5 = 0;
    uVar13 = 0;
    do {
      FUN_032d6ab8(&local_250,param_1,uVar5 & 0xffffffff);
      lVar3 = CONCAT71(uStack_247,local_248);
      if (lVar3 == 0) {
LAB_032d7088:
        uVar7 = 0;
        uVar14 = 0;
      }
      else {
        uVar6 = FUN_032e35d8(lVar3);
        uVar14 = local_240;
        uVar7 = local_250;
        if ((uVar6 & 0x1f) != 4) {
          lVar3 = 0;
          goto LAB_032d7088;
        }
        if ((local_240 & 1) != 0) {
          FUN_032e0c28(local_240 & 0xfffffffffffffffe);
        }
      }
      if ((local_240 & 1) != 0) {
        FUN_032e0c40(local_240 & 0xfffffffffffffffe);
      }
      if (uVar7 != 0) {
        local_250 = 0;
        local_248 = '\0';
        (**(code **)(*(long *)(uVar14 & 0xfffffffffffffffe) + 0x38))
                  ((long *)(uVar14 & 0xfffffffffffffffe),uVar7,lVar3,&local_250);
        uVar6 = local_f8;
        puVar4 = local_100;
        uVar7 = -local_250;
        if (local_248 == '\0') {
          uVar7 = local_250;
        }
        if ((uVar7 & (local_70[0] ^ 0xffffffffffffffff)) == 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          uVar1 = (int)local_f8 + 1;
          if ((int)(local_f8._4_4_ & 0x3fffffff) <= (int)local_f8) {
            if (0x3ffffffe < (int)local_f8) {
              FUN_032bd0a8(uVar1);
            }
            uVar8 = (local_f8._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar8) {
              uVar8 = 0x3fffffff;
            }
            uVar2 = uVar1;
            if ((int)uVar1 <= (int)uVar8) {
              uVar2 = uVar8;
            }
            local_100 = (undefined8 *)
                        FUN_032bd1d4(PTR_PTR_0434a090,uVar2,8,puVar4,uVar6 & 0xffffffff,
                                     (long)&local_f8 + 4);
          }
          uVar13 = uVar7 | uVar13;
          local_100[(int)local_f8] = *(undefined8 *)(lVar3 + uVar5 * 8);
          local_f8 = CONCAT44(local_f8._4_4_,uVar1);
        }
      }
      if ((uVar14 & 1) != 0) {
        FUN_032e0c40(uVar14 & 0xfffffffffffffffe);
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x10));
    if (uVar13 != local_70[0]) {
LAB_032d7130:
      if ((1 < DAT_04449fe8) || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
        uVar5 = FUN_03327170();
        if ((uVar5 & 1) == 0) {
          FUN_03326994(&local_250,&DAT_04449f98,2);
          lVar3 = FUN_03326338(&local_250,"Unmatched bits while decoding {}, value {}",
                               PTR_DAT_043891b8,plVar9,local_70);
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x8e;
          FUN_033269dc(&local_250);
        }
        else {
          FUN_03326a7c(&local_250,&DAT_04449f98,2);
          lVar3 = FUN_03326338(&local_250,"Unmatched bits while decoding {}, value {}",
                               PTR_DAT_043891b8,plVar9,local_70);
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x8e;
          FUN_03326adc(&local_250);
        }
        goto joined_r0x032d7198;
      }
    }
  }
joined_r0x032d7198:
  if ((int)local_f8 == 0) {
    local_f8._4_4_ = (uint)(local_f8 >> 0x20);
    uVar12 = 0;
  }
  else {
    if ((int)local_f8 == 1) {
      puVar4 = (undefined8 *)FUN_032c4d7c(param_3,*local_100,0xffffffff);
    }
    else {
      puVar4 = (undefined8 *)
               FUN_032c5c54(param_3,&DAT_038cfaec,local_100,
                            (undefined8 *)((long)local_100 + (long)(int)local_f8 * 8));
    }
    uVar12 = *puVar4;
  }
  uVar1 = local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < (int)uVar1) && (local_100 != (undefined8 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_100,8,uVar1 & 0x3fffffff);
  }
  return uVar12;
}


