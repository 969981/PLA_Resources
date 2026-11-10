/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5d00c; name: FUN_00d5d00c
 */


void FUN_00d5d00c(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_70 [24];
  long *local_58;
  
  plVar14 = *(long **)(param_3 + 0x2c8);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar3 = 0;
  if (*(int *)(param_3 + 0x6d8) != 2) {
    iVar3 = *(int *)(param_3 + 0x6d8);
  }
  lVar7 = FUN_00d2ee28(param_3 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar11 = **(long **)(lVar7 + 0x838);
  lVar8 = (*(long **)(lVar7 + 0x838))[1];
  if ((lVar11 != lVar8) && (*(char *)(lVar11 + 0x20) != '\0' || *(int *)(lVar11 + 0x24) != param_4))
  {
    lVar6 = lVar11 + 0x30;
    do {
      lVar10 = lVar6;
      lVar11 = lVar8;
      if (lVar8 == lVar10) break;
      lVar6 = lVar10 + 0x30;
    } while ((*(char *)(lVar10 + 0x20) != '\0') ||
            (lVar11 = lVar10, *(int *)(lVar10 + 0x24) != param_4));
  }
  if ((lVar11 != 0) && ((lVar8 != lVar11 && (*(int *)(lVar11 + 0x28) != -1)))) {
    FUN_00d533f0(auStack_70,lVar7,*(undefined4 *)(param_3 + 0x6d8));
    fVar15 = (float)FUN_0283ad10(plVar14,auStack_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    iVar3 = *(int *)(param_3 + 0x6d8);
    if (iVar3 == 2) {
      iVar3 = 0;
    }
    lVar8 = FUN_00d2ee28(param_3 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
    plVar9 = (long *)plVar14[0x29];
    lVar11 = plVar14[0x2a];
    plVar12 = plVar9;
    if ((lVar11 != 0) && (*plVar9 != -0x6c5f415c455a29ee)) {
      lVar7 = lVar11 * 0x30;
      plVar13 = plVar9;
      do {
        lVar7 = lVar7 + -0x30;
        if (lVar7 == 0) {
          plVar12 = plVar9 + lVar11 * 6;
          break;
        }
        plVar1 = plVar13 + 6;
        plVar12 = plVar13 + 6;
        plVar13 = plVar13 + 6;
      } while (*plVar1 != -0x6c5f415c455a29ee);
    }
    fVar17 = *(float *)(lVar8 + 0x768);
    fVar16 = *(float *)(plVar12[4] + 0x54);
    if ((lVar11 != 0) && (*plVar9 != 0x47abac53953913dc)) {
      plVar13 = plVar9 + lVar11 * 6;
      lVar11 = lVar11 * 0x30;
      do {
        lVar11 = lVar11 + -0x30;
        if (lVar11 == 0) {
          plVar9 = plVar13;
          break;
        }
        plVar2 = plVar9 + 6;
        plVar1 = plVar9 + 6;
        plVar9 = plVar2;
      } while (*plVar1 != 0x47abac53953913dc);
    }
    lVar11 = plVar9[4];
    *(float *)(lVar11 + 0x30) = fVar15 + (*(float *)(plVar12[4] + 0x50) - fVar17) * 0.5;
    *(float *)(lVar11 + 0x34) = param_2 - (fVar16 - fVar17) * 0.5;
    *(undefined4 *)(lVar11 + 0x38) = 0;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  return;
}


