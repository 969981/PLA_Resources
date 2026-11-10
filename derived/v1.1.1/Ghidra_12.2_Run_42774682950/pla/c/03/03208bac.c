/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03208bac; name: FUN_03208bac
 */


void FUN_03208bac(undefined8 *param_1,int param_2)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  
  plVar20 = (long *)*param_1;
  lVar16 = *plVar20;
  lVar17 = *(long *)(lVar16 + 0x78);
  lVar19 = *(long *)(lVar17 + 0x38) + (long)param_2 * 0xf0;
  iVar12 = *(int *)(lVar19 + 0xa8);
  if (iVar12 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0xa0);
  lVar3 = lVar19 + (long)iVar12 * 8;
  lVar8 = tpidr_el0;
  do {
    iVar13 = *(int *)(lVar19 + 4);
    lVar17 = *(long *)(*(long *)(lVar17 + 0x48) + (long)iVar13 * 0x18);
    uVar4 = *(uint *)(lVar17 + 0x18);
    iVar12 = *(int *)(lVar17 + 0x1c);
    if ((iVar12 != param_2) ||
       ((*(uint *)(*(long *)(lVar16 + 0x98) + (long)((int)uVar4 >> 5) * 4) &
        1 << (ulong)(uVar4 & 0x1f)) == 0)) {
      lVar16 = *(long *)(lVar8 + 0x38d490);
      if (lVar16 == 0) {
        lVar16 = FUN_0333d16c(0,1);
        *(long *)(lVar8 + 0x38d490) = lVar16;
      }
      plVar10 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x40,0);
      lVar16 = *plVar20;
      plVar10[1] = 0xffffffff;
      plVar20 = plVar10 + 2;
      *plVar20 = 1;
      *plVar10 = (long)&PTR_LAB_042f1800;
      plVar10[4] = (long)&PTR_LAB_042f1850;
      plVar10[5] = lVar16;
      if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
        plVar2 = (long *)(lVar16 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      *(uint *)(plVar10 + 6) = uVar4;
      *(int *)((long)plVar10 + 0x34) = iVar12;
      *(int *)(plVar10 + 7) = iVar13;
      sVar9 = FUN_0333b6e8(param_1[1],plVar10,0x40);
      lVar16 = param_1[1];
      lVar17 = *(long *)param_1[2];
      if ((sVar9 != -1) && (sVar5 = *(short *)(lVar17 + (long)(int)uVar4 * 2), sVar5 != -1)) {
        uVar15 = *(uint *)(lVar16 + 0x334);
        iVar13 = *(int *)(lVar16 + 0x330);
        uVar14 = iVar13 + 1;
        if (iVar13 < (int)(uVar15 & 0x3fffffff)) {
          lVar17 = *(long *)(lVar16 + 0x328);
        }
        else {
          uVar11 = *(undefined8 *)(lVar16 + 0x328);
          if (0x3ffffffe < iVar13) {
            FUN_032bd0a8(uVar14);
            uVar15 = *(uint *)(lVar16 + 0x334);
          }
          uVar15 = (uVar15 & 0x3fffffff) * 2;
          uVar18 = uVar14;
          if (uVar15 < 0x3fffffff) {
            if ((int)uVar14 <= (int)uVar15) {
LAB_03208ee0:
              uVar18 = uVar15;
            }
          }
          else {
            uVar15 = 0x3fffffff;
            if ((int)uVar14 < 0x40000000) goto LAB_03208ee0;
          }
          lVar17 = FUN_032bd1d4(PTR_PTR_0434a080,uVar18,4,uVar11,iVar13);
          iVar13 = *(int *)(lVar16 + 0x330);
          *(long *)(lVar16 + 0x328) = lVar17;
        }
        psVar1 = (short *)(lVar17 + (long)iVar13 * 4);
        *(uint *)(lVar16 + 0x330) = uVar14;
        *psVar1 = sVar5;
        psVar1[1] = sVar9;
        lVar16 = param_1[1];
        lVar17 = *(long *)param_1[2];
      }
      if ((sVar9 != -1) && (sVar5 = *(short *)(lVar17 + (long)iVar12 * 2), sVar5 != -1)) {
        uVar15 = *(uint *)(lVar16 + 0x334);
        iVar13 = *(int *)(lVar16 + 0x330);
        uVar14 = iVar13 + 1;
        if (iVar13 < (int)(uVar15 & 0x3fffffff)) {
          lVar17 = *(long *)(lVar16 + 0x328);
        }
        else {
          uVar11 = *(undefined8 *)(lVar16 + 0x328);
          if (0x3ffffffe < iVar13) {
            FUN_032bd0a8(uVar14);
            uVar15 = *(uint *)(lVar16 + 0x334);
          }
          uVar15 = (uVar15 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar15) {
            uVar15 = 0x3fffffff;
          }
          uVar18 = uVar14;
          if ((int)uVar14 <= (int)uVar15) {
            uVar18 = uVar15;
          }
          lVar17 = FUN_032bd1d4(PTR_PTR_0434a080,uVar18,4,uVar11,iVar13);
          iVar13 = *(int *)(lVar16 + 0x330);
          *(long *)(lVar16 + 0x328) = lVar17;
        }
        psVar1 = (short *)(lVar17 + (long)iVar13 * 4);
        *(uint *)(lVar16 + 0x330) = uVar14;
        *psVar1 = sVar5;
        psVar1[1] = sVar9;
        lVar17 = *(long *)param_1[2];
      }
      *(short *)(lVar17 + (long)(int)uVar4 * 2) = sVar9;
      *(short *)(*(long *)param_1[2] + (long)iVar12 * 2) = sVar9;
      lVar16 = param_1[1];
      sVar5 = *(short *)param_1[3];
      uVar14 = *(uint *)(lVar16 + 0x334);
      iVar12 = *(int *)(lVar16 + 0x330);
      uVar4 = iVar12 + 1;
      if (iVar12 < (int)(uVar14 & 0x3fffffff)) {
        lVar17 = *(long *)(lVar16 + 0x328);
      }
      else {
        uVar11 = *(undefined8 *)(lVar16 + 0x328);
        if (0x3ffffffe < iVar12) {
          FUN_032bd0a8(uVar4);
          uVar14 = *(uint *)(lVar16 + 0x334);
        }
        uVar14 = (uVar14 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar14) {
          uVar14 = 0x3fffffff;
        }
        uVar15 = uVar4;
        if ((int)uVar4 <= (int)uVar14) {
          uVar15 = uVar14;
        }
        lVar17 = FUN_032bd1d4(PTR_PTR_0434a080,uVar15,4,uVar11,iVar12,(uint *)(lVar16 + 0x334));
        iVar12 = *(int *)(lVar16 + 0x330);
        *(long *)(lVar16 + 0x328) = lVar17;
      }
      psVar1 = (short *)(lVar17 + (long)iVar12 * 4);
      *(uint *)(lVar16 + 0x330) = uVar4;
      *psVar1 = sVar9;
      psVar1[1] = sVar5;
      if (plVar10[1] != 0) {
        do {
          lVar16 = *plVar20;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = lVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
    lVar19 = lVar19 + 8;
    if (lVar19 == lVar3) {
      return;
    }
    plVar20 = (long *)*param_1;
    lVar16 = *plVar20;
    lVar17 = *(long *)(lVar16 + 0x78);
  } while( true );
}


