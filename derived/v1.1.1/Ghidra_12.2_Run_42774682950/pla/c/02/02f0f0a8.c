/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0f0a8; name: FUN_02f0f0a8
 */


void FUN_02f0f0a8(float param_1,undefined8 param_2,ulong *param_3,ulong param_4,int param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = *param_3;
  uVar4 = param_3[8];
  *param_3 = param_4;
  if ((param_5 == 0) || (((byte)uVar4 >> 1 & 1) == 0)) {
    fVar7 = *(float *)(param_3 + 2);
  }
  else {
    fVar7 = expf((float)(int)-(uint)DAT_042ab268 / ((float)param_5 * 9.6));
    *(float *)((long)param_3 + 0x44) = fVar7;
    fVar7 = *(float *)(param_3 + 2);
  }
  if (((byte)uVar4 & 1) == 0) {
    *(float *)(param_3 + 1) = fVar7;
    if (param_7 == 2) {
      param_1 = *(float *)((long)param_3 + 0xc) + param_1;
    }
    *(float *)((long)param_3 + 0xc) = param_1;
    *(float *)((long)param_3 + 0x14) = param_1;
  }
  else {
    if (fVar7 * 0.05 < -37.0) {
      fVar7 = 0.0;
    }
    else {
      uVar5 = (uint)(fVar7 * 1393317.6 + 1.0653532e+09);
      fVar7 = (float)(uVar5 & 0x7fffff | 0x3f800000);
      fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar5 & 0xff800000);
    }
    *(float *)(param_3 + 1) = fVar7;
    if (param_7 == 2) {
      if (param_1 * 0.05 < -37.0) {
        param_1 = 0.0;
      }
      else {
        uVar5 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar2 = (float)(uVar5 & 0x7fffff | 0x3f800000);
        param_1 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar5 & 0xff800000);
      }
      param_1 = *(float *)((long)param_3 + 0xc) * param_1;
      fVar2 = (float)((uint)param_1 & 0x7fffff | 0x3f800000);
      fVar8 = fVar2 + 1.0;
      *(float *)((long)param_3 + 0xc) = param_1;
      *(float *)((long)param_3 + 0x14) =
           ((float)((uint)param_1 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
           (fVar2 * fVar2 * fVar2 * 1.1581186 + -1.1581186) / (fVar8 * fVar8 * fVar8)) * 20.0;
    }
    else {
      *(float *)((long)param_3 + 0x14) = param_1;
      if (param_1 * 0.05 < -37.0) {
        param_1 = 0.0;
        *(undefined4 *)((long)param_3 + 0xc) = 0;
      }
      else {
        uVar5 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar2 = (float)(uVar5 & 0x7fffff | 0x3f800000);
        param_1 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar5 & 0xff800000);
        *(float *)((long)param_3 + 0xc) = param_1;
      }
    }
  }
  if ((param_1 <= fVar7 && param_6 != 3) && param_6 != 5) {
    param_6 = 8 - param_6;
  }
  *(int *)(param_3 + 7) = param_6;
  uVar5 = 0;
  if (DAT_042ab25c != 0) {
    uVar5 = (param_5 + DAT_042ab25c + -1) / DAT_042ab25c;
  }
  iVar3 = *(int *)(DAT_0440a128 + 0x78);
  if (((param_4 & 0xf000000) != 0) && (uVar6 == param_4)) {
    uVar1 = *(int *)((long)param_3 + 0x1c) + ((int)param_3[3] - iVar3);
    if (uVar1 <= uVar5) {
      uVar5 = uVar1;
    }
  }
  *(int *)(param_3 + 3) = iVar3;
  *(uint *)((long)param_3 + 0x1c) = uVar5;
  *(int *)((long)param_3 + 0x24) = iVar3;
  return;
}


