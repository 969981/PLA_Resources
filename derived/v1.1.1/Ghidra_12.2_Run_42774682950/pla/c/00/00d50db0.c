/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d50db0; name: FUN_00d50db0
 */


void FUN_00d50db0(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  
  plVar12 = *(long **)(param_3 + 0x2c8);
  lVar15 = (long)param_4;
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)plVar12[0x29];
  lVar3 = plVar12[0x2a];
  lVar16 = (&DAT_043ab878)[lVar15 * 0x28];
  plVar13 = (long *)(&DAT_043ab890)[lVar15 * 0x28];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar6 = plVar14;
  if ((lVar3 != 0) && (*plVar14 != lVar16)) {
    lVar10 = lVar3 * 0x30;
    plVar9 = plVar14 + lVar3 * 6;
    do {
      lVar10 = lVar10 + -0x30;
      plVar6 = plVar9;
      if (lVar10 == 0) break;
      plVar1 = plVar14 + 6;
      plVar14 = plVar14 + 6;
      plVar6 = plVar14;
    } while (*plVar1 != lVar16);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar6 == (long *)(plVar12[0x29] + plVar12[0x2a] * 0x30)) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = (long *)plVar6[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar7 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if ((plVar14 != (long *)0x0) &&
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14), puVar8 != (undefined8 *)0x0))
  {
LAB_00d50eb4:
    if (puVar8 != (undefined8 *)PTR_DAT_043729f0) goto code_r0x00d50ebc;
    fVar17 = 0.0;
    fVar18 = 0.0;
    do {
      pfVar2 = (float *)(plVar14 + 6);
      fVar18 = fVar18 + *(float *)((long)plVar14 + 0x34);
      plVar14 = (long *)plVar14[3];
      fVar17 = fVar17 + *pfVar2;
    } while (plVar14 != (long *)0x0);
    goto LAB_00d50f94;
  }
LAB_00d50ec4:
  if (param_4 == 2) {
    param_4 = 0;
  }
  lVar16 = FUN_00d2ee28(param_3 + 0x180,&DAT_043ab7d8 + (long)param_4 * 0x28);
  plVar14 = (long *)plVar12[0x29];
  lVar3 = plVar12[0x2a];
  lVar10 = *(long *)(lVar16 + 0x718);
  plVar13 = *(long **)(lVar16 + 0x730);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar6 = plVar14;
  if ((lVar3 != 0) && (*plVar14 != lVar10)) {
    lVar11 = lVar3 * 0x30;
    plVar9 = plVar14 + lVar3 * 6;
    do {
      lVar11 = lVar11 + -0x30;
      plVar6 = plVar9;
      if (lVar11 == 0) break;
      plVar1 = plVar14 + 6;
      plVar14 = plVar14 + 6;
      plVar6 = plVar14;
    } while (*plVar1 != lVar10);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  fVar18 = *(float *)(plVar6[4] + 0x54);
  fVar17 = (float)FUN_0283ad10(plVar12,lVar16 + 0x718);
  fVar18 = fVar18 * 0.5 + param_2 + 42.0;
LAB_00d50f94:
  lVar16 = (&DAT_043ab898)[lVar15 * 0x28];
  plVar14 = (long *)plVar12[0x29];
  lVar3 = plVar12[0x2a];
  plVar13 = (long *)(&DAT_043ab8b0)[lVar15 * 0x28];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar6 = plVar14;
  if ((lVar3 != 0) && (*plVar14 != lVar16)) {
    lVar15 = lVar3 * 0x30;
    plVar9 = plVar14 + lVar3 * 6;
    do {
      lVar15 = lVar15 + -0x30;
      plVar6 = plVar9;
      if (lVar15 == 0) break;
      plVar1 = plVar14 + 6;
      plVar14 = plVar14 + 6;
      plVar6 = plVar14;
    } while (*plVar1 != lVar16);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  lVar15 = plVar6[4];
  *(float *)(lVar15 + 0x30) = fVar17;
  *(float *)(lVar15 + 0x34) = fVar18;
  *(undefined4 *)(lVar15 + 0x38) = 0;
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
  plVar14 = plVar12 + 10;
  do {
    iVar7 = (int)*plVar14 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *(int *)plVar14 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d510dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    return;
  }
  return;
code_r0x00d50ebc:
  puVar8 = (undefined8 *)*puVar8;
  if (puVar8 == (undefined8 *)0x0) goto LAB_00d50ec4;
  goto LAB_00d50eb4;
}


