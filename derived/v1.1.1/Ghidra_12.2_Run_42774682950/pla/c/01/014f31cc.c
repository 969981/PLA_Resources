/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f31cc; name: FUN_014f31cc
 */


void FUN_014f31cc(long param_1,uint param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  uint local_90 [8];
  long *local_68;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    if (*(char *)(param_1 + 0x188) == '\0') {
      return;
    }
    FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
    FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x188) = 0;
    return;
  }
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar7 = FUN_02c6849c(*(undefined8 *)(param_3 + 0x98));
  uVar8 = FUN_02c6f924(*(undefined8 *)(param_3 + 0x98));
  iVar9 = snprintf((char *)local_90,0x20,"WAZAINFO_%03d",param_2);
  plVar20 = *(long **)(param_1 + 0x18);
  if (plVar20 != (long *)0x0) {
    plVar15 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((char)local_90[0] == '\0') {
    plVar15 = (long *)FUN_00938550(iVar9);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar10 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar10;
    FUN_02a47cd8(&local_68,uVar10,local_90);
    plVar15 = local_68;
  }
  plVar21 = (long *)PTR_DAT_04379c88;
  if (plVar15 != (long *)0x0) {
    plVar21 = plVar15 + 0xb;
  }
  lVar19 = *plVar21;
  plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar21 == (long *)0x0) {
    lVar16 = plVar20[0x16];
    if (lVar16 != 0) {
      plVar21 = *(long **)(lVar16 + 0x270);
      if (plVar21 != *(long **)(lVar16 + 0x278)) {
        iVar9 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar21 != 0) {
            plVar3 = (long *)(*plVar21 + 0x58);
          }
          if (*plVar3 == lVar19) goto LAB_014f3ff0;
          plVar21 = plVar21 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar21);
      }
    }
    iVar9 = 0;
LAB_014f3ff0:
    FUN_02c2e33c(plVar20,iVar9,0);
  }
  else {
    plVar3 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = plVar20[0x16];
    if (lVar16 != 0) {
      plVar14 = *(long **)(lVar16 + 0x270);
      if (plVar14 != *(long **)(lVar16 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar2 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar2 == lVar19) goto LAB_014f3364;
          plVar14 = plVar14 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar14);
      }
    }
    iVar9 = 0;
LAB_014f3364:
    FUN_02c2e33c(plVar20,iVar9,plVar21);
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
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  lVar22 = *(long *)(param_1 + 8);
  uVar10 = *(undefined8 *)(lVar22 + 0x1c0);
  lVar19 = *(long *)(lVar22 + 0x1c8);
  lVar16 = *(long *)(lVar22 + 0x1b8);
  *(undefined4 *)(lVar16 + 0x124) = 0;
  *(undefined2 *)(lVar16 + 0x128) = 0;
  *(undefined4 *)(lVar16 + 300) = 0;
  *(undefined4 *)(lVar16 + 0x134) = 0;
  FUN_02c33414(lVar16,uVar10);
  if (*(char *)(lVar19 + 0x7c) != '\0') {
    **(undefined2 **)(lVar19 + 0x58) = 0;
    *(undefined2 *)(lVar19 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar16,lVar19,uVar10,0,0);
  FUN_0283ce7c(lVar22,param_1 + 0x68,*(undefined8 *)(lVar22 + 0x1c8),10);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar20 != (long *)0x0) {
    plVar15 = plVar20 + 10;
    do {
      iVar9 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  plVar20 = &DAT_0428af30 + (ulong)param_2 * 6;
  lVar19 = *plVar20;
  if (lVar19 == 0) {
    plVar15 = &DAT_0428af30;
  }
  else {
    plVar15 = &DAT_0428af30;
    if (*(char *)(lVar19 + 0x1e1) != '\0') {
      plVar15 = plVar20;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar17 == 0)) ||
     (*(char *)((long)piVar1 + uVar17) == '\0')) {
    if (param_2 == 0x1ce) goto LAB_014f352c;
LAB_014f34d0:
    local_90[0] = 0;
    uVar17 = FUN_010a3370(local_90,&DAT_041efa98,param_2,uVar7,uVar8,0);
    if ((uVar17 & 1) == 0) {
      plVar15 = &DAT_0428af30;
      if ((*plVar20 != 0) && (plVar15 = &DAT_0428af30, *(char *)(*plVar20 + 0x1e1) != '\0')) {
        plVar15 = plVar20;
      }
      piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar17 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)*(byte *)((long)piVar1 + uVar17);
      }
    }
    else {
      uVar12 = local_90[0];
    }
    FUN_02c395d0(plVar18,0,uVar12,3,0,1);
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar21 == (long *)0x0) {
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar21 = *(long **)(lVar19 + 0x270);
        if (plVar21 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar21 != 0) {
              plVar3 = (long *)(*plVar21 + 0x58);
            }
            if (*plVar3 == 0x2d69f80c85901044) goto LAB_014f4234;
            plVar21 = plVar21 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar21);
        }
      }
      iVar9 = 0;
LAB_014f4234:
      FUN_02c2e33c(plVar15,iVar9,0);
    }
    else {
      plVar3 = plVar21 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar14 = *(long **)(lVar19 + 0x270);
        if (plVar14 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar14 != 0) {
              plVar2 = (long *)(*plVar14 + 0x58);
            }
            if (*plVar2 == 0x2d69f80c85901044) goto LAB_014f3784;
            plVar14 = plVar14 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar14);
        }
      }
      iVar9 = 0;
LAB_014f3784:
      FUN_02c2e33c(plVar15,iVar9,plVar21);
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
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    lVar22 = *(long *)(param_1 + 8);
    uVar10 = *(undefined8 *)(lVar22 + 0x1c0);
    lVar19 = *(long *)(lVar22 + 0x1c8);
    lVar16 = *(long *)(lVar22 + 0x1b8);
    *(undefined4 *)(lVar16 + 0x124) = 0;
    *(undefined2 *)(lVar16 + 0x128) = 0;
    *(undefined4 *)(lVar16 + 300) = 0;
    *(undefined4 *)(lVar16 + 0x134) = 0;
    FUN_02c33414(lVar16,uVar10);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar16,lVar19,uVar10,0,0);
    FUN_0283ce7c(lVar22,param_1 + 0x108,*(undefined8 *)(lVar22 + 0x1c8),10);
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        iVar9 = (int)*plVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_014f3824:
      if (iVar9 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  else {
    plVar15 = &DAT_0428af30;
    if ((lVar19 != 0) && (plVar15 = &DAT_0428af30, *(char *)(lVar19 + 0x1e1) != '\0')) {
      plVar15 = plVar20;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar17 != 0)) &&
       ((param_2 != 0x1ce && (*(char *)((long)piVar1 + uVar17) != '\0')))) goto LAB_014f34d0;
LAB_014f352c:
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar21 == (long *)0x0) {
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar21 = *(long **)(lVar19 + 0x270);
        if (plVar21 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar21 != 0) {
              plVar3 = (long *)(*plVar21 + 0x58);
            }
            if (*plVar3 == -0x2af479f6f562dbf7) goto LAB_014f40d8;
            plVar21 = plVar21 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar21);
        }
      }
      iVar9 = 0;
LAB_014f40d8:
      FUN_02c2e33c(plVar15,iVar9,0);
    }
    else {
      plVar3 = plVar21 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar14 = *(long **)(lVar19 + 0x270);
        if (plVar14 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar14 != 0) {
              plVar2 = (long *)(*plVar14 + 0x58);
            }
            if (*plVar2 == -0x2af479f6f562dbf7) goto LAB_014f35d0;
            plVar14 = plVar14 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar14);
        }
      }
      iVar9 = 0;
LAB_014f35d0:
      FUN_02c2e33c(plVar15,iVar9,plVar21);
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
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    lVar22 = *(long *)(param_1 + 8);
    uVar10 = *(undefined8 *)(lVar22 + 0x1c0);
    lVar19 = *(long *)(lVar22 + 0x1c8);
    lVar16 = *(long *)(lVar22 + 0x1b8);
    *(undefined4 *)(lVar16 + 0x124) = 0;
    *(undefined2 *)(lVar16 + 0x128) = 0;
    *(undefined4 *)(lVar16 + 300) = 0;
    *(undefined4 *)(lVar16 + 0x134) = 0;
    FUN_02c33414(lVar16,uVar10);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar16,lVar19,uVar10,0,0);
    FUN_0283ce7c(lVar22,param_1 + 0x108,*(undefined8 *)(lVar22 + 0x1c8),10);
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        iVar9 = (int)*plVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_014f3824;
    }
  }
  uVar17 = FUN_010a3760(param_2);
  if ((uVar17 & 1) == 0) {
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar21 == (long *)0x0) {
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar21 = *(long **)(lVar19 + 0x270);
        if (plVar21 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar21 != 0) {
              plVar3 = (long *)(*plVar21 + 0x58);
            }
            if (*plVar3 == -0x2af479f6f562dbf7) goto LAB_014f414c;
            plVar21 = plVar21 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar21);
        }
      }
      iVar9 = 0;
LAB_014f414c:
      FUN_02c2e33c(plVar15,iVar9,0);
    }
    else {
      plVar3 = plVar21 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar14 = *(long **)(lVar19 + 0x270);
        if (plVar14 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar14 != 0) {
              plVar2 = (long *)(*plVar14 + 0x58);
            }
            if (*plVar2 == -0x2af479f6f562dbf7) goto LAB_014f3904;
            plVar14 = plVar14 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar14);
        }
      }
      iVar9 = 0;
LAB_014f3904:
      FUN_02c2e33c(plVar15,iVar9,plVar21);
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
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    lVar16 = *(long *)(param_1 + 8);
    uVar10 = *(undefined8 *)(lVar16 + 0x1c0);
    lVar19 = *(long *)(lVar16 + 0x1c8);
    lVar22 = *(long *)(lVar16 + 0x1b8);
    *(undefined4 *)(lVar22 + 0x124) = 0;
    *(undefined2 *)(lVar22 + 0x128) = 0;
    *(undefined4 *)(lVar22 + 300) = 0;
    *(undefined4 *)(lVar22 + 0x134) = 0;
    FUN_02c33414(lVar22,uVar10);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar22,lVar19,uVar10,0,0);
    FUN_0283ce7c(lVar16,param_1 + 0x128,*(undefined8 *)(lVar16 + 0x1c8),10);
    if (plVar15 == (long *)0x0) goto LAB_014f3b68;
    plVar21 = plVar15 + 10;
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    local_90[0] = 0;
    uVar17 = FUN_010a3370(local_90,&DAT_041efba0,param_2,uVar7,uVar8,0);
    if ((uVar17 & 1) == 0) {
      plVar15 = &DAT_0428af30;
      if ((*plVar20 != 0) && (plVar15 = &DAT_0428af30, *(char *)(*plVar20 + 0x1e1) != '\0')) {
        plVar15 = plVar20;
      }
      piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar17 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar13 = (uint)*(byte *)((long)piVar1 + uVar17);
        uVar12 = 100;
        if (uVar13 != 0x65) {
          uVar12 = uVar13;
        }
      }
    }
    else {
      uVar12 = local_90[0];
    }
    FUN_02c395d0(plVar18,0,uVar12,3,0,1);
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 != (long *)0x0) {
      plVar21 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar21 == (long *)0x0) {
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar21 = *(long **)(lVar19 + 0x270);
        if (plVar21 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar21 != 0) {
              plVar3 = (long *)(*plVar21 + 0x58);
            }
            if (*plVar3 == 0x2d69f80c85901044) goto LAB_014f41c0;
            plVar21 = plVar21 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar21);
        }
      }
      iVar9 = 0;
LAB_014f41c0:
      FUN_02c2e33c(plVar15,iVar9,0);
    }
    else {
      plVar3 = plVar21 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar19 = plVar15[0x16];
      if (lVar19 != 0) {
        plVar14 = *(long **)(lVar19 + 0x270);
        if (plVar14 != *(long **)(lVar19 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar14 != 0) {
              plVar2 = (long *)(*plVar14 + 0x58);
            }
            if (*plVar2 == 0x2d69f80c85901044) goto LAB_014f3ac4;
            plVar14 = plVar14 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar14);
        }
      }
      iVar9 = 0;
LAB_014f3ac4:
      FUN_02c2e33c(plVar15,iVar9,plVar21);
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
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    lVar16 = *(long *)(param_1 + 8);
    uVar10 = *(undefined8 *)(lVar16 + 0x1c0);
    lVar19 = *(long *)(lVar16 + 0x1c8);
    lVar22 = *(long *)(lVar16 + 0x1b8);
    *(undefined4 *)(lVar22 + 0x124) = 0;
    *(undefined2 *)(lVar22 + 0x128) = 0;
    *(undefined4 *)(lVar22 + 300) = 0;
    *(undefined4 *)(lVar22 + 0x134) = 0;
    FUN_02c33414(lVar22,uVar10);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar22,lVar19,uVar10,0,0);
    FUN_0283ce7c(lVar16,param_1 + 0x128,*(undefined8 *)(lVar16 + 0x1c8),10);
    if (plVar15 == (long *)0x0) goto LAB_014f3b68;
    plVar21 = plVar15 + 10;
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
LAB_014f3b68:
  plVar15 = &DAT_0428af30;
  if ((*plVar20 != 0) && (plVar15 = &DAT_0428af30, *(char *)(*plVar20 + 0x1e1) != '\0')) {
    plVar15 = plVar20;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar17 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined1 *)((long)piVar1 + uVar17);
  }
  FUN_02c395d0(plVar18,0,uVar11,2,0,1);
  plVar15 = *(long **)(param_1 + 0x10);
  if (plVar15 != (long *)0x0) {
    plVar21 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar21 == (long *)0x0) {
    lVar19 = plVar15[0x16];
    if (lVar19 != 0) {
      plVar21 = *(long **)(lVar19 + 0x270);
      if (plVar21 != *(long **)(lVar19 + 0x278)) {
        iVar9 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar21 != 0) {
            plVar3 = (long *)(*plVar21 + 0x58);
          }
          if (*plVar3 == 0x6b8d61786be404bd) goto LAB_014f4064;
          plVar21 = plVar21 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar19 + 0x278) != plVar21);
      }
    }
    iVar9 = 0;
LAB_014f4064:
    FUN_02c2e33c(plVar15,iVar9,0);
  }
  else {
    plVar3 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar19 = plVar15[0x16];
    if (lVar19 != 0) {
      plVar14 = *(long **)(lVar19 + 0x270);
      if (plVar14 != *(long **)(lVar19 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar2 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar2 == 0x6b8d61786be404bd) goto LAB_014f3c78;
          plVar14 = plVar14 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar19 + 0x278) != plVar14);
      }
    }
    iVar9 = 0;
LAB_014f3c78:
    FUN_02c2e33c(plVar15,iVar9,plVar21);
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
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  lVar16 = *(long *)(param_1 + 8);
  uVar10 = *(undefined8 *)(lVar16 + 0x1c0);
  lVar19 = *(long *)(lVar16 + 0x1c8);
  lVar22 = *(long *)(lVar16 + 0x1b8);
  *(undefined4 *)(lVar22 + 0x124) = 0;
  *(undefined2 *)(lVar22 + 0x128) = 0;
  *(undefined4 *)(lVar22 + 300) = 0;
  *(undefined4 *)(lVar22 + 0x134) = 0;
  FUN_02c33414(lVar22,uVar10);
  if (*(char *)(lVar19 + 0x7c) != '\0') {
    **(undefined2 **)(lVar19 + 0x58) = 0;
    *(undefined2 *)(lVar19 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar22,lVar19,uVar10,0,0);
  FUN_0283ce7c(lVar16,param_1 + 0x148,*(undefined8 *)(lVar16 + 0x1c8),10);
  if (plVar15 != (long *)0x0) {
    plVar21 = plVar15 + 10;
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  lVar19 = *plVar20;
  plVar15 = &DAT_0428af30;
  if ((lVar19 != 0) && (plVar15 = &DAT_0428af30, *(char *)(lVar19 + 0x1e1) != '\0')) {
    plVar15 = plVar20;
  }
  fVar23 = 2.0;
  piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
  if (((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar17 != 0)) &&
     (*(char *)((long)piVar1 + uVar17) != '\0')) {
    plVar15 = &DAT_0428af30;
    if ((lVar19 != 0) && (plVar15 = &DAT_0428af30, *(char *)(lVar19 + 0x1e1) != '\0')) {
      plVar15 = plVar20;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar17 != 0)) &&
       (bVar4 = *(byte *)((long)piVar1 + uVar17), bVar4 != 0 && bVar4 != 3)) {
      fVar23 = (float)(int)(bVar4 - 1);
    }
  }
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x168);
  FUN_0283b748(fVar23,*(undefined8 *)(param_1 + 8),param_1 + 0x168);
  if (*(char *)(param_1 + 0x188) == '\0') {
    FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x48);
    FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x188) = 1;
  }
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
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
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return;
}


