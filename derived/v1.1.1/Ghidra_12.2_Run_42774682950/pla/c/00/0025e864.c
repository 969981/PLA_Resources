/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025e864; name: FUN_0025e864
 */


void FUN_0025e864(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
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
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    if (((float)param_1 < *(float *)(lVar1 + 0x7c)) || (*(float *)(lVar1 + 0x80) <= (float)param_1))
    {
      *(undefined1 *)(param_2 + 0x1c) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 0x1c) = 1;
    FUN_0025e9fc(param_1,param_2,&local_70,lVar1 + 8);
    uVar4 = FUN_0025ae80(param_1,*(long *)(param_2 + 0x28) + 0x68);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    if (*(long *)(param_2 + 0x38) == 0) {
      puVar2[3] = local_58;
      puVar2[5] = uStack_48;
      puVar2[1] = uStack_68;
      puVar2[2] = uStack_60;
      *puVar2 = local_70;
      puVar2[4] = local_50;
    }
    else {
      puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x20);
      uVar19 = puVar3[5];
      uVar15 = puVar3[3];
      fVar12 = (float)puVar3[2];
      fVar5 = (float)local_70;
      fVar6 = (float)((ulong)local_70 >> 0x20);
      fVar7 = (float)uStack_68;
      fVar8 = (float)((ulong)uStack_68 >> 0x20);
      fVar9 = (float)*puVar3;
      fVar13 = (float)((ulong)puVar3[2] >> 0x20);
      fVar24 = (float)uStack_60;
      fVar25 = (float)((ulong)uStack_60 >> 0x20);
      fVar26 = (float)local_58;
      fVar27 = (float)((ulong)local_58 >> 0x20);
      fVar16 = (float)puVar3[4];
      fVar10 = (float)((ulong)*puVar3 >> 0x20);
      fVar17 = (float)((ulong)puVar3[4] >> 0x20);
      fVar11 = (float)puVar3[1];
      fVar20 = (float)local_50;
      fVar21 = (float)((ulong)local_50 >> 0x20);
      fVar22 = (float)uStack_48;
      fVar23 = (float)((ulong)uStack_48 >> 0x20);
      fVar14 = (float)uVar15;
      fVar18 = (float)uVar19;
      puVar2[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) +
                           fVar8 * fVar9 + fVar27 * fVar10 + fVar23 * fVar11,
                           fVar7 * fVar9 + fVar26 * fVar10 + fVar22 * fVar11 + 0.0);
      *puVar2 = CONCAT44(fVar6 * fVar9 + fVar25 * fVar10 + fVar21 * fVar11 + 0.0,
                         fVar5 * fVar9 + fVar24 * fVar10 + fVar20 * fVar11 + 0.0);
      puVar2[3] = CONCAT44((float)((ulong)uVar15 >> 0x20) +
                           fVar8 * fVar12 + fVar27 * fVar13 + fVar23 * fVar14,
                           fVar7 * fVar12 + fVar26 * fVar13 + fVar22 * fVar14 + 0.0);
      puVar2[2] = CONCAT44(fVar6 * fVar12 + fVar25 * fVar13 + fVar21 * fVar14 + 0.0,
                           fVar5 * fVar12 + fVar24 * fVar13 + fVar20 * fVar14 + 0.0);
      puVar2[5] = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                           fVar8 * fVar16 + fVar27 * fVar17 + fVar23 * fVar18,
                           fVar7 * fVar16 + fVar26 * fVar17 + fVar22 * fVar18 + 0.0);
      puVar2[4] = CONCAT44(fVar6 * fVar16 + fVar25 * fVar17 + fVar21 * fVar18 + 0.0,
                           fVar5 * fVar16 + fVar24 * fVar17 + fVar20 * fVar18 + 0.0);
    }
    *(undefined4 *)(param_2 + 0x18) = uVar4;
  }
  if (0 < *(int *)(param_2 + 0x50)) {
    FUN_0025ddfc(param_1,param_2 + 0x40,param_3,param_4,*(undefined8 *)(param_2 + 0x20));
  }
  for (lVar1 = *(long *)(param_2 + 0x98); lVar1 != param_2 + 0x90; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,(long *)(lVar1 + -8),param_3,param_4);
  }
  return;
}


