/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097e8e8; name: FUN_0097e8e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097e8e8(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ushort uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong uVar30;
  ushort local_d4;
  ushort local_d0;
  ushort local_cc;
  ushort local_c8;
  ushort local_c4;
  ushort local_c0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  pbVar28 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379578), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar19 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar19;
  plVar15 = *(long **)(lVar19 + 0xb0);
  if (plVar15 == (long *)0x0) {
    lVar19 = _DAT_000000e0;
  }
  else {
    plVar16 = plVar15 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar19 = plVar15[0x1c];
    do {
      iVar14 = (int)*plVar16 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = iVar14;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  lVar19 = FUN_00933eec(*(undefined8 *)(lVar19 + 0xd0),param_3);
  if (lVar19 == 0) {
    return;
  }
  lVar20 = *(long *)(lVar19 + 0x70);
  uVar22 = (ulong)*(byte *)(lVar20 + 0x368);
  if (uVar22 != 0) {
    uVar30 = 0;
    do {
      puVar10 = PTR_DAT_04379588;
      plVar15 = (long *)PTR_DAT_04379580;
      uVar13 = (uint)uVar30;
      uVar24 = (ulong)(uVar13 & 0xff);
      uVar4 = *(uint *)(lVar20 + uVar24 * 0x1c + 0x300);
      uVar29 = (ulong)uVar4;
      if (((*pbVar28 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      bVar11 = FUN_010a3760(uVar29);
      if ((uVar13 & 0xff) < (uint)*(byte *)(*(long *)(lVar19 + 0x70) + 0x368)) {
        lVar20 = *(long *)(lVar19 + 0x70) + uVar24 * 0x1c;
        uVar6 = *(undefined1 *)(lVar20 + 0x304);
        uVar7 = *(undefined1 *)(lVar20 + 0x305);
        bVar3 = *pbVar28;
      }
      else {
        uVar7 = 0;
        uVar6 = 0;
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0xe0) + 0x68) + 0xd0),
                            param_3);
      if (lVar20 == 0) {
LAB_0097f3bc:
        local_c0 = 0;
        bVar3 = *pbVar28;
      }
      else {
        local_98 = local_98 & 0xffffffff00000000;
        uVar17 = FUN_010a3370(&local_98,&DAT_041efa98,uVar29,
                              *(undefined2 *)(*(long *)(lVar20 + 0x70) + 0x70),
                              *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0x369),0);
        if ((uVar17 & 1) == 0) {
          lVar20 = (&DAT_0428af30)[uVar29 * 6];
          if (lVar20 == 0) {
            plVar16 = &DAT_0428af30;
          }
          else {
            plVar16 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar16 = &DAT_0428af30 + uVar29 * 6;
            }
          }
          piVar2 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250)
                          );
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar17 == 0))
          goto LAB_0097f3bc;
          local_c0 = (ushort)*(byte *)((long)piVar2 + uVar17);
        }
        else {
          local_c0 = (ushort)local_98;
        }
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0xe0) + 0x68) + 0xd0),
                            param_3);
      if (lVar20 == 0) {
LAB_0097f3cc:
        local_c4 = 0;
        bVar3 = *pbVar28;
      }
      else {
        local_98 = local_98 & 0xffffffff00000000;
        uVar17 = FUN_010a3370(&local_98,&DAT_041efa98,uVar29,
                              *(undefined2 *)(*(long *)(lVar20 + 0x70) + 0x70),
                              *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0x369),1);
        if ((uVar17 & 1) == 0) {
          lVar20 = (&DAT_0428af30)[uVar29 * 6];
          if (lVar20 == 0) {
            plVar16 = &DAT_0428af30;
          }
          else {
            plVar16 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar16 = &DAT_0428af30 + uVar29 * 6;
            }
          }
          piVar2 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250)
                          );
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xa3) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x51], uVar17 == 0))
          goto LAB_0097f3cc;
          local_c4 = (ushort)*(byte *)((long)piVar2 + uVar17);
        }
        else {
          local_c4 = (ushort)local_98;
        }
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0xe0) + 0x68) + 0xd0),
                            param_3);
      if (lVar20 == 0) {
LAB_0097f3dc:
        local_c8 = 0;
        bVar3 = *pbVar28;
      }
      else {
        local_98 = local_98 & 0xffffffff00000000;
        uVar17 = FUN_010a3370(&local_98,&DAT_041efa98,uVar29,
                              *(undefined2 *)(*(long *)(lVar20 + 0x70) + 0x70),
                              *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0x369),2);
        if ((uVar17 & 1) == 0) {
          lVar20 = (&DAT_0428af30)[uVar29 * 6];
          if (lVar20 == 0) {
            plVar16 = &DAT_0428af30;
          }
          else {
            plVar16 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar16 = &DAT_0428af30 + uVar29 * 6;
            }
          }
          piVar2 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250)
                          );
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x99) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x4c], uVar17 == 0))
          goto LAB_0097f3dc;
          local_c8 = (ushort)*(byte *)((long)piVar2 + uVar17);
        }
        else {
          local_c8 = (ushort)local_98;
        }
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0xe0) + 0x68) + 0xd0),
                            param_3);
      if (lVar20 == 0) {
LAB_0097f3ec:
        local_cc = 0;
        bVar3 = *pbVar28;
      }
      else {
        local_98 = local_98 & 0xffffffff00000000;
        uVar17 = FUN_010a3370(&local_98,&DAT_041efba0,uVar29,
                              *(undefined2 *)(*(long *)(lVar20 + 0x70) + 0x70),
                              *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0x369),0);
        if ((uVar17 & 1) == 0) {
          lVar20 = (&DAT_0428af30)[uVar29 * 6];
          if (lVar20 == 0) {
            plVar16 = &DAT_0428af30;
          }
          else {
            plVar16 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar16 = &DAT_0428af30 + uVar29 * 6;
            }
          }
          piVar2 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250)
                          );
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar17 == 0))
          goto LAB_0097f3ec;
          uVar18 = (ushort)*(byte *)((long)piVar2 + uVar17);
          local_cc = 100;
          if (uVar18 != 0x65) {
            local_cc = uVar18;
          }
        }
        else {
          local_cc = (ushort)local_98;
        }
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0xe0) + 0x68) + 0xd0),
                            param_3);
      if (lVar20 == 0) {
LAB_0097f3fc:
        local_d0 = 0;
        bVar3 = *pbVar28;
      }
      else {
        local_98 = local_98 & 0xffffffff00000000;
        uVar17 = FUN_010a3370(&local_98,&DAT_041efba0,uVar29,
                              *(undefined2 *)(*(long *)(lVar20 + 0x70) + 0x70),
                              *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0x369),1);
        if ((uVar17 & 1) == 0) {
          lVar20 = (&DAT_0428af30)[uVar29 * 6];
          if (lVar20 == 0) {
            plVar16 = &DAT_0428af30;
          }
          else {
            plVar16 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar16 = &DAT_0428af30 + uVar29 * 6;
            }
          }
          piVar2 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250)
                          );
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xa5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x52], uVar17 == 0))
          goto LAB_0097f3fc;
          local_d0 = (ushort)*(byte *)((long)piVar2 + uVar17);
        }
        else {
          local_d0 = (ushort)local_98;
        }
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0xe0) + 0x68) + 0xd0),
                            param_3);
      if (lVar20 == 0) {
LAB_0097f40c:
        local_d4 = 0;
        bVar3 = *pbVar28;
      }
      else {
        local_98 = local_98 & 0xffffffff00000000;
        uVar17 = FUN_010a3370(&local_98,&DAT_041efba0,uVar29,
                              *(undefined2 *)(*(long *)(lVar20 + 0x70) + 0x70),
                              *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0x369),2);
        if ((uVar17 & 1) == 0) {
          lVar20 = (&DAT_0428af30)[uVar29 * 6];
          if (lVar20 == 0) {
            plVar16 = &DAT_0428af30;
          }
          else {
            plVar16 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar16 = &DAT_0428af30 + uVar29 * 6;
            }
          }
          piVar2 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250)
                          );
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
             (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar17 == 0))
          goto LAB_0097f40c;
          uVar18 = (ushort)*(byte *)((long)piVar2 + uVar17);
          local_d4 = 100;
          if (uVar18 != 0x65) {
            local_d4 = uVar18;
          }
        }
        else {
          local_d4 = (ushort)local_98;
        }
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      uVar12 = FUN_00929368(*(undefined8 *)(lVar20 + 0xe0),param_3,param_4,uVar29);
      if (((*pbVar28 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)puVar10 = lVar20;
      plVar16 = *(long **)(lVar20 + 0xb0);
      if (plVar16 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar16 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar16[0x1c];
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(lVar20 + 0xd0),param_3);
      if ((uVar13 & 0xff) < (uint)*(byte *)(*(long *)(lVar20 + 0x70) + 0x368)) {
        uVar5 = *(undefined4 *)(*(long *)(lVar20 + 0x70) + uVar30 * 0x1c + 0x300);
        if (((*pbVar28 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar28);
        }
        lVar20 = *plVar15;
        *(long *)puVar10 = lVar20;
        plVar15 = *(long **)(lVar20 + 0xb0);
        if (plVar15 == (long *)0x0) {
          lVar20 = _DAT_000000e0;
        }
        else {
          plVar16 = plVar15 + 10;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar9) {
              *(int *)plVar16 = (int)*plVar16 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          lVar20 = plVar15[0x1c];
          do {
            iVar14 = (int)*plVar16 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar9) {
              *(int *)plVar16 = iVar14;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
        }
        puVar27 = *(undefined8 **)(lVar20 + 0x58);
        FUN_0295e190(puVar27[1],*puVar27);
        **(undefined8 **)(puVar27[5] + 0x10) = 0;
        local_98._0_2_ = CONCAT11((char)param_4,(char)param_3);
        local_98 = CONCAT44(uVar5,(undefined4)local_98);
        local_90 = CONCAT62(local_90._2_6_,1);
        FUN_029f6a40(*(undefined8 *)(*(long *)(puVar27[5] + 0x130) + 0x1cc0),&local_68,&local_98);
        if (local_68 < 8) {
          uVar21 = 0;
          if (local_68 != 0) {
            uVar21 = 3;
          }
          if (local_68 == 7) {
            uVar21 = 1;
          }
        }
        else {
          uVar21 = 2;
        }
        bVar3 = *pbVar28;
        plVar15 = (long *)PTR_DAT_04379580;
      }
      else {
        uVar21 = 1;
        bVar3 = *pbVar28;
      }
      if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar28), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,plVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar28);
      }
      lVar20 = *plVar15;
      *(long *)PTR_DAT_04379588 = lVar20;
      plVar15 = *(long **)(lVar20 + 0xb0);
      if (plVar15 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar16 = plVar15 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar15[0x1c];
        do {
          iVar14 = (int)*plVar16 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(lVar20 + 0xd0),param_3);
      bVar3 = *(byte *)(*(long *)(lVar20 + 0x70) + 0x368);
      if (((uVar13 & 0xff) < (uint)bVar3) &&
         (((uint)bVar3 < (uVar13 & 0xff) || (uint)bVar3 == (uVar13 & 0xff) ||
          (*(char *)(*(long *)(lVar20 + 0x70) + uVar24 * 0x1c + 0x304) == '\0')))) {
        uVar26 = 2;
      }
      else {
        uVar26 = 0;
      }
      if (((*PTR_DAT_04379578 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379578), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      lVar20 = *(long *)PTR_DAT_04379580;
      *(long *)PTR_DAT_04379588 = lVar20;
      plVar15 = *(long **)(lVar20 + 0xb0);
      bVar11 = ~bVar11 & 1;
      if (plVar15 == (long *)0x0) {
        lVar20 = _DAT_000000e0;
      }
      else {
        plVar16 = plVar15 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = plVar15[0x1c];
        do {
          iVar14 = (int)*plVar16 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      lVar20 = FUN_00933eec(*(undefined8 *)(lVar20 + 0xd0),param_3);
      lVar20 = *(long *)(lVar20 + 0x70);
      if ((uVar13 & 0xff) < (uint)*(byte *)(lVar20 + 0x368)) {
        lVar25 = (&DAT_0428af30)[(ulong)*(uint *)(lVar20 + uVar30 * 0x1c + 0x300) * 6];
        if (lVar25 == 0) {
          plVar15 = &DAT_0428af30;
        }
        else {
          plVar15 = &DAT_0428af30;
          if (*(char *)(lVar25 + 0x1e1) != '\0') {
            plVar15 = &DAT_0428af30 + (ulong)*(uint *)(lVar20 + uVar30 * 0x1c + 0x300) * 6;
          }
        }
        piVar2 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
        if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x8d) ||
            (uVar24 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x46], uVar24 == 0)) ||
           (*(char *)((long)piVar2 + uVar24) == '\0')) {
          uVar13 = 1;
        }
        else {
          uVar13 = FUN_02c618d4(*(undefined8 *)(lVar20 + 0x60));
          uVar13 = ~uVar13 & 1;
        }
      }
      else {
        uVar13 = 1;
      }
      puVar23 = (uint *)(param_2 + uVar30 * 0x2c);
      *(undefined1 *)((long)puVar23 + 5) = uVar6;
      *(undefined1 *)((long)puVar23 + 6) = uVar7;
      *(ushort *)(puVar23 + 2) = local_c0;
      *(ushort *)((long)puVar23 + 10) = local_c4;
      *(ushort *)(puVar23 + 3) = local_c8;
      *(ushort *)((long)puVar23 + 0xe) = local_cc;
      *(ushort *)((long)puVar23 + 0x12) = local_d0;
      *puVar23 = uVar4;
      *(undefined1 *)(puVar23 + 1) = uVar12;
      *(byte *)(puVar23 + 4) = bVar11;
      *(byte *)(puVar23 + 5) = bVar11;
      *(ushort *)((long)puVar23 + 0x16) = local_d4;
      *(byte *)(puVar23 + 6) = bVar11;
      *(ushort *)((long)puVar23 + 0x19) = (ushort)local_98;
      *(undefined1 *)((long)puVar23 + 0x1b) = local_98._2_1_;
      puVar23[7] = uVar21;
      *(undefined1 *)(puVar23 + 8) = 1;
      *(undefined2 *)((long)puVar23 + 0x21) = (undefined2)local_68;
      uVar30 = uVar30 + 1;
      *(undefined1 *)((long)puVar23 + 0x23) = local_68._2_1_;
      puVar23[9] = uVar26;
      puVar23[10] = uVar13;
      puVar10 = PTR_DAT_04379578;
      if (uVar30 == uVar22) goto LAB_0097f448;
      lVar20 = *(long *)(lVar19 + 0x70);
      pbVar28 = PTR_DAT_04379578;
    } while( true );
  }
LAB_0097f66c:
  if (((uint)*(byte *)(param_1 + 0x89) != (param_3 & 0xff)) ||
     (bVar11 = *(byte *)(param_1 + 0x8a), 3 < bVar11)) {
    bVar11 = 0;
  }
  *(byte *)(param_2 + 0x530) = bVar11;
  return;
LAB_0097f448:
  uVar30 = 0;
  do {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_0097fbb0(param_1,&local_98,param_3,param_4,
                 *(undefined4 *)(*(long *)(lVar19 + 0x70) + uVar30 * 0x1c + 0x300),0);
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar10);
    }
    lVar20 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar20;
    plVar15 = *(long **)(lVar20 + 0xb0);
    if (plVar15 == (long *)0x0) {
      lVar20 = _DAT_000000e0;
    }
    else {
      plVar16 = plVar15 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar20 = plVar15[0x1c];
      do {
        iVar14 = (int)*plVar16 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *(int *)plVar16 = iVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    FUN_009671f0(param_2 + uVar30 * 0x120 + 0xb0,lVar20,&local_98,param_3,param_4);
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_0097fbb0(param_1,&local_98,param_3,param_4,
                 *(undefined4 *)(*(long *)(lVar19 + 0x70) + uVar30 * 0x1c + 0x300),1);
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar10);
    }
    lVar20 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar20;
    plVar15 = *(long **)(lVar20 + 0xb0);
    if (plVar15 == (long *)0x0) {
      lVar20 = _DAT_000000e0;
    }
    else {
      plVar16 = plVar15 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar20 = plVar15[0x1c];
      do {
        iVar14 = (int)*plVar16 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *(int *)plVar16 = iVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    FUN_009671f0(param_2 + uVar30 * 0x120 + 0x110,lVar20,&local_98,param_3,param_4);
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_0097fbb0(param_1,&local_98,param_3,param_4,
                 *(undefined4 *)(*(long *)(lVar19 + 0x70) + uVar30 * 0x1c + 0x300),2);
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar10);
    }
    lVar20 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar20;
    plVar15 = *(long **)(lVar20 + 0xb0);
    if (plVar15 == (long *)0x0) {
      lVar20 = _DAT_000000e0;
    }
    else {
      plVar16 = plVar15 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar20 = plVar15[0x1c];
      do {
        iVar14 = (int)*plVar16 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *(int *)plVar16 = iVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    FUN_009671f0(param_2 + uVar30 * 0x120 + 0x170,lVar20,&local_98,param_3,param_4);
    uVar30 = uVar30 + 1;
  } while (uVar30 != uVar22);
  goto LAB_0097f66c;
}


