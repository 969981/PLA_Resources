/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019dfe24; name: FUN_019dfe24
 */


void FUN_019dfe24(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 in_q3 [16];
  long lVar18;
  float fVar19;
  float local_68 [6];
  long *local_48;
  
  lVar18 = in_q3._8_8_;
  uVar17 = in_q3._0_8_;
  local_68[0] = *(float *)(param_1 + 0x358);
  fVar19 = 0.0;
  iVar12 = *(int *)(param_1 + 0x36c);
  iVar2 = *(int *)(param_1 + 0x370);
  iVar3 = *(int *)(param_1 + 0x374);
  iVar4 = *(int *)(param_1 + 0x378);
  iVar5 = *(int *)(param_1 + 0x37c);
  local_68[1] = *(float *)(param_1 + 0x35c);
  local_68[2] = *(float *)(param_1 + 0x360);
  local_68[3] = *(float *)(param_1 + 0x364);
  local_68[4] = *(float *)(param_1 + 0x368);
  iVar9 = iVar2 + iVar12 + iVar3 + iVar4 + iVar5;
  if (iVar9 < 1) goto LAB_019dff14;
  iVar9 = FUN_019e1cf0(iVar9 + -1);
  if (iVar12 < 1) {
    iVar12 = 0;
joined_r0x019e0044:
    if ((iVar2 < 1) || (iVar12 = iVar12 + iVar2, iVar12 <= iVar9)) {
      if ((iVar3 < 1) || (iVar12 = iVar12 + iVar3, iVar12 <= iVar9)) {
        if ((iVar4 < 1) || (iVar12 = iVar12 + iVar4, iVar12 <= iVar9)) {
          if ((iVar5 < 1) || (iVar12 + iVar5 <= iVar9)) goto LAB_019dff14;
          lVar10 = 4;
        }
        else {
          lVar10 = 3;
        }
      }
      else {
        lVar10 = 2;
      }
    }
    else {
      lVar10 = 1;
    }
  }
  else {
    if (iVar12 <= iVar9) goto joined_r0x019e0044;
    lVar10 = 0;
  }
  fVar19 = local_68[lVar10];
LAB_019dff14:
  FUN_009c69bc(&local_48,param_1);
  (**(code **)(*local_48 + 0x40))();
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  lVar10 = CONCAT44(fVar19 + (float)((ulong)uVar17 >> 0x20),(int)uVar17);
  FUN_009c69bc(&local_48,param_1);
  *(undefined1 *)(local_48 + 0x1c) = 1;
  local_48[0x1b] = lVar18;
  local_48[0x1a] = lVar10;
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x3a8) = lVar18;
  *(long *)(param_1 + 0x3a0) = lVar10;
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x3a8);
  if (*(char *)(param_1 + 0x350) != '\0') {
    lVar10 = CONCAT44(*(undefined4 *)(param_1 + 0x354),(int)uVar17);
    *(long *)(param_1 + 0x3a8) = lVar18;
    *(long *)(param_1 + 0x3a0) = lVar10;
  }
  fVar19 = (float)*(undefined8 *)(param_1 + 0x390) - (float)lVar10;
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x390) >> 0x20) - (float)((ulong)lVar10 >> 0x20)
  ;
  fVar14 = (float)*(undefined8 *)(param_1 + 0x398) - (float)lVar18;
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20) - (float)((ulong)lVar18 >> 0x20)
  ;
  fVar19 = fVar19 * fVar19;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  auVar16._4_4_ = fVar13;
  auVar16._0_4_ = fVar19;
  auVar16._8_4_ = fVar14;
  auVar16._12_4_ = fVar15;
  auVar8._4_4_ = fVar13;
  auVar8._0_4_ = fVar19;
  auVar8._8_4_ = fVar14;
  auVar8._12_4_ = fVar15;
  auVar16 = NEON_ext(auVar16,auVar8,8,1);
  *(float *)(param_1 + 0x3b4) = SQRT(auVar16._0_4_ + fVar19 + auVar16._4_4_ + fVar13);
  *(float *)(param_1 + 0x3b8) = *(float *)(param_1 + 0x380) / 30.0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  return;
}


