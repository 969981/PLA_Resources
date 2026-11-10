/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a94d60; name: FUN_02a94d60
 */


void FUN_02a94d60(long param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x230) == 0) {
    fVar9 = *(float *)(param_1 + 0x240);
    fVar10 = *(float *)(param_1 + 0x234);
    fVar8 = *(float *)(param_1 + 0x238);
    fVar4 = tanf(*(float *)(param_1 + 0x23c) * 0.5);
    fVar5 = fVar8 - fVar10;
    lVar3 = (ulong)(uint)(1.0 / fVar4) << 0x20;
    fVar9 = (1.0 / fVar4) / fVar9;
    auVar1._4_8_ = 0;
    auVar1._0_4_ = fVar10 / fVar5;
    auVar2._0_12_ = auVar1 << 0x40;
    auVar2._12_4_ = 0xbf800000;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(ulong *)(param_1 + 0x2b0) = (ulong)(uint)fVar9;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(long *)(param_1 + 0x2c0) = lVar3;
    *(long *)(param_1 + 0x2d8) = auVar2._8_8_;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(ulong *)(param_1 + 0x2e8) = (ulong)(uint)((fVar10 * fVar8) / fVar5);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  else if (*(int *)(param_1 + 0x230) == 1) {
    fVar5 = *(float *)(param_1 + 0x248) - *(float *)(param_1 + 0x244);
    fVar10 = *(float *)(param_1 + 0x250) - *(float *)(param_1 + 0x24c);
    fVar4 = *(float *)(param_1 + 0x234) - *(float *)(param_1 + 0x238);
    fVar9 = 2.0 / fVar5;
    lVar3 = (ulong)(uint)(2.0 / fVar10) << 0x20;
    auVar6._4_12_ = SUB1612(ZEXT816(0),4);
    auVar6._0_4_ = 1.0 / fVar4;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar6._0_8_;
    auVar2 = auVar7 << 0x40;
    auVar7 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(ulong *)(param_1 + 0x2b0) = (ulong)(uint)fVar9;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(long *)(param_1 + 0x2c0) = lVar3;
    *(ulong *)(param_1 + 0x2d8) = auVar6._0_8_;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(float *)(param_1 + 0x2e8) = -*(float *)(param_1 + 0x238) / fVar4;
    *(int *)(param_1 + 0x2ec) = auVar7._12_4_;
    *(float *)(param_1 + 0x2e0) =
         -(*(float *)(param_1 + 0x244) + *(float *)(param_1 + 0x248)) / fVar5;
    *(float *)(param_1 + 0x2e4) =
         -(*(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x250)) / fVar10;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x2c0);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x2d0);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x2b0);
  }
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(ulong *)(param_1 + 0x2b0) = (ulong)(uint)(fVar9 * (float)*(undefined8 *)(param_1 + 0x228));
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(ulong *)(param_1 + 0x2c0) =
       (ulong)(uint)((float)((ulong)lVar3 >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_1 + 0x228) >> 0x20)) << 0x20;
  *(long *)(param_1 + 0x2d8) = auVar2._0_8_;
  *(ulong *)(param_1 + 0x2d0) =
       CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x220) >> 0x20),
                -(float)*(undefined8 *)(param_1 + 0x220));
  return;
}


