/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117c1e8; name: FUN_0117c1e8
 */


undefined8 FUN_0117c1e8(long param_1)

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
  if ((lVar8 != 0) && (*plVar9 != -0x6faf2d262aa540be)) {
    lVar12 = 0;
    do {
      if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117c340;
      lVar1 = lVar12 + 0x30;
      lVar6 = lVar12 + 0x30;
      lVar12 = lVar1;
    } while (*(long *)((long)plVar9 + lVar6) != -0x6faf2d262aa540be);
    plVar15 = (long *)((long)plVar9 + lVar1);
  }
  plVar10 = plVar9 + lVar8 * 6;
  if (plVar15 == plVar10) {
    plVar13 = (long *)0x0;
    if (plVar15 != plVar10) goto LAB_0117c28c;
LAB_0117c340:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x2fe41ec96744aeeb)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117c438;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x2fe41ec96744aeeb);
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
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117c2e4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117c438:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x3329c301fa46b7d4)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117c530;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x3329c301fa46b7d4);
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
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117c2e4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117c530:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x467166f13c3d82e5)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117c628;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != 0x467166f13c3d82e5);
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
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117c2e4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117c628:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != -0x3fd4f623f777516a)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117c720;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != -0x3fd4f623f777516a);
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
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117c2e4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117c720:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != -0x7547992863c1b3d1)) {
      lVar12 = 0;
      do {
        if (lVar8 * 0x30 + -0x30 == lVar12) goto LAB_0117c818;
        lVar1 = lVar12 + 0x30;
        lVar6 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(long *)((long)plVar9 + lVar6) != -0x7547992863c1b3d1);
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
        if ((lVar8 == 0) || (*(char *)(lVar12 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117c2e4;
        fVar17 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
        plVar9 = (long *)plVar14[0x34];
        lVar8 = plVar14[0x35];
      }
    }
LAB_0117c818:
    plVar15 = plVar9;
    if ((lVar8 != 0) && (*plVar9 != 0x6303fa042d74a728)) {
      lVar12 = lVar8 * 0x30;
      plVar10 = plVar9;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) goto LAB_0117c994;
        plVar15 = plVar10 + 6;
        plVar13 = plVar10 + 6;
        plVar10 = plVar15;
      } while (*plVar13 != 0x6303fa042d74a728);
    }
    if (plVar15 != plVar9 + lVar8 * 6) {
      uVar11 = (ulong)*(uint *)(plVar15 + 5);
      if (((*(uint *)(plVar15 + 5) < *(uint *)(plVar15[4] + 0x278)) &&
          (lVar8 = *(long *)(plVar15[4] + 600), *(char *)(lVar8 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar8 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar8 + uVar11 * 0x48 + 0x10);
        lVar12 = *plVar15;
        if ((lVar12 == 0) || (*(char *)(lVar8 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117c2e4;
        fVar17 = *(float *)(lVar12 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar15);
        uVar16 = 0;
        if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
      }
    }
LAB_0117c994:
    uVar16 = 1;
  }
  else {
    plVar13 = plVar15 + 4;
    if (plVar15 == plVar10) goto LAB_0117c340;
LAB_0117c28c:
    uVar11 = (ulong)*(uint *)(plVar13 + 1);
    if (((*(uint *)(*plVar13 + 0x278) <= *(uint *)(plVar13 + 1)) ||
        (lVar12 = *(long *)(*plVar13 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_0117c340;
    plVar15 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
    lVar8 = *plVar15;
    if ((lVar8 != 0) && (*(char *)(lVar12 + uVar11 * 0x48 + 9) == '\0')) {
      fVar17 = *(float *)(lVar8 + 0x20);
      uVar7 = FUN_00227728();
      uVar11 = FUN_00227744(*plVar15);
      uVar16 = 0;
      if ((fVar17 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_0117c2e8;
      plVar9 = (long *)plVar14[0x34];
      lVar8 = plVar14[0x35];
      goto LAB_0117c340;
    }
LAB_0117c2e4:
    uVar16 = 0;
  }
LAB_0117c2e8:
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


