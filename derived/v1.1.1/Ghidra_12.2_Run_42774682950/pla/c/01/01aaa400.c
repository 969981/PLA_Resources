/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aaa400; name: FUN_01aaa400
 */


void FUN_01aaa400(long param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  
  puVar12 = PTR_DAT_043794d8;
  puVar11 = PTR_DAT_043794d0;
  puVar10 = PTR_DAT_043794c8;
  puVar9 = PTR_DAT_043794c0;
  puVar8 = PTR_DAT_043794b8;
  puVar7 = PTR_DAT_043794b0;
  if (*(char *)(param_1 + 0x308) == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0x308) = 1;
      cVar2 = *param_2;
joined_r0x01aaa4c0:
      if (cVar2 != '\0') goto LAB_01aaa48c;
    }
LAB_01aaa464:
    lVar15 = *(long *)(param_1 + 0x1a8);
    piVar1 = (int *)(lVar15 + 0xc);
    iVar17 = *(int *)(lVar15 + 0xc);
    do {
      while( true ) {
        plVar18 = *(long **)(lVar15 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
          if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
            if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar12 = uVar14;
              __cxa_guard_release(puVar11);
            }
            *(undefined **)puVar10 = puVar12;
            __cxa_guard_release(puVar9);
          }
          *(undefined **)puVar8 = puVar10;
          __cxa_guard_release(puVar7);
        }
        for (; plVar18 != (long *)puVar8; plVar18 = (long *)*plVar18) {
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar17) break;
        ClearExclusiveLocal();
        iVar17 = iVar13;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar17 = iVar13;
    } while (cVar2 != '\0');
    lVar15 = *(long *)(lVar15 + 0x18);
    plVar18 = (long *)0x0;
    if (lVar15 != 0) {
      plVar18 = (long *)(lVar15 + -0x50);
    }
    fVar19 = *(float *)((long)plVar18 + 0xd4);
    if (lVar15 != 0) {
      lVar15 = plVar18[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))();
      }
    }
  }
  else {
    if (*param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x308) = 0;
      cVar2 = *param_2;
      goto joined_r0x01aaa4c0;
    }
    *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_2 + 4);
    if (*param_2 == '\0') goto LAB_01aaa464;
LAB_01aaa48c:
    fVar19 = *(float *)(param_2 + 4) + *(float *)(param_2 + 8);
  }
  lVar15 = *(long *)(param_1 + 0x1a8);
  piVar1 = (int *)(lVar15 + 0xc);
  iVar17 = *(int *)(lVar15 + 0xc);
  do {
    while( true ) {
      plVar18 = *(long **)(lVar15 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar12 = uVar14;
            __cxa_guard_release(puVar11);
          }
          *(undefined **)puVar10 = puVar12;
          __cxa_guard_release(puVar9);
        }
        *(undefined **)puVar8 = puVar10;
        __cxa_guard_release(puVar7);
      }
      for (; plVar18 != (long *)puVar8; plVar18 = (long *)*plVar18) {
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar17) break;
      ClearExclusiveLocal();
      iVar17 = iVar13;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar17 = iVar13;
  } while (cVar2 != '\0');
  lVar15 = *(long *)(lVar15 + 0x18);
  plVar18 = (long *)0x0;
  if (lVar15 != 0) {
    plVar18 = (long *)(lVar15 + -0x50);
  }
  fVar20 = *(float *)((long)plVar18 + 0xd4);
  if (lVar15 != 0) {
    lVar15 = plVar18[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))();
    }
  }
  puVar8 = PTR_DAT_0437a6e0;
  puVar7 = PTR_DAT_0437a6d8;
  fVar19 = fVar19 - fVar20;
  lVar15 = *(long *)(param_1 + 0x260);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar17 = *(int *)(lVar15 + 0xc);
    do {
      plVar18 = *(long **)(lVar15 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
        uVar14 = FUN_00ad3750();
        *(undefined8 *)puVar8 = uVar14;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01aaa67c;
        if (plVar18 == (long *)puVar8) break;
        plVar18 = (long *)*plVar18;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar17) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01aaa794;
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 != 0) {
          fVar20 = (float)DAT_0388a140;
          uVar6 = (ulong)DAT_0388a140 >> 0x20;
          *(ulong *)(lVar15 + 0x208) =
               CONCAT44((float)((ulong)DAT_0388a148 >> 0x20) * fVar19,(float)DAT_0388a148 * fVar19);
          *(ulong *)(lVar15 + 0x200) = CONCAT44((float)uVar6 * fVar19,fVar20 * fVar19);
          *(undefined1 *)(lVar15 + 0x210) = 1;
          lVar16 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar17 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar17 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar17 + -1 != 0) break;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
          lVar15 = *(long *)(param_1 + 0x250);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01aaa848;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01aaa794:
      iVar17 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01aaa67c:
  lVar15 = *(long *)(param_1 + 0x250);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01aaa848:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar17 = *(int *)(lVar15 + 0xc);
    do {
      plVar18 = *(long **)(lVar15 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar4), iVar13 != 0)) {
        uVar14 = FUN_00ad3750();
        *puVar5 = uVar14;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01aaa684;
        if (plVar18 == puVar5) break;
        plVar18 = (long *)*plVar18;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar17) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01aaa89c;
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 != 0) {
          fVar20 = (float)DAT_0388a140;
          uVar6 = (ulong)DAT_0388a140 >> 0x20;
          *(ulong *)(lVar15 + 0x208) =
               CONCAT44((float)((ulong)DAT_0388a148 >> 0x20) * fVar19,(float)DAT_0388a148 * fVar19);
          *(ulong *)(lVar15 + 0x200) = CONCAT44((float)uVar6 * fVar19,fVar20 * fVar19);
          *(undefined1 *)(lVar15 + 0x210) = 1;
          lVar16 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar17 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar17 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar17 + -1 != 0) break;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
          lVar15 = *(long *)(param_1 + 0x240);
          if (lVar15 == 0) {
            return;
          }
          goto LAB_01aaa954;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01aaa89c:
      iVar17 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01aaa684:
  lVar15 = *(long *)(param_1 + 0x240);
  if (lVar15 != 0) {
LAB_01aaa954:
    puVar8 = PTR_DAT_0437a6e0;
    puVar7 = PTR_DAT_0437a6d8;
    if (*(int *)(lVar15 + 0xc) != 0) {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar17 = *(int *)(lVar15 + 0xc);
      do {
        plVar18 = *(long **)(lVar15 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
          uVar14 = FUN_00ad3750();
          *(undefined8 *)puVar8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) {
            return;
          }
          if (plVar18 == (long *)puVar8) break;
          plVar18 = (long *)*plVar18;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar17) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x18);
            if (lVar15 == 0) {
              return;
            }
            fVar20 = (float)DAT_0388a140;
            uVar6 = (ulong)DAT_0388a140 >> 0x20;
            *(ulong *)(lVar15 + 0x208) =
                 CONCAT44((float)((ulong)DAT_0388a148 >> 0x20) * fVar19,(float)DAT_0388a148 * fVar19
                         );
            *(ulong *)(lVar15 + 0x200) = CONCAT44((float)uVar6 * fVar19,fVar20 * fVar19);
            *(undefined1 *)(lVar15 + 0x210) = 1;
            lVar16 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar17 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar17 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01aaaa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar17 = iVar13;
      } while (iVar13 != 0);
    }
  }
  return;
}


