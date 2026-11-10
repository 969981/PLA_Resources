/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01245070; name: FUN_01245070
 */


void FUN_01245070(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_FloatPi_04372cf0;
  puVar1 = PTR_FloatDegree180_04372ce0;
  if (*(int *)(param_1 + 0x80) != 1) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x98);
  if (lVar3 == 0) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar6 = 0.0;
  }
  else {
    uStack_38 = *(undefined8 *)(lVar3 + 200);
    local_40 = *(undefined8 *)(lVar3 + 0xc0);
    auVar4 = FUN_0098fad4(&local_40);
    fVar6 = *(float *)puVar1 / *(float *)puVar2;
    fVar7 = fVar6 * auVar4._0_4_;
    fVar8 = fVar6 * auVar4._4_4_;
    fVar6 = fVar6 * auVar4._8_4_;
  }
  if (param_2 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x98);
    if (lVar3 != 0) {
      fVar8 = fVar8 - *(float *)(param_1 + 0x1ac);
      fVar9 = fVar8 + 360.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar8 = *(float *)puVar2 / *(float *)puVar1;
      auVar5 = FUN_009a7ff4(fVar9 * fVar8,fVar8 * fVar7,fVar8 * fVar6);
      *(undefined1 *)(lVar3 + 0xe0) = 1;
      *(undefined1 (*) [16])(lVar3 + 0xc0) = auVar5;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
    if (lVar3 == 0) {
      return;
    }
    uStack_38 = *(undefined8 *)(lVar3 + 200);
    local_40 = *(undefined8 *)(lVar3 + 0xc0);
    auVar4 = FUN_0098fad4(&local_40);
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
    if (lVar3 == 0) {
      return;
    }
    fVar8 = *(float *)puVar1;
    fVar6 = *(float *)puVar2;
    fVar9 = fVar8 / fVar6;
    fVar10 = fVar9 * auVar4._4_4_ - *(float *)(param_1 + 0x1ac);
    fVar11 = fVar9 * auVar4._0_4_;
    fVar9 = fVar9 * auVar4._8_4_;
    fVar7 = fVar10 + 360.0;
    if (0.0 <= fVar10) {
      fVar7 = fVar10;
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x98);
    if (lVar3 != 0) {
      fVar8 = *(float *)(param_1 + 0x1ac) + fVar8;
      fVar9 = fVar8 + -360.0;
      if (fVar8 <= 360.0) {
        fVar9 = fVar8;
      }
      fVar8 = *(float *)puVar2 / *(float *)puVar1;
      auVar5 = FUN_009a7ff4(fVar9 * fVar8,fVar8 * fVar7,fVar8 * fVar6);
      *(undefined1 *)(lVar3 + 0xe0) = 1;
      *(undefined1 (*) [16])(lVar3 + 0xc0) = auVar5;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
    if (lVar3 == 0) {
      return;
    }
    uStack_38 = *(undefined8 *)(lVar3 + 200);
    local_40 = *(undefined8 *)(lVar3 + 0xc0);
    auVar4 = FUN_0098fad4(&local_40);
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
    if (lVar3 == 0) {
      return;
    }
    fVar8 = *(float *)puVar1;
    fVar6 = *(float *)puVar2;
    fVar9 = fVar8 / fVar6;
    fVar10 = *(float *)(param_1 + 0x1ac) + fVar9 * auVar4._4_4_;
    fVar11 = fVar9 * auVar4._0_4_;
    fVar9 = fVar9 * auVar4._8_4_;
    fVar7 = fVar10 + -360.0;
    if (fVar10 <= 360.0) {
      fVar7 = fVar10;
    }
  }
  fVar6 = fVar6 / fVar8;
  auVar5 = FUN_009a7ff4(fVar7 * fVar6,fVar11 * fVar6,fVar9 * fVar6);
  *(undefined1 *)(lVar3 + 0xe0) = 1;
  *(undefined1 (*) [16])(lVar3 + 0xc0) = auVar5;
  return;
}


