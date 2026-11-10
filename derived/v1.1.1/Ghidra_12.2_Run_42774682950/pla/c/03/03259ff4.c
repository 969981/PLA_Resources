/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03259ff4; name: FUN_03259ff4
 */


/* WARNING: Removing unreachable block (ram,0x0325a224) */
/* WARNING: Removing unreachable block (ram,0x0325a548) */

long FUN_03259ff4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  size_t sVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  void *pvVar26;
  ulong uVar27;
  char *pcVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar16;
  uVar18 = *(undefined8 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  uVar16 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x70);
  uVar22 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x85) = uVar18;
  *(undefined8 *)(param_1 + 0x80) = uVar22;
  *(undefined8 *)(param_1 + 0x70) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x96) = *(undefined8 *)(param_2 + 0x96);
  *(undefined8 *)(param_1 + 0x90) = uVar16;
  if (param_2 != param_1) {
    pvVar26 = *(void **)(param_2 + 0xa0);
    iVar17 = *(int *)(param_2 + 0xa8);
    pvVar13 = *(void **)(param_1 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x3fffffff) < iVar17) {
      pvVar13 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar17,0x10,pvVar13,
                                     *(undefined4 *)(param_1 + 0xa8));
      *(void **)(param_1 + 0xa0) = pvVar13;
    }
    memcpy(pvVar13,pvVar26,(long)iVar17 << 4);
    *(int *)(param_1 + 0xa8) = iVar17;
    iVar17 = *(int *)(param_2 + 0xb8);
    pvVar26 = *(void **)(param_2 + 0xb0);
    pvVar13 = *(void **)(param_1 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar17) {
      pvVar13 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar17,0x20,pvVar13,
                                     *(undefined4 *)(param_1 + 0xb8));
      *(void **)(param_1 + 0xb0) = pvVar13;
    }
    memcpy(pvVar13,pvVar26,(long)iVar17 << 5);
    *(int *)(param_1 + 0xb8) = iVar17;
  }
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  uVar16 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar16;
  puVar8 = PTR_PTR_0434a080;
  if (param_2 != param_1) {
    uVar15 = *(uint *)(param_1 + 0xfc) & 0x3fffffff;
    uVar3 = *(uint *)(param_2 + 0xf8);
    lVar31 = *(long *)(param_2 + 0xf0);
    if ((int)uVar15 < (int)uVar3) {
      plVar29 = *(long **)(param_1 + 0xf0);
      local_90 = (long)(int)uVar3 << 3;
      uVar4 = *(uint *)(param_1 + 0xf8);
      uVar27 = (ulong)uVar4;
      local_88 = 8;
      local_84 = uVar3;
      if ((int)uVar3 < 0) {
        local_80 = 2;
        local_78 = &DAT_0411b3a0;
        local_70 = &local_84;
        puStack_68 = &local_88;
        FUN_03320b50(0x1bd2a77e,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x53,"Array size overflow {}*{}",&local_80);
        if ((int)uVar15 <= (int)local_84) goto LAB_0325a19c;
LAB_0325a1a8:
        local_80 = 1;
        local_70 = &local_84;
        local_78 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_80);
      }
      else {
        if ((int)uVar3 < (int)uVar15) goto LAB_0325a1a8;
LAB_0325a19c:
        if (0x3fffffff < (int)local_84) goto LAB_0325a1a8;
      }
      uVar15 = *(uint *)(param_1 + 0xfc);
      lVar9 = (**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_90,&local_90);
      if (0 < (int)uVar4) {
        if (uVar4 == 1) {
          lVar19 = 0;
LAB_0325a260:
          *(long *)(lVar9 + lVar19 * 8) = plVar29[lVar19];
          plVar29[lVar19] = 0;
        }
        else {
          lVar19 = 0;
          plVar10 = plVar29 + 1;
          do {
            plVar30 = (long *)(lVar9 + lVar19 * 8);
            lVar19 = lVar19 + 2;
            *plVar30 = plVar10[-1];
            plVar10[-1] = 0;
            plVar30[1] = *plVar10;
            *plVar10 = 0;
            plVar10 = plVar10 + 2;
          } while (uVar27 - (uVar27 & 1) != lVar19);
          if ((uVar4 & 1) != 0) goto LAB_0325a260;
        }
        uVar25 = 0;
        plVar10 = (long *)*plVar29;
        while( true ) {
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar30 = plVar10 + 2;
            do {
              lVar19 = *plVar30;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar7) {
                *plVar30 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
          uVar25 = uVar25 + 1;
          if (uVar25 == uVar27) break;
          plVar10 = (long *)plVar29[uVar25];
        }
      }
      if (-1 < (int)uVar15) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,plVar29,((ulong)uVar15 & 0x3fffffff) << 3);
      }
      if (local_90 < 0x1fffffff8) {
        uVar14 = (undefined4)(local_90 >> 3);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0xfc) = uVar14;
      *(long *)(param_1 + 0xf0) = lVar9;
    }
    uVar15 = *(uint *)(param_1 + 0xf8);
    if ((int)uVar3 < (int)uVar15) {
      plVar29 = (long *)(*(long *)(param_1 + 0xf0) + (long)(int)uVar3 * 8);
      plVar30 = (long *)(*(long *)(param_1 + 0xf0) + (long)(int)uVar15 * 8 + -8);
      plVar10 = (long *)*plVar30;
      if (plVar10 != (long *)0x0) goto LAB_0325a338;
LAB_0325a328:
      if (plVar30 != plVar29) {
        while( true ) {
          plVar30 = plVar30 + -1;
          plVar10 = (long *)*plVar30;
          if (plVar10 == (long *)0x0) break;
LAB_0325a338:
          if (plVar10[1] == 0) break;
          plVar1 = plVar10 + 2;
          do {
            lVar9 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar9 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar9 + -1 != 0) break;
          (**(code **)(*plVar10 + 0x18))();
          if (plVar30 == plVar29) goto LAB_0325a36c;
        }
        goto LAB_0325a328;
      }
LAB_0325a36c:
      uVar15 = *(uint *)(param_1 + 0xf8);
    }
    lVar9 = *(long *)(param_1 + 0xf0);
    if ((int)uVar3 <= (int)uVar15) {
      uVar15 = uVar3;
    }
    if ((lVar9 != lVar31) && (0 < (int)uVar15)) {
      uVar27 = 0;
      do {
        lVar19 = uVar27 * 8;
        plVar10 = *(long **)(lVar9 + lVar19);
        plVar29 = *(long **)(lVar31 + lVar19);
        if (plVar10 != plVar29) {
          if ((plVar29 != (long *)0x0) && (plVar29[1] != 0)) {
            plVar29 = plVar29 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar7) {
                *plVar29 = *plVar29 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            plVar10 = *(long **)(lVar9 + lVar19);
            plVar29 = *(long **)(lVar31 + lVar19);
          }
          *(long **)(lVar9 + uVar27 * 8) = plVar29;
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar29 = plVar10 + 2;
            do {
              lVar19 = *plVar29;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar7) {
                *plVar29 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar15);
      lVar9 = *(long *)(param_1 + 0xf0);
    }
    if (0 < (int)(uVar3 - uVar15)) {
      iVar17 = 0;
      plVar29 = (long *)(lVar31 + (long)(int)uVar15 * 8);
      plVar10 = (long *)(lVar9 + (long)(int)uVar15 * 8);
      do {
        lVar31 = *plVar29;
        *plVar10 = lVar31;
        if ((lVar31 != 0) && (*(long *)(lVar31 + 8) != 0)) {
          plVar30 = (long *)(lVar31 + 0x10);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar7) {
              *plVar30 = *plVar30 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        iVar17 = iVar17 + 1;
        plVar29 = plVar29 + 1;
        plVar10 = plVar10 + 1;
      } while (iVar17 != uVar3 - uVar15);
    }
    *(uint *)(param_1 + 0xf8) = uVar3;
    uVar3 = *(uint *)(param_2 + 0x108);
    uVar15 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
    lVar31 = *(long *)(param_2 + 0x100);
    if ((int)uVar15 < (int)uVar3) {
      plVar29 = *(long **)(param_1 + 0x100);
      local_90 = (long)(int)uVar3 << 3;
      uVar4 = *(uint *)(param_1 + 0x108);
      uVar27 = (ulong)uVar4;
      local_88 = 8;
      local_84 = uVar3;
      if ((int)uVar3 < 0) {
        local_80 = 2;
        local_78 = &DAT_0411b3a0;
        local_70 = &local_84;
        puStack_68 = &local_88;
        FUN_03320b50(0x1bd2a77e,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x53,"Array size overflow {}*{}",&local_80);
        if ((int)uVar15 <= (int)local_84) goto LAB_0325a4c0;
LAB_0325a4cc:
        local_80 = 1;
        local_70 = &local_84;
        local_78 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_80);
      }
      else {
        if ((int)uVar3 < (int)uVar15) goto LAB_0325a4cc;
LAB_0325a4c0:
        if (0x3fffffff < (int)local_84) goto LAB_0325a4cc;
      }
      uVar15 = *(uint *)(param_1 + 0x10c);
      lVar9 = (**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_90,&local_90);
      if (0 < (int)uVar4) {
        if (uVar4 == 1) {
          lVar19 = 0;
LAB_0325a584:
          *(long *)(lVar9 + lVar19 * 8) = plVar29[lVar19];
          plVar29[lVar19] = 0;
        }
        else {
          lVar19 = 0;
          plVar10 = plVar29 + 1;
          do {
            plVar30 = (long *)(lVar9 + lVar19 * 8);
            lVar19 = lVar19 + 2;
            *plVar30 = plVar10[-1];
            plVar10[-1] = 0;
            plVar30[1] = *plVar10;
            *plVar10 = 0;
            plVar10 = plVar10 + 2;
          } while (uVar27 - (uVar27 & 1) != lVar19);
          if ((uVar4 & 1) != 0) goto LAB_0325a584;
        }
        uVar25 = 0;
        plVar10 = (long *)*plVar29;
        while( true ) {
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar30 = plVar10 + 2;
            do {
              lVar19 = *plVar30;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar7) {
                *plVar30 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
          uVar25 = uVar25 + 1;
          if (uVar25 == uVar27) break;
          plVar10 = (long *)plVar29[uVar25];
        }
      }
      if (-1 < (int)uVar15) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,plVar29,((ulong)uVar15 & 0x3fffffff) << 3);
      }
      if (local_90 < 0x1fffffff8) {
        uVar14 = (undefined4)(local_90 >> 3);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x10c) = uVar14;
      *(long *)(param_1 + 0x100) = lVar9;
    }
    uVar15 = *(uint *)(param_1 + 0x108);
    if ((int)uVar3 < (int)uVar15) {
      plVar29 = (long *)(*(long *)(param_1 + 0x100) + (long)(int)uVar3 * 8);
      plVar30 = (long *)(*(long *)(param_1 + 0x100) + (long)(int)uVar15 * 8 + -8);
      plVar10 = (long *)*plVar30;
      if (plVar10 != (long *)0x0) goto LAB_0325a65c;
LAB_0325a64c:
      if (plVar30 != plVar29) {
        while( true ) {
          plVar30 = plVar30 + -1;
          plVar10 = (long *)*plVar30;
          if (plVar10 == (long *)0x0) break;
LAB_0325a65c:
          if (plVar10[1] == 0) break;
          plVar1 = plVar10 + 2;
          do {
            lVar9 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar9 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar9 + -1 != 0) break;
          (**(code **)(*plVar10 + 0x18))();
          if (plVar30 == plVar29) goto LAB_0325a690;
        }
        goto LAB_0325a64c;
      }
LAB_0325a690:
      uVar15 = *(uint *)(param_1 + 0x108);
    }
    lVar9 = *(long *)(param_1 + 0x100);
    if ((int)uVar3 <= (int)uVar15) {
      uVar15 = uVar3;
    }
    if ((lVar9 != lVar31) && (0 < (int)uVar15)) {
      uVar27 = 0;
      do {
        lVar19 = uVar27 * 8;
        plVar10 = *(long **)(lVar9 + lVar19);
        plVar29 = *(long **)(lVar31 + lVar19);
        if (plVar10 != plVar29) {
          if ((plVar29 != (long *)0x0) && (plVar29[1] != 0)) {
            plVar29 = plVar29 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar7) {
                *plVar29 = *plVar29 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            plVar10 = *(long **)(lVar9 + lVar19);
            plVar29 = *(long **)(lVar31 + lVar19);
          }
          *(long **)(lVar9 + uVar27 * 8) = plVar29;
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar29 = plVar10 + 2;
            do {
              lVar19 = *plVar29;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar7) {
                *plVar29 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar15);
      lVar9 = *(long *)(param_1 + 0x100);
    }
    if (0 < (int)(uVar3 - uVar15)) {
      iVar17 = 0;
      plVar29 = (long *)(lVar31 + (long)(int)uVar15 * 8);
      plVar10 = (long *)(lVar9 + (long)(int)uVar15 * 8);
      do {
        lVar31 = *plVar29;
        *plVar10 = lVar31;
        if ((lVar31 != 0) && (*(long *)(lVar31 + 8) != 0)) {
          plVar30 = (long *)(lVar31 + 0x10);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar7) {
              *plVar30 = *plVar30 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        iVar17 = iVar17 + 1;
        plVar29 = plVar29 + 1;
        plVar10 = plVar10 + 1;
      } while (iVar17 != uVar3 - uVar15);
    }
    *(uint *)(param_1 + 0x108) = uVar3;
    uVar16 = *(undefined8 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = uVar16;
    uVar3 = *(uint *)(param_2 + 0x128);
    lVar19 = *(long *)(param_2 + 0x120);
    lVar9 = *(long *)(param_1 + 0x120);
    uVar15 = *(uint *)(param_1 + 300) & 0x3fffffff;
    lVar31 = lVar9;
    if ((int)uVar15 < (int)uVar3) {
      uVar4 = *(uint *)(param_1 + 0x128);
      uVar27 = (ulong)uVar4;
      local_90 = (long)(int)uVar3 << 3;
      local_88 = 8;
      local_84 = uVar3;
      if ((int)uVar3 < 0) {
        local_80 = 2;
        local_78 = &DAT_0411b3a0;
        local_70 = &local_84;
        puStack_68 = &local_88;
        FUN_03320b50(0x1bd2a77e,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x53,"Array size overflow {}*{}",&local_80);
        if ((int)uVar15 <= (int)local_84) goto LAB_0325a804;
LAB_0325a810:
        local_80 = 1;
        local_70 = &local_84;
        local_78 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_80);
      }
      else {
        if ((int)uVar3 < (int)uVar15) goto LAB_0325a810;
LAB_0325a804:
        if (0x3fffffff < (int)local_84) goto LAB_0325a810;
      }
      uVar15 = *(uint *)(param_1 + 300);
      lVar31 = (**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_90,&local_90);
      if (0 < (int)uVar4) {
        uVar25 = uVar27 & 3;
        if (uVar27 - 1 < 3) {
          lVar20 = 0;
        }
        else {
          lVar20 = 0;
          puVar12 = (undefined8 *)(lVar31 + 0x10);
          puVar23 = (undefined8 *)(lVar9 + 0x10);
          do {
            puVar12[-2] = puVar23[-2];
            puVar12[-1] = puVar23[-1];
            *puVar12 = *puVar23;
            puVar21 = puVar23 + 1;
            lVar20 = lVar20 + 4;
            puVar23 = puVar23 + 4;
            puVar12[1] = *puVar21;
            puVar12 = puVar12 + 4;
          } while (uVar27 - uVar25 != lVar20);
        }
        if ((uVar4 & 3) != 0) {
          puVar12 = (undefined8 *)(lVar9 + lVar20 * 8);
          puVar23 = (undefined8 *)(lVar31 + lVar20 * 8);
          do {
            uVar25 = uVar25 - 1;
            *puVar23 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar23 = puVar23 + 1;
          } while (uVar25 != 0);
        }
      }
      if (-1 < (int)uVar15) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,lVar9,((ulong)uVar15 & 0x3fffffff) << 3);
      }
      if (local_90 < 0x1fffffff8) {
        uVar14 = (undefined4)(local_90 >> 3);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 300) = uVar14;
      *(long *)(param_1 + 0x120) = lVar31;
    }
    uVar4 = *(uint *)(param_1 + 0x128);
    uVar15 = uVar4;
    if ((int)uVar3 <= (int)uVar4) {
      uVar15 = uVar3;
    }
    if ((lVar31 != lVar19) && (0 < (int)uVar15)) {
      uVar25 = (ulong)uVar15;
      uVar27 = uVar25 & 3;
      if (uVar25 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        puVar12 = (undefined8 *)(lVar19 + 0x10);
        puVar23 = (undefined8 *)(lVar31 + 0x10);
        do {
          puVar23[-2] = puVar12[-2];
          puVar23[-1] = puVar12[-1];
          *puVar23 = *puVar12;
          puVar21 = puVar12 + 1;
          lVar9 = lVar9 + 4;
          puVar12 = puVar12 + 4;
          puVar23[1] = *puVar21;
          puVar23 = puVar23 + 4;
        } while (uVar25 - uVar27 != lVar9);
      }
      if ((uVar15 & 3) != 0) {
        puVar12 = (undefined8 *)(lVar31 + lVar9 * 8);
        puVar23 = (undefined8 *)(lVar19 + lVar9 * 8);
        do {
          uVar27 = uVar27 - 1;
          *puVar12 = *puVar23;
          puVar12 = puVar12 + 1;
          puVar23 = puVar23 + 1;
        } while (uVar27 != 0);
      }
      lVar31 = *(long *)(param_1 + 0x120);
    }
    if ((int)uVar4 < (int)uVar3) {
      uVar4 = uVar3 - uVar15 & 3;
      puVar12 = (undefined8 *)(lVar19 + (long)(int)uVar15 * 8);
      puVar23 = (undefined8 *)(lVar31 + (long)(int)uVar15 * 8);
      if (2 < uVar3 + ~uVar15) {
        iVar17 = (uVar3 - uVar15) - uVar4;
        puVar21 = puVar12;
        puVar24 = puVar23;
        do {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
          puVar12 = puVar21 + 4;
          puVar23 = puVar24 + 4;
          iVar17 = iVar17 + -4;
          puVar24[3] = puVar21[3];
          puVar21 = puVar12;
          puVar24 = puVar23;
        } while (iVar17 != 0);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar23 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar23 = puVar23 + 1;
      }
    }
    *(uint *)(param_1 + 0x128) = uVar3;
  }
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  uVar16 = *(undefined8 *)(param_2 + 0x14f);
  uVar18 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x148) = uVar18;
  *(undefined8 *)(param_1 + 0x14f) = uVar16;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  uVar16 = *(undefined8 *)(param_2 + 0x170);
  uVar18 = *(undefined8 *)(param_2 + 0x178);
  uVar22 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = uVar22;
  *(undefined8 *)(param_1 + 0x170) = uVar16;
  *(undefined8 *)(param_1 + 0x178) = uVar18;
  uVar22 = *(undefined8 *)(param_2 + 0x1a0);
  uVar16 = *(undefined8 *)(param_2 + 400);
  uVar18 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a5) = *(undefined8 *)(param_2 + 0x1a5);
  *(undefined8 *)(param_1 + 0x198) = uVar18;
  *(undefined8 *)(param_1 + 0x1a0) = uVar22;
  *(undefined8 *)(param_1 + 400) = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x158);
  uVar18 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = uVar18;
  *(undefined8 *)(param_1 + 0x158) = uVar16;
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar16 = *(undefined8 *)(param_2 + 0x1b8);
  uVar18 = *(undefined8 *)(param_2 + 0x1c0);
  uVar22 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar22;
  *(undefined8 *)(param_1 + 0x1b8) = uVar16;
  *(undefined8 *)(param_1 + 0x1c0) = uVar18;
  if (param_2 != param_1) {
    iVar17 = *(int *)(param_2 + 0x1e0);
    pvVar26 = *(void **)(param_2 + 0x1d8);
    pvVar13 = *(void **)(param_1 + 0x1d8);
    if ((int)(*(uint *)(param_1 + 0x1e4) & 0x3fffffff) < iVar17) {
      pvVar13 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar17,0x10,pvVar13,
                                     *(undefined4 *)(param_1 + 0x1e0),param_1 + 0x1e4);
      *(void **)(param_1 + 0x1d8) = pvVar13;
    }
    memcpy(pvVar13,pvVar26,(long)iVar17 << 4);
    *(int *)(param_1 + 0x1e0) = iVar17;
  }
  *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_2 + 0x1e8);
  puVar8 = PTR_PTR_0434a080;
  uVar27 = *(ulong *)(param_1 + 0x1f0);
  pcVar28 = (char *)(*(ulong *)(param_2 + 0x1f0) & 0xfffffffffffffffe);
  if ((char *)(uVar27 & 0xfffffffffffffffe) != pcVar28) {
    if (pcVar28 == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    else {
      sVar11 = strlen(pcVar28);
      uVar15 = (int)sVar11 + 1;
      puVar12 = (undefined8 *)
                (**(code **)(*(long *)puVar8 + 0x10))
                          (puVar8,(long)((sVar11 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar12 = puVar8;
      *(uint *)(puVar12 + 1) = uVar15;
      memcpy(puVar12 + 2,pcVar28,(ulong)uVar15);
      *(ulong *)(param_1 + 0x1f0) = (ulong)(puVar12 + 2) | 1;
    }
    if ((uVar27 & 1) != 0) {
      lVar31 = tpidr_el0;
      lVar9 = *(long *)(lVar31 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar31 + 0x38d490) = lVar9;
      }
      plVar29 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      *(undefined8 *)(uVar27 - 0x11) = 0;
      (**(code **)(*plVar29 + 0x18))
                (plVar29,(undefined8 *)(uVar27 - 0x11),(long)*(int *)(uVar27 - 9) + 0x10);
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = uVar16;
  puVar8 = PTR_PTR_0434a080;
  uVar27 = *(ulong *)(param_1 + 0x208);
  pcVar28 = (char *)(*(ulong *)(param_2 + 0x208) & 0xfffffffffffffffe);
  plVar29 = (long *)PTR_PTR_0434a080;
  if ((char *)(uVar27 & 0xfffffffffffffffe) != pcVar28) {
    if (pcVar28 == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    else {
      sVar11 = strlen(pcVar28);
      uVar15 = (int)sVar11 + 1;
      puVar12 = (undefined8 *)
                (**(code **)(*(long *)puVar8 + 0x10))
                          (puVar8,(long)((sVar11 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar12 = puVar8;
      *(uint *)(puVar12 + 1) = uVar15;
      memcpy(puVar12 + 2,pcVar28,(ulong)uVar15);
      *(ulong *)(param_1 + 0x208) = (ulong)(puVar12 + 2) | 1;
    }
    plVar29 = (long *)PTR_PTR_0434a080;
    if ((uVar27 & 1) != 0) {
      lVar31 = tpidr_el0;
      lVar9 = *(long *)(lVar31 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar31 + 0x38d490) = lVar9;
      }
      plVar29 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      *(undefined8 *)(uVar27 - 0x11) = 0;
      (**(code **)(*plVar29 + 0x18))
                (plVar29,(undefined8 *)(uVar27 - 0x11),(long)*(int *)(uVar27 - 9) + 0x10);
      plVar29 = (long *)PTR_PTR_0434a080;
    }
  }
  if (param_2 == param_1) {
    PTR_PTR_0434a080 = (undefined *)plVar29;
    return param_1;
  }
  uVar3 = *(uint *)(param_2 + 0x218);
  lVar31 = *(long *)(param_2 + 0x210);
  uVar15 = *(uint *)(param_1 + 0x21c) & 0x3fffffff;
  PTR_PTR_0434a080 = (undefined *)plVar29;
  if ((int)uVar3 <= (int)uVar15) goto LAB_0325ade4;
  lVar9 = *(long *)(param_1 + 0x210);
  uVar4 = *(uint *)(param_1 + 0x218);
  uVar27 = (ulong)uVar4;
  local_88 = 0xf0;
  local_90 = (long)(int)uVar3 * 0xf0;
  local_84 = uVar3;
  if ((int)uVar3 < 0) {
    local_80 = 2;
    local_78 = &DAT_0411b3a0;
    local_70 = &local_84;
    puStack_68 = &local_88;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_80);
    if ((int)uVar15 <= (int)local_84) goto LAB_0325abc8;
LAB_0325abd4:
    local_80 = 1;
    local_70 = &local_84;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
  }
  else {
    if ((int)uVar3 < (int)uVar15) goto LAB_0325abd4;
LAB_0325abc8:
    if (0x3fffffff < (int)local_84) goto LAB_0325abd4;
  }
  uVar15 = *(uint *)(param_1 + 0x21c);
  lVar19 = (**(code **)(*plVar29 + 0x10))(plVar29,local_90,&local_90);
  if (0 < (int)uVar4) {
    uVar25 = 0;
    do {
      lVar20 = *(long *)(lVar9 + uVar25 * 0xf0);
      *(long *)(lVar19 + uVar25 * 0xf0) = lVar20;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
        plVar10 = (long *)(lVar20 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = *plVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar20 = lVar9 + uVar25 * 0xf0;
      lVar2 = lVar19 + uVar25 * 0xf0;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar20 + 8);
      uVar16 = *(undefined8 *)(lVar20 + 0x10);
      uVar18 = *(undefined8 *)(lVar20 + 0x18);
      uVar22 = *(undefined8 *)(lVar20 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar20 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = uVar22;
      *(undefined8 *)(lVar2 + 0x10) = uVar16;
      *(undefined8 *)(lVar2 + 0x18) = uVar18;
      uVar22 = *(undefined8 *)(lVar20 + 0x40);
      uVar16 = *(undefined8 *)(lVar20 + 0x30);
      uVar18 = *(undefined8 *)(lVar20 + 0x38);
      *(undefined1 *)(lVar2 + 0x48) = *(undefined1 *)(lVar20 + 0x48);
      *(undefined8 *)(lVar2 + 0x38) = uVar18;
      *(undefined8 *)(lVar2 + 0x40) = uVar22;
      *(undefined8 *)(lVar2 + 0x30) = uVar16;
      uVar16 = *(undefined8 *)(lVar20 + 0x50);
      uVar18 = *(undefined8 *)(lVar20 + 0x60);
      *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar20 + 0x58);
      *(undefined8 *)(lVar2 + 0x60) = uVar18;
      *(undefined8 *)(lVar2 + 0x50) = uVar16;
      uVar16 = *(undefined8 *)(lVar20 + 0x68);
      uVar18 = *(undefined8 *)(lVar20 + 0x70);
      uVar22 = *(undefined8 *)(lVar20 + 0x80);
      *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar20 + 0x78);
      *(undefined8 *)(lVar2 + 0x80) = uVar22;
      *(undefined8 *)(lVar2 + 0x68) = uVar16;
      *(undefined8 *)(lVar2 + 0x70) = uVar18;
      uVar22 = *(undefined8 *)(lVar20 + 0x98);
      uVar16 = *(undefined8 *)(lVar20 + 0x88);
      uVar18 = *(undefined8 *)(lVar20 + 0x90);
      *(undefined8 *)(lVar2 + 0x9d) = *(undefined8 *)(lVar20 + 0x9d);
      *(undefined8 *)(lVar2 + 0x90) = uVar18;
      *(undefined8 *)(lVar2 + 0x98) = uVar22;
      *(undefined8 *)(lVar2 + 0x88) = uVar16;
      FUN_0326a000(lVar2 + 0xa8,lVar20 + 0xa8);
      uVar5 = *(undefined1 *)(lVar20 + 0xe0);
      *(ulong *)(lVar2 + 0xe8) = 0;
      *(undefined1 *)(lVar2 + 0xe0) = uVar5;
      pcVar28 = (char *)(*(ulong *)(lVar20 + 0xe8) & 0xfffffffffffffffe);
      if (pcVar28 != (char *)0x0) {
        sVar11 = strlen(pcVar28);
        uVar4 = (int)sVar11 + 1;
        puVar12 = (undefined8 *)
                  (**(code **)(*plVar29 + 0x10))
                            (plVar29,(long)((sVar11 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar12 = plVar29;
        *(uint *)(puVar12 + 1) = uVar4;
        memcpy(puVar12 + 2,pcVar28,(ulong)uVar4);
        *(ulong *)(lVar2 + 0xe8) = (ulong)(puVar12 + 2) | 1;
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar27);
    lVar20 = lVar9;
    do {
      FUN_032677cc(lVar20);
      uVar27 = uVar27 - 1;
      lVar20 = lVar20 + 0xf0;
    } while (uVar27 != 0);
  }
  if (-1 < (int)uVar15) {
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar9,((ulong)uVar15 & 0x3fffffff) * 0xf0);
  }
  if (local_90 < 0x3bffffff10) {
    uVar14 = (undefined4)(local_90 / 0xf0);
  }
  else {
    uVar14 = 0x3fffffff;
  }
  *(undefined4 *)(param_1 + 0x21c) = uVar14;
  *(long *)(param_1 + 0x210) = lVar19;
LAB_0325ade4:
  uVar15 = *(uint *)(param_1 + 0x218);
  if ((int)uVar3 < (int)uVar15) {
    lVar19 = (long)(int)uVar15 * 0xf0 + *(long *)(param_1 + 0x210);
    lVar9 = (long)(int)uVar15 * -0xf0 + (long)(int)uVar3 * 0xf0;
    do {
      lVar19 = lVar19 + -0xf0;
      FUN_032677cc(lVar19);
      lVar9 = lVar9 + 0xf0;
    } while (lVar9 != 0);
    uVar15 = *(uint *)(param_1 + 0x218);
  }
  lVar9 = *(long *)(param_1 + 0x210);
  if ((int)uVar3 <= (int)uVar15) {
    uVar15 = uVar3;
  }
  if ((lVar9 != lVar31) && (0 < (int)uVar15)) {
    uVar27 = (ulong)uVar15;
    lVar19 = lVar31;
    do {
      FUN_0325b344(lVar9,lVar19);
      uVar27 = uVar27 - 1;
      lVar9 = lVar9 + 0xf0;
      lVar19 = lVar19 + 0xf0;
    } while (uVar27 != 0);
    lVar9 = *(long *)(param_1 + 0x210);
  }
  if (0 < (int)(uVar3 - uVar15)) {
    iVar17 = 0;
    plVar10 = (long *)(lVar9 + (long)(int)uVar15 * 0xf0);
    plVar30 = (long *)(lVar31 + (long)(int)uVar15 * 0xf0);
    do {
      lVar31 = *plVar30;
      *plVar10 = lVar31;
      if ((lVar31 != 0) && (*(long *)(lVar31 + 8) != 0)) {
        plVar1 = (long *)(lVar31 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar10[1] = plVar30[1];
      lVar31 = plVar30[2];
      lVar9 = plVar30[3];
      lVar19 = plVar30[5];
      plVar10[4] = plVar30[4];
      plVar10[5] = lVar19;
      plVar10[2] = lVar31;
      plVar10[3] = lVar9;
      lVar19 = plVar30[8];
      lVar31 = plVar30[6];
      lVar9 = plVar30[7];
      *(char *)(plVar10 + 9) = (char)plVar30[9];
      plVar10[7] = lVar9;
      plVar10[8] = lVar19;
      plVar10[6] = lVar31;
      lVar31 = plVar30[10];
      lVar9 = plVar30[0xc];
      plVar10[0xb] = plVar30[0xb];
      plVar10[0xc] = lVar9;
      plVar10[10] = lVar31;
      lVar31 = plVar30[0xd];
      lVar9 = plVar30[0xe];
      lVar19 = plVar30[0x10];
      plVar10[0xf] = plVar30[0xf];
      plVar10[0x10] = lVar19;
      plVar10[0xd] = lVar31;
      plVar10[0xe] = lVar9;
      lVar19 = plVar30[0x13];
      lVar31 = plVar30[0x11];
      lVar9 = plVar30[0x12];
      *(undefined8 *)((long)plVar10 + 0x9d) = *(undefined8 *)((long)plVar30 + 0x9d);
      plVar10[0x12] = lVar9;
      plVar10[0x13] = lVar19;
      plVar10[0x11] = lVar31;
      FUN_0326a000(plVar10 + 0x15,plVar30 + 0x15);
      *(char *)(plVar10 + 0x1c) = (char)plVar30[0x1c];
      plVar10[0x1d] = 0;
      pcVar28 = (char *)(plVar30[0x1d] & 0xfffffffffffffffe);
      if (pcVar28 != (char *)0x0) {
        sVar11 = strlen(pcVar28);
        uVar4 = (int)sVar11 + 1;
        puVar12 = (undefined8 *)
                  (**(code **)(*plVar29 + 0x10))
                            (plVar29,(long)((sVar11 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar12 = plVar29;
        *(uint *)(puVar12 + 1) = uVar4;
        memcpy(puVar12 + 2,pcVar28,(ulong)uVar4);
        plVar10[0x1d] = (ulong)(puVar12 + 2) | 1;
      }
      iVar17 = iVar17 + 1;
      plVar10 = plVar10 + 0x1e;
      plVar30 = plVar30 + 0x1e;
    } while (iVar17 != uVar3 - uVar15);
  }
  *(uint *)(param_1 + 0x218) = uVar3;
  return param_1;
}


