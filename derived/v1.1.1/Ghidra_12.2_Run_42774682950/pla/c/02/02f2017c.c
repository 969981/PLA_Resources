/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2017c; name: FUN_02f2017c
 */


ulong FUN_02f2017c(long *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  
  lVar12 = param_1[3];
  if (*(char *)(lVar12 + 0x2a5) < '\0') {
    if (*(short *)(lVar12 + 0x2a0) == 0) {
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x24));
      uVar7 = (**(code **)(*param_1 + 0x118))(param_1);
      fVar13 = (fVar13 * 1000.0) / (float)uVar7;
    }
    else {
      fVar13 = (float)(**(code **)(*param_1 + 0x90))(param_1);
    }
    lVar12 = param_1[3];
    uVar7 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar10 = (ulong)(uint)(int)((float)uVar7 * fVar13 * 0.001 * *(float *)(lVar12 + 0x29c));
  }
  else {
    uVar8 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar10 = 0;
    if ((ulong)DAT_042ab258 != 0) {
      uVar10 = ((ulong)*(uint *)(lVar12 + 0x29c) * (uVar8 & 0xffffffff)) / (ulong)DAT_042ab258;
    }
  }
  uVar4 = *(ushort *)(param_1[3] + 0x2a0);
  uVar3 = *(uint *)(lVar12 + 0x2a3);
  uVar7 = *(uint *)((long)param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 7);
  *(ushort *)((long)param_1 + 0x54) = uVar4;
  if ((uVar4 - 1 != 0) && (uVar9 = (uint)uVar10, uVar2 < uVar9 && uVar7 < uVar2)) {
    uVar2 = (uVar2 - uVar7) + 1;
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = (uVar9 - uVar7) / uVar2;
    }
    uVar11 = (uint)uVar4;
    if ((uVar11 == 0) || (uVar6 < uVar11)) {
      sVar1 = 0;
      if (uVar11 != 0) {
        sVar1 = uVar4 - (short)uVar6;
      }
      *(short *)((long)param_1 + 0x54) = sVar1;
      uVar10 = (ulong)(((uVar9 - uVar7) - uVar6 * uVar2) + uVar7);
    }
    else {
      uVar10 = (ulong)(uVar9 - (uVar4 - 1) * uVar2);
      *(undefined2 *)((long)param_1 + 0x54) = 1;
    }
  }
  if (((uVar3 >> 0x18 & 1) != 0) && (lVar12 = FUN_02eb7d5c(param_1 + 8,uVar10), lVar12 != 0)) {
    uVar4 = *(ushort *)((long)param_1 + 0x54);
    iVar5 = uVar4 - 1;
    uVar7 = *(uint *)(lVar12 + 4);
    uVar10 = (ulong)uVar7;
    if (iVar5 != 0) {
      uVar2 = *(uint *)((long)param_1 + 0x34);
      uVar3 = *(uint *)(param_1 + 7);
      if (uVar3 < uVar7 && uVar2 < uVar3) {
        uVar3 = (uVar3 - uVar2) + 1;
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = (uVar7 - uVar2) / uVar3;
        }
        if ((uVar4 == 0) || (uVar9 < uVar4)) {
          sVar1 = 0;
          if (uVar4 != 0) {
            sVar1 = uVar4 - (short)uVar9;
          }
          *(short *)((long)param_1 + 0x54) = sVar1;
          uVar10 = (ulong)(((uVar7 - uVar2) - uVar9 * uVar3) + uVar2);
        }
        else {
          uVar10 = (ulong)(uVar7 - iVar5 * uVar3);
          *(undefined2 *)((long)param_1 + 0x54) = 1;
        }
      }
    }
  }
  return uVar10 & 0xffffffff;
}


