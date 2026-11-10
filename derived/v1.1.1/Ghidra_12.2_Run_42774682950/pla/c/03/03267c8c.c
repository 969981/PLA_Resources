/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267c8c; name: FUN_03267c8c
 */


undefined8
FUN_03267c8c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 *param_9)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  bVar2 = *(byte *)(*(long *)(*(long *)(param_3 + 0x20) + 0x68) + 0x80);
  bVar3 = *(byte *)(*(long *)(*(long *)(param_4 + 0x20) + 0x68) + 0x80);
  bVar4 = bVar2 & bVar3;
  bVar3 = bVar3 | bVar2;
  if (((bVar4 & 1) != 0) ||
     ((uVar5 = FUN_03267e50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
      , (bVar3 & 1) != 0 && ((int)uVar5 == -1)))) {
    local_b0 = *param_9;
    uStack_a8 = param_9[1];
    fVar17 = *(float *)(param_9 + 3);
    fVar19 = *(float *)(param_9 + 2);
    fVar18 = *(float *)((long)param_9 + 0x14);
    uVar1 = *(undefined4 *)((long)param_9 + 0x1c);
    fVar16 = *(float *)(param_9 + 4);
    fVar15 = *(float *)((long)param_9 + 0x24);
    fVar14 = *(float *)(param_9 + 5);
    fVar13 = *(float *)((long)param_9 + 0x2c);
    fVar9 = fVar16;
    fVar8 = fVar15;
    fVar12 = fVar19;
    fVar11 = fVar18;
    fVar10 = fVar17;
    fVar7 = fVar14;
    fVar6 = fVar13;
    if ((bVar3 & 1) != 0) {
      local_c0 = 0;
      uStack_b8 = 0;
      uVar5 = FUN_03268f90(param_1,&local_c0,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                          );
      if ((bVar4 & 1) != 0) {
        return uVar5;
      }
      if ((int)uVar5 != -1) {
        return uVar5;
      }
      fVar12 = *(float *)(param_9 + 2);
      fVar11 = *(float *)((long)param_9 + 0x14);
      fVar10 = *(float *)(param_9 + 3);
      fVar9 = *(float *)(param_9 + 4);
      fVar8 = *(float *)((long)param_9 + 0x24);
      fVar7 = *(float *)(param_9 + 5);
      fVar6 = *(float *)((long)param_9 + 0x2c);
    }
    if (fVar16 <= fVar9) {
      fVar16 = fVar9;
    }
    *param_9 = local_b0;
    param_9[1] = uStack_a8;
    *(undefined4 *)((long)param_9 + 0x1c) = uVar1;
    if (fVar8 <= fVar15) {
      fVar15 = fVar8;
    }
    if (fVar14 <= fVar7) {
      fVar14 = fVar7;
    }
    if (fVar6 <= fVar13) {
      fVar13 = fVar6;
    }
    uVar5 = 0xffffffff;
    *(float *)(param_9 + 2) = (fVar19 + fVar12) * 0.5;
    *(float *)((long)param_9 + 0x14) = (fVar18 + fVar11) * 0.5;
    *(float *)(param_9 + 3) = (fVar17 + fVar10) * 0.5;
    *(float *)(param_9 + 4) = fVar16;
    *(float *)((long)param_9 + 0x24) = fVar15;
    *(float *)(param_9 + 5) = fVar14;
    *(float *)((long)param_9 + 0x2c) = fVar13;
  }
  return uVar5;
}


