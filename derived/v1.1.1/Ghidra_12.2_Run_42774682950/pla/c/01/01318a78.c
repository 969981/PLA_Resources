/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01318a78; name: FUN_01318a78
 */


void FUN_01318a78(long param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(param_1 + 0xd64) + -27.0;
  if ((param_2 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x1e28);
    fVar10 = *(float *)(param_1 + 0xd60) + fVar6;
    fVar8 = *(float *)(param_1 + 0x1e2c);
    if (fVar10 < -480.0) {
      fVar6 = fVar6 + (-480.0 - fVar10);
    }
    fVar7 = (480.0 - fVar10) + fVar6;
    if (fVar10 <= 480.0) {
      fVar7 = fVar6;
    }
    fVar9 = fVar9 + fVar8;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-480.0 <= fVar10) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar10)) {
        bVar1 = fVar10 < 480.0;
        bVar2 = fVar10 == 480.0;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      *(float *)(param_1 + 0x1e28) = fVar7;
    }
    fVar10 = fVar8 + (270.0 - fVar9);
    if (fVar9 <= 270.0) {
      fVar10 = fVar8;
    }
    fVar6 = (-270.0 - fVar9) + fVar10;
    if (-270.0 <= fVar9) {
      fVar6 = fVar10;
    }
    bVar1 = true;
    if ((fVar9 <= 270.0) && (bVar1 = false, !NAN(fVar9))) {
      bVar1 = fVar9 < -270.0;
    }
    if (!bVar1) goto LAB_01318b2c;
  }
  else {
    fVar7 = -*(float *)(param_1 + 0xd60);
    fVar6 = -fVar9;
    *(float *)(param_1 + 0x1e28) = fVar7;
  }
  *(float *)(param_1 + 0x1e2c) = fVar6;
LAB_01318b2c:
  uVar4 = 0xc2a00000;
  if ((fVar7 < -80.0) || (uVar4 = 0x42a00000, 80.0 < fVar7)) {
    *(undefined4 *)(param_1 + 0x1e28) = uVar4;
  }
  uVar4 = 0x44020000;
  if ((520.0 < fVar6) || (uVar4 = 0xc4020000, fVar6 < -520.0)) {
    *(undefined4 *)(param_1 + 0x1e2c) = uVar4;
  }
  lVar5 = *(long *)(param_1 + 0x5c0);
  *(undefined1 *)(lVar5 + 0x11c) = 1;
  *(undefined8 *)(lVar5 + 0x120) = *(undefined8 *)(param_1 + 0x1e28);
  FUN_0131b924(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x78),*(undefined1 *)(param_1 + 0x1e08),
               *(undefined4 *)(*(long *)(param_1 + 0x5c0) + 0x84));
  return;
}


