/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143b1ec; name: FUN_0143b1ec
 */


void FUN_0143b1ec(undefined8 param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  
  fVar14 = (float)param_1;
  if ((fVar14 == 0.0) && (param_3 == 0)) {
    *(undefined8 *)(param_2 + 600) = 0;
    *(undefined1 *)(param_2 + 0x261) = 0;
    return;
  }
  *(undefined1 *)(param_2 + 0x261) = 0;
  *(float *)(param_2 + 0x25c) = fVar14 / (float)param_3;
  *(int *)(param_2 + 600) = (int)fVar14;
  FUN_0143a274(param_1,param_2,param_3);
  uVar4 = (int)fVar14 * 0x100;
  if ((param_3 & 0xffffff) * 0x80 < uVar4) {
    if (**(char **)(param_2 + 0x1a8) != '\0') {
      lVar8 = param_2 + 0x1a0;
LAB_0143b268:
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0xf0),lVar8);
    }
  }
  else if ((param_3 << 8) / 5 < uVar4) {
    if (**(char **)(param_2 + 0x1c8) != '\0') {
      lVar8 = param_2 + 0x1c0;
      goto LAB_0143b268;
    }
  }
  else if (uVar4 == 0) {
    if (**(char **)(param_2 + 0x208) != '\0') {
      lVar8 = param_2 + 0x200;
      goto LAB_0143b268;
    }
  }
  else {
    if (**(char **)(param_2 + 0x1e8) != '\0') {
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0xf0),param_2 + 0x1e0);
    }
    if (*(char *)(param_2 + 0x260) != '\0') {
      *(undefined1 *)(param_2 + 0x261) = 1;
    }
  }
  if (**(char **)(param_2 + 0x108) != '\0') {
    lVar8 = *(long *)(param_2 + 0xf8);
    plVar12 = *(long **)(*(long *)(param_2 + 0xf0) + 0x1c0);
    if (plVar12 == (long *)0x0) {
      lVar11 = *(long *)(lVar8 + 0xb0);
      if (lVar11 != 0) {
        plVar12 = *(long **)(lVar11 + 0x270);
        if (plVar12 != *(long **)(lVar11 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar12 != 0) {
              plVar3 = (long *)(*plVar12 + 0x58);
            }
            if (*plVar3 == *(long *)(param_2 + 0x220)) goto LAB_0143b870;
            plVar12 = plVar12 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar12);
        }
      }
      iVar9 = 0;
LAB_0143b870:
      FUN_02c2e33c(lVar8,iVar9,0);
    }
    else {
      plVar3 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(lVar8 + 0xb0);
      if (lVar11 != 0) {
        plVar10 = *(long **)(lVar11 + 0x270);
        if (plVar10 != *(long **)(lVar11 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar2 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar2 == *(long *)(param_2 + 0x220)) goto LAB_0143b368;
            plVar10 = plVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar10);
        }
      }
      iVar9 = 0;
LAB_0143b368:
      FUN_02c2e33c(lVar8,iVar9,plVar12);
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    lVar11 = *(long *)(param_2 + 0xf0);
    uVar7 = *(undefined8 *)(lVar11 + 0x1c0);
    lVar8 = *(long *)(lVar11 + 0x1c8);
    lVar13 = *(long *)(lVar11 + 0x1b8);
    *(undefined4 *)(lVar13 + 0x124) = 0;
    *(undefined2 *)(lVar13 + 0x128) = 0;
    *(undefined4 *)(lVar13 + 300) = 0;
    *(undefined4 *)(lVar13 + 0x134) = 0;
    FUN_02c33414(lVar13,uVar7);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      **(undefined2 **)(lVar8 + 0x58) = 0;
      *(undefined2 *)(lVar8 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar13,lVar8,uVar7,0,0);
    FUN_0283ce7c(lVar11,param_2 + 0x100,*(undefined8 *)(lVar11 + 0x1c8),10);
  }
  if (**(char **)(param_2 + 0x128) != '\0') {
    plVar12 = *(long **)(*(long *)(param_2 + 0xf0) + 0x1b8);
    if (plVar12 == (long *)0x0) {
      FUN_02c395d0(0,0,(int)fVar14,4,0,1);
    }
    else {
      lVar8 = plVar12[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0143b944;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_02c395d0(plVar12,0,(int)fVar14,4,0,1);
      lVar8 = plVar12[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    lVar8 = *(long *)(param_2 + 0xf8);
    plVar12 = *(long **)(*(long *)(param_2 + 0xf0) + 0x1c0);
    if (plVar12 == (long *)0x0) {
      lVar11 = *(long *)(lVar8 + 0xb0);
      if (lVar11 != 0) {
        plVar12 = *(long **)(lVar11 + 0x270);
        if (plVar12 != *(long **)(lVar11 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar12 != 0) {
              plVar3 = (long *)(*plVar12 + 0x58);
            }
            if (*plVar3 == *(long *)(param_2 + 0x228)) goto LAB_0143b8d4;
            plVar12 = plVar12 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar12);
        }
      }
      iVar9 = 0;
LAB_0143b8d4:
      FUN_02c2e33c(lVar8,iVar9,0);
    }
    else {
      plVar3 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(lVar8 + 0xb0);
      if (lVar11 != 0) {
        plVar10 = *(long **)(lVar11 + 0x270);
        if (plVar10 != *(long **)(lVar11 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar2 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar2 == *(long *)(param_2 + 0x228)) goto LAB_0143b4e8;
            plVar10 = plVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar10);
        }
      }
      iVar9 = 0;
LAB_0143b4e8:
      FUN_02c2e33c(lVar8,iVar9,plVar12);
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    lVar11 = *(long *)(param_2 + 0xf0);
    uVar7 = *(undefined8 *)(lVar11 + 0x1c0);
    lVar8 = *(long *)(lVar11 + 0x1c8);
    lVar13 = *(long *)(lVar11 + 0x1b8);
    *(undefined4 *)(lVar13 + 0x124) = 0;
    *(undefined2 *)(lVar13 + 0x128) = 0;
    *(undefined4 *)(lVar13 + 300) = 0;
    *(undefined4 *)(lVar13 + 0x134) = 0;
    FUN_02c33414(lVar13,uVar7);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      **(undefined2 **)(lVar8 + 0x58) = 0;
      *(undefined2 *)(lVar8 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar13,lVar8,uVar7,0,0);
    FUN_0283ce7c(lVar11,param_2 + 0x120,*(undefined8 *)(lVar11 + 0x1c8),10);
  }
  if (**(char **)(param_2 + 0x148) != '\0') {
    plVar12 = *(long **)(*(long *)(param_2 + 0xf0) + 0x1b8);
    if (plVar12 == (long *)0x0) {
      FUN_02c395d0(0,0,param_3,4,0,1);
    }
    else {
      lVar8 = plVar12[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0143b944:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_02c395d0(plVar12,0,param_3,4,0,1);
      lVar8 = plVar12[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    lVar8 = *(long *)(param_2 + 0xf8);
    plVar12 = *(long **)(*(long *)(param_2 + 0xf0) + 0x1c0);
    if (plVar12 == (long *)0x0) {
      lVar11 = *(long *)(lVar8 + 0xb0);
      if (lVar11 != 0) {
        plVar12 = *(long **)(lVar11 + 0x270);
        if (plVar12 != *(long **)(lVar11 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar12 != 0) {
              plVar3 = (long *)(*plVar12 + 0x58);
            }
            if (*plVar3 == *(long *)(param_2 + 0x230)) goto LAB_0143b938;
            plVar12 = plVar12 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar12);
        }
      }
      iVar9 = 0;
LAB_0143b938:
      FUN_02c2e33c(lVar8,iVar9,0);
    }
    else {
      plVar3 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(lVar8 + 0xb0);
      if (lVar11 != 0) {
        plVar10 = *(long **)(lVar11 + 0x270);
        if (plVar10 != *(long **)(lVar11 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar2 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar2 == *(long *)(param_2 + 0x230)) goto LAB_0143b668;
            plVar10 = plVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar10);
        }
      }
      iVar9 = 0;
LAB_0143b668:
      FUN_02c2e33c(lVar8,iVar9,plVar12);
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    lVar11 = *(long *)(param_2 + 0xf0);
    uVar7 = *(undefined8 *)(lVar11 + 0x1c0);
    lVar8 = *(long *)(lVar11 + 0x1c8);
    lVar13 = *(long *)(lVar11 + 0x1b8);
    *(undefined4 *)(lVar13 + 0x124) = 0;
    *(undefined2 *)(lVar13 + 0x128) = 0;
    *(undefined4 *)(lVar13 + 300) = 0;
    *(undefined4 *)(lVar13 + 0x134) = 0;
    FUN_02c33414(lVar13,uVar7);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      **(undefined2 **)(lVar8 + 0x58) = 0;
      *(undefined2 *)(lVar8 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar13,lVar8,uVar7,0,0);
    FUN_0283ce7c(lVar11,param_2 + 0x140,*(undefined8 *)(lVar11 + 0x1c8),10);
  }
  if ((**(char **)(param_2 + 0x240) == '\0') ||
     (lVar8 = FUN_00d648b4(*(undefined8 *)(param_2 + 0xf0),param_2 + 0x238), lVar8 == 0)) {
    return;
  }
  FUN_00256608();
  return;
}


