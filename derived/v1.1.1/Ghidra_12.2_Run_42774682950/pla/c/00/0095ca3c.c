/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095ca3c; name: FUN_0095ca3c
 */


bool FUN_0095ca3c(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  long *local_28;
  
  FUN_00956dac(&local_28,param_2 + 8);
  auVar15 = *(undefined1 (*) [16])(local_28 + 0x1a);
  uVar8 = ((undefined8 *)*param_1)[1];
  uVar9 = *(undefined8 *)*param_1;
  if (local_28 != (long *)0x0) {
    lVar10 = local_28[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  fVar11 = auVar15._0_4_ - (float)uVar9;
  uVar13 = CONCAT44(auVar15._4_4_ - (float)((ulong)uVar9 >> 0x20),fVar11);
  fVar16 = auVar15._8_4_ - (float)uVar8;
  fVar18 = auVar15._12_4_ - (float)((ulong)uVar8 >> 0x20);
  FUN_00956dac(&local_28,param_3 + 8);
  uVar8 = ((undefined8 *)*param_1)[1];
  uVar9 = *(undefined8 *)*param_1;
  fVar12 = *(float *)(local_28 + 0x1a) - (float)uVar9;
  uVar14 = CONCAT44(*(float *)((long)local_28 + 0xd4) - (float)((ulong)uVar9 >> 0x20),fVar12);
  fVar17 = *(float *)(local_28 + 0x1b) - (float)uVar8;
  fVar19 = *(float *)((long)local_28 + 0xdc) - (float)((ulong)uVar8 >> 0x20);
  uVar9 = extraout_x1;
  if (local_28 != (long *)0x0) {
    lVar10 = local_28[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      uVar9 = extraout_x1_01;
    }
  }
  auVar5._8_4_ = fVar16;
  auVar5._0_8_ = uVar13;
  auVar15._8_4_ = fVar16;
  auVar15._0_8_ = uVar13;
  auVar15._12_4_ = fVar18;
  auVar5._12_4_ = fVar18;
  auVar15 = NEON_ext(auVar15,auVar5,8,1);
  fVar11 = (float)FUN_0095d830(CONCAT44(auVar15._0_4_,fVar11),uVar9,*(undefined8 *)param_1[1],
                               ((undefined8 *)param_1[1])[1]);
  auVar7._8_4_ = fVar17;
  auVar7._0_8_ = uVar14;
  auVar6._8_4_ = fVar17;
  auVar6._0_8_ = uVar14;
  auVar6._12_4_ = fVar19;
  auVar7._12_4_ = fVar19;
  auVar15 = NEON_ext(auVar6,auVar7,8,1);
  fVar12 = (float)FUN_0095d830(CONCAT44(auVar15._0_4_,fVar12),extraout_x1_00,
                               *(undefined8 *)param_1[1],((undefined8 *)param_1[1])[1]);
  return fVar11 <= fVar12;
}


