/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117b878; name: FUN_0117b878
 */


undefined8 FUN_0117b878(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ushort uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  float fVar16;
  
  plVar13 = *(long **)(param_1 + 0x2c8);
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)plVar13[0x34];
  lVar9 = plVar13[0x35];
  plVar14 = plVar10;
  if ((lVar9 != 0) && (*plVar10 != -0x4648c6c9f68960ae)) {
    lVar12 = 0;
    do {
      if (lVar9 * 0x30 + -0x30 == lVar12) goto LAB_0117b9cc;
      lVar2 = lVar12 + 0x30;
      lVar6 = lVar12 + 0x30;
      lVar12 = lVar2;
    } while (*(long *)((long)plVar10 + lVar6) != -0x4648c6c9f68960ae);
    plVar14 = (long *)((long)plVar10 + lVar2);
  }
  if (plVar14 == plVar10 + lVar9 * 6) {
LAB_0117b9cc:
    plVar14 = plVar10;
    if ((lVar9 != 0) && (*plVar10 != -0x4648b4c9f6894218)) {
      lVar12 = lVar9 * 0x30;
      plVar7 = plVar10;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) goto LAB_0117bae8;
        plVar14 = plVar7 + 6;
        plVar1 = plVar7 + 6;
        plVar7 = plVar14;
      } while (*plVar1 != -0x4648b4c9f6894218);
    }
    if (plVar14 != plVar10 + lVar9 * 6) {
      uVar11 = (ulong)*(uint *)(plVar14 + 5);
      if (((*(uint *)(plVar14 + 5) < *(uint *)(plVar14[4] + 0x278)) &&
          (lVar9 = *(long *)(plVar14[4] + 600), *(char *)(lVar9 + uVar11 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar9 + uVar11 * 0x48 + 0xb) != '\0')) {
        plVar14 = (long *)(lVar9 + uVar11 * 0x48 + 0x10);
        lVar12 = *plVar14;
        if ((lVar12 == 0) || (*(char *)(lVar9 + uVar11 * 0x48 + 9) != '\0')) goto LAB_0117b970;
        fVar16 = *(float *)(lVar12 + 0x20);
        uVar8 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar14);
        uVar15 = 0;
        if ((fVar16 < (float)uVar8) || ((uVar11 & 1) != 0)) goto LAB_0117b974;
      }
    }
LAB_0117bae8:
    uVar15 = 1;
  }
  else {
    uVar11 = (ulong)*(uint *)(plVar14 + 5);
    if (((*(uint *)(plVar14[4] + 0x278) <= *(uint *)(plVar14 + 5)) ||
        (lVar12 = *(long *)(plVar14[4] + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_0117b9cc;
    plVar14 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
    lVar9 = *plVar14;
    if ((lVar9 != 0) && (*(char *)(lVar12 + uVar11 * 0x48 + 9) == '\0')) {
      fVar16 = *(float *)(lVar9 + 0x20);
      uVar8 = FUN_00227728();
      uVar11 = FUN_00227744(*plVar14);
      uVar15 = 0;
      if ((fVar16 < (float)uVar8) || ((uVar11 & 1) != 0)) goto LAB_0117b974;
      plVar10 = (long *)plVar13[0x34];
      lVar9 = plVar13[0x35];
      goto LAB_0117b9cc;
    }
LAB_0117b970:
    uVar15 = 0;
  }
LAB_0117b974:
  plVar14 = plVar13 + 10;
  do {
    iVar5 = (int)*plVar14 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *(int *)plVar14 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return uVar15;
}


