/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282dda8; name: FUN_0282dda8
 */


void FUN_0282dda8(float param_1,ulong param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong local_70 [2];
  
  fVar7 = (float)param_2;
  fVar13 = *(float *)(param_5 + 8);
  fVar14 = *(float *)(param_5 + 0xc);
  fVar11 = *(float *)(param_5 + 0x10);
  fVar12 = *(float *)(param_5 + 0x14);
  iVar2 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      fVar8 = (float)param_2;
      fVar5 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),uVar4);
      fVar9 = param_3 * 0.5;
      param_3 = param_4 * 0.5;
      fVar6 = ABS((fVar14 + fVar7) - fVar8);
      fVar10 = fVar12 * 0.5 + param_3;
      param_2 = (ulong)(uint)fVar10;
      bVar1 = false;
      if ((ABS((fVar13 + param_1) - fVar5) < fVar11 * 0.5 + fVar9) &&
         (bVar1 = false, !NAN(fVar6) && !NAN(fVar10))) {
        bVar1 = fVar6 < fVar10;
      }
      if (bVar1) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),uVar4);
        param_2 = CONCAT44(fVar8 - fVar7,fVar5 - param_1);
        local_70[1] = 0;
        local_70[0] = param_2;
        (**(code **)(**(long **)(param_5 + 0x18) + 0x10))(*(long **)(param_5 + 0x18),uVar4,local_70)
        ;
      }
      uVar4 = uVar4 + 1;
      uVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (uVar4 < uVar3);
  }
  return;
}


