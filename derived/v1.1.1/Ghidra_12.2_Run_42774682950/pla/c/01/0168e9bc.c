/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168e9bc; name: FUN_0168e9bc
 */


void FUN_0168e9bc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  undefined4 uVar21;
  byte bStack_71;
  
  puVar9 = (undefined1 *)FUN_01673270(param_2,0);
  if (puVar9 != &DAT_cbf29ce484222645) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar10 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar10;
    piVar11 = (int *)FUN_010aac60(uVar10,puVar9);
    if ((10 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5], uVar16 != 0)) {
      uVar17 = (ulong)*(uint *)((long)piVar11 + uVar16);
      uVar7 = *(uint *)((long)((long)piVar11 + uVar16) + uVar17);
      if (uVar7 == 0) {
        iVar8 = 0;
      }
      else {
        lVar14 = uVar16 + uVar17;
        lVar15 = 0;
        iVar8 = 0;
        do {
          uVar16 = (ulong)*(uint *)((long)piVar11 + lVar15 + lVar14 + 4);
          lVar4 = lVar15 + (uVar16 - (long)*(int *)((long)piVar11 + lVar15 + uVar16 + lVar14 + 4)) +
                           lVar14;
          if ((*(ushort *)((long)piVar11 + lVar4 + 4) < 0x25) ||
             (uVar17 = (ulong)*(ushort *)((long)piVar11 + lVar4 + 0x28), uVar17 == 0)) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)((long)piVar11 + lVar15 + uVar16 + uVar17 + lVar14 + 4);
            if (iVar5 == -1) {
              iVar8 = -1;
              break;
            }
          }
          lVar15 = lVar15 + 4;
          iVar8 = iVar5 + iVar8;
        } while ((ulong)uVar7 * 4 != lVar15);
      }
      goto LAB_0168ea68;
    }
  }
  iVar8 = -1;
LAB_0168ea68:
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar15 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar15;
  plVar19 = *(long **)(*(long *)(lVar15 + 0x50) + 0x30);
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar10;
    }
    piVar11 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar20 = (long *)(param_1 + 0x58);
  plVar12 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar5 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(ulong *)(param_1 + 0x80) = (ulong)bStack_71 << 0x38;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar12 = *(long **)(lVar15 + 0xd0);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar15 = plVar12[0xb];
  if (lVar15 != 0) {
    piVar11 = (int *)(lVar15 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  plVar13 = plVar12 + 10;
  *plVar20 = lVar15;
  do {
    iVar5 = (int)*plVar13 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *(int *)plVar13 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  iVar5 = FUN_02c58424(*plVar20);
  if (iVar5 != 0) {
    if (iVar8 == -1) {
      uVar6 = FUN_016613bc(*(undefined8 *)(param_2 + 0x68),1);
      lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,0);
      uVar21 = uVar6;
      if (lVar15 != 0) {
        uVar16 = FUN_02c5fcb0();
        uVar21 = 0;
        if ((uVar16 & 1) == 0) {
          uVar21 = uVar6;
        }
      }
      *(undefined4 *)(param_1 + 0x60) = uVar21;
      uVar7 = FUN_02c58424(*(undefined8 *)(param_1 + 0x58));
      if (1 < uVar7) {
        uVar6 = FUN_016613bc(*(undefined8 *)(param_2 + 0x68),2);
        lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,1);
        uVar21 = uVar6;
        if (lVar15 != 0) {
          uVar16 = FUN_02c5fcb0();
          uVar21 = 0;
          if ((uVar16 & 1) == 0) {
            uVar21 = uVar6;
          }
        }
        *(undefined4 *)(param_1 + 100) = uVar21;
        uVar7 = FUN_02c58424(*(undefined8 *)(param_1 + 0x58));
        if (2 < uVar7) {
          uVar6 = FUN_016613bc(*(undefined8 *)(param_2 + 0x68),3);
          lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,2);
          uVar21 = uVar6;
          if (lVar15 != 0) {
            uVar16 = FUN_02c5fcb0();
            uVar21 = 0;
            if ((uVar16 & 1) == 0) {
              uVar21 = uVar6;
            }
          }
          *(undefined4 *)(param_1 + 0x68) = uVar21;
          uVar7 = FUN_02c58424(*(undefined8 *)(param_1 + 0x58));
          if (3 < uVar7) {
            uVar6 = FUN_016613bc(*(undefined8 *)(param_2 + 0x68),4);
            lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,3);
            uVar21 = uVar6;
            if (lVar15 != 0) {
              uVar16 = FUN_02c5fcb0();
              uVar21 = 0;
              if ((uVar16 & 1) == 0) {
                uVar21 = uVar6;
              }
            }
            *(undefined4 *)(param_1 + 0x6c) = uVar21;
            uVar7 = FUN_02c58424(*(undefined8 *)(param_1 + 0x58));
            if (4 < uVar7) {
              uVar6 = FUN_016613bc(*(undefined8 *)(param_2 + 0x68),5);
              lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,4);
              uVar21 = uVar6;
              if (lVar15 != 0) {
                uVar16 = FUN_02c5fcb0();
                uVar21 = 0;
                if ((uVar16 & 1) == 0) {
                  uVar21 = uVar6;
                }
              }
              *(undefined4 *)(param_1 + 0x70) = uVar21;
              uVar7 = FUN_02c58424(*(undefined8 *)(param_1 + 0x58));
              if (5 < uVar7) {
                lVar15 = 0x1d;
                do {
                  uVar6 = FUN_016613bc(*(undefined8 *)(param_2 + 0x68),(int)lVar15 + -0x17);
                  lVar14 = (**(code **)(*(long *)*plVar20 + 0x58))
                                     ((long *)*plVar20,(int)lVar15 + -0x18);
                  uVar21 = uVar6;
                  if (lVar14 != 0) {
                    uVar16 = FUN_02c5fcb0();
                    uVar21 = 0;
                    if ((uVar16 & 1) == 0) {
                      uVar21 = uVar6;
                    }
                  }
                  *(undefined4 *)(param_1 + lVar15 * 4) = uVar21;
                  uVar16 = FUN_02c58424(*(undefined8 *)(param_1 + 0x58));
                  uVar17 = lVar15 - 0x17;
                  lVar15 = lVar15 + 1;
                } while (uVar17 < (uVar16 & 0xffffffff));
              }
            }
          }
        }
      }
    }
    else {
      uVar16 = 0;
      do {
        lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,uVar16 & 0xffffffff);
        iVar5 = iVar8;
        if (lVar15 != 0) {
          iVar5 = FUN_0109d200(iVar8,lVar15);
        }
        lVar15 = (**(code **)(*(long *)*plVar20 + 0x58))((long *)*plVar20,uVar16 & 0xffffffff);
        iVar18 = iVar5;
        if (lVar15 != 0) {
          uVar17 = FUN_02c5fcb0();
          iVar18 = 0;
          if ((uVar17 & 1) == 0) {
            iVar18 = iVar5;
          }
        }
        *(int *)(param_1 + 0x60 + uVar16 * 4) = iVar18;
        uVar16 = uVar16 + 1;
        uVar17 = FUN_02c58424(*plVar20);
      } while (uVar16 < (uVar17 & 0xffffffff));
    }
  }
  FUN_01469c2c(plVar19,plVar20);
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    piVar11 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0168ef58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar19 + 0x20))(plVar19);
      return;
    }
  }
  return;
}


