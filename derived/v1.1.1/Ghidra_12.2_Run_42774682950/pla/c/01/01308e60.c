/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01308e60; name: FUN_01308e60
 */


void FUN_01308e60(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  lVar8 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar8 + 0x490) = 0xd;
  lVar11 = *(long *)(lVar8 + 0x498);
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    **(undefined2 **)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x7a) = 0;
  }
  lVar11 = *(long *)(lVar8 + 0x4c8);
  *(undefined4 *)(lVar8 + 0x4c0) = 0xd;
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    **(undefined2 **)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x7a) = 0;
  }
  lVar11 = *(long *)(lVar8 + 0x4f8);
  *(undefined4 *)(lVar8 + 0x4f0) = 0xd;
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    **(undefined2 **)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x7a) = 0;
  }
  lVar11 = *(long *)(lVar8 + 0x528);
  *(undefined4 *)(lVar8 + 0x520) = 0xd;
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    **(undefined2 **)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x7a) = 0;
  }
  *(undefined4 *)(lVar8 + 0x550) = 0xd;
  lVar8 = *(long *)(lVar8 + 0x558);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0xb0);
  if (*(int *)(param_1 + 0x30) == 0) {
    if (lVar11 != 0) {
      plVar9 = *(long **)(lVar11 + 0x270);
      if (plVar9 != *(long **)(lVar11 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar12 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar12 == 0x39b0c795fda4cb49) goto LAB_01309398;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_01309398:
    FUN_02c2e33c(lVar8,iVar6,*(undefined8 *)(param_1 + 0x18));
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    if (lVar8 != 0) {
      plVar9 = *(long **)(lVar8 + 0x270);
      if (plVar9 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar12 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar12 == -0x1c4eee719d6e1ff8) goto LAB_01309408;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_01309408:
    FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar6,*(undefined8 *)(param_1 + 0x20));
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    if (lVar8 != 0) {
      plVar9 = *(long **)(lVar8 + 0x270);
      if (plVar9 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar12 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar12 == 0x39ad4a95fda1c10b) goto LAB_01309478;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_01309478:
    FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar6,*(undefined8 *)(param_1 + 0x28));
    lVar8 = *(long *)(param_1 + 8);
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar11 = *(long *)(lVar8 + 0x498);
    iVar6 = 1;
    *(undefined4 *)(lVar8 + 0x490) = 1;
    if (*(char *)(lVar11 + 0x7c) == '\0') {
LAB_013094d0:
      lVar11 = (long)iVar6;
      *(undefined8 *)(lVar8 + 0x4a0) = (&DAT_043eb278)[lVar11 * 6];
      *(undefined8 *)(lVar8 + 0x4a8) = (&DAT_043eb280)[lVar11 * 6];
      *(undefined8 *)(lVar8 + 0x4b0) = (&DAT_043eb288)[lVar11 * 6];
      plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      plVar4 = *(long **)(lVar8 + 0x4b8);
      *(long **)(lVar8 + 0x4b8) = plVar12;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar9[0xb],*(undefined2 *)(lVar11 + 0x78)
                          );
      *(undefined2 *)(lVar11 + 0x7a) = uVar3;
      iVar6 = *(int *)(lVar8 + 0x490);
      if (iVar6 < 0xd) goto LAB_013094d0;
    }
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if ((param_4 & 1) == 0) goto LAB_0130930c;
    lVar8 = *(long *)(param_1 + 8);
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar11 = *(long *)(lVar8 + 0x4c8);
    *(undefined4 *)(lVar8 + 0x4c0) = 0;
    uVar7 = (uint)*(byte *)(lVar11 + 0x7c);
    if (*(byte *)(lVar11 + 0x7c) == 0) {
LAB_01309580:
      lVar11 = (long)(int)uVar7;
      *(undefined8 *)(lVar8 + 0x4d0) = (&DAT_043eb278)[lVar11 * 6];
      *(undefined8 *)(lVar8 + 0x4d8) = (&DAT_043eb280)[lVar11 * 6];
      *(undefined8 *)(lVar8 + 0x4e0) = (&DAT_043eb288)[lVar11 * 6];
      plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      plVar4 = *(long **)(lVar8 + 0x4e8);
      *(long **)(lVar8 + 0x4e8) = plVar12;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar9[0xb],*(undefined2 *)(lVar11 + 0x78)
                          );
      *(undefined2 *)(lVar11 + 0x7a) = uVar3;
      uVar7 = *(uint *)(lVar8 + 0x4c0);
      if ((int)uVar7 < 0xd) goto LAB_01309580;
    }
    if (plVar9 == (long *)0x0) goto LAB_0130930c;
    plVar12 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (lVar11 != 0) {
      plVar9 = *(long **)(lVar11 + 0x270);
      if (plVar9 != *(long **)(lVar11 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar12 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar12 == 0x39b0c795fda4cb49) goto LAB_01308f98;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_01308f98:
    FUN_02c2e33c(lVar8,iVar6,*(undefined8 *)(param_1 + 0x18));
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    if (lVar8 != 0) {
      plVar9 = *(long **)(lVar8 + 0x270);
      if (plVar9 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar12 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar12 == -0x1c4eee719d6e1ff8) goto LAB_01309008;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_01309008:
    FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar6,*(undefined8 *)(param_1 + 0x20));
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    if (lVar8 != 0) {
      plVar9 = *(long **)(lVar8 + 0x270);
      if (plVar9 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar12 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar12 == 0x39ad4495fda1b6d9) goto LAB_01309078;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_01309078:
    FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar6,*(undefined8 *)(param_1 + 0x28));
    lVar8 = *(long *)(param_1 + 8);
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar11 = *(long *)(lVar8 + 0x498);
    iVar6 = 1;
    *(undefined4 *)(lVar8 + 0x490) = 1;
    if (*(char *)(lVar11 + 0x7c) == '\0') {
LAB_013090d0:
      lVar11 = (long)iVar6;
      *(undefined8 *)(lVar8 + 0x4a0) = (&DAT_043eb278)[lVar11 * 6];
      *(undefined8 *)(lVar8 + 0x4a8) = (&DAT_043eb280)[lVar11 * 6];
      *(undefined8 *)(lVar8 + 0x4b0) = (&DAT_043eb288)[lVar11 * 6];
      plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      plVar4 = *(long **)(lVar8 + 0x4b8);
      *(long **)(lVar8 + 0x4b8) = plVar12;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar9[0xb],*(undefined2 *)(lVar11 + 0x78)
                          );
      *(undefined2 *)(lVar11 + 0x7a) = uVar3;
      iVar6 = *(int *)(lVar8 + 0x490);
      if (iVar6 < 0xd) goto LAB_013090d0;
    }
    if (plVar9 == (long *)0x0) {
LAB_0130912c:
      if ((param_6 & 1) != 0) goto LAB_01309130;
LAB_01309604:
      lVar8 = 1;
      if ((param_4 & 1) == 0) goto LAB_0130924c;
LAB_0130960c:
      lVar11 = *(long *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      lVar10 = *(long *)(lVar11 + 0xb0);
      if (lVar10 != 0) {
        plVar9 = *(long **)(lVar10 + 0x270);
        if (plVar9 != *(long **)(lVar10 + 0x278)) {
          iVar6 = 0;
          do {
            plVar12 = (long *)PTR_DAT_04379c88;
            if (*plVar9 != 0) {
              plVar12 = (long *)(*plVar9 + 0x58);
            }
            if (*plVar12 == 0x39ad4a95fda1c10b) goto LAB_01309678;
            plVar9 = plVar9 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar9);
        }
      }
LAB_01309674:
      iVar6 = 0;
LAB_01309678:
      FUN_02c2e33c(lVar11,iVar6,uVar5);
    }
    else {
      plVar12 = plVar9 + 10;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 != 0) goto LAB_0130912c;
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((param_6 & 1) == 0) goto LAB_01309604;
LAB_01309130:
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
      if (lVar8 != 0) {
        plVar9 = *(long **)(lVar8 + 0x270);
        if (plVar9 != *(long **)(lVar8 + 0x278)) {
          iVar6 = 0;
          do {
            plVar12 = (long *)PTR_DAT_04379c88;
            if (*plVar9 != 0) {
              plVar12 = (long *)(*plVar9 + 0x58);
            }
            if (*plVar12 == -0x1c4eee719d6e1ff8) goto LAB_0130918c;
            plVar9 = plVar9 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar8 + 0x278) != plVar9);
        }
      }
      iVar6 = 0;
LAB_0130918c:
      FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar6,*(undefined8 *)(param_1 + 0x20));
      lVar8 = *(long *)(param_1 + 8);
      plVar9 = *(long **)(param_1 + 0x20);
      if (plVar9 != (long *)0x0) {
        plVar12 = plVar9 + 10;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = (int)*plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar11 = *(long *)(lVar8 + 0x4c8);
      iVar6 = 2;
      *(undefined4 *)(lVar8 + 0x4c0) = 2;
      if (*(char *)(lVar11 + 0x7c) == '\0') {
LAB_013091e4:
        lVar11 = (long)iVar6;
        *(undefined8 *)(lVar8 + 0x4d0) = (&DAT_043eb278)[lVar11 * 6];
        *(undefined8 *)(lVar8 + 0x4d8) = (&DAT_043eb280)[lVar11 * 6];
        *(undefined8 *)(lVar8 + 0x4e0) = (&DAT_043eb288)[lVar11 * 6];
        plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        plVar4 = *(long **)(lVar8 + 0x4e8);
        *(long **)(lVar8 + 0x4e8) = plVar12;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
        }
      }
      else {
        uVar3 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar9[0xb],
                             *(undefined2 *)(lVar11 + 0x78));
        *(undefined2 *)(lVar11 + 0x7a) = uVar3;
        iVar6 = *(int *)(lVar8 + 0x4c0);
        if (iVar6 < 0xd) goto LAB_013091e4;
      }
      if (plVar9 != (long *)0x0) {
        plVar12 = plVar9 + 10;
        do {
          lVar8 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = (int)lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      lVar8 = 2;
      if ((param_4 & 1) != 0) goto LAB_0130960c;
LAB_0130924c:
      if ((param_5 & 1) != 0) {
        lVar11 = *(long *)(param_1 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        lVar10 = *(long *)(lVar11 + 0xb0);
        if (lVar10 != 0) {
          plVar9 = *(long **)(lVar10 + 0x270);
          if (plVar9 != *(long **)(lVar10 + 0x278)) {
            iVar6 = 0;
            do {
              plVar12 = (long *)PTR_DAT_04379c88;
              if (*plVar9 != 0) {
                plVar12 = (long *)(*plVar9 + 0x58);
              }
              if (*plVar12 == 0x39ad4595fda1b88c) goto LAB_01309678;
              plVar9 = plVar9 + 1;
              iVar6 = iVar6 + 1;
            } while (*(long **)(lVar10 + 0x278) != plVar9);
          }
        }
        goto LAB_01309674;
      }
    }
    lVar11 = *(long *)(param_1 + 8);
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar10 = lVar11 + lVar8 * 0x30;
    lVar13 = *(long *)(lVar10 + 0x498);
    *(undefined4 *)(lVar10 + 0x490) = 0;
    if (*(char *)(lVar13 + 0x7c) == '\0') {
      iVar6 = 0;
LAB_013092ac:
      lVar10 = (long)iVar6;
      lVar11 = lVar11 + lVar8 * 0x30;
      *(undefined8 *)(lVar11 + 0x4a0) = (&DAT_043eb278)[lVar10 * 6];
      *(undefined8 *)(lVar11 + 0x4a8) = (&DAT_043eb280)[lVar10 * 6];
      *(undefined8 *)(lVar11 + 0x4b0) = (&DAT_043eb288)[lVar10 * 6];
      plVar12 = (long *)(&DAT_043eb290)[lVar10 * 6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      plVar4 = *(long **)(lVar11 + 0x4b8);
      *(long **)(lVar11 + 0x4b8) = plVar12;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar13 + 0x58),plVar9[0xb],*(undefined2 *)(lVar13 + 0x78)
                          );
      *(undefined2 *)(lVar13 + 0x7a) = uVar3;
      iVar6 = *(int *)(lVar10 + 0x490);
      if (iVar6 < 0xd) goto LAB_013092ac;
    }
    if (plVar9 == (long *)0x0) goto LAB_0130930c;
    plVar12 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_0130930c:
  FUN_02814a44(*(undefined8 *)(param_1 + 8),1);
  return;
}


