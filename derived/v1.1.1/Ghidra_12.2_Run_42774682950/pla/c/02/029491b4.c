/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029491b4; name: FUN_029491b4
 */


void FUN_029491b4(int *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  char cVar17;
  undefined1 uVar18;
  ulong uVar19;
  char cVar20;
  uint uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  byte *pbVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  long *local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  uVar21 = (uint)param_5;
  if (**(uint **)(param_4 + 0x58) < 2) {
    plVar16 = *(long **)(param_1 + (param_5 & 0xff) * 2 + 0x2c);
    plVar29 = *(long **)(param_4 + (param_5 & 0xff) * 8 + 0xd8);
    if (plVar29 == (long *)0x0) {
      uVar13 = *(undefined8 *)(param_2 + 8);
      local_78 = (long *)0x0;
    }
    else {
      plVar1 = plVar29 + 10;
      do {
        cVar17 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar17 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar10;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
      uVar13 = *(undefined8 *)(param_2 + 8);
      do {
        cVar17 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
        local_78 = plVar29;
      } while (cVar17 != '\0');
    }
    FUN_0294d7a8(uVar13,&local_78,param_5,(long)param_1 + 0x1129);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar17 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar10;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    puVar6 = PTR_DAT_04379608;
    puVar5 = PTR_DAT_04379600;
    puVar4 = PTR_DAT_043795f8;
    if ((*param_1 == 1) && (bVar2 = *(byte *)(plVar29 + 0x11), bVar2 != 0)) {
      uVar9 = 0;
      do {
        lVar24 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar9);
        lVar26 = (**(code **)(*plVar29 + 0x50))(plVar29,uVar9);
        uVar7 = FUN_02c687d4(*(undefined8 *)(lVar24 + 0x98));
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_0437b168,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
        if ((uVar7 & 0xffff) == 0) {
LAB_029492e4:
          FUN_02c79f04(*(undefined8 *)(lVar26 + 0x98),uVar7);
        }
        else {
          FUN_02c4fb44(auStack_70,uVar7 & 0xffff);
          iVar10 = FUN_02c4fc60(auStack_70,0x13);
          if (iVar10 == 0) goto LAB_029492e4;
          uVar8 = FUN_02c687d4(*(undefined8 *)(lVar26 + 0x98));
          if ((uVar8 & 0xffff) != (uVar7 & 0xffff)) {
            uVar7 = 0;
            goto LAB_029492e4;
          }
        }
        uVar9 = uVar9 + 1;
      } while (bVar2 != uVar9);
    }
    bVar2 = *(byte *)(plVar29 + 0x11);
    if (bVar2 != 0) {
      uVar9 = 0;
      do {
        uVar13 = (**(code **)(*plVar29 + 0x50))(plVar29,uVar9);
        uVar14 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar9);
        FUN_02949ad8(uVar13,uVar14);
        uVar9 = uVar9 + 1;
      } while (bVar2 != uVar9);
      bVar2 = *(byte *)(plVar29 + 0x11);
      if (bVar2 != 0) {
        uVar9 = 0;
        do {
          lVar24 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar9);
          lVar26 = (**(code **)(*plVar29 + 0x50))(plVar29,uVar9);
          if ((*(long *)(*(long *)(lVar26 + 0x98) + 8) == 0) ||
             (iVar10 = FUN_02c66b3c(), iVar10 != 0)) {
            if (*(long *)(*(long *)(lVar24 + 0x98) + 8) == 0) {
              uVar7 = FUN_02c5e31c(lVar24);
              uVar7 = uVar7 & 0xffff;
            }
            else {
              uVar7 = FUN_02c66e84();
            }
            if (*(long *)(*(long *)(lVar26 + 0x98) + 8) == 0) {
              uVar8 = FUN_02c5e31c(lVar26);
              iVar10 = (uVar8 & 0xffff) - uVar7;
              if (uVar7 <= (uVar8 & 0xffff) && iVar10 != 0) goto LAB_029494bc;
            }
            else {
              uVar8 = FUN_02c66e84();
              iVar10 = uVar8 - uVar7;
              if (uVar7 <= uVar8 && iVar10 != 0) {
LAB_029494bc:
                iVar11 = FUN_02c5fb2c(lVar24);
                iVar12 = FUN_02c5fb2c(lVar26);
                if (iVar11 == iVar12) {
                  uVar7 = FUN_02c66e84(*(undefined8 *)(lVar26 + 0x98));
                  iVar11 = FUN_02c66b3c(*(undefined8 *)(lVar26 + 0x98));
                  if ((uint)(iVar11 + iVar10) <= uVar7) {
                    uVar7 = iVar11 + iVar10;
                  }
                  FUN_02c788b4(*(undefined8 *)(lVar26 + 0x98),uVar7);
                }
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (bVar2 != uVar9);
      }
    }
    (**(code **)(*plVar16 + 0x68))(plVar16,plVar29);
    iVar10 = *param_1;
  }
  else {
    iVar10 = *param_1;
  }
  if (iVar10 != 0) goto joined_r0x02949208;
  uVar9 = FUN_0294a644(*(undefined4 *)(param_4 + 0x110),
                       *(undefined1 *)(*(long *)(param_4 + 0x58) + 0x55),uVar21 & 0xff,0);
  plVar29 = *(long **)(param_1 + (ulong)(uVar9 & 0xff) * 2 + 0x2c);
  plVar16 = *(long **)(param_4 + (ulong)(uVar9 & 0xff) * 8 + 0xd8);
  if (plVar16 == (long *)0x0) {
    uVar13 = *(undefined8 *)(param_2 + 8);
    local_80 = (long *)0x0;
  }
  else {
    plVar1 = plVar16 + 10;
    do {
      cVar17 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar17 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    uVar13 = *(undefined8 *)(param_2 + 8);
    do {
      cVar17 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
      local_80 = plVar16;
    } while (cVar17 != '\0');
  }
  FUN_0294d674(uVar13,&local_80,uVar9,1);
  if (local_80 == (long *)0x0) {
LAB_029495d8:
    uVar7 = (uint)*(byte *)(plVar16 + 0x11);
    if (*(byte *)(plVar16 + 0x11) != 0) {
LAB_029495e0:
      uVar8 = 0;
      do {
        uVar13 = (**(code **)(*plVar16 + 0x50))(plVar16,uVar8);
        uVar14 = (**(code **)(*plVar29 + 0x58))(plVar29,uVar8);
        FUN_02949ad8(uVar13,uVar14);
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
      bVar2 = *(byte *)(plVar16 + 0x11);
      if (bVar2 != 0) {
        uVar7 = 0;
        do {
          lVar24 = (**(code **)(*plVar16 + 0x50))(plVar16,uVar7);
          iVar10 = FUN_02c6849c(*(undefined8 *)(lVar24 + 0x98));
          if (iVar10 - 0x319U < 0xe && (1 << (ulong)(iVar10 - 0x319U & 0x1f) & 0x3c7fU) != 0) {
            FUN_02c5ba48(lVar24);
          }
          uVar7 = uVar7 + 1;
        } while (bVar2 != uVar7);
      }
    }
  }
  else {
    plVar1 = local_80 + 10;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar17 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (iVar10 != 0) goto LAB_029495d8;
    (**(code **)(*local_80 + 0x10))();
    uVar7 = (uint)*(byte *)(plVar16 + 0x11);
    if (uVar7 != 0) goto LAB_029495e0;
  }
  plVar29 = *(long **)(param_1 + (ulong)(uVar9 & 0xff) * 2 + 0x2c);
  (**(code **)(*plVar29 + 0x68))(plVar29,plVar16);
  iVar10 = *param_1;
joined_r0x02949208:
  if (iVar10 != 4) {
    uVar19 = 0;
    uVar23 = param_5 & 0xff;
    if (uVar23 != 0) goto LAB_0294970c;
LAB_02949704:
    uVar25 = 0;
LAB_029497ac:
    *(undefined2 *)((long)param_1 + uVar25 * 6 + 0x118e) = 0;
    *(undefined4 *)((long)param_1 + uVar25 * 6 + 0x118a) = 0;
    uVar15 = FUN_02949cec(*(undefined4 *)(param_4 + 0x110),
                          *(undefined1 *)(*(long *)(param_4 + 0x58) + 0x55),uVar25);
    if ((uVar15 & 1) != 0) {
      lVar24 = *(long *)(param_3 + 8);
      pbVar27 = (byte *)(lVar24 + uVar25 * 0x38 + 0x38);
      uVar15 = (ulong)*pbVar27;
      uVar9 = 0;
      if (uVar15 != 0) {
        cVar17 = (&DAT_03a7eb48)[uVar25];
        lVar26 = 0;
        uVar7 = 0;
        iVar10 = 0;
        lVar30 = uVar15 - 1;
        do {
          if (((uint)lVar26 & 0xff) < (uint)uVar15) {
            lVar28 = *(long *)(lVar24 + uVar25 * 0x38 + 8 + lVar26 * 8);
          }
          else {
            lVar28 = 0;
          }
          cVar20 = *(char *)(lVar28 + 0x7d);
          iVar11 = FUN_029506a8(lVar28,0xd);
          iVar12 = FUN_029506a8(lVar28,0xe);
          uVar7 = iVar12 + uVar7;
          if (*(short *)(lVar28 + 0x74) == 0) {
            uVar18 = 2;
LAB_029498c4:
            *(undefined1 *)((long)param_1 + (ulong)(byte)(cVar20 - cVar17) + uVar25 * 6 + 0x118a) =
                 uVar18;
          }
          else if ((((((*(byte *)(lVar28 + 0x98) & 7) != 0) || ((*(byte *)(lVar28 + 0xa0) & 7) != 0)
                     ) || ((*(byte *)(lVar28 + 0xa8) & 7) != 0)) ||
                   (((*(byte *)(lVar28 + 0xb0) & 7) != 0 || ((*(byte *)(lVar28 + 0xb8) & 7) != 0))))
                  || (((*(byte *)(lVar28 + 0xc0) & 7) != 0 || ((*(byte *)(lVar28 + 200) & 7) != 0)))
                  ) {
            uVar18 = 1;
            goto LAB_029498c4;
          }
          iVar10 = iVar11 + iVar10;
          if (lVar30 == lVar26) goto LAB_029496c8;
          uVar15 = (ulong)*pbVar27;
          lVar26 = lVar26 + 1;
        } while( true );
      }
      goto LAB_029496e8;
    }
    goto LAB_029496f0;
  }
LAB_029498f8:
  if (**(uint **)(param_4 + 0x58) < 2) {
    plVar16 = *(long **)(param_4 + (param_5 & 0xff) * 8 + 0xb0);
    if (plVar16 != (long *)0x0) {
      plVar29 = plVar16 + 10;
      do {
        cVar17 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar3) {
          *(int *)plVar29 = (int)*plVar29 + 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
    }
    uVar19 = (ulong)*(byte *)(plVar16 + 0x11);
    if (uVar19 != 0) {
      lVar24 = *(long *)(param_3 + 8) + (param_5 & 0xff) * 0x38;
      uVar23 = 0;
      bVar2 = (&DAT_03a7eb48)[param_5 & 0xff];
      do {
        uVar25 = 0;
        do {
          if (uVar25 < *(byte *)(lVar24 + 0x38)) {
            lVar26 = *(long *)(lVar24 + 8 + uVar25 * 8);
          }
          else {
            lVar26 = 0;
          }
          if ((int)uVar23 + (uint)bVar2 == (uint)*(byte *)(lVar26 + 0x7d)) {
            *(undefined2 *)((long)param_1 + uVar23 * 0xe + 0x1136) = *(undefined2 *)(lVar26 + 0x28c)
            ;
            *(short *)((long)param_1 + uVar23 * 0xe + 0x1138) =
                 (short)*(undefined4 *)(lVar26 + 0x394);
            *(short *)((long)param_1 + uVar23 * 0xe + 0x113a) =
                 (short)*(undefined4 *)(lVar26 + 0x39c);
            *(short *)((long)param_1 + uVar23 * 0xe + 0x113c) =
                 (short)*(undefined4 *)(lVar26 + 0x3b4);
            *(short *)((long)param_1 + uVar23 * 0xe + 0x113e) =
                 (short)*(undefined4 *)(lVar26 + 0x398);
            *(short *)((long)param_1 + uVar23 * 0xe + 0x1140) =
                 (short)*(undefined4 *)(lVar26 + 0x3a4);
            *(short *)((long)param_1 + uVar23 * 0xe + 0x1142) =
                 (short)*(undefined4 *)(lVar26 + 0x3ac);
            break;
          }
          uVar25 = uVar25 + 1;
        } while (uVar19 != uVar25);
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar19);
    }
    if (plVar16 != (long *)0x0) {
      plVar29 = plVar16 + 10;
      do {
        iVar10 = (int)*plVar29 + -1;
        cVar17 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar3) {
          *(int *)plVar29 = iVar10;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
    }
  }
  if ((*(uint *)(param_4 + 0x110) < 2) && (**(int **)(param_4 + 0x58) == 3)) {
    FUN_0294c7c4(param_1 + 0x46f,param_4,param_2);
  }
  return;
LAB_029496c8:
  if (uVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = (uint)(iVar10 * 100) / uVar7;
    }
  }
LAB_029496e8:
  param_1[uVar25 + 0x46a] = uVar9;
LAB_029496f0:
  uVar19 = uVar19 + 1;
  if (uVar19 == 5) goto LAB_029498f8;
  if (uVar19 == uVar23) goto LAB_02949704;
LAB_0294970c:
  iVar10 = *(int *)(param_4 + 0x110);
  if (iVar10 == 2) {
LAB_02949724:
    if ((uVar21 & 0xff) < 5) {
      puVar22 = &DAT_03a7ebe0;
LAB_0294978c:
      cVar17 = puVar22[uVar23];
    }
    else {
      cVar17 = '\x02';
      puVar22 = &DAT_03a7ebe0;
    }
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 != 0) {
        cVar17 = '\x02';
        cVar20 = '\x02';
        goto LAB_02949794;
      }
      goto LAB_02949724;
    }
    if ((uVar21 & 0xff) < 5) {
      puVar22 = &DAT_03a7ebe5;
      goto LAB_0294978c;
    }
    cVar17 = '\x02';
    puVar22 = &DAT_03a7ebe5;
  }
  cVar20 = puVar22[uVar19];
LAB_02949794:
  uVar9 = 3;
  if (uVar19 < 2) {
    uVar9 = 1;
  }
  uVar7 = 2;
  if (cVar17 != cVar20) {
    uVar7 = uVar9;
  }
  uVar25 = (ulong)uVar7;
  goto LAB_029497ac;
}


