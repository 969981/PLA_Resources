/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c7a74; name: FUN_018c7a74
 */


void FUN_018c7a74(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  uint local_1f4;
  uint local_1e8;
  int local_1e4;
  long *local_1e0;
  undefined8 *puStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined8 local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  ulong local_c0;
  char *local_b8;
  ulong local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 *local_88;
  ulong local_80;
  undefined8 uStack_78;
  long *local_70 [2];
  
  if ((*param_1 != 0) && (FUN_018c8968(local_70), local_70[0] != (long *)0x0)) {
    local_1c0 = 0x48dcb53ef45c3f59;
    pcStack_1b8 = "WSYS_BANDIT_RESPAWN_COUNT";
    local_1b0 = 0x19;
    local_1a8 = (long *)0x0;
    iVar11 = FUN_010f5878(local_70[0],&local_1c0);
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    plVar1 = local_70[0];
    if (iVar11 == 0) {
      local_88 = &DAT_f4b17a579f18960;
      local_80 = 0x82a2b175229d6a5b;
      uStack_78 = 0;
      uVar13 = FUN_00db8524();
      FUN_00db8508(&local_88,uVar13);
      puVar7 = PTR_DAT_04379660;
      local_1b0 = 0xd;
      local_1a8 = (long *)0x0;
      local_1c0 = 0x9b413883d77f38ca;
      pcStack_1b8 = "bandit_config";
      local_c0 = 0x195df269e2bb542;
      local_b8 = "map_num";
      local_b0 = 7;
      local_a8 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar9 = PTR_DAT_04379670;
      puVar8 = PTR_DAT_04379668;
      uVar13 = *(undefined8 *)PTR_DAT_04379668;
      *(undefined8 *)PTR_DAT_04379670 = uVar13;
      FUN_00d7d9e4(&local_1e0,uVar13,&local_1c0);
      if (local_1e0 == (long *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_00d78f50(local_1e0,&local_c0);
        if (local_1e0 != (long *)0x0) {
          plVar1 = local_1e0 + 10;
          do {
            iVar12 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_1e0 + 0x10))();
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      local_1b0 = 0xd;
      local_1a8 = (long *)0x0;
      local_c0 = 0x11048cbbcfe03c7c;
      local_b8 = "bandit_num";
      local_1c0 = 0x9b413883d77f38ca;
      pcStack_1b8 = "bandit_config";
      local_b0 = 10;
      local_a8 = (long *)0x0;
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar13 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar13;
      FUN_00d7d9e4(&local_1e0,uVar13,&local_1c0);
      if (local_1e0 == (long *)0x0) {
        local_1e4 = 0;
      }
      else {
        local_1e4 = FUN_00d78f50(local_1e0,&local_c0);
        if (local_1e0 != (long *)0x0) {
          plVar1 = local_1e0 + 10;
          do {
            iVar12 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_1e0 + 0x10))();
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      local_1b0 = 0xd;
      local_1a8 = (long *)0x0;
      local_c0 = 0x4239d6a3fcf573e;
      local_b8 = "align_probability";
      local_1c0 = 0x9b413883d77f38ca;
      pcStack_1b8 = "bandit_config";
      local_b0 = 0x11;
      local_a8 = (long *)0x0;
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar13 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar13;
      FUN_00d7d9e4(&local_1e0,uVar13,&local_1c0);
      if (local_1e0 == (long *)0x0) {
        local_1f4 = 0;
      }
      else {
        local_1f4 = FUN_00d78f50(local_1e0,&local_c0);
        if (local_1e0 != (long *)0x0) {
          plVar1 = local_1e0 + 10;
          do {
            iVar12 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_1e0 + 0x10))();
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      local_1b0 = 0xd;
      local_1a8 = (long *)0x0;
      local_c0 = 0xc4c57896670039aa;
      local_b8 = "spawn_pattern_num";
      local_1c0 = 0x9b413883d77f38ca;
      pcStack_1b8 = "bandit_config";
      local_b0 = 0x11;
      local_a8 = (long *)0x0;
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar13 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar13;
      FUN_00d7d9e4(&local_1e0,uVar13,&local_1c0);
      if (local_1e0 == (long *)0x0) {
        local_1e8 = 0;
      }
      else {
        local_1e8 = FUN_00d78f50(local_1e0,&local_c0);
        if (local_1e0 != (long *)0x0) {
          plVar1 = local_1e0 + 10;
          do {
            iVar12 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_1e0 + 0x10))();
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      local_a8 = (long *)param_1[2];
      local_90 = 0;
      local_c0 = 0;
      local_b8 = (char *)0x0;
      local_a0 = 0x3fffffffffffffff;
      uStack_98 = 0;
      local_b0 = 0;
      FUN_01663fa8(&local_c0,iVar11);
      if (iVar11 != 0) {
        iVar12 = 0;
        do {
          iVar24 = iVar12 + 1;
          snprintf((char *)&local_1c0,0x100,"FSYS_BANDIT_ENABLE_AREA%02d",iVar24);
          local_1e0 = (long *)&DAT_cbf29ce484222645;
          if ((byte)local_1c0 != 0) {
            local_1e0 = (long *)&DAT_cbf29ce484222645;
            pbVar18 = (byte *)((ulong)&local_1c0 | 1);
            bVar4 = (byte)local_1c0;
            do {
              local_1e0 = (long *)(((ulong)local_1e0 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar4 != 0);
          }
          local_1d0 = 0xff;
          local_1c8 = (long *)0x0;
          puStack_1d8 = &local_1c0;
          uVar14 = FUN_010f4bb4(local_70[0],&local_1e0);
          if (local_1c8 != (long *)0x0) {
            (**(code **)(*local_1c8 + 0x20))();
          }
          if ((uVar14 & 1) != 0) {
            local_1e0 = (long *)CONCAT44(local_1e0._4_4_,iVar12);
            if (local_b8 < local_b0) {
              FUN_01665cfc(&local_a8,local_b8,&local_1e0);
              local_b8 = (char *)((long)local_b8 + 4);
            }
            else {
              FUN_018c8b20(&local_c0,&local_1e0);
            }
          }
          iVar12 = iVar24;
        } while (iVar24 != iVar11);
      }
      do {
        uVar14 = (ulong)local_88 ^ local_80;
        iVar12 = (int)local_80;
        local_80 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar2 = (int)local_88 + iVar12 & 0x7f;
        local_88 = (undefined1 *)
                   (uVar14 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^ uVar14 << 0x10);
      } while (99 < uVar2);
      if ((local_1e4 != 0) && (iVar11 != 0)) {
        iVar12 = 0;
        do {
          iVar24 = 0;
          iVar12 = iVar12 + 1;
          do {
            iVar24 = iVar24 + 1;
            snprintf((char *)&local_1c0,0x100,"WSYS_BANDIT_%01d_AREA%02d",iVar12,iVar24);
            local_1e0 = (long *)&DAT_cbf29ce484222645;
            if ((byte)local_1c0 != 0) {
              local_1e0 = (long *)&DAT_cbf29ce484222645;
              pbVar18 = (byte *)((ulong)&local_1c0 | 1);
              bVar4 = (byte)local_1c0;
              do {
                local_1e0 = (long *)(((ulong)local_1e0 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (bVar4 != 0);
            }
            local_1d0 = 0xff;
            local_1c8 = (long *)0x0;
            puStack_1d8 = &local_1c0;
            FUN_010f4ab0(local_70[0],&local_1e0,0);
            if (local_1c8 != (long *)0x0) {
              (**(code **)(*local_1c8 + 0x20))();
            }
          } while (iVar24 != iVar11);
        } while (iVar12 != local_1e4);
      }
      lVar22 = (long)local_b8 - local_c0;
      if (lVar22 != 0) {
        if (uVar2 < local_1f4) {
          if (lVar22 == 4) {
            uVar14 = 0;
          }
          else {
            uVar14 = lVar22 >> 2;
            lVar22 = 0x3f;
            if ((0x7fffffffffffffffU >> (LZCOUNT(uVar14) & 0x3fU) & uVar14) != 0) {
              lVar22 = 0x40;
            }
            uVar15 = lVar22 - LZCOUNT(uVar14);
            uVar23 = uVar15 >> 6;
            if ((uVar15 & 0x3f) != 0) {
              uVar23 = uVar23 + 1;
            }
            if (uVar15 < uVar23) {
              uVar23 = 0;
            }
            else {
              uVar16 = 0;
              if (uVar23 != 0) {
                uVar16 = uVar15 / uVar23;
              }
              uVar23 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
            }
            do {
              uVar15 = (ulong)local_88 ^ local_80;
              puVar19 = local_88 + local_80;
              local_80 = uVar15 >> 0x1b | uVar15 << 0x25;
              local_88 = (undefined1 *)
                         (uVar15 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                         uVar15 << 0x10);
            } while (uVar14 <= ((ulong)puVar19 & uVar23));
            uVar14 = (ulong)puVar19 & uVar23 & 0xffffffff;
          }
          if (local_1e4 != 0) {
            uVar3 = *(undefined4 *)(local_c0 + uVar14 * 4);
            lVar22 = 0x1f;
            if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(local_1e8) & 0x1f) & local_1e8) != 0) {
              lVar22 = 0x20;
            }
            uVar23 = lVar22 - LZCOUNT(local_1e8);
            uVar14 = uVar23 >> 6;
            if ((uVar23 & 0x3f) != 0) {
              uVar14 = uVar14 + 1;
            }
            if (local_1e8 == 1) {
              FUN_018c85ec(param_1,0,uVar3,0);
              if (((local_1e4 != 1) && (FUN_018c85ec(param_1,1,uVar3,0), local_1e4 != 2)) &&
                 (FUN_018c85ec(param_1,2,uVar3,0), local_1e4 != 3)) {
                iVar11 = 3;
                do {
                  FUN_018c85ec(param_1,iVar11,uVar3,0);
                  iVar11 = iVar11 + 1;
                } while (local_1e4 != iVar11);
              }
            }
            else {
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar23 / uVar14;
              }
              iVar11 = 0;
              do {
                if (local_1e8 == 0) {
                  uVar16 = (ulong)(uint)((int)local_80 + (int)local_88);
                  local_80 = local_80 ^ (ulong)local_88;
                  local_88 = (undefined1 *)
                             (local_80 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                             local_80 << 0x10);
                  local_80 = local_80 >> 0x1b | local_80 << 0x25;
                }
                else if (local_1e8 == 1) {
                  uVar16 = 0;
                }
                else {
                  if (uVar23 < uVar14) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = 0xffffffffffffffff >> (-uVar15 & 0x3f);
                  }
                  do {
                    uVar21 = (ulong)local_88 ^ local_80;
                    uVar16 = (ulong)(local_88 + local_80) & uVar20;
                    local_88 = (undefined1 *)
                               (uVar21 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                               uVar21 << 0x10);
                    local_80 = uVar21 >> 0x1b | uVar21 << 0x25;
                  } while (local_1e8 <= (uint)uVar16);
                }
                FUN_018c85ec(param_1,iVar11,uVar3,uVar16);
                iVar11 = iVar11 + 1;
              } while (iVar11 != local_1e4);
            }
          }
        }
        else if (local_1e4 != 0) {
          lVar22 = 0x1f;
          if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(local_1e8) & 0x1f) & local_1e8) != 0) {
            lVar22 = 0x20;
          }
          uVar23 = lVar22 - LZCOUNT(local_1e8);
          uVar14 = uVar23 >> 6;
          iVar11 = 0;
          if ((uVar23 & 0x3f) != 0) {
            uVar14 = uVar14 + 1;
          }
          lVar22 = (long)local_b8 - local_c0;
          if (lVar22 != 0) goto LAB_018c82a4;
          do {
            puVar19 = local_88 + local_80;
            local_80 = local_80 ^ (ulong)local_88;
            local_88 = (undefined1 *)
                       (local_80 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                       local_80 << 0x10);
            local_80 = local_80 >> 0x1b | local_80 << 0x25;
            while( true ) {
              if (local_1e8 == 0) {
                uVar15 = (ulong)(uint)((int)local_80 + (int)local_88);
                local_80 = local_80 ^ (ulong)local_88;
                local_88 = (undefined1 *)
                           (local_80 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                           local_80 << 0x10);
                local_80 = local_80 >> 0x1b | local_80 << 0x25;
              }
              else if (local_1e8 == 1) {
                uVar15 = 0;
              }
              else {
                if (uVar23 < uVar14) {
                  uVar16 = 0;
                }
                else {
                  uVar15 = 0;
                  if (uVar14 != 0) {
                    uVar15 = uVar23 / uVar14;
                  }
                  uVar16 = 0xffffffffffffffff >> (-uVar15 & 0x3f);
                }
                do {
                  uVar20 = (ulong)local_88 ^ local_80;
                  uVar15 = (ulong)(local_88 + local_80) & uVar16;
                  local_88 = (undefined1 *)
                             (uVar20 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                             uVar20 << 0x10);
                  local_80 = uVar20 >> 0x1b | uVar20 << 0x25;
                } while (local_1e8 <= (uint)uVar15);
              }
              FUN_018c85ec(param_1,iVar11,
                           *(undefined4 *)(local_c0 + ((ulong)puVar19 & 0xffffffff) * 4),uVar15);
              iVar11 = iVar11 + 1;
              if (iVar11 == local_1e4) goto LAB_018c8540;
              lVar22 = (long)local_b8 - local_c0;
              if (lVar22 == 0) break;
LAB_018c82a4:
              if (lVar22 == 4) {
                puVar19 = (undefined1 *)0x0;
              }
              else {
                puVar17 = (undefined1 *)(lVar22 >> 2);
                lVar22 = 0x3f;
                if ((0x7fffffffffffffffU >> (LZCOUNT(puVar17) & 0x3fU) & (ulong)puVar17) != 0) {
                  lVar22 = 0x40;
                }
                uVar16 = lVar22 - LZCOUNT(puVar17);
                uVar15 = uVar16 >> 6;
                if ((uVar16 & 0x3f) != 0) {
                  uVar15 = uVar15 + 1;
                }
                if (uVar16 < uVar15) {
                  uVar15 = 0;
                }
                else {
                  uVar20 = 0;
                  if (uVar15 != 0) {
                    uVar20 = uVar16 / uVar15;
                  }
                  uVar15 = 0xffffffffffffffff >> (-uVar20 & 0x3f);
                }
                do {
                  uVar16 = (ulong)local_88 ^ local_80;
                  puVar19 = local_88 + local_80;
                  local_80 = uVar16 >> 0x1b | uVar16 << 0x25;
                  puVar19 = (undefined1 *)((ulong)puVar19 & uVar15);
                  local_88 = (undefined1 *)
                             (uVar16 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^
                             uVar16 << 0x10);
                } while (puVar17 <= puVar19);
              }
            }
          } while( true );
        }
      }
LAB_018c8540:
      plVar10 = local_a8;
      uVar14 = local_c0;
      plVar1 = local_70[0];
      if (local_c0 != 0) {
        local_b8 = (char *)local_c0;
        lVar22 = local_b0 - local_c0;
        uVar23 = FUN_02bcc75c(local_a8);
        if ((uVar23 & 1) == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,uVar14,lVar22,4);
          plVar1 = local_70[0];
        }
        else {
          FUN_02bcc824(plVar10,uVar14,lVar22,4);
          plVar1 = local_70[0];
        }
      }
    }
    if ((plVar1 != (long *)0x0) && (uVar14 = FUN_02a43a5c(plVar1[0xb]), (uVar14 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  return;
}


