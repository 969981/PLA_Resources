/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bcf58; name: FUN_014bcf58
 */


void FUN_014bcf58(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  float *pfVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long *local_50;
  undefined8 local_48;
  
  local_48 = 0;
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  local_58 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0x1fffffffffffffff;
  uStack_60 = 0;
  local_50 = (long *)0x0;
  local_78 = 0;
  uVar11 = FUN_02ad80c4();
  FUN_02b764f4(&local_88,1,0x22);
  FUN_02b764f4(&local_88,0x14,0x2e);
  FUN_02b7684c(&local_88,uVar11,8,1);
  pfVar12 = (float *)FUN_02bc04e0(local_50,0);
  puVar10 = PTR_FloatPi_04372cf0;
  puVar8 = PTR_AngleIndexHalfRound_04372cd8;
  uVar19 = *(undefined4 *)(param_1 + 0x30);
  iVar17 = *(int *)(param_1 + 0x28);
  iVar21 = *(int *)(param_1 + 0x2c);
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x34));
  fVar18 = 1.5707964;
  lVar13 = 0;
  pfVar12[2] = 0.0;
  puVar9 = PTR_SinCosSampleTable_04372ce8;
  fVar20 = (float)NEON_ucvtf(uVar19);
  uVar19 = *(undefined4 *)puVar8;
  *pfVar12 = (float)iVar17 / 960.0;
  pfVar12[1] = (float)iVar21 / 540.0;
  fVar23 = (float)NEON_ucvtf(uVar19);
  fVar22 = *(float *)puVar10;
  fVar24 = *(float *)(param_4 + 1);
  fVar25 = *(float *)((long)param_4 + 0xc);
  *(undefined8 *)(pfVar12 + 3) = *param_4;
  pfVar14 = pfVar12 + 0xd;
  pfVar12[5] = fVar24;
  pfVar12[6] = fVar25;
  do {
    puVar1 = (uint *)(param_2 + lVar13);
    uVar5 = *(uint *)(param_1 + 0x4c);
    lVar13 = lVar13 + 4;
    uVar15 = (ulong)((fVar23 / fVar22) * fVar18);
    uVar4 = uVar5;
    if (*puVar1 <= uVar5) {
      uVar4 = *puVar1;
    }
    pfVar2 = (float *)(puVar9 + (uVar15 >> 0x18 & 0xff) * 0x10);
    fVar24 = (float)((uint)uVar15 & 0xffffff) * 5.9604645e-08;
    fVar25 = *pfVar2 + pfVar2[2] * fVar24;
    fVar24 = pfVar2[1] + pfVar2[3] * fVar24;
    iVar17 = *(int *)(param_1 + 0x28);
    iVar21 = *(int *)(param_1 + 0x2c);
    pfVar14[-4] = 0.0;
    pfVar14[-6] = (fVar25 * 0.0 +
                  fVar25 * fVar16 + (float)iVar17 +
                  ((float)uVar4 / (float)uVar5) * (fVar20 - fVar16) * fVar25) / 960.0;
    pfVar14[-5] = (fVar24 * 0.0 +
                  fVar24 * fVar16 + (float)iVar21 +
                  ((float)uVar4 / (float)uVar5) * (fVar20 - fVar16) * fVar24) / 540.0;
    fVar24 = *(float *)(param_4 + 1);
    fVar25 = *(float *)((long)param_4 + 0xc);
    fVar18 = fVar18 + -1.0471976;
    *(undefined8 *)(pfVar14 + -3) = *param_4;
    pfVar14[-1] = fVar24;
    *pfVar14 = fVar25;
    pfVar14 = pfVar14 + 7;
  } while (lVar13 != 0x18);
  *(undefined8 *)(pfVar12 + 0x31) = *(undefined8 *)(pfVar12 + 7);
  *(undefined8 *)(pfVar12 + 0x33) = *(undefined8 *)(pfVar12 + 9);
  *(undefined8 *)(pfVar12 + 0x35) = *(undefined8 *)(pfVar12 + 0xb);
  pfVar12[0x37] = pfVar12[0xd];
  FUN_02b58c84(*param_3,&local_88,1,1);
  if (local_50 != (long *)0x0) {
    plVar3 = local_50 + 10;
    do {
      iVar17 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar17;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_014bd284(&local_88);
  return;
}


