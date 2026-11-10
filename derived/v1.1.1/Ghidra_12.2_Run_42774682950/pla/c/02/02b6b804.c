/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6b804; name: FUN_02b6b804
 */


/* WARNING: Removing unreachable block (ram,0x02b6b9fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b6b804(long param_1,short param_2,undefined1 (*param_3) [12])

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  
  lVar14 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x470);
  do {
    lVar17 = *plVar2;
    lVar18 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar17;
      *(long *)(param_1 + 0x478) = lVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
joined_r0x02b6b840:
  while ((lVar17 != 0 && (lVar14 != lVar17))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar17 = *plVar2;
      lVar18 = *(long *)(param_1 + 0x478);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar17;
        *(long *)(param_1 + 0x478) = lVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar2 != lVar17 || *(long *)(param_1 + 0x478) != lVar18) goto LAB_02b6b848;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar17;
      *(long *)(param_1 + 0x474) = lVar18 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = *(ushort *)(*(long *)(param_1 + 200) + (long)param_2 * 2);
  uVar15 = (ulong)(short)uVar3;
  lVar14 = *(long *)(param_1 + 0x138);
  if (((1 << (ulong)(uVar3 & 0x1f) & *(uint *)(lVar14 + (uVar15 >> 3 & 0x1ffffffffffffffc))) == 0)
     && (*(long *)(param_1 + 0x140) != lVar14)) {
    lVar17 = *(long *)(param_1 + 0x90);
    uVar16 = 0;
    do {
      lVar18 = uVar16 * 4;
      uVar16 = uVar16 + 1;
      *(uint *)(lVar14 + lVar18) =
           *(uint *)(lVar14 + lVar18) | *(uint *)(*(long *)(lVar17 + uVar15 * 0x40) + lVar18);
      lVar14 = *(long *)(param_1 + 0x138);
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0x140) - lVar14 >> 2));
  }
  lVar14 = *(long *)(param_1 + 0x270) + uVar15 * 0x30;
  pauVar1 = (undefined1 (*) [16])(lVar14 + 0x10);
  fVar19 = (float)*(undefined8 *)*pauVar1;
  fVar20 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar26 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar12 = *(undefined8 *)*param_3;
  fVar25 = (float)((ulong)uVar12 >> 0x20);
  auVar6._12_4_ = fVar26;
  auVar6._0_12_ = *param_3;
  uVar31 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a6c8);
  uVar23 = a64_TBL(ZEXT816(0),*pauVar1,DAT_0388a580);
  uVar28 = a64_TBL(ZEXT816(0),*pauVar1,DAT_0388a680);
  auVar7._12_4_ = fVar26;
  auVar7._0_12_ = *param_3;
  uVar21 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
  fVar29 = (float)((ulong)uVar28 >> 0x20);
  auVar8._12_4_ = fVar26;
  auVar8._0_12_ = *param_3;
  uVar27 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a680);
  fVar24 = (float)((ulong)uVar23 >> 0x20);
  fVar30 = (float)_DAT_03889ad0;
  fVar32 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar33 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  uVar34 = a64_TBL(ZEXT816(0),*pauVar1,DAT_0388a880);
  auVar9._12_4_ = fVar26;
  auVar9._0_12_ = *param_3;
  uVar22 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
  auVar10._12_4_ = fVar26;
  auVar10._0_12_ = *param_3;
  uVar36 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
  fVar35 = (float)((ulong)uVar34 >> 0x20);
  auVar11._8_4_ = (float)uVar12;
  auVar11._0_8_ = uVar12;
  auVar11._12_4_ = fVar25;
  uVar13 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a648);
  *(ulong *)(lVar14 + 0x18) =
       CONCAT44((fVar26 * fVar24 + fVar33 * fVar29 * (float)((ulong)uVar31 >> 0x20) +
                fVar33 * fVar20 * (float)((ulong)uVar13 >> 0x20)) -
                fVar35 * (float)((ulong)uVar36 >> 0x20),
                ((float)*(undefined8 *)(*param_3 + 8) * (float)uVar23 +
                 (float)_UNK_03889ad8 * (float)uVar28 * (float)uVar31 +
                (float)_UNK_03889ad8 * fVar19 * (float)uVar13) - (float)uVar34 * (float)uVar36);
  *(ulong *)(lVar14 + 0x10) =
       CONCAT44((fVar25 * fVar24 + fVar32 * fVar20 * (float)((ulong)uVar21 >> 0x20) +
                fVar32 * fVar35 * (float)((ulong)uVar27 >> 0x20)) -
                fVar29 * (float)((ulong)uVar22 >> 0x20),
                ((float)uVar12 * (float)uVar23 + fVar30 * fVar19 * (float)uVar21 +
                fVar30 * (float)uVar34 * (float)uVar27) - (float)uVar28 * (float)uVar22);
  do {
    lVar14 = *plVar2;
    lVar17 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar14;
      *(long *)(param_1 + 0x478) = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar2 != lVar14 || *(long *)(param_1 + 0x478) != lVar17) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar14;
      *(long *)(param_1 + 0x474) = lVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b6ba0c;
  }
  ClearExclusiveLocal();
  lVar14 = *plVar2;
  lVar17 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar18 = *plVar2;
      if (lVar18 != lVar14 || *(long *)(param_1 + 0x478) != lVar17) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b6ba50;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar14;
        *(long *)(param_1 + 0x474) = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b6ba50:
    lVar14 = lVar18;
    lVar17 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b6ba0c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6b848:
  ClearExclusiveLocal();
  lVar17 = *plVar2;
  lVar18 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6b840;
}


