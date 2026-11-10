/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117cbb8; name: FUN_0117cbb8
 */


undefined8 FUN_0117cbb8(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  float fVar17;
  
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar14[0x34];
  lVar8 = plVar14[0x35];
  plVar15 = plVar9;
  if ((lVar8 != 0) && (*plVar9 != 0x284ff7c6ca28b042)) {
    lVar12 = 0;
    do {
      if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117cd10;
      lVar1 = lVar12 + 0x30;
      lVar6 = lVar12 + 0x30;
      lVar12 = lVar1;
    } while (*(long *)((long)plVar9 + lVar6) != 0x284ff7c6ca28b042);
    plVar15 = (long *)((long)plVar9 + lVar1);
  }
  plVar10 = plVar9 + lVar8 * 6;
  if (plVar15 == plVar10) {
    plVar13 = (long *)0x0;
    if (plVar15 != plVar10) goto LAB_0117cc5c;
LAB_0117cd10:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x51a5c6e8c03cd3a9)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117ce08;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x51a5c6e8c03cd3a9);
      plVar15 = (long *)((long)plVar9 + lVar1);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      lVar12 = plVar15[4];
      uVar2 = *(uint *)(plVar15 + 4 + 1);
      uVar11 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar12 + 0x278)) &&
          (lVar12 = *(long *)(lVar12 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
        lVar8 = *plVar15;
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117ccb4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117ce08:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != -0x73f1842f2c54a38c)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117cf00;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != -0x73f1842f2c54a38c);
      plVar15 = (long *)((long)plVar9 + lVar1);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      lVar12 = plVar15[4];
      uVar2 = *(uint *)(plVar15 + 4 + 1);
      uVar11 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar12 + 0x278)) &&
          (lVar12 = *(long *)(lVar12 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
        lVar8 = *plVar15;
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117ccb4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117cf00:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x1e68a87744f391e3)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117cff8;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x1e68a87744f391e3);
      plVar15 = (long *)((long)plVar9 + lVar1);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      lVar12 = plVar15[4];
      uVar2 = *(uint *)(plVar15 + 4 + 1);
      uVar11 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar12 + 0x278)) &&
          (lVar12 = *(long *)(lVar12 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
        lVar8 = *plVar15;
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117ccb4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117cff8:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x28c12e1dc926f036)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117d0f0;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x28c12e1dc926f036);
      plVar15 = (long *)((long)plVar9 + lVar1);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      lVar12 = plVar15[4];
      uVar2 = *(uint *)(plVar15 + 4 + 1);
      uVar11 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar12 + 0x278)) &&
          (lVar12 = *(long *)(lVar12 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
        lVar8 = *plVar15;
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117ccb4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117d0f0:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x470739f1ed72f7fd)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117d1e8;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x470739f1ed72f7fd);
      plVar15 = (long *)((long)plVar9 + lVar1);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      lVar12 = plVar15[4];
      uVar2 = *(uint *)(plVar15 + 4 + 1);
      uVar11 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar12 + 0x278)) &&
          (lVar12 = *(long *)(lVar12 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
        lVar8 = *plVar15;
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117ccb4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117d1e8:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0xa19a7c238128ff8)) {
      lVar12 = lVar8 * 0x30;
      plVar10 = plVar9;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) goto LAB_0117d364;
        plVar15 = plVar10 + 6;
        plVar13 = plVar10 + 6;
        plVar10 = plVar15;
      } while (*plVar13 != 0xa19a7c238128ff8);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      uVar11 = (ulong)*(uint *)(plVar15 + 5);
      if (((*(uint *)(plVar15 + 5) < *(uint *)(plVar15[4] + 0x278)) &&
          (lVar8 = *(long *)(plVar15[4] + 600), *(char *)(lVar8 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar8 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar8 + uVar11 * 0x48 + 0x10);
        lVar12 = *plVar15;
        if ((lVar12 == 0) || (*(char *)(lVar8 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117ccb4;
        fVar17 = *(float *)(lVar12 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
      }
    }
LAB_0117d364:
    uVar16 = 1;
  }
  else {
    plVar13 = plVar15 + 4;
    if (plVar15 == plVar10) goto LAB_0117cd10;
LAB_0117cc5c:
    uVar11 = (ulong)*(uint *)(plVar13 + 1);
    if (((*(uint *)(*plVar13 + 0x278) <= *(uint *)(plVar13 + 1)) ||
        (lVar12 = *(long *)(*plVar13 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_0117cd10;
    plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
    lVar8 = *plVar15;
    if ((lVar8 != 0) && (*(char *)(lVar12 + uVar11 * 0x48 + 9) == '\0')) {
      fVar17 = *(float *)(lVar8 + 0x20);
      uVar7 = FUN_00227728();
      uVar11 = FUN_00227744(*plVar15);
      uVar16 = 0;
      if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117ccb8;
      plVar9 = (long *)plVar14[0x34];
      lVar8 = plVar14[0x35];
      goto LAB_0117cd10;
    }
LAB_0117ccb4:
    uVar16 = 0;
  }
LAB_0117ccb8:
  plVar15 = plVar14 + 10;
  do {
    iVar5 = (int)*plVar15 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *(int *)plVar15 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  return uVar16;
}


