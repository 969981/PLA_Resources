/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f16454; name: FUN_02f16454
 */


void FUN_02f16454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char local_48 [4];
  float local_44;
  float local_28;
  float local_24;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  fVar9 = *(float *)(param_1 + 0x14);
  uVar3 = FUN_02f167d4(uVar1,&local_24,&local_28);
  if ((uVar3 & 1) == 0) {
    fVar5 = *(float *)(param_1 + 0x364);
  }
  else {
    *(float *)(param_1 + 0x360) = local_24;
    fVar5 = 1.0 - 1.0 / local_28;
    *(float *)(param_1 + 0x364) = fVar5;
  }
  fVar8 = (*(float *)(param_1 + 0x350) - fVar9) - local_24;
  fVar5 = local_24 + fVar5 * fVar8;
  if (fVar8 <= 0.0) {
    fVar5 = local_24;
  }
  uVar3 = FUN_02f16864(uVar1,&local_44,local_48);
  fVar8 = fVar5;
  if ((uVar3 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x35c);
joined_r0x02f16530:
    if (local_48[0] != '\0') goto LAB_02f16534;
LAB_02f165bc:
    if (fVar5 * 0.05 < -37.0) {
      fVar7 = 0.0;
    }
    else {
      uVar4 = (uint)(fVar5 * 1393317.6 + 1.0653532e+09);
      fVar7 = (float)(uVar4 & 0x7fffff | 0x3f800000);
      fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar4 & 0xff800000);
    }
    if (*(float *)(param_1 + 0x354) <= fVar7) {
      *(float *)(param_1 + 0x354) = fVar7;
      goto LAB_02f1656c;
    }
    fVar6 = (fVar7 - fVar7 * fVar6) + fVar6 * *(float *)(param_1 + 0x354);
    fVar8 = (float)((uint)fVar6 & 0x7fffff | 0x3f800000);
    *(float *)(param_1 + 0x354) = fVar6;
    fVar7 = fVar8 + 1.0;
    fVar8 = ((float)((uint)fVar6 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
            (fVar8 * fVar8 * fVar8 * 1.1581186 + -1.1581186) / (fVar7 * fVar7 * fVar7)) * 20.0;
  }
  else {
    if (local_44 <= 0.0) {
      fVar6 = 0.0;
      *(undefined4 *)(param_1 + 0x35c) = 0;
      goto joined_r0x02f16530;
    }
    fVar6 = expf((float)(int)-(uint)DAT_042ab268 / (local_44 * 48000.0));
    *(float *)(param_1 + 0x35c) = fVar6;
    if (local_48[0] == '\0') goto LAB_02f165bc;
LAB_02f16534:
    if (*(float *)(param_1 + 0x354) <= fVar5) {
      *(float *)(param_1 + 0x354) = fVar5;
      goto LAB_02f1656c;
    }
    fVar8 = (fVar5 - fVar5 * fVar6) + fVar6 * *(float *)(param_1 + 0x354);
    *(float *)(param_1 + 0x354) = fVar8;
  }
  if (0.5 <= fVar8 - fVar5) {
    *(byte *)(param_1 + 0x34c) = *(byte *)(param_1 + 0x34c) | 2;
  }
LAB_02f1656c:
  *(float *)(param_1 + 0x358) = fVar8 + fVar9;
  FUN_02f168d0(fVar8,uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x350) = 0xc5800000;
  return;
}


