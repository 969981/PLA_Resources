/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117be60; name: FUN_0117be60
 */


undefined8 FUN_0117be60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)plVar11[0x34];
  lVar8 = plVar11[0x35];
  if ((lVar8 == 0) || (*plVar12 == 0x7f40b7b6991ac684)) {
    plVar10 = plVar12;
  }
  else {
    lVar9 = lVar8 * 0x30;
    plVar5 = plVar12;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) goto LAB_0117bfb0;
      plVar1 = plVar5 + 6;
      plVar10 = plVar5 + 6;
      plVar5 = plVar5 + 6;
    } while (*plVar1 != 0x7f40b7b6991ac684);
  }
  if (plVar10 != plVar12 + lVar8 * 6) {
    uVar7 = (ulong)*(uint *)(plVar10 + 5);
    if (((*(uint *)(plVar10 + 5) < *(uint *)(plVar10[4] + 0x278)) &&
        (lVar8 = *(long *)(plVar10[4] + 600), *(char *)(lVar8 + uVar7 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar8 + uVar7 * 0x48 + 0xb) != '\0')) {
      plVar12 = (long *)(lVar8 + uVar7 * 0x48 + 0x10);
      lVar9 = *plVar12;
      if ((lVar9 == 0) || (*(char *)(lVar8 + uVar7 * 0x48 + 9) != '\0')) {
        uVar13 = 0;
        goto LAB_0117bf5c;
      }
      fVar14 = *(float *)(lVar9 + 0x20);
      uVar6 = FUN_00227728();
      uVar7 = FUN_00227744(*plVar12);
      uVar13 = 0;
      if ((fVar14 < (float)uVar6) || ((uVar7 & 1) != 0)) goto LAB_0117bf5c;
    }
  }
LAB_0117bfb0:
  uVar13 = 1;
LAB_0117bf5c:
  plVar12 = plVar11 + 10;
  do {
    iVar4 = (int)*plVar12 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *(int *)plVar12 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return uVar13;
}


