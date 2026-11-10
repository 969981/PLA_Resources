/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03075140; name: FUN_03075140
 */


void FUN_03075140(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 auStack_90 [48];
  undefined8 local_60;
  ulong uStack_58;
  
  lVar5 = *param_2;
  local_a0 = CONCAT44(*(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0xc));
  lVar6 = param_2[4];
  local_b0 = *(undefined8 *)(lVar5 + 0xa0);
  uStack_a8 = *(undefined8 *)(lVar5 + 0xa8);
  uStack_98 = (ulong)*(uint *)(lVar5 + 0x2c);
  FUN_032c9fc0(auStack_90,&local_b0);
  uStack_58 = uStack_98;
  local_60 = local_a0;
  puVar7 = (undefined8 *)*param_2;
  param_3[0x30] = 0;
  param_3[10] = 0;
  *(undefined4 *)(param_3 + 0x2b) = 0;
  param_3[0x2c] = 8;
  uVar3 = *puVar7;
  param_3[1] = puVar7[1];
  *param_3 = uVar3;
  uVar3 = puVar7[2];
  param_3[3] = puVar7[3];
  param_3[2] = uVar3;
  uVar3 = puVar7[4];
  param_3[5] = puVar7[5];
  param_3[4] = uVar3;
  uVar3 = puVar7[6];
  param_3[7] = puVar7[7];
  param_3[6] = uVar3;
  uVar3 = puVar7[8];
  param_3[9] = puVar7[9];
  param_3[8] = uVar3;
  auVar8 = NEON_fmov(0x3f800000,4);
  param_3[0x2f] = auVar8._8_8_;
  param_3[0x2e] = auVar8._0_8_;
  local_b0._0_4_ = 0x34000000;
  uVar4 = FUN_032c91c4(puVar7,&DAT_03aae430,&local_b0);
  if ((uVar4 & 1) != 0) {
    uVar1 = *(uint *)(param_3 + 0x2c);
    *(uint *)(param_3 + 0x2c) = uVar1 | 4;
    if (ABS(*(float *)(puVar7 + 7)) <= 1.1920929e-07 &&
        (ABS(*(float *)(puVar7 + 6)) <= 1.1920929e-07 &&
        ABS(*(float *)((long)puVar7 + 0x34)) <= 1.1920929e-07)) {
      *(uint *)(param_3 + 0x2c) = uVar1 | 5;
    }
  }
  *(undefined2 *)(param_3 + 0x17f) = 0xffff;
  if (*(char *)(lVar6 + 0x19) != '\x02') {
    puVar7 = (undefined8 *)*param_2;
    param_3[0x30] = 0;
    param_3[10] = 0;
    *(undefined4 *)(param_3 + 0x2b) = 0;
    param_3[0x2c] = 8;
    uVar3 = *puVar7;
    param_3[1] = puVar7[1];
    *param_3 = uVar3;
    uVar3 = puVar7[2];
    param_3[3] = puVar7[3];
    param_3[2] = uVar3;
    uVar3 = puVar7[4];
    param_3[5] = puVar7[5];
    param_3[4] = uVar3;
    uVar3 = puVar7[6];
    param_3[7] = puVar7[7];
    param_3[6] = uVar3;
    auVar2 = *(undefined1 (*) [16])(puVar7 + 8);
    param_3[0x2f] = auVar8._8_8_;
    param_3[0x2e] = auVar8._0_8_;
    param_3[9] = auVar2._8_8_;
    param_3[8] = auVar2._0_8_;
    local_b0._0_4_ = 0x34000000;
    uVar4 = FUN_032c91c4(puVar7,&DAT_03aae430,&local_b0);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(uint *)(param_3 + 0x2c);
      *(uint *)(param_3 + 0x2c) = uVar1 | 4;
      if (ABS(*(float *)(puVar7 + 7)) <= 1.1920929e-07 &&
          (ABS(*(float *)(puVar7 + 6)) <= 1.1920929e-07 &&
          ABS(*(float *)((long)puVar7 + 0x34)) <= 1.1920929e-07)) {
        *(uint *)(param_3 + 0x2c) = uVar1 | 5;
      }
    }
    *(undefined2 *)(param_3 + 0x17f) = 0xffff;
    local_b0 = CONCAT44(local_b0._4_4_,(int)param_2[3]);
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(*param_2 + 0x78) + 0x18) * 0x200 + 0xb8))
              (*(long *)(*param_2 + 0x78),&local_b0,1,param_3);
    if ((*(byte *)(param_3 + 0x2c) >> 4 & 1) == 0) {
      lVar6 = param_3[0x30];
    }
    else {
      lVar6 = FUN_02fed7a0(param_3,0,*(undefined8 *)(param_1 + 0x490));
    }
  }
  *param_4 = lVar6;
  return;
}


