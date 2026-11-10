/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282ded8; name: FUN_0282ded8
 */


void FUN_0282ded8(float param_1,ulong param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong local_80 [2];
  
  fVar10 = *(float *)(param_5 + 0x10);
  fVar11 = *(float *)(param_5 + 0x14);
  fVar12 = *(float *)(param_5 + 8) + param_1;
  fVar7 = (float)param_2;
  fVar13 = *(float *)(param_5 + 0xc) + fVar7;
  fVar14 = *(float *)(param_5 + 8) + param_3;
  fVar15 = *(float *)(param_5 + 0xc) + param_4;
  iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (iVar3 != 0) {
    uVar5 = 0;
    do {
      fVar6 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),uVar5);
      fVar9 = fVar10 * 0.5 + param_3 * 0.5;
      param_3 = fVar11 * 0.5 + param_4 * 0.5;
      if ((ABS(fVar14 - fVar6) < fVar9) &&
         (ABS(fVar15 - (float)param_2) < param_3 &&
          (fVar9 <= ABS(fVar12 - fVar6) || param_3 <= ABS(fVar13 - (float)param_2)))) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x20))(*(long **)(param_5 + 0x18),uVar5);
      }
      uVar5 = uVar5 + 1;
      uVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (uVar5 < uVar4);
  }
  iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (iVar3 != 0) {
    uVar5 = 0;
    do {
      fVar9 = (float)param_2;
      fVar6 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),uVar5);
      fVar8 = fVar10 * 0.5 + param_3 * 0.5;
      param_2 = (ulong)(uint)fVar8;
      param_4 = fVar11 * 0.5 + param_4 * 0.5;
      bVar1 = param_4 <= ABS(fVar13 - fVar9);
      param_3 = ABS(fVar15 - fVar9);
      bVar2 = fVar8 <= ABS(fVar12 - fVar6);
      if ((ABS(fVar14 - fVar6) < fVar8 && param_3 < param_4) || (bVar2 || bVar1)) {
        if (!bVar2 && !bVar1) goto LAB_0282e098;
      }
      else {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),uVar5);
        if (!bVar2 && !bVar1) {
LAB_0282e098:
          param_2 = CONCAT44(fVar9 - fVar7,fVar6 - param_1);
          local_80[1] = 0;
          local_80[0] = param_2;
          (**(code **)(**(long **)(param_5 + 0x18) + 0x10))
                    (*(long **)(param_5 + 0x18),uVar5,local_80);
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (uVar5 < uVar4);
  }
  return;
}


