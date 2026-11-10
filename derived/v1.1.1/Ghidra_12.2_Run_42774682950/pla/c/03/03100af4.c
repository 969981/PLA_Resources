/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03100af4; name: FUN_03100af4
 */


void FUN_03100af4(undefined8 *param_1,long *param_2)

{
  void *__s;
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  *param_1 = &PTR_LAB_042b5740;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 0;
  puVar6 = PTR_PTR_0434a080;
  iVar2 = (int)param_2[1];
  if (iVar2 < 1) {
    lVar7 = 0;
    iVar11 = 0;
  }
  else {
    lVar7 = FUN_03101118(PTR_PTR_0434a080,iVar2,(long)param_1 + 0x24);
    iVar11 = *(int *)(param_1 + 4);
    param_1[3] = lVar7;
  }
  if (iVar11 < iVar2) {
    __s = (void *)(lVar7 + (long)iVar11 * 8);
    *(int *)(param_1 + 4) = iVar2;
    memset(__s,0,(lVar7 + (long)iVar2 * 8) - (long)__s & 0xfffffffffffffff8);
  }
  else if (iVar2 < iVar11) {
    *(int *)(param_1 + 4) = iVar2;
    lVar5 = tpidr_el0;
    plVar10 = (long *)(lVar7 + (long)iVar11 * 8 + -8);
    lVar14 = *plVar10;
    while( true ) {
      if (lVar14 != 0) {
        plVar8 = *(long **)(lVar14 + 0xa0);
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar1 = plVar8 + 2;
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
        *(undefined4 *)(lVar14 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar14 + 0x5c)) && (*(long *)(lVar14 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar14 + 0x50),
                     ((ulong)*(uint *)(lVar14 + 0x5c) & 0x3fffffff) * 0x50);
        }
        *(undefined8 *)(lVar14 + 0x50) = 0;
        *(undefined4 *)(lVar14 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar14 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar14 + 0x4c)) && (*(long *)(lVar14 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar14 + 0x40),
                     ((ulong)*(uint *)(lVar14 + 0x4c) & 0x3fffffff) * 0x30);
        }
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(undefined4 *)(lVar14 + 0x4c) = 0x80000000;
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar14,0xb0);
      }
      if (plVar10 == (long *)(lVar7 + (long)iVar2 * 8)) break;
      plVar10 = plVar10 + -1;
      lVar14 = *plVar10;
    }
  }
  if ((int)param_2[1] < 1) {
    uVar15 = 0;
  }
  else {
    lVar14 = param_1[3];
    uVar15 = 0;
    lVar7 = 0;
    lVar5 = tpidr_el0;
    do {
      uVar9 = FUN_032cf5b0(0xb0);
      lVar13 = lVar7 * 8;
      FUN_031011f4(uVar9,*(undefined8 *)(*param_2 + lVar13));
      lVar12 = *(long *)(lVar14 + lVar13);
      *(undefined8 *)(lVar14 + lVar13) = uVar9;
      if (lVar12 != 0) {
        plVar10 = *(long **)(lVar12 + 0xa0);
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar8 = plVar10 + 2;
          do {
            lVar14 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        *(undefined4 *)(lVar12 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar12 + 0x5c)) && (*(long *)(lVar12 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar12 + 0x50),
                     ((ulong)*(uint *)(lVar12 + 0x5c) & 0x3fffffff) * 0x50);
        }
        *(undefined4 *)(lVar12 + 0x5c) = 0x80000000;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        *(undefined4 *)(lVar12 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar12 + 0x4c)) && (*(long *)(lVar12 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar12 + 0x40),
                     ((ulong)*(uint *)(lVar12 + 0x4c) & 0x3fffffff) * 0x30);
        }
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined4 *)(lVar12 + 0x4c) = 0x80000000;
        lVar14 = *(long *)(lVar5 + 0x38d490);
        if (lVar14 == 0) {
          lVar14 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar14;
        }
        plVar10 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0xb0);
      }
      lVar14 = param_1[3];
      lVar12 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      uVar15 = NEON_fmax(uVar15,*(undefined8 *)(*(long *)(lVar14 + lVar12) + 0x10),4);
    } while (lVar7 < (int)param_2[1]);
  }
  *(int *)(param_1 + 5) = (int)uVar15;
  return;
}


