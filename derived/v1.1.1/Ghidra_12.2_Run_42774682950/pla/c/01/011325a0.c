/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011325a0; name: FUN_011325a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011325a0(long param_1,long param_2,char *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ushort *puVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  ushort uVar23;
  int *piVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined5 uStack_97;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 local_90 [2];
  uint3 uStack_80;
  undefined2 local_7d;
  undefined3 uStack_7b;
  undefined3 uStack_78;
  undefined2 local_75;
  
  plVar26 = (long *)(param_2 + 0x98);
  uVar16 = FUN_02c6cf3c(*plVar26);
  if ((uVar16 & 1) != 0) {
    return;
  }
  if ((*(ushort *)(*(long *)(*plVar26 + 0x10) + 4) >> 2 & 1) != 0) {
    return;
  }
  iVar12 = FUN_02c6849c();
  sVar11 = FUN_02c6f924(*plVar26);
  if (iVar12 < 0x225) {
    if ((iVar12 == 0x3b) || (iVar12 == 0x65)) goto LAB_01132ec4;
  }
  else if ((iVar12 == 0x225) || (iVar12 == 0x2c9)) {
LAB_01132ec4:
    if (sVar11 == 2) {
      return;
    }
  }
  else if ((iVar12 == 900) && (sVar11 == 1)) {
    return;
  }
  *(long *)(param_1 + 0x1f440) = param_2;
  uVar13 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  uVar16 = (ulong)uVar13;
  if (param_3 == (char *)0x0) {
    bVar10 = false;
  }
  else {
    bVar10 = param_3[4] != '\0';
  }
  if ((int)uVar13 < 0x3d5) {
    lVar22 = param_1 + 0x6c + uVar16 * 0x58;
    *(uint *)(lVar22 + 0x70) = *(uint *)(lVar22 + 0x70) | 1;
    if (*(ushort *)(lVar22 + 0x7c) == 0) {
      uVar23 = *(ushort *)(param_1 + 0x72);
      if (uVar23 >> 5 < 0x753) {
        uVar23 = uVar23 + 1;
        *(ushort *)(param_1 + 0x72) = uVar23;
      }
      *(ushort *)(lVar22 + 0x7c) = uVar23;
    }
    puVar19 = (ushort *)(param_1 + 0x6c + uVar16 * 0x58 + 0x7a);
    uVar23 = *puVar19;
    if (uVar23 >> 5 < 0x753) {
      iVar12 = uVar23 + 1;
      *puVar19 = (ushort)iVar12;
      local_7d = 0;
      uStack_7b = 0;
      uStack_78 = 0;
      local_75 = 0;
      local_a0 = (uint)uStack_80 << 8;
      uStack_9c._0_2_ = 0;
      local_a8 = (local_a8 >> 8 & 0xffffff) << 8;
      uStack_9c._2_2_ = 0;
      uStack_98 = 0;
      uStack_97 = 0;
      uStack_92 = bVar10;
      FUN_0113442c(param_1,0,iVar12,&local_a8);
    }
  }
  uVar17 = FUN_02c6cf3c(*plVar26);
  if (((uVar17 & 1) == 0) && ((*(ushort *)(*(long *)(*plVar26 + 0x10) + 4) >> 2 & 1) == 0)) {
    uVar14 = FUN_02c6849c();
    if ((int)uVar14 < 0x3d5) {
      lVar22 = param_1 + 0x6c + (ulong)uVar14 * 0x58;
      *(uint *)(lVar22 + 0x70) = *(uint *)(lVar22 + 0x70) | 1;
      if (*(ushort *)(lVar22 + 0x7c) == 0) {
        uVar23 = *(ushort *)(param_1 + 0x72);
        if (uVar23 >> 5 < 0x753) {
          uVar23 = uVar23 + 1;
          *(ushort *)(param_1 + 0x72) = uVar23;
        }
        *(ushort *)(lVar22 + 0x7c) = uVar23;
      }
      uVar17 = FUN_02c6d5b0(*plVar26);
      if ((uVar17 & 1) != 0) {
        puVar19 = (ushort *)(param_1 + 0x6c + (ulong)uVar14 * 0x58 + 0x92);
        uVar23 = *puVar19;
        if (uVar23 >> 5 < 0x753) {
          iVar12 = uVar23 + 1;
          *puVar19 = (ushort)iVar12;
          local_a8 = 0;
          local_a0 = 0;
          uStack_9c._0_2_ = 0;
          uStack_9c._2_2_ = 0;
          uStack_98 = 0;
          uStack_97 = 0;
          uStack_92 = 0;
          uStack_91 = 0;
          FUN_0113442c(param_1,5,iVar12,&local_a8);
        }
      }
    }
    else {
      FUN_02c6d5b0(*plVar26);
    }
  }
  uVar17 = FUN_02c6cf3c(*plVar26);
  puVar9 = PTR_DAT_04379688;
  puVar8 = PTR_DAT_04379680;
  puVar7 = PTR_DAT_04379678;
  lVar22 = *plVar26;
  uStack_9c = CONCAT22(uStack_9c._2_2_,(undefined2)uStack_9c);
  if (((uVar17 & 1) == 0) &&
     (uStack_9c = CONCAT22(uStack_9c._2_2_,(undefined2)uStack_9c),
     (*(ushort *)(*(long *)(lVar22 + 0x10) + 4) >> 2 & 1) == 0)) {
    uVar14 = FUN_02c6849c();
    fVar27 = (float)FUN_02c77594(*plVar26);
    if ((int)uVar14 < 0x3d5) {
      lVar22 = param_1 + (ulong)uVar14 * 0x58;
      *(uint *)(lVar22 + 0xdc) = *(uint *)(lVar22 + 0xdc) | 1;
      if (*(ushort *)(lVar22 + 0xe8) != 0) goto LAB_011327b8;
      uVar23 = *(ushort *)(param_1 + 0x72);
      if (uVar23 >> 5 < 0x753) {
        uVar23 = uVar23 + 1;
        *(ushort *)(param_1 + 0x72) = uVar23;
      }
      *(ushort *)(lVar22 + 0xe8) = uVar23;
      bVar3 = *puVar7;
    }
    else {
LAB_011327b8:
      bVar3 = *puVar7;
    }
    if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar22 = *(long *)puVar8;
    *(long *)puVar9 = lVar22;
    plVar25 = _DAT_000001c8;
    plVar18 = *(long **)(lVar22 + 0xd0);
    if (plVar18 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar18 = _DAT_000001c8 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
LAB_01132814:
      if (0x389 < (int)uVar14) goto LAB_01132840;
LAB_0113281c:
      lVar22 = *(long *)(plVar25[0xb] + 8);
      piVar24 = *(int **)(lVar22 + 0x38);
      if ((piVar24 == (int *)0x0) ||
         (uVar17 = *(ulong *)(lVar22 + (ulong)uVar14 * 0x10 + 0x42), (~uVar17 & 0xf00000000) == 0))
      goto LAB_01132840;
      puVar21 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (4 - (long)*piVar24)));
      puVar21 = (uint *)((long)puVar21 +
                        (uVar17 >> 0x1e & 0x3c) +
                        (ulong)*(ushort *)(lVar22 + (ulong)uVar14 * 0x10 + 0x40) * 4 +
                        (ulong)*puVar21 + 4);
      piVar24 = (int *)((long)puVar21 + (ulong)*puVar21);
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 9) ||
         ((((uVar17 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar17 == 0 ||
            (iVar12 = *(int *)((long)piVar24 + uVar17), iVar12 < 1)) || (0x3d4 < (int)uVar14)) ||
          (fVar28 = (float)iVar12, fVar27 < fVar28)))) goto LAB_01132840;
      lVar22 = param_1 + (ulong)uVar14 * 0x58;
      uVar23 = *(ushort *)(lVar22 + 0x100);
      if (0x752 < uVar23 >> 5) goto LAB_01132840;
      iVar12 = uVar23 + 1;
      *(short *)(lVar22 + 0x100) = (short)iVar12;
      uStack_9c = (int)fVar28;
      local_a8 = (local_a8 >> 8 & 0xffffff) << 8;
      local_a0 = local_a0 & 0xffffff00;
      uStack_98 = 0;
      uStack_97 = 0;
      uStack_92 = 0;
      uStack_91 = 0;
      FUN_0113442c(param_1,6,iVar12,&local_a8);
    }
    else {
      plVar1 = plVar18 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar25 = (long *)plVar18[0x39];
      if (plVar25 != (long *)0x0) {
        plVar2 = plVar25 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 != 0) goto LAB_01132814;
      (**(code **)(*plVar18 + 0x10))();
      if ((int)uVar14 < 0x38a) goto LAB_0113281c;
LAB_01132840:
    }
    if (plVar25 != (long *)0x0) {
      plVar18 = plVar25 + 10;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
    lVar22 = *plVar26;
  }
  uVar17 = FUN_02c6cf3c(lVar22);
  lVar22 = *plVar26;
  if (((uVar17 & 1) == 0) && ((*(ushort *)(*(long *)(lVar22 + 0x10) + 4) >> 2 & 1) == 0)) {
    uVar14 = FUN_02c6849c();
    fVar27 = (float)FUN_02c77594(*plVar26);
    if ((int)uVar14 < 0x3d5) {
      lVar22 = param_1 + (ulong)uVar14 * 0x58;
      *(uint *)(lVar22 + 0xdc) = *(uint *)(lVar22 + 0xdc) | 1;
      if (*(ushort *)(lVar22 + 0xe8) != 0) goto LAB_011328b4;
      uVar23 = *(ushort *)(param_1 + 0x72);
      if (uVar23 >> 5 < 0x753) {
        uVar23 = uVar23 + 1;
        *(ushort *)(param_1 + 0x72) = uVar23;
      }
      *(ushort *)(lVar22 + 0xe8) = uVar23;
      bVar3 = *puVar7;
    }
    else {
LAB_011328b4:
      bVar3 = *puVar7;
    }
    if ((bVar3 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_04379678);
      if (iVar12 != 0) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
    }
    lVar22 = *(long *)puVar8;
    *(long *)puVar9 = lVar22;
    plVar25 = _DAT_000001c8;
    plVar18 = *(long **)(lVar22 + 0xd0);
    if (plVar18 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar18 = _DAT_000001c8 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      plVar1 = plVar18 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar25 = (long *)plVar18[0x39];
      if (plVar25 != (long *)0x0) {
        plVar2 = plVar25 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    if ((int)uVar14 < 0x38a) {
      lVar22 = *(long *)(plVar25[0xb] + 8);
      piVar24 = *(int **)(lVar22 + 0x38);
      if ((piVar24 != (int *)0x0) &&
         (uVar17 = *(ulong *)(lVar22 + (ulong)uVar14 * 0x10 + 0x42), (~uVar17 & 0xf000000000) != 0))
      {
        puVar21 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (4 - (long)*piVar24)))
        ;
        puVar21 = (uint *)((long)puVar21 +
                          (uVar17 >> 0x22 & 0x3c) +
                          (ulong)*(ushort *)(lVar22 + (ulong)uVar14 * 0x10 + 0x40) * 4 +
                          (ulong)*puVar21 + 4);
        piVar24 = (int *)((long)puVar21 + (ulong)*puVar21);
        if (((8 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
            (((uVar17 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar17 != 0 &&
              (iVar12 = *(int *)((long)piVar24 + uVar17), 0 < iVar12)) && ((int)uVar14 < 0x3d5))))
           && (fVar28 = (float)iVar12, fVar27 <= fVar28)) {
          lVar22 = param_1 + (ulong)uVar14 * 0x58;
          uVar23 = *(ushort *)(lVar22 + 0x102);
          if (uVar23 >> 5 < 0x753) {
            iVar12 = uVar23 + 1;
            *(short *)(lVar22 + 0x102) = (short)iVar12;
            uStack_9c = (int)fVar28;
            local_a8 = (local_a8 >> 8 & 0xffffff) << 8;
            local_a0 = local_a0 & 0xffffff00;
            uStack_98 = 0;
            uStack_97 = 0;
            uStack_92 = 0;
            uStack_91 = 0;
            FUN_0113442c(param_1,7,iVar12,&local_a8);
          }
        }
      }
    }
    if (plVar25 != (long *)0x0) {
      plVar18 = plVar25 + 10;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
    lVar22 = *plVar26;
  }
  uVar17 = FUN_02c6cf3c(lVar22);
  lVar22 = *plVar26;
  if (((uVar17 & 1) == 0) && ((*(ushort *)(*(long *)(lVar22 + 0x10) + 4) >> 2 & 1) == 0)) {
    uVar14 = FUN_02c6849c();
    fVar27 = (float)FUN_02c778d4(*plVar26);
    if ((int)uVar14 < 0x3d5) {
      lVar22 = param_1 + (ulong)uVar14 * 0x58;
      *(uint *)(lVar22 + 0xdc) = *(uint *)(lVar22 + 0xdc) | 1;
      if (*(ushort *)(lVar22 + 0xe8) != 0) goto LAB_011329b0;
      uVar23 = *(ushort *)(param_1 + 0x72);
      if (uVar23 >> 5 < 0x753) {
        uVar23 = uVar23 + 1;
        *(ushort *)(param_1 + 0x72) = uVar23;
      }
      *(ushort *)(lVar22 + 0xe8) = uVar23;
      bVar3 = *puVar7;
    }
    else {
LAB_011329b0:
      bVar3 = *puVar7;
    }
    if ((bVar3 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_04379678);
      if (iVar12 != 0) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
    }
    lVar22 = *(long *)puVar8;
    *(long *)puVar9 = lVar22;
    plVar25 = _DAT_000001c8;
    plVar18 = *(long **)(lVar22 + 0xd0);
    if (plVar18 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar18 = _DAT_000001c8 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      plVar1 = plVar18 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar25 = (long *)plVar18[0x39];
      if (plVar25 != (long *)0x0) {
        plVar2 = plVar25 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    if ((int)uVar14 < 0x38a) {
      lVar22 = *(long *)(plVar25[0xb] + 8);
      piVar24 = *(int **)(lVar22 + 0x38);
      if ((piVar24 != (int *)0x0) &&
         (uVar17 = *(ulong *)(lVar22 + (ulong)uVar14 * 0x10 + 0x42), (~uVar17 & 0xf0000000000) != 0)
         ) {
        puVar21 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (4 - (long)*piVar24)))
        ;
        puVar21 = (uint *)((long)puVar21 +
                          (uVar17 >> 0x26 & 0x3c) +
                          (ulong)*(ushort *)(lVar22 + (ulong)uVar14 * 0x10 + 0x40) * 4 +
                          (ulong)*puVar21 + 4);
        piVar24 = (int *)((long)puVar21 + (ulong)*puVar21);
        if (((8 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
            (((uVar17 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar17 != 0 &&
              (iVar12 = *(int *)((long)piVar24 + uVar17), 0 < iVar12)) && ((int)uVar14 < 0x3d5))))
           && (fVar28 = (float)iVar12 / 10.0, fVar28 <= fVar27)) {
          lVar22 = param_1 + (ulong)uVar14 * 0x58;
          uVar23 = *(ushort *)(lVar22 + 0x104);
          if (uVar23 >> 5 < 0x753) {
            iVar12 = uVar23 + 1;
            *(short *)(lVar22 + 0x104) = (short)iVar12;
            uStack_9c = (int)fVar28;
            local_a8 = (local_a8 >> 8 & 0xffffff) << 8;
            local_a0 = local_a0 & 0xffffff00;
            uStack_98 = 0;
            uStack_97 = 0;
            uStack_92 = 0;
            uStack_91 = 0;
            FUN_0113442c(param_1,8,iVar12,&local_a8);
          }
        }
      }
    }
    if (plVar25 != (long *)0x0) {
      plVar18 = plVar25 + 10;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
    lVar22 = *plVar26;
  }
  uVar17 = FUN_02c6cf3c(lVar22);
  if (((uVar17 & 1) == 0) && ((*(ushort *)(*(long *)(*plVar26 + 0x10) + 4) >> 2 & 1) == 0)) {
    uVar14 = FUN_02c6849c();
    fVar27 = (float)FUN_02c778d4(*plVar26);
    if ((int)uVar14 < 0x3d5) {
      lVar22 = param_1 + (ulong)uVar14 * 0x58;
      *(uint *)(lVar22 + 0xdc) = *(uint *)(lVar22 + 0xdc) | 1;
      if (*(ushort *)(lVar22 + 0xe8) != 0) goto LAB_01132aa8;
      uVar23 = *(ushort *)(param_1 + 0x72);
      if (uVar23 >> 5 < 0x753) {
        uVar23 = uVar23 + 1;
        *(ushort *)(param_1 + 0x72) = uVar23;
      }
      *(ushort *)(lVar22 + 0xe8) = uVar23;
      bVar3 = *puVar7;
    }
    else {
LAB_01132aa8:
      bVar3 = *puVar7;
    }
    if ((bVar3 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_04379678);
      if (iVar12 != 0) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
    }
    lVar22 = *(long *)puVar8;
    *(long *)puVar9 = lVar22;
    plVar25 = _DAT_000001c8;
    plVar18 = *(long **)(lVar22 + 0xd0);
    if (plVar18 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar18 = _DAT_000001c8 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      plVar1 = plVar18 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar25 = (long *)plVar18[0x39];
      if (plVar25 != (long *)0x0) {
        plVar2 = plVar25 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    if ((int)uVar14 < 0x38a) {
      lVar22 = *(long *)(plVar25[0xb] + 8);
      piVar24 = *(int **)(lVar22 + 0x38);
      if ((piVar24 != (int *)0x0) &&
         (uVar17 = *(ulong *)(lVar22 + (ulong)uVar14 * 0x10 + 0x42), (~uVar17 & 0xf00000000000) != 0
         )) {
        puVar21 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (4 - (long)*piVar24)))
        ;
        puVar21 = (uint *)((long)puVar21 +
                          (uVar17 >> 0x2a & 0x3c) +
                          (ulong)*(ushort *)(lVar22 + (ulong)uVar14 * 0x10 + 0x40) * 4 +
                          (ulong)*puVar21 + 4);
        piVar24 = (int *)((long)puVar21 + (ulong)*puVar21);
        if ((8 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
           ((((uVar17 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar17 != 0 &&
              (iVar12 = *(int *)((long)piVar24 + uVar17), 0 < iVar12)) && ((int)uVar14 < 0x3d5)) &&
            (fVar28 = (float)iVar12 / 10.0, fVar27 <= fVar28)))) {
          lVar22 = param_1 + (ulong)uVar14 * 0x58;
          uVar23 = *(ushort *)(lVar22 + 0x106);
          if (uVar23 >> 5 < 0x753) {
            iVar12 = uVar23 + 1;
            *(short *)(lVar22 + 0x106) = (short)iVar12;
            uStack_9c = (int)fVar28;
            local_a8 = (local_a8 >> 8 & 0xffffff) << 8;
            local_a0 = local_a0 & 0xffffff00;
            uStack_98 = 0;
            uStack_97 = 0;
            uStack_92 = 0;
            uStack_91 = 0;
            FUN_0113442c(param_1,9,iVar12,&local_a8);
          }
        }
      }
    }
    if (plVar25 != (long *)0x0) {
      plVar18 = plVar25 + 10;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
  }
  if (param_3 != (char *)0x0) {
    if (*param_3 == '\0') {
      if (param_3[1] != '\0') goto LAB_01132ee8;
LAB_01132b60:
      cVar4 = param_3[2];
    }
    else {
      FUN_0113375c(param_1,uVar16);
      if (param_3[1] == '\0') goto LAB_01132b60;
LAB_01132ee8:
      FUN_011337f4(param_1,uVar16);
      cVar4 = param_3[2];
    }
    if (cVar4 != '\0') {
      FUN_0113388c(param_1,uVar16);
    }
    if (param_3[3] != '\0') goto LAB_01132bb0;
  }
  if ((int)uVar13 < 0x3d5) {
    lVar22 = param_1 + uVar16 * 0x58;
    *(uint *)(lVar22 + 0xdc) = *(uint *)(lVar22 + 0xdc) | 1;
    if (*(ushort *)(lVar22 + 0xe8) == 0) {
      uVar23 = *(ushort *)(param_1 + 0x72);
      if (uVar23 >> 5 < 0x753) {
        uVar23 = uVar23 + 1;
        *(ushort *)(param_1 + 0x72) = uVar23;
      }
      *(ushort *)(lVar22 + 0xe8) = uVar23;
    }
  }
  FUN_025ad148(&uStack_80);
  lVar22 = CONCAT35(uStack_7b,CONCAT23(local_7d,uStack_80));
  if (lVar22 != 0) {
    if (*(int *)(lVar22 + 0xc) != 0) {
      piVar24 = (int *)(lVar22 + 0xc);
      iVar12 = *(int *)(lVar22 + 0xc);
      do {
        plVar25 = *(long **)(lVar22 + 0x10);
        if ((*PTR_DAT_04379d80 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(PTR_DAT_04379d80);
          if (iVar15 != 0) {
            if ((*PTR_DAT_043794d0 & 1) == 0) {
              iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0);
              if (iVar15 != 0) {
                uVar29 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar29;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
            }
            *(undefined **)PTR_DAT_04379d88 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_04379d80);
          }
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_01133478;
          if (plVar25 == (long *)PTR_DAT_04379d88) break;
          plVar25 = (long *)*plVar25;
        }
        iVar15 = *piVar24;
        if (iVar15 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar5) {
            *piVar24 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01133364;
          lVar22 = *(long *)(lVar22 + 0x18);
          if (lVar22 != 0) {
            uVar13 = FUN_025acbdc();
            if ((*puVar7 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(PTR_DAT_04379678);
              if (iVar12 != 0) {
                FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379678);
              }
            }
            lVar20 = *(long *)puVar8;
            *(long *)puVar9 = lVar20;
            plVar25 = _DAT_000001c8;
            plVar18 = *(long **)(lVar20 + 0xd0);
            if (plVar18 == (long *)0x0) {
              if (_DAT_000001c8 != (long *)0x0) {
                plVar18 = _DAT_000001c8 + 10;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar5) {
                    *(int *)plVar18 = (int)*plVar18 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
            }
            else {
              plVar1 = plVar18 + 10;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar25 = (long *)plVar18[0x39];
              if (plVar25 != (long *)0x0) {
                plVar2 = plVar25 + 10;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              do {
                iVar12 = (int)*plVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*plVar18 + 0x10))();
              }
            }
            iVar12 = FUN_013f7bd8(*(undefined8 *)(plVar25[0xb] + 8),uVar16);
            if ((iVar12 != 5) &&
               (*(ushort *)(param_1 + uVar16 * 0x58 + 0x108) >> 5 < 0x753 && uVar13 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x01133514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_01133518 + (ulong)(byte)(&DAT_03a78ffc)[uVar13] * 4))();
              return;
            }
            if (plVar25 != (long *)0x0) {
              plVar18 = plVar25 + 10;
              do {
                iVar12 = (int)*plVar18 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar5) {
                  *(int *)plVar18 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
              }
            }
            lVar20 = *(long *)(lVar22 + 8);
            piVar24 = (int *)(lVar20 + 0xc);
            do {
              iVar12 = *piVar24;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar5) {
                *piVar24 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 != 0) break;
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*(long *)(lVar22 + -0x50) + 0x20))();
            puVar6 = (undefined8 *)CONCAT35(uStack_7b,CONCAT23(local_7d,uStack_80));
            goto joined_r0x01133634;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01133364:
        iVar12 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01133478:
    puVar6 = (undefined8 *)CONCAT35(uStack_7b,CONCAT23(local_7d,uStack_80));
joined_r0x01133634:
    if (puVar6 != (undefined8 *)0x0) {
      piVar24 = (int *)(puVar6 + 1);
      do {
        iVar12 = *piVar24;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar5) {
          *piVar24 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        puVar6[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar12 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_90[0] = *puVar6;
        FUN_02a44274(lVar22 + 0xd8,local_90);
      }
    }
  }
LAB_01132bb0:
  uVar16 = FUN_02c6cf3c(*plVar26);
  if (((uVar16 & 1) == 0) && ((*(ushort *)(*(long *)(*plVar26 + 0x10) + 4) >> 2 & 1) == 0)) {
    local_a8 = local_a8 & 0xffff000000000000;
    local_a0 = 0;
    uStack_9c._0_2_ = 0;
    uStack_98 = 0;
    uStack_97 = 0xffff000000;
    uStack_92 = 0xff;
    uStack_91 = 0xff;
    FUN_01090b20(&local_a8,param_2);
    uVar13 = FUN_02c6d5b0(*(undefined8 *)(param_2 + 0x98));
    uVar29 = FUN_02c77594(*(undefined8 *)(param_2 + 0x98));
    uVar30 = FUN_02c778d4(*(undefined8 *)(param_2 + 0x98));
    FUN_01136edc(uVar29,uVar30,param_1,&local_a8,uVar13 & 1,bVar10);
  }
  return;
}


