/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f238e0; name: FUN_02f238e0
 */


bool FUN_02f238e0(long *param_1)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((*param_1 == 0) || (param_1[5] == 0)) {
    bVar2 = true;
  }
  else {
    if (*(char *)((long)param_1 + 0x5b) != '\0') {
      *(undefined1 *)((long)param_1 + 0x5b) = 0;
      if (*(char *)((long)param_1 + 0x5c) == '\0') {
        if ((0.1 < *(float *)(param_1 + 10)) || (0.1 < *(float *)((long)param_1 + 0x54))) {
          cVar3 = '\0';
          *(undefined1 *)((long)param_1 + 0x5a) = 0;
        }
        else {
          cVar3 = '\x01';
        }
        if (cVar3 != *(char *)((long)param_1 + 0x5d)) {
          *(undefined1 *)((long)param_1 + 0x5e) = 0;
        }
        *(char *)((long)param_1 + 0x5d) = cVar3;
        uVar1 = DAT_042ab26c;
        if (cVar3 == '\0') {
          uVar1 = 0;
        }
        *(undefined2 *)(param_1 + 0xb) = uVar1;
      }
      else {
        fVar6 = *(float *)((long)param_1 + 0x54);
        *(undefined1 *)((long)param_1 + 0x5c) = 0;
        *(float *)(param_1 + 10) = fVar6;
        *(undefined2 *)(param_1 + 0xb) = DAT_042ab26c;
        if (0.1 < fVar6) {
          *(undefined1 *)((long)param_1 + 0x5a) = 0;
        }
        if (fVar6 <= 0.1 != (bool)*(char *)((long)param_1 + 0x5d)) {
          *(undefined1 *)((long)param_1 + 0x5e) = 0;
        }
        *(bool *)((long)param_1 + 0x5d) = fVar6 <= 0.1;
        if (0.1 < fVar6) {
          if (30.0 <= fVar6) {
            uVar5 = (uint)(fVar6 * -1042939.94 + 1.1696472e+09);
            fVar6 = (float)(uVar5 & 0x7fffff | 0x3f800000);
            fVar6 = (float)(uVar5 & 0xff800000) * 16.797443 *
                    (fVar6 * (fVar6 * 0.32518977 + 0.020805772) + 0.65304345);
          }
          else {
            fVar6 = fVar6 * -433.33334 + 20000.0;
          }
          fVar8 = (float)NEON_ucvtf(DAT_042ab258);
          fVar7 = fVar8 * 0.45;
          if (fVar6 <= fVar8 * 0.45) {
            fVar7 = fVar6;
          }
          fVar6 = tanf((fVar7 * 3.1415927) / fVar8);
          fVar6 = 1.0 / fVar6;
          fVar8 = fVar6 * fVar6;
          fVar7 = 1.0 / (fVar6 * 1.4142135 + 1.0 + fVar8);
          FUN_02e09ab0(fVar7,fVar7 + fVar7,fVar7,fVar7 * (2.0 - fVar8 * 2.0),
                       fVar7 * ((1.0 - fVar6 * 1.4142135) + fVar8),param_1);
        }
      }
    }
    cVar3 = *(char *)((long)param_1 + 0x5d);
    if (*(char *)((long)param_1 + 0x6b) != '\0') {
      *(undefined1 *)((long)param_1 + 0x6b) = 0;
      if (*(char *)((long)param_1 + 0x6c) == '\0') {
        if ((0.1 < *(float *)(param_1 + 0xc)) || (0.1 < *(float *)((long)param_1 + 100))) {
          cVar4 = '\0';
          *(undefined1 *)((long)param_1 + 0x6a) = 0;
        }
        else {
          cVar4 = '\x01';
        }
        if (cVar4 != *(char *)((long)param_1 + 0x6d)) {
          *(undefined1 *)((long)param_1 + 0x6e) = 0;
        }
        *(char *)((long)param_1 + 0x6d) = cVar4;
        uVar1 = DAT_042ab26c;
        if (cVar4 == '\0') {
          uVar1 = 0;
        }
        *(undefined2 *)(param_1 + 0xd) = uVar1;
      }
      else {
        fVar6 = *(float *)((long)param_1 + 100);
        *(undefined1 *)((long)param_1 + 0x6c) = 0;
        *(float *)(param_1 + 0xc) = fVar6;
        *(undefined2 *)(param_1 + 0xd) = DAT_042ab26c;
        if (0.1 < fVar6) {
          *(undefined1 *)((long)param_1 + 0x6a) = 0;
        }
        if (fVar6 <= 0.1 != (bool)*(char *)((long)param_1 + 0x6d)) {
          *(undefined1 *)((long)param_1 + 0x6e) = 0;
        }
        *(bool *)((long)param_1 + 0x6d) = fVar6 <= 0.1;
        if (0.1 < fVar6) {
          fVar6 = 100.0 - fVar6;
          if (30.0 <= fVar6) {
            uVar5 = (uint)(fVar6 * -1042939.94 + 1.1696472e+09);
            fVar6 = (float)(uVar5 & 0x7fffff | 0x3f800000);
            fVar6 = (float)(uVar5 & 0xff800000) * 16.797443 *
                    (fVar6 * (fVar6 * 0.32518977 + 0.020805772) + 0.65304345);
          }
          else {
            fVar6 = fVar6 * -433.33334 + 20000.0;
          }
          fVar8 = (float)NEON_ucvtf(DAT_042ab258);
          fVar7 = fVar8 * 0.45;
          if (fVar6 <= fVar8 * 0.45) {
            fVar7 = fVar6;
          }
          fVar6 = tanf((fVar7 * 3.1415927) / fVar8);
          fVar9 = fVar6 * fVar6 + 1.0;
          fVar7 = 1.0 / (fVar9 + fVar6 * 1.4142135);
          fVar8 = fVar7 * -2.0;
          FUN_02e09ab0(fVar7,fVar8,fVar7,fVar8 - fVar8 * fVar6 * fVar6,
                       fVar7 * (fVar9 - fVar6 * 1.4142135),param_1 + 5);
        }
      }
    }
    bVar2 = cVar3 != '\0' && *(char *)((long)param_1 + 0x6d) != '\0';
  }
  return bVar2;
}


