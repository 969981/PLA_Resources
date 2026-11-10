/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1f0dc; name: FUN_02e1f0dc
 */


undefined8
FUN_02e1f0dc(float param_1,uint *param_2,long *param_3,float *param_4,float *param_5,uint param_6,
            uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((param_7 - 1 | param_6 - 1) < 0x40) {
    fVar12 = exp2f(param_1 * 0.01);
    fVar14 = *param_4;
    if (*param_5 <= *param_4) {
      fVar14 = *param_5;
    }
    fVar14 = fVar14 * fVar12;
    fVar13 = param_4[(ulong)(param_6 - 1) * 2];
    if (param_4[(ulong)(param_6 - 1) * 2] <= param_5[(ulong)(param_7 - 1) * 2]) {
      fVar13 = param_5[(ulong)(param_7 - 1) * 2];
    }
    fVar15 = (float)param_8 * 0.001;
    uVar8 = (uint)((fVar13 * fVar12 - fVar14) * fVar15);
    if (uVar8 < 5) {
      uVar8 = 0;
    }
    else if ((uVar8 & 0xffff0000) != 0) goto LAB_02e1f358;
    *param_2 = uVar8 & 0xfffc;
    lVar5 = (**(code **)(*param_3 + 0x10))(param_3,(uVar8 & 0xfffc) << 2);
    *(long *)(param_2 + 2) = lVar5;
    if (lVar5 == 0) {
      uVar6 = 0x34;
    }
    else {
      *(undefined2 *)(param_2 + 0xc5) = 0;
      if (param_6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar8 = *param_2;
        uVar11 = 0;
        uVar9 = 0;
        uVar7 = 0;
        uVar10 = 0xffffffff;
        do {
          uVar11 = uVar11 & 0xffff;
          uVar2 = (int)((param_4[uVar11 * 2] * fVar12 - fVar14) * fVar15) & 0xfffffffc;
          if (uVar8 <= uVar2) {
            uVar2 = uVar8 - 4;
          }
          if (uVar2 != uVar10) {
            sVar3 = 0;
            if (uVar2 != 0) {
              sVar3 = (short)uVar8 - (short)uVar2;
            }
            *(short *)((long)param_2 + (ulong)uVar7 * 2 + 0x214) = sVar3;
            param_2[(ulong)uVar7 + 5] = (uint)param_4[uVar11 * 2 + 1];
            uVar4 = *(ushort *)((long)param_2 + (ulong)uVar7 * 2 + 0x214);
            if (uVar9 < uVar4) {
              *(ushort *)(param_2 + 0xc5) = uVar7;
              uVar9 = uVar4;
            }
            uVar7 = uVar7 + 1;
          }
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar1;
          uVar10 = uVar2;
        } while ((uVar1 & 0xffff) < param_6);
      }
      *(ushort *)(param_2 + 0xc6) = uVar7;
      *(undefined2 *)((long)param_2 + 0x316) = 0;
      if (param_7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar8 = *param_2;
        uVar11 = 0;
        uVar9 = 0;
        uVar7 = 0;
        uVar10 = 0xffffffff;
        do {
          uVar11 = uVar11 & 0xffff;
          uVar2 = (int)((param_5[uVar11 * 2] * fVar12 - fVar14) * fVar15) & 0xfffffffc;
          if (uVar8 <= uVar2) {
            uVar2 = uVar8 - 4;
          }
          if (uVar2 != uVar10) {
            sVar3 = 0;
            if (uVar2 != 0) {
              sVar3 = (short)uVar8 - (short)uVar2;
            }
            *(short *)((long)param_2 + (ulong)uVar7 * 2 + 0x294) = sVar3;
            param_2[(ulong)uVar7 + 0x45] = (uint)param_5[uVar11 * 2 + 1];
            uVar4 = *(ushort *)((long)param_2 + (ulong)uVar7 * 2 + 0x294);
            if (uVar9 < uVar4) {
              *(ushort *)((long)param_2 + 0x316) = uVar7;
              uVar9 = uVar4;
            }
            uVar7 = uVar7 + 1;
          }
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar1;
          uVar10 = uVar2;
        } while ((uVar1 & 0xffff) < param_7);
      }
      uVar6 = 1;
      *(ushort *)((long)param_2 + 0x31a) = uVar7;
      param_2[4] = 0;
    }
  }
  else {
LAB_02e1f358:
    uVar6 = 2;
  }
  return uVar6;
}


