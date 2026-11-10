/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a9bac; name: FUN_016a9bac
 */


void FUN_016a9bac(undefined1 *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  ushort *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 uVar18;
  ulong uVar19;
  byte *pbVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  int *piVar24;
  long lVar25;
  undefined1 *puVar26;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  char *pcStack_1b0;
  size_t local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  char *pcStack_190;
  size_t local_188;
  long *local_180;
  undefined1 *local_178;
  char *pcStack_170;
  size_t local_168;
  long *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined8 local_148;
  long *local_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined8 local_128;
  long *local_120;
  undefined1 *local_118;
  undefined1 *local_110 [4];
  undefined1 local_f0 [4];
  undefined4 local_ec;
  byte local_e8 [8];
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  
  uVar12 = *param_3;
  if ((uVar12 != 0xc0ea47549ab5f3d9) && (uVar16 = *(ulong *)(param_2 + 0xa0), uVar16 != 0)) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar22 = uVar16 - 1 & uVar12;
    }
    else if (uVar12 < uVar16) {
      uVar22 = uVar12;
    }
    else {
      uVar22 = 0;
      if (uVar16 != 0) {
        uVar22 = uVar12 / uVar16;
      }
      uVar22 = uVar12 - uVar22 * uVar16;
    }
    plVar21 = *(long **)(*(long *)(param_2 + 0x98) + uVar22 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == uVar12) {
            if (plVar21[2] == uVar12) goto LAB_016a9ce4;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar22) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == uVar12) {
            if (plVar21[2] == uVar12) goto LAB_016a9ce4;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar7 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_016a9e24:
  *param_1 = 0;
  return;
LAB_016a9ce4:
  if ((undefined1 *)plVar21[3] == &DAT_cbf29ce484222645) goto LAB_016a9e24;
  piVar24 = (int *)plVar21[5];
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  plVar21 = *(long **)(lVar13 + 0x290);
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar12 = plVar21[0xe];
  if (uVar12 == 0) {
    uVar17 = 0;
    uVar16 = 0;
  }
  else {
    uVar16 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar19 = *param_3;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar22 = uVar12 - 1 & uVar19;
    }
    else if (uVar19 < uVar12) {
      uVar22 = uVar19;
    }
    else {
      uVar22 = 0;
      if (uVar12 != 0) {
        uVar22 = uVar19 / uVar12;
      }
      uVar22 = uVar19 - uVar22 * uVar12;
    }
    plVar23 = *(long **)(plVar21[0xd] + uVar22 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar23[1] == uVar19) {
            if (plVar23[2] == uVar19) goto LAB_016a9e78;
          }
          else if ((plVar23[1] & uVar12 - 1) != uVar22) goto LAB_016a9e18;
          plVar23 = (long *)*plVar23;
          uVar17 = 0;
          uVar16 = 0;
        } while (plVar23 != (long *)0x0);
        goto LAB_016a9eb0;
      }
      do {
        uVar16 = plVar23[1];
        if (uVar16 == uVar19) {
          if (plVar23[2] == uVar19) goto LAB_016a9e78;
        }
        else {
          if (uVar12 <= uVar16) {
            uVar7 = 0;
            if (uVar12 != 0) {
              uVar7 = uVar16 / uVar12;
            }
            uVar16 = uVar16 - uVar7 * uVar12;
          }
          if (uVar16 != uVar22) break;
        }
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
LAB_016a9e18:
    uVar17 = 0;
    uVar16 = 0;
  }
  goto LAB_016a9eb0;
LAB_016a9e78:
  uVar17 = (uint)*(byte *)(plVar23 + 3);
  uVar1 = *(byte *)(plVar23 + 3) + 1;
  if ((uVar1 & 0xff) < 3) {
    uVar12 = -((ulong)(uVar1 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar1 & 0xff) << 2;
    uVar17 = *(uint *)(&DAT_03a7c4e4 + uVar12);
    uVar16 = (ulong)*(uint *)(&DAT_03a7c4d8 + uVar12);
  }
  else {
    uVar16 = 1;
  }
LAB_016a9eb0:
  if (*(ushort *)((long)piVar24 - (long)*piVar24) < 0x15) {
    puVar14 = (uint *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[10];
    puVar14 = (uint *)0x0;
    if (uVar12 != 0) {
      puVar14 = (uint *)((long)piVar24 + uVar12);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
    }
  }
  if ((int)uVar16 != 0) {
    if (*puVar14 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        if (puVar14[uVar16 + 1] == uVar17 && (puVar14[uVar16 + 1] & 0xff) != 0) break;
        uVar16 = uVar16 + 1;
      } while (*puVar14 != uVar16);
    }
  }
  local_110[0] = &DAT_cbf29ce484222645;
  local_110[1] = &DAT_cbf29ce484222645;
  local_ec = 0;
  local_e8[0] = 0;
  local_f0[0] = 0;
  local_bc = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_8c = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_110[2] = (undefined1 *)0x0;
  local_110[3] = (undefined1 *)0x0;
  local_e0 = &DAT_cbf29ce484222645;
  puStack_d8 = &DAT_cbf29ce484222645;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b0 = &DAT_cbf29ce484222645;
  puStack_a8 = &DAT_cbf29ce484222645;
  local_a0 = 0;
  uStack_98 = 0;
  if ((4 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar12 != 0)) {
    lVar13 = *(long *)((long)piVar24 + uVar12);
    uVar18 = 0;
    if ((lVar13 != -0x1b2f856691a10a18) && (lVar13 != -0x101ce9153310dc68)) {
      if (lVar13 != 0x68d97d277752b795) goto LAB_016aa4b0;
      uVar18 = 1;
    }
    local_7c = uVar18;
    if (((0x1c < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
        (uVar12 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[0xe], uVar12 != 0)) &&
       (puVar3 = (uint *)((long)piVar24 + uVar12), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
       puVar3 != (uint *)0x0)) {
      if ((uint)uVar16 < *puVar3) {
        uVar17 = 0;
        uVar12 = uVar16 & 0xffffffff;
        while (uVar17 < 3) {
          piVar24 = (int *)((long)(puVar3 + uVar12 + 1) + (ulong)puVar3[uVar12 + 1]);
          puVar15 = (ushort *)((long)piVar24 - (long)*piVar24);
          if (*puVar15 < 7) {
            puVar26 = (undefined1 *)0x0;
            local_118 = (undefined1 *)0x0;
            if (4 < *puVar15) goto LAB_016aa06c;
          }
          else {
            if ((ulong)puVar15[3] == 0) {
              puVar26 = (undefined1 *)0x0;
              uVar5 = puVar15[2];
            }
            else {
              puVar26 = *(undefined1 **)((long)piVar24 + (ulong)puVar15[3]);
LAB_016aa06c:
              uVar5 = puVar15[2];
            }
            if ((ulong)uVar5 == 0) {
              local_118 = (undefined1 *)0x0;
            }
            else {
              local_118 = *(undefined1 **)((long)piVar24 + (ulong)uVar5);
            }
          }
          local_1b8 = &DAT_cbf29ce484222645;
          pcStack_1b0 = "";
          local_1a8 = 0;
          local_1a0 = (long *)0x0;
          local_198 = &DAT_cbf29ce484222645;
          pcStack_190 = "";
          local_188 = 0;
          local_180 = (long *)0x0;
          local_178 = &DAT_cbf29ce484222645;
          pcStack_170 = "";
          local_168 = 0;
          local_160 = (long *)0x0;
          local_158 = &DAT_cbf29ce484222645;
          puStack_150 = &DAT_03996322;
          local_148 = 0;
          local_140 = (long *)0x0;
          local_138 = &DAT_cbf29ce484222645;
          puStack_130 = &DAT_03996322;
          local_128 = 0;
          local_120 = (long *)0x0;
          if (*(ushort *)((long)piVar24 - (long)*piVar24) < 0xd) {
            local_1c8 = 0;
          }
          else {
            uVar16 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[6];
            local_1c8 = 0;
            if (uVar16 != 0) {
              local_1c8 = *(undefined8 *)((long)piVar24 + uVar16);
            }
          }
          if (*(ushort *)((long)piVar24 - (long)*piVar24) < 0xf) {
            local_1c0 = 0;
          }
          else {
            uVar16 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[7];
            local_1c0 = 0;
            if (uVar16 != 0) {
              local_1c0 = *(undefined8 *)((long)piVar24 + uVar16);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 0x11) ||
             (uVar16 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[8], uVar16 == 0)) {
            lVar13 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar24 + uVar16);
            lVar13 = (long)puVar4 + (ulong)*puVar4;
          }
          local_1a8 = strlen((char *)(lVar13 + 4));
          bVar9 = *(byte *)(lVar13 + 4);
          local_1b8 = &DAT_cbf29ce484222645;
          if (bVar9 != 0) {
            local_1b8 = &DAT_cbf29ce484222645;
            pbVar20 = (byte *)(lVar13 + 5);
            do {
              local_1b8 = (undefined1 *)(((ulong)local_1b8 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar9 != 0);
          }
          local_1a0 = (long *)0x0;
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 0x13) ||
             (uVar16 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[9], uVar16 == 0)) {
            lVar25 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar24 + uVar16);
            lVar25 = (long)puVar4 + (ulong)*puVar4;
          }
          pcStack_1b0 = (char *)(lVar13 + 4);
          local_188 = strlen((char *)(lVar25 + 4));
          bVar9 = *(byte *)(lVar25 + 4);
          local_198 = &DAT_cbf29ce484222645;
          if (bVar9 != 0) {
            local_198 = &DAT_cbf29ce484222645;
            pbVar20 = (byte *)(lVar25 + 5);
            do {
              local_198 = (undefined1 *)(((ulong)local_198 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar9 != 0);
          }
          uVar16 = (ulong)uVar17;
          local_180 = (long *)0x0;
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 0x15) ||
             (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[10], uVar19 == 0)) {
            lVar13 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar24 + uVar19);
            lVar13 = (long)puVar4 + (ulong)*puVar4;
          }
          pcStack_190 = (char *)(lVar25 + 4);
          local_168 = strlen((char *)(lVar13 + 4));
          bVar9 = *(byte *)(lVar13 + 4);
          local_178 = &DAT_cbf29ce484222645;
          if (bVar9 != 0) {
            local_178 = &DAT_cbf29ce484222645;
            pbVar20 = (byte *)(lVar13 + 5);
            do {
              local_178 = (undefined1 *)(((ulong)local_178 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar9 != 0);
          }
          local_160 = (long *)0x0;
          pcStack_170 = (char *)(lVar13 + 4);
          bVar9 = FUN_0165ff30(&local_1c8);
          local_e8[uVar16 * 0x30] = bVar9 & 1;
          if (*(ushort *)((long)piVar24 - (long)*piVar24) < 9) {
            bVar8 = false;
          }
          else {
            uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4];
            bVar8 = false;
            if (uVar19 != 0) {
              bVar8 = *(char *)((long)piVar24 + uVar19) != '\0';
            }
          }
          local_f0[uVar16 * 0x30] = bVar8;
          if (*(ushort *)((long)piVar24 - (long)*piVar24) < 0xb) {
            uVar18 = 0;
          }
          else {
            uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[5];
            uVar18 = 0;
            if (uVar19 != 0) {
              uVar18 = *(undefined4 *)((long)piVar24 + uVar19);
            }
          }
          *(undefined4 *)(local_f0 + uVar16 * 0x30 + 4) = uVar18;
          if (puVar26 == &DAT_cbf29ce484222645) {
            if ((local_118 != &DAT_cbf29ce484222645) &&
               (FUN_016a2b30(&local_1d0,*(undefined8 *)(param_2 + 0x1b0),&local_118), local_1d0 != 0
               )) {
              local_110[uVar16 * 6] = *(undefined1 **)(local_1d0 + 8);
              puVar26 = (undefined1 *)
                        CONCAT44((int)((ulong)local_110[uVar16 * 6 + 2] >> 0x20),
                                 *(undefined4 *)(local_1d0 + 0x10));
              local_110[uVar16 * 6 + 3] = local_110[uVar16 * 6 + 3];
              local_110[uVar16 * 6 + 2] = puVar26;
              local_110[uVar16 * 6 + 3] = (undefined1 *)(ulong)*(uint *)(local_1d0 + 0x14);
              local_110[uVar16 * 6 + 2] = puVar26;
              goto LAB_016aa2ac;
            }
          }
          else {
            local_110[uVar16 * 6] = puVar26;
            local_110[uVar16 * 6 + 1] = local_118;
LAB_016aa2ac:
            uVar17 = uVar17 + 1;
          }
          uVar16 = uVar12 + 1;
          if ((uVar16 < *puVar3) && (puVar14[uVar12 + 2] != 0)) {
            if (local_120 != (long *)0x0) {
              (**(code **)(*local_120 + 0x20))();
            }
            if (local_140 != (long *)0x0) {
              (**(code **)(*local_140 + 0x20))();
            }
            if (local_160 != (long *)0x0) {
              (**(code **)(*local_160 + 0x20))();
            }
            if (local_180 != (long *)0x0) {
              (**(code **)(*local_180 + 0x20))();
            }
            if (local_1a0 != (long *)0x0) {
              (**(code **)(*local_1a0 + 0x20))();
            }
            break;
          }
          if (local_120 != (long *)0x0) {
            (**(code **)(*local_120 + 0x20))();
          }
          if (local_140 != (long *)0x0) {
            (**(code **)(*local_140 + 0x20))();
          }
          if (local_160 != (long *)0x0) {
            (**(code **)(*local_160 + 0x20))();
          }
          if (local_180 != (long *)0x0) {
            (**(code **)(*local_180 + 0x20))();
          }
          if (local_1a0 != (long *)0x0) {
            (**(code **)(*local_1a0 + 0x20))();
          }
          uVar12 = uVar16;
          if (*puVar3 <= uVar16) break;
        }
      }
      else {
        uVar17 = 0;
      }
      local_80 = uVar17 == 0;
      memcpy(param_1 + 0x10,local_110,0xa0);
      *param_1 = 1;
      goto joined_r0x016aa4b4;
    }
  }
LAB_016aa4b0:
  *param_1 = 0;
joined_r0x016aa4b4:
  if (plVar21 == (long *)0x0) {
    return;
  }
  lVar13 = plVar21[0xb];
  piVar24 = (int *)(lVar13 + 0xc);
  do {
    iVar10 = *piVar24;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
    if (bVar8) {
      *piVar24 = iVar10 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
    return;
  }
  return;
}


