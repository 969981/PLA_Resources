/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5f64c; name: FUN_02e5f64c
 */


undefined8
FUN_02e5f64c(undefined8 *param_1,float *param_2,float *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  local_70 = 0;
  local_88 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_4 + 0x40) != 0) {
    lVar4 = *(long *)(param_4 + 0x38);
    local_98 = 0;
    local_90 = 0;
    local_a8 = CONCAT44(param_3[1] - param_2[1],*param_3 - *param_2);
    local_a0 = param_3[2] - param_2[2];
    uVar1 = FUN_02e4c050(*(undefined8 *)(lVar4 + 0x18),param_2,&local_a8,&local_98);
    local_a8 = *(undefined8 *)(lVar4 + 0x18);
    if ((uVar1 & 1) != 0) {
      auVar5 = NEON_fmov(0x3f800000,4);
      uStack_c0 = *(undefined8 *)param_2;
      auVar6._0_8_ = CONCAT44(*(undefined4 *)((ulong)&local_98 | 4),(undefined4)local_98);
      uStack_b8 = CONCAT44(auVar5._12_4_,param_2[2]);
      auVar6._8_4_ = local_90;
      auVar6._12_4_ = auVar5._12_4_;
      uStack_c8 = auVar6._8_8_;
      local_d0 = auVar6._0_8_;
      uVar1 = FUN_02e5f894(param_1,&uStack_c0,&local_d0,&local_a8);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_02e4d274(&local_88,param_2,*(undefined8 *)(lVar4 + 0x18),param_3,*param_1,
                             param_5,param_6,8,0);
        if ((uVar1 & 1) != 0) {
          uVar2 = 1;
          goto LAB_02e5f86c;
        }
      }
    }
    local_98 = 0;
    local_90 = 0;
    puVar3 = (undefined8 *)
             (*(long *)(param_4 + 0x38) + (ulong)(*(int *)(param_4 + 0x40) - 1) * 0x20 + 0x18);
    local_a8 = CONCAT44(param_3[1] - param_2[1],*param_3 - *param_2);
    local_a0 = param_3[2] - param_2[2];
    uVar1 = FUN_02e4c050(*puVar3,param_2,&local_a8,&local_98);
    local_a8 = *puVar3;
    if ((uVar1 & 1) != 0) {
      auVar5 = NEON_fmov(0x3f800000,4);
      uStack_c0 = *(undefined8 *)param_3;
      auVar7._0_8_ = CONCAT44(*(undefined4 *)((ulong)&local_98 | 4),(undefined4)local_98);
      uStack_b8 = CONCAT44(auVar5._12_4_,param_3[2]);
      auVar7._8_4_ = local_90;
      auVar7._12_4_ = auVar5._12_4_;
      uStack_c8 = auVar7._8_8_;
      local_d0 = auVar7._0_8_;
      uVar1 = FUN_02e5f894(param_1,&uStack_c0,&local_d0,&local_a8);
      if ((uVar1 & 1) == 0) {
        uVar2 = 1;
        uVar1 = FUN_02e4d274(&local_88,param_3,*puVar3,param_2,*param_1,param_5,param_6,8,1);
        if ((uVar1 & 1) != 0) goto LAB_02e5f86c;
      }
    }
  }
  uVar2 = 0;
LAB_02e5f86c:
  FUN_02e4c5cc(&local_88);
  return uVar2;
}


