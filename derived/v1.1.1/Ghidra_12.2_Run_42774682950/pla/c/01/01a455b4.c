/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a455b4; name: FUN_01a455b4
 */


void FUN_01a455b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_14;
  
  if ((*(char *)(param_1 + 0xe110) == '\0') && (*(char *)(param_1 + 0xde00) == '\0')) {
    if (*(int *)(param_1 + 0x3e4) == 1) {
      fVar10 = *(float *)(param_1 + 0x54c);
    }
    else {
      if (*(int *)(param_1 + 0x3e4) != 2) {
        return;
      }
      fVar10 = *(float *)(param_1 + 0x54c);
      if (1.0 <= fVar10) {
        return;
      }
    }
    fVar10 = fVar10 + 1.0;
    *(undefined4 *)(param_1 + 0x544) = 0x3f800000;
    *(float *)(param_1 + 0x54c) = fVar10;
    local_14 = 1.0;
    pfVar7 = &local_14;
    if (fVar10 <= 1.0) {
      pfVar7 = (float *)(param_1 + 0x54c);
    }
    local_60 = local_60 & 0xffffffff00000000;
    if (fVar10 < 0.0) {
      pfVar7 = (float *)&local_60;
    }
    fVar10 = *pfVar7;
    *(float *)(param_1 + 0x54c) = fVar10;
    if (1.0 <= fVar10) {
      puVar5 = (undefined8 *)(param_1 + 0x4c0);
    }
    else {
      FUN_018324c8(&local_60,param_1 + 0x480);
      *(undefined8 *)(param_1 + 0x518) = local_48;
      *(undefined8 *)(param_1 + 0x528) = local_38;
      *(undefined8 *)(param_1 + 0x508) = uStack_58;
      *(undefined8 *)(param_1 + 0x510) = local_50;
      *(ulong *)(param_1 + 0x500) = local_60;
      *(undefined8 *)(param_1 + 0x530) = local_30;
      puVar5 = (undefined8 *)(param_1 + 0x500);
      *(undefined8 *)(param_1 + 0x520) = local_40;
    }
    uVar1 = puVar5[1];
    uVar2 = puVar5[3];
    uVar3 = puVar5[4];
    uVar8 = puVar5[5];
    uVar9 = *puVar5;
    uVar6 = puVar5[6];
    *(undefined8 *)(param_1 + 0x350) = puVar5[2];
    *(undefined8 *)(param_1 + 0x358) = uVar2;
    fVar10 = (float)*(undefined8 *)(param_1 + 0x358);
    *(ulong *)(param_1 + 0x370) = uVar6;
    *(undefined8 *)(param_1 + 0x348) = uVar1;
    *(undefined8 *)(param_1 + 0x340) = uVar9;
    *(undefined8 *)(param_1 + 0x360) = uVar3;
    *(undefined8 *)(param_1 + 0x368) = uVar8;
    if ((uVar6 & 0xff) != 0) {
      fVar11 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
      fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) -
               *(float *)(param_1 + 0x344);
      fVar10 = fVar10 - *(float *)(param_1 + 0x348);
      fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20) -
               *(float *)(param_1 + 0x34c);
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar10 = fVar10 * fVar10;
      fVar13 = fVar13 * fVar13;
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar11;
      auVar14._8_4_ = fVar10;
      auVar14._12_4_ = fVar13;
      auVar4._4_4_ = fVar12;
      auVar4._0_4_ = fVar11;
      auVar4._8_4_ = fVar10;
      auVar4._12_4_ = fVar13;
      auVar14 = NEON_ext(auVar14,auVar4,8,1);
      fVar10 = SQRT(auVar14._0_4_ + fVar11 + auVar14._4_4_ + fVar12);
    }
    *(float *)(param_1 + 0x46c) = fVar10;
    *(float *)(param_1 + 0x468) = fVar10;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  return;
}


