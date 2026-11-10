/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5af40; name: FUN_02f5af40
 */


void FUN_02f5af40(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  *param_1 = &PTR_FUN_042af8c0;
  lVar3 = tpidr_el0;
  if (*(int *)(param_1 + 3) != 0) {
    plVar13 = (long *)param_1[2];
    lVar14 = (long)*(int *)(param_1 + 3) << 3;
    do {
      lVar12 = *plVar13;
      if (lVar12 != 0) {
        FUN_02f5a2a0(lVar12);
        lVar8 = *(long *)(lVar3 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar8;
        }
        plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,0x1c00);
      }
      plVar13 = plVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  puVar5 = PTR_DAT_043723c0;
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    lVar14 = (long)(int)plVar13[0x13];
    plVar13[0x14] = (long)(PTR_DAT_043723c0 + 0x10);
    puVar4 = PTR_PTR_0434a080;
    if ((int)plVar13[0x13] != 0) {
      plVar16 = (long *)plVar13[0x12];
      plVar6 = plVar16 + lVar14 * 10 + -10;
      (**(code **)(*plVar6 + 8))(plVar6);
      if (plVar6 != plVar16) {
        plVar6 = plVar16 + lVar14 * 10 + -0x14;
        (**(code **)(*plVar6 + 8))(plVar6);
        if (plVar6 != plVar16) {
          lVar14 = lVar14 * 0x50;
          do {
            (**(code **)(*(long *)((long)plVar16 + lVar14 + -0xf0) + 8))();
            lVar14 = lVar14 + -0x50;
          } while (lVar14 != 0xa0);
        }
      }
    }
    *(undefined4 *)(plVar13 + 0x13) = 0;
    if ((-1 < (int)*(uint *)((long)plVar13 + 0x9c)) && (plVar13[0x12] != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))
                (puVar4,plVar13[0x12],((ulong)*(uint *)((long)plVar13 + 0x9c) & 0x3fffffff) * 0x50);
    }
    plVar13[0x12] = 0;
    *(undefined4 *)((long)plVar13 + 0x9c) = 0x80000000;
    *(undefined4 *)(plVar13 + 0x11) = 0;
    if ((-1 < (int)*(uint *)((long)plVar13 + 0x8c)) && (plVar13[0x10] != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))
                (puVar4,plVar13[0x10],(*(uint *)((long)plVar13 + 0x8c) & 0x3fffffff) << 1);
    }
    plVar13[0x10] = 0;
    *(undefined4 *)((long)plVar13 + 0x8c) = 0x80000000;
    plVar13[8] = (long)(puVar5 + 0x10);
    if ((int)plVar13[6] != 0) {
      plVar16 = (long *)plVar13[5];
      plVar6 = plVar16 + (long)(int)plVar13[6] * 0x22;
      do {
        plVar15 = plVar6 + -0x22;
        if (*plVar15 != 0) {
          iVar7 = (int)plVar6[-0x1f];
          if (*(char *)((long)plVar6 + -0x104) != '\0') {
            plVar11 = (long *)plVar6[-0x20];
            if (iVar7 < 1) {
              plVar10 = plVar11;
            }
            else {
              plVar10 = plVar11;
              if (*plVar11 != 0) {
                *plVar11 = *plVar11;
                plVar10 = plVar11 + 1;
              }
              if (iVar7 != 1) {
                if (plVar11[1] != 0) {
                  *plVar10 = plVar11[1];
                  plVar10 = plVar10 + 1;
                }
                if (iVar7 != 2) {
                  iVar7 = iVar7 + -2;
                  plVar11 = plVar11 + 2;
                  plVar9 = plVar10;
                  do {
                    plVar10 = plVar9;
                    if (*plVar11 != 0) {
                      plVar10 = plVar9 + 1;
                      *plVar9 = *plVar11;
                    }
                    plVar11 = plVar11 + 1;
                    iVar7 = iVar7 + -1;
                    plVar9 = plVar10;
                  } while (iVar7 != 0);
                }
              }
              plVar11 = plVar10;
              plVar10 = (long *)plVar6[-0x20];
            }
            *(char *)((long)plVar6 + -0x104) = '\0';
            iVar7 = (int)((ulong)((long)plVar11 - (long)plVar10) >> 3);
          }
          if (iVar7 != 0) {
            (**(code **)(*(long *)*plVar15 + 0x28))((long *)*plVar15,plVar6[-0x20]);
          }
          *(undefined4 *)(plVar6 + -0x1f) = 0;
          *(undefined4 *)(plVar6 + -0x21) = 0;
        }
        *(undefined4 *)(plVar6 + -0x1f) = 0;
        if ((-1 < (int)*(uint *)((long)plVar6 + -0xf4)) && (plVar6[-0x20] != 0)) {
          (**(code **)(*(long *)puVar4 + 0x18))
                    (puVar4,plVar6[-0x20],((ulong)*(uint *)((long)plVar6 + -0xf4) & 0x3fffffff) << 3
                    );
        }
        plVar6[-0x20] = 0;
        *(undefined4 *)((long)plVar6 + -0xf4) = 0x80000000;
        plVar6 = plVar15;
      } while (plVar15 != plVar16);
    }
    *(undefined4 *)(plVar13 + 6) = 0;
    if ((-1 < (int)*(uint *)((long)plVar13 + 0x34)) && (plVar13[5] != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))
                (puVar4,plVar13[5],((ulong)*(uint *)((long)plVar13 + 0x34) & 0x3fffffff) * 0x110);
    }
    plVar6 = (long *)*plVar13;
    plVar13[5] = 0;
    *(undefined4 *)((long)plVar13 + 0x34) = 0x80000000;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar16 = plVar6 + 2;
      do {
        lVar14 = *plVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    lVar14 = *(long *)(lVar3 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar14;
    }
    plVar6 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar13,0xe0);
  }
  puVar5 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0x28],*(uint *)((long)param_1 + 0x14c) & 0x3fffffff);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,param_1[0x26],*(int *)((long)param_1 + 0x13c) << 2)
    ;
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0x24],((ulong)*(uint *)((long)param_1 + 300) & 0x3fffffff) * 0x18);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[2],((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  return;
}


