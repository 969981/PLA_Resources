/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a6754; name: FUN_009a6754
 */


undefined1  [16] FUN_009a6754(long param_1,byte param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  
  uVar7 = *(ulong *)(param_1 + 0x70);
  uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar10 = (ulong)param_2;
  if (uVar9 < 2) {
    plVar11 = *(long **)(*(long *)(param_1 + 0x68) + ((int)uVar7 - 1 & uVar10) * 8);
    do {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11[1] != uVar10);
    } while (*(byte *)(plVar11 + 2) != param_2);
  }
  else {
    if (uVar10 < uVar7) {
      uVar12 = uVar10;
    }
    else {
      uVar12 = 0;
      if (uVar7 != 0) {
        uVar12 = uVar10 / uVar7;
      }
      uVar12 = uVar10 - uVar12 * uVar7;
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x68) + uVar12 * 8);
    do {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11[1] != uVar10);
    } while (*(byte *)(plVar11 + 2) != param_2);
  }
  plVar11 = *(long **)((long)plVar11 + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_009a69fc;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = *(ulong *)(param_1 + 0x70);
    uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  uVar10 = (ulong)param_3;
  if (uVar9 < 2) {
    plVar8 = *(long **)(*(long *)(param_1 + 0x68) + ((int)uVar7 - 1 & uVar10) * 8);
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8[1] != uVar10);
    } while (*(byte *)(plVar8 + 2) != param_3);
  }
  else {
    if (uVar10 < uVar7) {
      uVar9 = uVar10;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar10 / uVar7;
      }
      uVar9 = uVar10 - uVar9 * uVar7;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x68) + uVar9 * 8);
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8[1] != uVar10);
    } while (*(byte *)(plVar8 + 2) != param_3);
  }
  plVar8 = *(long **)((long)plVar8 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_009a69fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  fVar14 = (float)plVar8[0x1a] - *(float *)(plVar11 + 0x1a);
  fVar16 = (float)((ulong)plVar8[0x1a] >> 0x20) - *(float *)((long)plVar11 + 0xd4);
  fVar17 = (float)plVar8[0x1b] - *(float *)(plVar11 + 0x1b);
  fVar18 = (float)((ulong)plVar8[0x1b] >> 0x20) - *(float *)((long)plVar11 + 0xdc);
  fVar14 = fVar14 * fVar14;
  fVar16 = fVar16 * fVar16;
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar18 * fVar18;
  auVar19._4_4_ = fVar16;
  auVar19._0_4_ = fVar14;
  auVar19._8_4_ = fVar17;
  auVar19._12_4_ = fVar18;
  auVar5._4_4_ = fVar16;
  auVar5._0_4_ = fVar14;
  auVar5._8_4_ = fVar17;
  auVar5._12_4_ = fVar18;
  auVar19 = NEON_ext(auVar19,auVar5,8,1);
  fVar14 = auVar19._0_4_ + fVar14;
  fVar16 = auVar19._4_4_ + fVar16;
  fVar17 = fVar14 + fVar16;
  fVar14 = fVar14 + fVar16;
  auVar15._0_4_ = SQRT(fVar17);
  auVar15._4_4_ = SQRT(fVar14);
  auVar15._8_4_ = SQRT(fVar17);
  auVar15._12_4_ = SQRT(fVar14);
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  lVar13 = plVar11[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  return auVar15;
}


