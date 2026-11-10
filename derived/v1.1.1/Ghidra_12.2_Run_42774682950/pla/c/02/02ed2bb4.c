/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed2bb4; name: FUN_02ed2bb4
 */


undefined8 FUN_02ed2bb4(long param_1,long param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  byte *pbVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  float local_24;
  
  if ((*(byte *)(param_2 + 0x288) >> 2 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x284) & 1) == 0) {
      local_60 = *(undefined8 *)(param_2 + 0x10);
      local_58 = *(undefined4 *)(param_2 + 0x34);
      local_48 = 0xff;
      local_40 = 0xff;
      local_38 = 0;
      local_50 = 0;
      pfVar2 = *(float **)(param_1 + 0x98);
      local_24 = DAT_0440a8ec;
      pfVar3 = pfVar2;
      if (pfVar2 != (float *)0x0) {
        uVar5 = 0;
        pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
        do {
          if (*(byte *)((long)pfVar2 + uVar5 + 1) == 0x3b) goto LAB_02ed2c50;
          uVar5 = uVar5 + 1;
          pfVar3 = pfVar3 + 1;
        } while (uVar5 < *(byte *)pfVar2);
        pfVar3 = (float *)0x0;
      }
LAB_02ed2c50:
      pfVar2 = &local_24;
      if (pfVar3 != (float *)0x0) {
        pfVar2 = pfVar3;
      }
      fVar10 = *pfVar2;
      fVar6 = (float)FUN_02ed2e94(param_1,6,&local_60);
      fVar6 = fVar6 + fVar10;
      pbVar4 = *(byte **)(param_1 + 0xb0);
      if (pbVar4 != (byte *)0x0) {
        uVar5 = 0;
        pfVar3 = (float *)(pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc));
        do {
          if (pbVar4[uVar5 + 1] == 0x3b) {
            fVar10 = *pfVar3;
            if (pfVar3[1] - fVar10 == 0.0) {
              fVar9 = 0.0;
            }
            else {
              DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
              fVar9 = (pfVar3[1] - fVar10) * 4.656613e-10 *
                      (float)(uint)((ulong)DAT_0440a190 >> 0x21);
              fVar10 = *pfVar3;
            }
            fVar6 = fVar10 + fVar6 + fVar9;
            break;
          }
          uVar5 = uVar5 + 1;
          pfVar3 = pfVar3 + 2;
        } while (uVar5 < *pbVar4);
      }
      if (0.0 < fVar6) {
        if (*(int *)(param_2 + 0x90) == 0) {
          uVar1 = FUN_02ed0d88(param_1,param_2);
          if ((int)uVar1 == 1) {
            return 3;
          }
          return uVar1;
        }
        dVar7 = (double)NEON_ucvtf((ulong)DAT_042ab258);
        dVar8 = 0.5;
        if (dVar7 * (double)fVar6 <= 0.0) {
          dVar8 = -0.5;
        }
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + (int)(dVar8 + dVar7 * (double)fVar6);
      }
    }
    else {
      *(byte *)(param_2 + 0x284) = *(byte *)(param_2 + 0x284) & 0xfe;
    }
  }
  return 1;
}


