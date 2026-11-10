/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5d294; name: FUN_00d5d294
 */


void FUN_00d5d294(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(int *)(param_1 + 0x6e0) == 2) {
    iVar6 = 0;
    if (*(int *)(param_1 + 0x6d8) != 2) {
      iVar6 = *(int *)(param_1 + 0x6d8);
    }
    lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar6 * 0x28);
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x6ee));
    fVar12 = *(float *)(lVar7 + 0x768);
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x6ef));
    fVar15 = *(float *)(lVar7 + 0x76c);
    plVar8 = *(long **)(param_1 + 0x2c8);
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar3 = (long *)plVar8[0x29];
    lVar7 = plVar8[0x2a];
    if ((lVar7 == 0) || (*plVar3 == -0x6c5f415c455a29ee)) {
      plVar9 = plVar3;
    }
    else {
      lVar10 = lVar7 * 0x30;
      plVar11 = plVar3;
      do {
        lVar10 = lVar10 + -0x30;
        if (lVar10 == 0) goto LAB_00d5d42c;
        plVar1 = plVar11 + 6;
        plVar9 = plVar11 + 6;
        plVar11 = plVar11 + 6;
      } while (*plVar1 != -0x6c5f415c455a29ee);
    }
    if (plVar9 == plVar3 + lVar7 * 6) {
LAB_00d5d42c:
      lVar7 = 0;
    }
    else {
      lVar7 = plVar9[4];
    }
    uVar2 = CONCAT44(fVar15 * fVar14,fVar12 * fVar13);
    *(undefined8 *)(lVar7 + 0x50) = uVar2;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    plVar3 = (long *)plVar8[0x29];
    lVar7 = plVar8[0x2a];
    if ((lVar7 == 0) || (*plVar3 == -0x42a61b253fef3cd9)) {
      plVar9 = plVar3;
    }
    else {
      lVar10 = lVar7 * 0x30;
      plVar11 = plVar3;
      do {
        lVar10 = lVar10 + -0x30;
        if (lVar10 == 0) goto LAB_00d5d434;
        plVar1 = plVar11 + 6;
        plVar9 = plVar11 + 6;
        plVar11 = plVar11 + 6;
      } while (*plVar1 != -0x42a61b253fef3cd9);
    }
    if (plVar9 == plVar3 + lVar7 * 6) {
LAB_00d5d434:
      lVar7 = 0;
    }
    else {
      lVar7 = plVar9[4];
    }
    *(undefined8 *)(lVar7 + 0x50) = uVar2;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    plVar3 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d5d44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
  }
  return;
}


