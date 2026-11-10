/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01577bd4; name: FUN_01577bd4
 */


undefined1  [16]
FUN_01577bd4(undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
            undefined8 param_6,undefined8 param_7,uint param_8)

{
  ulong uVar1;
  float *pfVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  puVar3 = PTR_PTR_0437a4c8;
  uVar5 = param_1._8_8_;
  uVar11 = param_1._0_8_;
  fVar6 = (float)(**(code **)PTR_PTR_0437a4c8)(param_6);
  fVar7 = (float)(**(code **)puVar3)(param_6);
  if (4 < param_8) goto LAB_01577d98;
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar4 = (ulong)((param_4 * 360.0 + (param_5 * 360.0 - param_4 * 360.0) * fVar7) *
                 (fVar9 / *(float *)PTR_FloatDegree180_04372ce0));
  uVar1 = uVar4 >> 0x18 & 0xff;
  fVar6 = ((param_3 - param_2) * fVar6 + param_2) *
          (*(float *)(PTR_SinCosSampleTable_04372ce8 + uVar1 * 0x10 + 4) +
          *(float *)(PTR_SinCosSampleTable_04372ce8 + uVar1 * 0x10 + 0xc) *
          (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08);
  switch(param_8) {
  case 0:
    uVar11 = CONCAT44(param_1._4_4_,fVar6);
    goto LAB_01577d98;
  case 1:
    uVar11 = CONCAT44(fVar6,param_1._0_4_);
    goto LAB_01577d98;
  case 2:
    goto LAB_01577d90;
  case 3:
    fVar7 = 0.0;
    break;
  case 4:
    fVar7 = fVar6;
    fVar6 = 0.0;
  }
  uVar5 = (ulong)-((float)((ulong)param_7 >> 0x20) * (fVar9 / *(float *)PTR_FloatDegree180_04372ce0)
                  );
  pfVar2 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar5 >> 0x18 & 0xff) * 0x10);
  fVar9 = (float)((uint)uVar5 & 0xffffff) * 5.9604645e-08;
  fVar10 = pfVar2[1] + fVar9 * pfVar2[3];
  fVar9 = *pfVar2 + fVar9 * pfVar2[2];
  uVar11 = CONCAT44(param_1._4_4_,fVar9 * fVar6 - fVar10 * fVar7);
  fVar6 = fVar10 * fVar6 + fVar9 * fVar7;
LAB_01577d90:
  uVar5 = (ulong)(uint)fVar6;
LAB_01577d98:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar11;
  return auVar8;
}


