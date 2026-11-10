/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0e5cc; name: FUN_02f0e5cc
 */


undefined8 FUN_02f0e5cc(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  float fVar6;
  ulong uVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (param_2 < *(uint *)((long)param_1 + 0x1c) + uVar1) {
    bVar2 = *(byte *)(param_1 + 8);
    if (((bVar2 >> 1 & 1) == 0) || (*(float *)((long)param_1 + 0x44) == 0.0)) {
      if (uVar1 < param_2) {
        fVar6 = (float)(param_2 - uVar1) / (float)*(uint *)((long)param_1 + 0x1c);
      }
      else {
        fVar6 = 0.0;
      }
      *(float *)(param_1 + 4) = fVar6;
      uVar7 = FUN_02f0e740(fVar6,*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),
                           *(undefined4 *)(param_1 + 7));
      bVar2 = *(byte *)(param_1 + 8);
    }
    else {
      uVar7 = (ulong)(uint)(*(float *)((long)param_1 + 0x14) +
                           *(float *)((long)param_1 + 0x44) *
                           (*(float *)(param_1 + 2) - *(float *)((long)param_1 + 0x14)));
    }
    uVar3 = 0;
    if ((bVar2 & 1) != 0) {
      uVar3 = 0;
      fVar6 = (float)((uint)uVar7 & 0x7fffff | 0x3f800000);
      fVar8 = fVar6 + 1.0;
      uVar7 = (ulong)(uint)(((float)((uint)uVar7 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                            (fVar6 * fVar6 * fVar6 * 1.1581186 + -1.1581186) /
                            (fVar8 * fVar8 * fVar8)) * 20.0);
    }
  }
  else {
    uVar7 = (ulong)*(uint *)((long)param_1 + 0x14);
    uVar3 = 1;
  }
  *(int *)(param_1 + 2) = (int)uVar7;
  if (*(int *)(param_1 + 6) != 0) {
    puVar4 = (undefined8 *)param_1[5];
    do {
      puVar5 = puVar4 + 1;
      (*(code *)**(undefined8 **)*puVar4)(uVar7,(undefined8 *)*puVar4,*param_1,uVar3);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8));
  }
  return uVar3;
}


