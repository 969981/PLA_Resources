/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126b4e0; name: FUN_0126b4e0
 */


void FUN_0126b4e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_FloatPi_04372cf0;
  puVar1 = PTR_FloatDegree180_04372ce0;
  if (*(int *)(param_1 + 0x80) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x98);
    if (lVar3 == 0) {
      fVar9 = 0.0;
      fVar10 = 0.0;
      fVar7 = 0.0;
    }
    else {
      uStack_38 = *(undefined8 *)(lVar3 + 200);
      local_40 = *(undefined8 *)(lVar3 + 0xc0);
      auVar5 = FUN_0098fad4(&local_40);
      fVar7 = *(float *)puVar1 / *(float *)puVar2;
      fVar9 = fVar7 * auVar5._0_4_;
      fVar10 = fVar7 * auVar5._4_4_;
      fVar7 = fVar7 * auVar5._8_4_;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0x68);
    if (lVar3 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x70) + 0x98);
      if (lVar4 == 0) {
        uVar8 = 0;
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)*(undefined8 *)(lVar4 + 0xd8);
        uVar8 = *(undefined8 *)(lVar4 + 0xd0);
      }
      fVar10 = (float)FUN_00aacd40(CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x330) >> 0x20) -
                                            (float)((ulong)uVar8 >> 0x20),
                                            (float)*(undefined8 *)(lVar3 + 0x330) - (float)uVar8),
                                   (float)*(undefined8 *)(lVar3 + 0x338) - fVar10);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x98);
    if (lVar3 != 0) {
      fVar11 = *(float *)puVar2 / *(float *)puVar1;
      auVar6 = FUN_009a7ff4(fVar11 * fVar10,fVar11 * fVar9,fVar11 * fVar7);
      *(undefined1 *)(lVar3 + 0xe0) = 1;
      *(undefined1 (*) [16])(lVar3 + 0xc0) = auVar6;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
    if (lVar3 == 0) {
      fVar9 = 0.0;
      fVar10 = 0.0;
      fVar7 = 0.0;
    }
    else {
      uStack_38 = *(undefined8 *)(lVar3 + 200);
      local_40 = *(undefined8 *)(lVar3 + 0xc0);
      auVar5 = FUN_0098fad4(&local_40);
      fVar7 = *(float *)puVar1 / *(float *)puVar2;
      fVar9 = fVar7 * auVar5._0_4_;
      fVar10 = fVar7 * auVar5._4_4_;
      fVar7 = fVar7 * auVar5._8_4_;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0x68);
    if (lVar3 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
      if (lVar4 == 0) {
        uVar8 = 0;
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)*(undefined8 *)(lVar4 + 0xd8);
        uVar8 = *(undefined8 *)(lVar4 + 0xd0);
      }
      fVar10 = (float)FUN_00aacd40(CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x330) >> 0x20) -
                                            (float)((ulong)uVar8 >> 0x20),
                                            (float)*(undefined8 *)(lVar3 + 0x330) - (float)uVar8),
                                   (float)*(undefined8 *)(lVar3 + 0x338) - fVar10);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x98);
    if (lVar3 != 0) {
      fVar11 = *(float *)puVar2 / *(float *)puVar1;
      auVar6 = FUN_009a7ff4(fVar11 * fVar10,fVar11 * fVar9,fVar11 * fVar7);
      *(undefined1 *)(lVar3 + 0xe0) = 1;
      *(undefined1 (*) [16])(lVar3 + 0xc0) = auVar6;
    }
  }
  return;
}


