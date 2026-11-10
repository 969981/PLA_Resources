/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318af9c; name: FUN_0318af9c
 */


long * FUN_0318af9c(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  
  iVar10 = *(int *)(param_1 + 0x40);
  lVar15 = tpidr_el0;
  iVar21 = (int)((ulong)param_2 >> 0x20);
  if (iVar10 <= iVar21) {
    uVar9 = (long)iVar21 + 1;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) <= iVar21) {
      uVar5 = FUN_0318c720(PTR_PTR_0434a080,uVar9 & 0xffffffff,*(undefined8 *)(param_1 + 0x38));
      iVar10 = *(int *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
    }
    iVar17 = (int)uVar9;
    if (iVar21 < iVar10) {
      if (iVar17 < iVar10) {
        lVar20 = *(long *)(param_1 + 0x38);
        lVar12 = lVar20 + (long)iVar10 * 0x18;
        *(int *)(param_1 + 0x40) = iVar17;
        lVar18 = *(long *)(lVar12 + -0x10);
        plVar7 = (long *)(lVar12 + -0x18);
        if (lVar18 != 0) {
          nn::os::FinalizeMutex((MutexType *)(lVar18 + 8));
          lVar12 = *(long *)(lVar15 + 0x38d490);
          if (lVar12 == 0) {
            lVar12 = FUN_0333d16c(0,1);
            *(long *)(lVar15 + 0x38d490) = lVar12;
          }
          plVar6 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar18,0x38);
        }
        plVar14 = (long *)(lVar20 + uVar9 * 0x18);
        plVar6 = (long *)*plVar7;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar8 = plVar6 + 2;
          do {
            lVar12 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
joined_r0x0318b0d8:
        if (plVar7 != plVar14) {
          do {
            lVar12 = plVar7[-2];
            plVar7 = plVar7 + -3;
            if (lVar12 != 0) {
              nn::os::FinalizeMutex((MutexType *)(lVar12 + 8));
              lVar18 = *(long *)(lVar15 + 0x38d490);
              if (lVar18 == 0) {
                lVar18 = FUN_0333d16c(0,1);
                *(long *)(lVar15 + 0x38d490) = lVar18;
              }
              plVar6 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
              (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,0x38);
            }
            plVar6 = (long *)*plVar7;
            if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
              plVar8 = plVar6 + 2;
              do {
                lVar12 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar12 + -1 == 0) goto code_r0x0318b168;
            }
            if (plVar7 == plVar14) break;
          } while( true );
        }
      }
    }
    else {
      lVar12 = *(long *)(param_1 + 0x38);
      puVar16 = (undefined8 *)(lVar12 + (long)iVar10 * 0x18);
      *(int *)(param_1 + 0x40) = iVar17;
      *puVar16 = 0;
      puVar16[1] = 0;
      while( true ) {
        *(undefined1 *)(puVar16 + 2) = 1;
        puVar1 = puVar16 + 3;
        if (puVar1 == (undefined8 *)(lVar12 + (long)iVar17 * 0x18)) break;
        *puVar1 = 0;
        puVar16[4] = 0;
        puVar16 = puVar1;
      }
    }
    puVar19 = (uint *)(param_1 + 0x54);
    uVar11 = *puVar19;
    if ((int)(uVar11 & 0x3fffffff) <= iVar21) {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined4 *)(param_1 + 0x50);
      if (0x3ffffffe < iVar21) {
        FUN_032bd0a8(uVar9 & 0xffffffff);
        uVar11 = *puVar19;
      }
      uVar11 = (uVar11 & 0x3fffffff) << 1;
      uVar13 = (ulong)uVar11;
      if (0x3ffffffe < uVar11) {
        uVar13 = 0x3fffffff;
      }
      uVar9 = uVar9 & 0xffffffff;
      if (iVar17 <= (int)uVar13) {
        uVar9 = uVar13;
      }
      uVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar9,4,uVar5,uVar2,puVar19);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
    if ((*(int *)(param_1 + 0x50) <= iVar21) || (iVar17 < *(int *)(param_1 + 0x50))) {
      *(int *)(param_1 + 0x50) = iVar17;
    }
  }
  lVar12 = *(long *)(lVar15 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar12;
  }
  plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x78,0);
  plVar7[1] = 0xffffffff;
  plVar6 = plVar7 + 2;
  *plVar6 = 1;
  *plVar7 = (long)&PTR_LAB_0430b128;
  *(undefined4 *)(plVar7 + 3) = 0x3f800000;
  plVar7[5] = 0;
  plVar7[6] = -0x8000000000000000;
  plVar7[7] = 0;
  plVar7[8] = -0x8000000000000000;
  *(undefined4 *)(plVar7 + 9) = 0;
  *(undefined4 *)(plVar7 + 0xe) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = -0x8000000000000000;
  plVar7[0xc] = 0;
  plVar7[0xd] = -0x8000000000000000;
  if (1.0 <= *(float *)((long)plVar7 + 0x1c) + 0.001) {
    *(undefined4 *)((long)plVar7 + 0x24) = 0;
    fVar23 = 0.0;
  }
  else {
    fVar22 = 1.0 - *(float *)((long)plVar7 + 0x1c);
    fVar23 = fVar22 / 254.0;
    *(int *)((long)plVar7 + 0x24) = (int)(254.0 / fVar22) + 1;
  }
  *(float *)(plVar7 + 4) = fVar23;
  plVar14 = (long *)(*(long *)(param_1 + 0x38) + (param_2 >> 0x20) * 0x18);
  *(undefined1 *)(plVar14 + 2) = 1;
  if (plVar7[1] != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)*plVar14;
  *plVar14 = (long)plVar7;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar14 = plVar8 + 2;
    do {
      lVar15 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x48) + (param_2 >> 0x20) * 4) = param_3;
  if (plVar7[1] != 0) {
    do {
      lVar15 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return plVar7;
code_r0x0318b168:
  (**(code **)(*plVar6 + 0x18))();
  goto joined_r0x0318b0d8;
}


