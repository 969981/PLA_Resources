/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d0b4; name: FUN_0282d0b4
 */


void FUN_0282d0b4(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  float extraout_s0;
  float fVar3;
  float extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(*(long **)(param_1 + 0x10),param_1 + 0x58);
  fVar3 = (float)(**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                           (*(long **)(param_1 + 0x10),param_1 + 0x78);
  fVar3 = fVar3 - extraout_s0;
  if (*(int *)(param_1 + 0x98) == 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    lVar1 = param_1 + 0x38;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10),lVar1);
    local_30 = CONCAT44(extraout_var_00,fVar3);
    uStack_28 = extraout_var_03;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))(*(long **)(param_1 + 0x10),lVar1,&local_30);
    auVar2._8_8_ = uStack_28;
    auVar2._0_8_ = local_30;
    auVar6._8_8_ = uStack_28;
    auVar6._0_8_ = local_30;
    auVar6 = NEON_ext(auVar6,auVar2,8,1);
    *(ulong *)(param_1 + 0xb8) = (ulong)auVar6._0_4_;
    *(undefined8 *)(param_1 + 0xb0) = local_30;
    local_40 = CONCAT44(extraout_var,extraout_s0 + fVar3 * 0.5);
    uStack_38 = extraout_var_02;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),lVar1,&local_40);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),param_1 + 0x18,0);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10),param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xb8) = extraout_var_04;
  *(ulong *)(param_1 + 0xb0) = CONCAT44(extraout_var_01,extraout_s0_00);
  if (*(int *)(param_1 + 0xa0) == 0) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x98));
    fVar5 = fVar3 + fVar3 * -0.05 * fVar4;
    if (fVar5 <= 40.0) {
      fVar5 = 40.0;
    }
    *(undefined8 *)(param_1 + 0xb8) = extraout_var_04;
    *(ulong *)(param_1 + 0xb0) = CONCAT44(extraout_var_01,fVar5);
  }
  else {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x98));
    fVar5 = extraout_s0_00;
  }
  *(float *)(param_1 + 0xd0) = (fVar3 - fVar5) / fVar4;
                    /* WARNING: Could not recover jumptable at 0x0282d244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
            (*(long **)(param_1 + 0x10),param_1 + 0x38,param_1 + 0xb0);
  return;
}


