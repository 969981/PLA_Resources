/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5beac; name: FUN_00d5beac
 */


void FUN_00d5beac(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)plVar9[0x29];
  lVar7 = plVar9[0x2a];
  lVar12 = *param_2;
  plVar11 = (long *)param_2[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar6 = plVar10;
  if ((lVar7 != 0) && (*plVar10 != lVar12)) {
    lVar8 = lVar7 * 0x30;
    plVar5 = plVar10 + lVar7 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      plVar6 = plVar5;
      if (lVar8 == 0) break;
      plVar1 = plVar10 + 6;
      plVar10 = plVar10 + 6;
      plVar6 = plVar10;
    } while (*plVar1 != lVar12);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  fVar13 = *(float *)(plVar6[4] + 0x30);
  fVar14 = *(float *)(plVar6[4] + 0x34);
  fVar15 = *(float *)(param_3 + 8);
  fVar16 = *(float *)(param_3 + 0xc);
  lVar12 = *param_2;
  plVar10 = (long *)plVar9[0x29];
  lVar7 = plVar9[0x2a];
  plVar11 = (long *)param_2[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if ((lVar7 != 0) && (*plVar10 != lVar12)) {
    lVar8 = lVar7 * 0x30;
    plVar6 = plVar10 + lVar7 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) {
        plVar10 = plVar6;
        break;
      }
      plVar5 = plVar10 + 6;
      plVar10 = plVar10 + 6;
    } while (*plVar5 != lVar12);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  lVar7 = plVar10[4];
  *(float *)(lVar7 + 0x30) = fVar13 + fVar15;
  *(float *)(lVar7 + 0x34) = fVar14 + fVar16;
  *(undefined4 *)(lVar7 + 0x38) = 0;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  plVar10 = plVar9 + 10;
  do {
    iVar4 = (int)*plVar10 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d5c094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    return;
  }
  return;
}


