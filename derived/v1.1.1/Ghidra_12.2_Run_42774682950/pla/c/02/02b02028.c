/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b02028; name: FUN_02b02028
 */


/* WARNING: Removing unreachable block (ram,0x02b024f8) */

void FUN_02b02028(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  lVar6 = DAT_043ef5b0;
  uVar31 = param_4._8_8_;
  uVar29 = param_4._0_8_;
  lVar16 = param_3._8_8_;
  lVar28 = param_3._0_8_;
  uVar24 = param_2._8_8_;
  uVar23 = param_2._4_4_;
  uVar22 = param_2._0_4_;
  uVar9 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
  plVar10 = (long *)(*(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar9 / 0x12) * 8) +
                    (uVar9 % 0x12) * 0xd8);
  if (plVar10[1] == *plVar10) {
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar6 + 0xf0);
  do {
    lVar14 = *plVar10;
    lVar18 = *(long *)(lVar6 + 0xf8);
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar14;
      *(long *)(lVar6 + 0xf8) = lVar18;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    while ((lVar14 != 0 && (lVar8 != lVar14))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe4));
      do {
        lVar14 = *plVar10;
        lVar18 = *(long *)(lVar6 + 0xf8);
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar14;
          *(long *)(lVar6 + 0xf8) = lVar18;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    while( true ) {
      if (*plVar10 != lVar14 || *(long *)(lVar6 + 0xf8) != lVar18) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar14;
        *(long *)(lVar6 + 0xf4) = lVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        uVar9 = (*(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0xa0)) - 1;
        plVar11 = (long *)(*(long *)(*(long *)(lVar6 + 0x68) + (uVar9 / 0x12) * 8) +
                          (uVar9 % 0x12) * 0xd8);
        lVar8 = *plVar11;
        lVar14 = plVar11[1];
        *(undefined4 *)(param_5 + 200) = 0;
        lVar14 = lVar14 - lVar8;
        if (lVar14 == 0) goto LAB_02b024b0;
        lVar18 = 0;
        goto LAB_02b02234;
      }
    }
    ClearExclusiveLocal();
    lVar14 = *plVar10;
    lVar18 = *(long *)(lVar6 + 0xf8);
  } while( true );
LAB_02b023b8:
  lVar28 = plVar11[7];
  lVar26 = plVar11[6];
  fVar19 = (float)lVar26;
  if (fVar19 <= 0.0405) {
    fVar19 = fVar19 / 12.92;
  }
  else {
    fVar19 = powf((fVar19 + 0.055) / 1.055,2.4);
  }
  fVar20 = (float)((ulong)lVar26 >> 0x20);
  if (fVar20 <= 0.0405) {
    fVar20 = fVar20 / 12.92;
  }
  else {
    fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
  }
  fVar33 = (float)lVar28;
  lVar27 = lVar28;
  if (0.0405 < fVar33) {
    uVar22 = 0x4019999a;
    uVar23 = 0;
    uVar25 = 0;
    fVar33 = powf((fVar33 + 0.055) / 1.055,2.4);
  }
  else {
    uVar22 = 0x414eb852;
    uVar23 = 0;
    uVar25 = 0;
    fVar33 = fVar33 / 12.92;
  }
  lVar16 = *(long *)(param_5 + 0xb8);
  FUN_02bc0574(lVar16);
  lVar16 = lVar16 + (ulong)*(uint *)(param_5 + 200) * 0x10;
  *(float *)(lVar16 + 0xa4) = fVar19;
  *(float *)(lVar16 + 0xa8) = fVar20;
  uStack_84 = (undefined4)((ulong)lVar28 >> 0x20);
  *(float *)(lVar16 + 0xac) = fVar33;
  *(undefined4 *)(lVar16 + 0xb0) = uStack_84;
LAB_02b0221c:
  *(int *)(param_5 + 200) = *(int *)(param_5 + 200) + 1;
  while (lVar18 = lVar18 + 1, uVar24 = uVar25, lVar28 = lVar26, lVar16 = lVar27, uVar29 = uVar30,
        uVar31 = uVar32, lVar18 != (lVar14 >> 4) * -0x7b425ed097b425ed) {
LAB_02b02234:
    uVar25 = uVar24;
    lVar26 = lVar28;
    lVar27 = lVar16;
    uVar30 = uVar29;
    uVar32 = uVar31;
    if ((*(char *)(lVar8 + lVar18 * 0x1b0 + 0x1a8) != '\0') &&
       (iVar7 = strcmp(*(char **)(lVar8 + lVar18 * 0x1b0 + 0x28),"Point"), uVar25 = uVar24,
       lVar26 = lVar28, lVar27 = lVar16, uVar30 = uVar29, uVar32 = uVar31, iVar7 == 0)) {
      lVar15 = lVar8 + lVar18 * 0x1b0;
      auVar21 = FUN_02bcb330(lVar15 + 0x40);
      uVar4 = CONCAT44(uVar23,uVar22);
      lVar17 = *(long *)(param_5 + 0xb0);
      uVar25 = uVar24;
      lVar26 = lVar28;
      lVar27 = lVar16;
      uVar30 = uVar29;
      uVar32 = uVar31;
      FUN_02bc0574(lVar17);
      lVar17 = lVar17 + (ulong)*(uint *)(param_5 + 200) * 0x40;
      *(long *)(lVar17 + 0xa4) = auVar21._0_8_;
      auVar21 = NEON_ext(auVar21,auVar21,8,1);
      *(long *)(lVar17 + 0xac) = auVar21._0_8_;
      auVar21._8_8_ = uVar24;
      auVar21._0_8_ = uVar4;
      *(undefined8 *)(lVar17 + 0xb4) = uVar4;
      auVar21 = NEON_ext(auVar21,auVar21,8,1);
      *(long *)(lVar17 + 0xbc) = auVar21._0_8_;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = lVar28;
      *(long *)(lVar17 + 0xc4) = lVar28;
      auVar21 = NEON_ext(auVar5,auVar5,8,1);
      *(long *)(lVar17 + 0xcc) = auVar21._0_8_;
      local_90 = (undefined4)uVar29;
      uStack_8c = (undefined4)((ulong)uVar29 >> 0x20);
      uStack_88 = (undefined4)uVar31;
      *(undefined4 *)(lVar17 + 0xd4) = local_90;
      *(undefined4 *)(lVar17 + 0xd8) = uStack_8c;
      *(undefined4 *)(lVar17 + 0xdc) = uStack_88;
      *(undefined4 *)(lVar17 + 0xe0) = 0x3f800000;
      uVar9 = *(ulong *)(lVar15 + 0xe0);
      if (uVar9 != 0) {
        uVar12 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar9 - 1 & 0xa9467a944c3c2678;
        }
        else {
          uVar13 = 0xa9467a944c3c2678;
          if (uVar9 < 0xa9467a944c3c2679) {
            uVar13 = 0;
            if (uVar9 != 0) {
              uVar13 = 0xa9467a944c3c2678 / uVar9;
            }
            uVar13 = 0xa9467a944c3c2678 - uVar13 * uVar9;
          }
        }
        plVar11 = *(long **)(*(long *)(lVar8 + lVar18 * 0x1b0 + 0xd8) + uVar13 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if (plVar11[1] == 0xa9467a944c3c2678) {
                if (plVar11[2] == -0x56b9856bb3c3d988) goto LAB_02b023b8;
              }
              else if ((plVar11[1] & uVar9 - 1) != uVar13) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar11[1];
              if (uVar12 == 0xa9467a944c3c2678) {
                if (plVar11[2] == -0x56b9856bb3c3d988) goto LAB_02b023b8;
              }
              else {
                if (uVar9 <= uVar12) {
                  uVar3 = 0;
                  if (uVar9 != 0) {
                    uVar3 = uVar12 / uVar9;
                  }
                  uVar12 = uVar12 - uVar3 * uVar9;
                }
                if (uVar12 != uVar13) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      goto LAB_02b0221c;
    }
  }
LAB_02b024b0:
  do {
    lVar28 = *plVar10;
    lVar16 = *(long *)(lVar6 + 0xf8);
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar28;
      *(long *)(lVar6 + 0xf8) = lVar16;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while( true ) {
    lVar8 = *plVar10;
    lVar14 = *(long *)(lVar6 + 0xf8);
    if (lVar8 != lVar28 || lVar14 != lVar16) break;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar28;
      *(long *)(lVar6 + 0xf4) = lVar16 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_02b02538;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar28 = *plVar10;
      if (lVar28 != lVar8 || *(long *)(lVar6 + 0xf8) != lVar14) {
        bVar2 = false;
        ClearExclusiveLocal();
        goto LAB_02b02504;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar8;
        *(long *)(lVar6 + 0xf4) = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar2 = true;
LAB_02b02504:
    lVar8 = lVar28;
    lVar14 = *(long *)(lVar6 + 0xf8);
  } while (!bVar2);
LAB_02b02538:
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe4));
  return;
}


