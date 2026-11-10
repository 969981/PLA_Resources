/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01694394; name: FUN_01694394
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01694394(long *param_1,long param_2,ulong *param_3)

{
  undefined *puVar1;
  char *__s;
  long *plVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  size_t sVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  ulong uVar33;
  byte *pbVar34;
  undefined1 *puVar35;
  ulong uVar36;
  byte *pbVar37;
  long *plVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  undefined8 *puVar42;
  uint *puVar43;
  uint *puVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  uint uVar48;
  ushort *puVar49;
  long local_150;
  long *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  byte *local_120;
  undefined1 *local_118;
  long *local_110;
  size_t local_108;
  long *local_100;
  undefined1 *local_f8;
  char *pcStack_f0;
  size_t local_e8;
  long *local_e0;
  undefined1 *local_d8;
  char *pcStack_d0;
  size_t local_c8;
  long *local_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  uVar31 = *(ulong *)(param_2 + 0x80);
  if (uVar31 != 0) {
    uVar36 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar36 = (uVar36 & 0x3333333333333333) + (uVar36 >> 2 & 0x3333333333333333);
    uVar26 = *param_3;
    uVar36 = (uVar36 + (uVar36 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar36 < 2) {
      uVar21 = uVar31 - 1 & uVar26;
    }
    else if (uVar26 < uVar31) {
      uVar21 = uVar26;
    }
    else {
      uVar21 = 0;
      if (uVar31 != 0) {
        uVar21 = uVar26 / uVar31;
      }
      uVar21 = uVar26 - uVar21 * uVar31;
    }
    plVar38 = *(long **)(*(long *)(param_2 + 0x78) + uVar21 * 8);
    if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
      if (uVar36 < 2) {
        do {
          if (plVar38[1] == uVar26) {
            if (plVar38[2] == uVar26) goto LAB_0169446c;
          }
          else if ((plVar38[1] & uVar31 - 1) != uVar21) break;
          plVar38 = (long *)*plVar38;
        } while (plVar38 != (long *)0x0);
      }
      else {
        do {
          uVar36 = plVar38[1];
          if (uVar36 == uVar26) {
            if (plVar38[2] == uVar26) goto LAB_0169446c;
          }
          else {
            if (uVar31 <= uVar36) {
              uVar33 = 0;
              if (uVar31 != 0) {
                uVar33 = uVar36 / uVar31;
              }
              uVar36 = uVar36 - uVar33 * uVar31;
            }
            if (uVar36 != uVar21) break;
          }
          plVar38 = (long *)*plVar38;
        } while (plVar38 != (long *)0x0);
      }
    }
  }
  goto LAB_01694c50;
LAB_0169446c:
  puVar42 = (undefined8 *)plVar38[3];
  puVar6 = (undefined8 *)plVar38[4];
  if (puVar42 != puVar6) {
    do {
      puVar41 = (uint *)*puVar42;
      uVar31 = (ulong)(int)*puVar41;
      if (((*(ushort *)((long)puVar41 - uVar31) < 9) ||
          (uVar36 = (ulong)((ushort *)((long)puVar41 - uVar31))[4], uVar36 == 0)) ||
         (puVar3 = (uint *)((long)puVar41 + uVar36),
         puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3), puVar3 == (uint *)0x0)) break;
      uVar36 = (ulong)*puVar3;
      if (*puVar3 != 0) {
        uVar26 = 0;
        while( true ) {
          uVar48 = (uint)uVar26;
          puVar32 = (uint *)((long)puVar41 +
                            (ulong)*(ushort *)((long)puVar41 + (6 - (long)(int)uVar31)));
          puVar32 = (uint *)((long)puVar32 + uVar26 * 4 + (ulong)*puVar32 + 4);
          piVar4 = (int *)((long)puVar32 + (ulong)*puVar32);
          if (((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
              (uVar31 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar31 != 0)) &&
             (*(int *)((long)piVar4 + uVar31) == 1)) break;
LAB_0169450c:
          uVar26 = (ulong)(uVar48 + 1);
          if ((uint)uVar36 <= uVar48 + 1) goto LAB_01694824;
          uVar31 = (ulong)*puVar41;
        }
        if (uVar48 < (uint)uVar36) {
          uVar39 = 1;
          uVar40 = 1;
          uVar31 = uVar26;
          do {
            if (uVar40 == 0) {
              puVar32 = (uint *)((long)puVar41 +
                                (ulong)*(ushort *)((long)puVar41 + (6 - (long)(int)*puVar41)));
              puVar32 = (uint *)((long)puVar32 + uVar31 * 4 + (ulong)*puVar32 + 4);
              piVar4 = (int *)((long)puVar32 + (ulong)*puVar32);
              if (((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                  (uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar21 != 0)) &&
                 (*(int *)((long)piVar4 + uVar21) != 0)) {
                uVar48 = (uint)uVar31;
                break;
              }
            }
            piVar4 = (int *)((long)(puVar3 + uVar31 + 1) + (ulong)puVar3[uVar31 + 1]);
            local_110 = (long *)&DAT_03996322;
            local_118 = &DAT_cbf29ce484222645;
            local_108 = 0;
            local_100 = (long *)0x0;
            local_f8 = &DAT_cbf29ce484222645;
            pcStack_f0 = "";
            local_e8 = 0;
            local_e0 = (long *)0x0;
            local_d8 = &DAT_cbf29ce484222645;
            pcStack_d0 = "";
            local_c8 = 0;
            local_c0 = (long *)0x0;
            local_b8 = &DAT_cbf29ce484222645;
            puStack_b0 = &DAT_03996322;
            local_a8 = 0;
            local_a0 = (long *)0x0;
            local_98 = &DAT_cbf29ce484222645;
            puStack_90 = &DAT_03996322;
            local_88 = 0;
            local_80 = (long *)0x0;
            puVar49 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar8 = *puVar49;
            if (uVar8 < 5) {
              local_128 = (undefined1 *)0x0;
LAB_01694b78:
              lVar15 = 0;
              local_120 = (byte *)0x0;
            }
            else {
              local_128 = (undefined1 *)0x0;
              if ((ulong)puVar49[2] != 0) {
                local_128 = *(undefined1 **)((long)piVar4 + (ulong)puVar49[2]);
              }
              if (uVar8 < 7) goto LAB_01694b78;
              local_120 = (byte *)0x0;
              if ((ulong)puVar49[3] != 0) {
                local_120 = *(byte **)((long)piVar4 + (ulong)puVar49[3]);
              }
              if ((uVar8 < 9) || ((ulong)puVar49[4] == 0)) {
                lVar15 = 0;
              }
              else {
                puVar32 = (uint *)((long)piVar4 + (ulong)puVar49[4]);
                lVar15 = (long)puVar32 + (ulong)*puVar32;
              }
            }
            local_108 = strlen((char *)(lVar15 + 4));
            bVar7 = *(byte *)(lVar15 + 4);
            local_118 = &DAT_cbf29ce484222645;
            if (bVar7 != 0) {
              local_118 = &DAT_cbf29ce484222645;
              pbVar34 = (byte *)(lVar15 + 5);
              do {
                local_118 = (undefined1 *)(((ulong)local_118 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar34;
                pbVar34 = pbVar34 + 1;
              } while (bVar7 != 0);
            }
            local_100 = (long *)0x0;
            if ((uVar8 < 0xb) || ((ulong)puVar49[5] == 0)) {
              lVar17 = 0;
            }
            else {
              puVar32 = (uint *)((long)piVar4 + (ulong)puVar49[5]);
              lVar17 = (long)puVar32 + (ulong)*puVar32;
            }
            local_110 = (long *)(lVar15 + 4);
            local_e8 = strlen((char *)(lVar17 + 4));
            bVar7 = *(byte *)(lVar17 + 4);
            local_f8 = &DAT_cbf29ce484222645;
            if (bVar7 != 0) {
              local_f8 = &DAT_cbf29ce484222645;
              pbVar34 = (byte *)(lVar17 + 5);
              do {
                local_f8 = (undefined1 *)(((ulong)local_f8 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar34;
                pbVar34 = pbVar34 + 1;
              } while (bVar7 != 0);
            }
            local_e0 = (long *)0x0;
            if (uVar8 < 0xd) {
              lVar15 = 0;
            }
            else if ((ulong)puVar49[6] == 0) {
              lVar15 = 0;
            }
            else {
              puVar32 = (uint *)((long)piVar4 + (ulong)puVar49[6]);
              lVar15 = (long)puVar32 + (ulong)*puVar32;
            }
            pcStack_f0 = (char *)(lVar17 + 4);
            local_c8 = strlen((char *)(lVar15 + 4));
            bVar7 = *(byte *)(lVar15 + 4);
            local_d8 = &DAT_cbf29ce484222645;
            if (bVar7 != 0) {
              local_d8 = &DAT_cbf29ce484222645;
              pbVar34 = (byte *)(lVar15 + 5);
              do {
                local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar34;
                pbVar34 = pbVar34 + 1;
              } while (bVar7 != 0);
            }
            local_c0 = (long *)0x0;
            pcStack_d0 = (char *)(lVar15 + 4);
            uVar13 = FUN_0165ff30(&local_128);
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            if (local_e0 != (long *)0x0) {
              (**(code **)(*local_e0 + 0x20))();
            }
            if (local_100 != (long *)0x0) {
              (**(code **)(*local_100 + 0x20))();
            }
            if ((uVar13 & 1) == 0) {
              uVar36 = (ulong)*puVar3;
              goto LAB_0169450c;
            }
            uVar31 = uVar31 + 1;
            uVar40 = uVar40 & (uVar13 ^ 1);
            uVar36 = (ulong)*puVar3;
            uVar39 = uVar39 & uVar13;
          } while (uVar31 < uVar36);
          if (uVar39 == 0) goto LAB_0169450c;
        }
        plVar38 = *(long **)(param_2 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar14 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01694e6c;
        *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar38;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        plVar16 = (long *)(**(code **)(*plVar38 + 0x10))(plVar38,0xb8,8);
        if (plVar16 == (long *)0x0) {
          (**(code **)(*plVar38 + 0xb8))(plVar38);
          _DAT_000000b0 = 0;
          _DAT_000000a8 = 0;
          _DAT_000000a0 = 0;
          _DAT_00000098 = 0;
          _DAT_00000090 = 0;
          _DAT_00000088 = 0;
          _DAT_00000080 = 0;
          _DAT_00000078 = 0;
          _DAT_00000070 = 0;
          _DAT_00000068 = 0;
          _DAT_00000060 = 0;
          _DAT_00000058 = 0;
          _DAT_00000050 = 0;
          _DAT_00000048 = 0;
          _DAT_00000040 = 0;
          _DAT_00000038 = 0;
          _DAT_00000030 = 0;
          _DAT_00000028 = 0;
          _DAT_00000020 = 0;
          _DAT_00000018 = 0;
          uRam0000000000000000 = 0;
          _DAT_00000010 = (long *)0x0;
          _DAT_00000008 = (long *)0x0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar16[0x15] = 0;
        plVar16[0x16] = 0;
        plVar16[4] = 0;
        plVar16[0x13] = 0;
        plVar16[0x14] = 0;
        plVar16[0x11] = 0;
        plVar16[0x12] = 0;
        plVar16[0xf] = 0;
        plVar16[0x10] = 0;
        plVar16[0xd] = 0;
        plVar16[0xe] = 0;
        plVar16[0xb] = 0;
        plVar16[0xc] = 0;
        plVar16[9] = 0;
        plVar16[10] = 0;
        plVar16[7] = 0;
        plVar16[8] = 0;
        plVar16[5] = 0;
        plVar16[6] = 0;
        puVar1 = PTR_DAT_043796d0 + 0x10;
        plVar16[7] = 0;
        *(undefined4 *)(plVar16 + 8) = 0;
        *(undefined4 *)(plVar16 + 6) = 0;
        plVar16[2] = 0;
        plVar16[3] = 0;
        *plVar16 = (long)puVar1;
        plVar16[1] = 0;
        plVar16[2] = 0;
        plVar16[3] = 0;
        plVar16[4] = 0;
        plVar16[5] = 0;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar14 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar17 == 0) {
          lVar27 = 0;
        }
        else {
          lVar27 = 0;
          if (*(long *)(lVar17 + 0x80) != 0) {
            lVar27 = *(long *)(lVar17 + *(long *)(lVar17 + 0x80) * 8 + -8);
          }
        }
        plVar16[1] = lVar27;
        plVar24 = plVar16 + 10;
        *(int *)plVar24 = 0;
        *plVar16 = (long)&PTR_FUN_04224308;
        plVar16[9] = (long)&PTR_FUN_04224340;
        plVar16[0xb] = 0;
        plVar16[0xc] = 0;
        plVar16[0xd] = 0;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar14 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        lVar27 = DAT_043f1798;
        lVar17 = tpidr_el0;
        if ((((lVar18 == 0) || (*(long *)(lVar18 + 0x80) == 0)) ||
            (lVar18 = *(long *)(lVar18 + *(long *)(lVar18 + 0x80) * 8 + -8), lVar18 == 0)) &&
           (lVar18 = *(long *)(lVar17 + 0x20), *(long *)(lVar17 + 0x20) == 0)) {
          *(long *)(lVar17 + 0x20) = DAT_043f1798;
          lVar18 = lVar27;
        }
        plVar16[0x10] = 0;
        *(undefined4 *)(plVar16 + 0x11) = 0;
        *(undefined4 *)(plVar16 + 0x12) = 0;
        plVar16[0x16] = 0;
        plVar16[0xe] = lVar18;
        plVar16[0xf] = 0x1fffffffffffffff;
        plVar16[0x13] = (long)&DAT_cbf29ce484222645;
        plVar16[0x14] = (long)&DAT_03996322;
        plVar16[0x15] = 0;
        plVar16[1] = (long)plVar38;
        plVar16[2] = (long)plVar16;
        plVar16[3] = 0xb8;
        plVar16[4] = 8;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        *param_1 = (long)plVar16;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar10) {
            *(int *)plVar24 = (int)*plVar24 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((*(ushort *)((long)puVar41 - (long)(int)*puVar41) < 0xb) ||
           (uVar31 = (ulong)((ushort *)((long)puVar41 - (long)(int)*puVar41))[5], uVar31 == 0)) {
          lVar15 = 0;
        }
        else {
          puVar32 = (uint *)((long)puVar41 + uVar31);
          lVar15 = (long)puVar32 + (ulong)*puVar32;
        }
        sVar19 = strlen((char *)(lVar15 + 4));
        bVar7 = *(byte *)(lVar15 + 4);
        puVar28 = &DAT_cbf29ce484222645;
        if (bVar7 != 0) {
          puVar28 = &DAT_cbf29ce484222645;
          pbVar34 = (byte *)(lVar15 + 5);
          do {
            puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar34;
            pbVar34 = pbVar34 + 1;
          } while (bVar7 != 0);
        }
        lVar27 = *param_1;
        *(size_t *)(lVar27 + 0xa8) = sVar19;
        plVar38 = *(long **)(lVar27 + 0xb0);
        *(undefined1 **)(lVar27 + 0x98) = puVar28;
        *(char **)(lVar27 + 0xa0) = (char *)(lVar15 + 4);
        *(undefined8 *)(lVar27 + 0xb0) = 0;
        if (plVar38 != (long *)0x0) {
          (**(code **)(*plVar38 + 0x20))();
        }
        *(undefined8 *)(lVar27 + 0xb0) = 0;
        puVar49 = (ushort *)((long)puVar41 - (long)(int)*puVar41);
        uVar8 = *puVar49;
        if (uVar8 < 7) {
          lVar27 = 0;
          lVar15 = 0;
          lVar18 = 0;
        }
        else {
          lVar15 = 0;
          if ((ulong)puVar49[3] != 0) {
            puVar32 = (uint *)((long)puVar41 + (ulong)puVar49[3]);
            lVar15 = (long)puVar32 + (ulong)*puVar32;
          }
          if (uVar8 < 0xd) {
            lVar27 = 0;
          }
          else {
            lVar27 = 0;
            if ((ulong)puVar49[6] != 0) {
              puVar32 = (uint *)((long)puVar41 + (ulong)puVar49[6]);
              lVar27 = (long)puVar32 + (ulong)*puVar32;
            }
            if (0xe < uVar8) {
              lVar18 = 0;
              if ((ulong)puVar49[7] != 0) {
                puVar32 = (uint *)((long)puVar41 + (ulong)puVar49[7]);
                lVar18 = (long)puVar32 + (ulong)*puVar32;
              }
              goto LAB_01694b10;
            }
          }
          lVar18 = 0;
        }
LAB_01694b10:
        lVar15 = lVar15 + 4;
        bVar10 = false;
        local_150 = lVar18 + uVar26 * 4 + 0xd;
        do {
          if (*puVar3 <= uVar26) {
            return;
          }
          lVar29 = uVar26 * 4;
          puVar32 = (uint *)(lVar27 + 4 + lVar29);
          puVar43 = (uint *)(lVar18 + 4 + lVar29);
          uVar31 = (ulong)*puVar43;
          plVar38 = *(long **)(param_2 + 8);
          uVar48 = *(uint *)(lVar15 + lVar29);
          uVar40 = *puVar32;
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar1 = PTR_DAT_04379528;
            if (iVar14 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_01694e6c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar38;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          plVar16 = (long *)(**(code **)(*plVar38 + 0x10))(plVar38,0xd8,8);
          if (plVar16 == (long *)0x0) {
            (**(code **)(*plVar38 + 0xb8))(plVar38);
            _DAT_000000d0 = 0;
            _DAT_000000c8 = 0;
            _DAT_000000c0 = 0;
            _DAT_000000b8 = 0;
            _DAT_000000b0 = 0;
            _DAT_000000a8 = 0;
            _DAT_000000a0 = 0;
            _DAT_00000098 = 0;
            _DAT_00000090 = 0;
            _DAT_00000088 = 0;
            _DAT_00000080 = 0;
            _DAT_00000078 = 0;
            _DAT_00000070 = 0;
            _DAT_00000068 = 0;
            _DAT_00000060 = 0;
            _DAT_00000058 = 0;
            _DAT_00000050 = 0;
            _DAT_00000048 = 0;
            _DAT_00000040 = 0;
            _DAT_00000038 = 0;
            _DAT_00000030 = 0;
            _DAT_00000028 = 0;
            _DAT_00000020 = 0;
            _DAT_00000018 = 0;
            uRam0000000000000000 = 0;
            _DAT_00000010 = (long *)0x0;
            _DAT_00000008 = (long *)0x0;
            FUN_015f1180(0);
            _DAT_00000018 = 0xd8;
            _DAT_00000020 = 8;
            _DAT_00000008 = plVar38;
            _DAT_00000010 = plVar16;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          }
          else {
            plVar16[0x19] = 0;
            plVar16[0x1a] = 0;
            plVar16[0x17] = 0;
            plVar16[0x18] = 0;
            plVar16[0x15] = 0;
            plVar16[0x16] = 0;
            plVar16[0x13] = 0;
            plVar16[0x14] = 0;
            plVar16[0x11] = 0;
            plVar16[0x12] = 0;
            plVar16[0xf] = 0;
            plVar16[0x10] = 0;
            plVar16[0xd] = 0;
            plVar16[0xe] = 0;
            plVar16[0xb] = 0;
            plVar16[0xc] = 0;
            plVar16[8] = 0;
            plVar16[9] = 0;
            plVar16[6] = 0;
            plVar16[7] = 0;
            plVar16[4] = 0;
            plVar16[5] = 0;
            plVar16[2] = 0;
            plVar16[3] = 0;
            *plVar16 = 0;
            plVar16[1] = 0;
            plVar24 = plVar16 + 10;
            *plVar24 = 0;
            FUN_015f1180(plVar16);
            plVar16[1] = (long)plVar38;
            plVar16[2] = (long)plVar16;
            plVar16[3] = 0xd8;
            plVar16[4] = 8;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
            do {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar12) {
                *(int *)plVar24 = (int)*plVar24 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          piVar4 = (int *)(lVar15 + lVar29 + (ulong)uVar48);
          if (*(ushort *)((long)puVar41 - (long)(int)*puVar41) < 5) {
            lVar29 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)puVar41 - (long)(int)*puVar41))[2];
            if (uVar36 == 0) {
              lVar29 = 0;
            }
            else {
              puVar44 = (uint *)((long)puVar41 + uVar36);
              lVar29 = (long)puVar44 + (ulong)*puVar44;
            }
          }
          puVar28 = &DAT_cbf29ce484222645;
          bVar7 = *(byte *)(lVar29 + 4);
          if (bVar7 != 0) {
            pbVar34 = (byte *)(lVar29 + 5);
            do {
              puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar34;
              pbVar34 = pbVar34 + 1;
            } while (bVar7 != 0);
          }
          plVar16[0xb] = (long)puVar28;
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar4 + uVar36);
            }
          }
          *(undefined4 *)(plVar16 + 0xc) = uVar25;
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar4 + uVar36);
            }
          }
          *(undefined4 *)((long)plVar16 + 100) = uVar25;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
             (uVar36 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar36 == 0)) {
            lVar29 = 0;
          }
          else {
            lVar29 = *(long *)((long)piVar4 + uVar36);
          }
          plVar16[0xd] = lVar29;
          piVar5 = (int *)((long)puVar32 + (ulong)uVar40);
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
            bVar12 = false;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
            bVar12 = false;
            if (uVar36 != 0) {
              bVar12 = *(char *)((long)piVar4 + uVar36) != '\0';
            }
          }
          *(bool *)(plVar16 + 0xe) = bVar12;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
             (uVar36 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar36 == 0)) {
            bVar12 = false;
          }
          else {
            bVar12 = *(char *)((long)piVar4 + uVar36) != '\0';
          }
          *(bool *)((long)plVar16 + 0x71) = bVar12;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar5 + uVar36);
            }
          }
          *(undefined4 *)(plVar16 + 0xf) = uVar25;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 7) {
            bVar12 = false;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
            bVar12 = false;
            if (uVar36 != 0) {
              bVar12 = *(char *)((long)piVar5 + uVar36) != '\0';
            }
          }
          *(bool *)((long)plVar16 + 0x7c) = bVar12;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 9) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar5 + uVar36);
            }
          }
          *(undefined4 *)(plVar16 + 0x10) = uVar25;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xb) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[5];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar5 + uVar36);
            }
          }
          *(undefined4 *)((long)plVar16 + 0x84) = uVar25;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xd) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[6];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar5 + uVar36);
            }
          }
          *(undefined4 *)(plVar16 + 0x11) = uVar25;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xf) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[7];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar5 + uVar36);
            }
          }
          *(undefined4 *)((long)plVar16 + 0x8c) = uVar25;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x11) {
            uVar25 = 0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[8];
            uVar25 = 0;
            if (uVar36 != 0) {
              uVar25 = *(undefined4 *)((long)piVar5 + uVar36);
            }
          }
          *(undefined4 *)(plVar16 + 0x12) = uVar25;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x13) {
            bVar12 = false;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[9];
            bVar12 = false;
            if (uVar36 != 0) {
              bVar12 = *(char *)((long)piVar5 + uVar36) != '\0';
            }
          }
          *(bool *)((long)plVar16 + 0x94) = bVar12;
          if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x15) {
            bVar12 = false;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[10];
            bVar12 = false;
            if (uVar36 != 0) {
              bVar12 = *(char *)((long)piVar5 + uVar36) != '\0';
            }
          }
          *(bool *)((long)plVar16 + 0x95) = bVar12;
          piVar4 = (int *)((long)puVar43 + uVar31);
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x17) ||
             (uVar36 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xb], uVar36 == 0)) {
            bVar12 = false;
          }
          else {
            bVar12 = *(char *)((long)piVar5 + uVar36) != '\0';
          }
          *(bool *)((long)plVar16 + 0x96) = bVar12;
          uVar36 = uVar26;
          local_78 = plVar16;
          while (puVar28 = &DAT_cbf29ce484222645, uVar36 < *puVar3) {
            piVar5 = (int *)((long)(puVar3 + uVar36 + 1) + (ulong)puVar3[uVar36 + 1]);
            local_118 = &DAT_cbf29ce484222645;
            local_110 = (long *)&DAT_03996322;
            local_108 = 0;
            local_100 = (long *)0x0;
            local_f8 = &DAT_cbf29ce484222645;
            pcStack_f0 = "";
            local_e8 = 0;
            local_e0 = (long *)0x0;
            local_d8 = &DAT_cbf29ce484222645;
            pcStack_d0 = "";
            local_c8 = 0;
            local_c0 = (long *)0x0;
            local_b8 = &DAT_cbf29ce484222645;
            puStack_b0 = &DAT_03996322;
            local_a8 = 0;
            local_a0 = (long *)0x0;
            local_98 = &DAT_cbf29ce484222645;
            puStack_90 = &DAT_03996322;
            local_88 = 0;
            local_80 = (long *)0x0;
            puVar49 = (ushort *)((long)piVar5 - (long)*piVar5);
            uVar8 = *puVar49;
            if (uVar8 < 5) {
              local_128 = (undefined1 *)0x0;
LAB_01695bb8:
              lVar29 = 0;
              local_120 = (byte *)0x0;
            }
            else {
              local_128 = (undefined1 *)0x0;
              if ((ulong)puVar49[2] != 0) {
                local_128 = *(undefined1 **)((long)piVar5 + (ulong)puVar49[2]);
              }
              if (uVar8 < 7) goto LAB_01695bb8;
              local_120 = (byte *)0x0;
              if ((ulong)puVar49[3] != 0) {
                local_120 = *(byte **)((long)piVar5 + (ulong)puVar49[3]);
              }
              if ((uVar8 < 9) || ((ulong)puVar49[4] == 0)) {
                lVar29 = 0;
              }
              else {
                puVar32 = (uint *)((long)piVar5 + (ulong)puVar49[4]);
                lVar29 = (long)puVar32 + (ulong)*puVar32;
              }
            }
            local_108 = strlen((char *)(lVar29 + 4));
            bVar7 = *(byte *)(lVar29 + 4);
            local_118 = puVar28;
            if (bVar7 != 0) {
              pbVar34 = (byte *)(lVar29 + 5);
              do {
                local_118 = (undefined1 *)(((ulong)local_118 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar34;
                pbVar34 = pbVar34 + 1;
              } while (bVar7 != 0);
            }
            local_100 = (long *)0x0;
            if ((uVar8 < 0xb) || ((ulong)puVar49[5] == 0)) {
              lVar20 = 0;
            }
            else {
              puVar32 = (uint *)((long)piVar5 + (ulong)puVar49[5]);
              lVar20 = (long)puVar32 + (ulong)*puVar32;
            }
            local_110 = (long *)(lVar29 + 4);
            local_e8 = strlen((char *)(lVar20 + 4));
            bVar7 = *(byte *)(lVar20 + 4);
            local_f8 = puVar28;
            if (bVar7 != 0) {
              pbVar34 = (byte *)(lVar20 + 5);
              do {
                local_f8 = (undefined1 *)(((ulong)local_f8 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar34;
                pbVar34 = pbVar34 + 1;
              } while (bVar7 != 0);
            }
            local_e0 = (long *)0x0;
            if ((uVar8 < 0xd) || ((ulong)puVar49[6] == 0)) {
              lVar29 = 0;
            }
            else {
              puVar32 = (uint *)((long)piVar5 + (ulong)puVar49[6]);
              lVar29 = (long)puVar32 + (ulong)*puVar32;
            }
            __s = (char *)(lVar29 + 4);
            pcStack_f0 = (char *)(lVar20 + 4);
            local_c8 = strlen(__s);
            bVar7 = *(byte *)(lVar29 + 4);
            if (bVar7 != 0) {
              pbVar34 = (byte *)(lVar29 + 5);
              do {
                puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar34;
                pbVar34 = pbVar34 + 1;
              } while (bVar7 != 0);
            }
            plVar38 = plVar16 + 0x16;
            local_c0 = (long *)0x0;
            lVar29 = plVar16[0x14];
            local_d8 = puVar28;
            pcStack_d0 = __s;
            if (lVar29 == plVar16[0x15]) {
              lVar29 = lVar29 - plVar16[0x13] >> 4;
              uVar33 = plVar16[0x17];
              uVar21 = lVar29 * 0x2e8ba2e8ba2e8ba3 + 1;
              if (0x7ffffffffffffffe < uVar33) {
                uVar33 = 0x7fffffffffffffff;
              }
              if (uVar33 < uVar21) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar21 <= (ulong)(lVar29 * 0x5d1745d1745d1746)) {
                uVar21 = lVar29 * 0x5d1745d1745d1746;
              }
              if ((ulong)(lVar29 * 0x2e8ba2e8ba2e8ba3) < uVar33 >> 1) {
                uVar33 = uVar21;
              }
              if (uVar33 == 0) {
                lVar20 = 0;
              }
              else {
                lVar20 = (**(code **)(*(long *)*plVar38 + 0x10))((long *)*plVar38,uVar33 * 0xb0,8);
                if (lVar20 == 0) {
                  (**(code **)(*(long *)*plVar38 + 0xb8))();
                }
              }
              lVar45 = lVar20 + lVar29 * 0x10;
              FUN_01697004(plVar38,lVar45,&local_128);
              lVar30 = plVar16[0x13];
              lVar46 = plVar16[0x14];
              lVar29 = lVar45 + 0xb0;
              if (lVar46 == lVar30) {
                lVar46 = lVar30;
              }
              else {
                lVar45 = lVar45 + -0xb0;
                FUN_01697004(plVar38,lVar45,lVar46 + -0xb0);
                if (lVar46 + -0xb0 != lVar30) {
                  do {
                    lVar45 = lVar45 + -0xb0;
                    FUN_01697004(plVar38,lVar45,lVar46 + -0x160);
                    lVar46 = lVar46 + -0xb0;
                  } while (lVar30 + 0xb0 != lVar46);
                }
                lVar46 = plVar16[0x13];
                lVar30 = plVar16[0x14];
              }
              plVar16[0x13] = lVar45;
              plVar16[0x14] = lVar29;
              lVar29 = plVar16[0x15];
              plVar16[0x15] = lVar20 + uVar33 * 0xb0;
              if (lVar30 != lVar46) {
                if (*(long **)(lVar30 + -8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar30 + -8) + 0x20))();
                }
                if (*(long **)(lVar30 + -0x28) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar30 + -0x28) + 0x20))();
                }
                if (*(long **)(lVar30 + -0x48) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar30 + -0x48) + 0x20))();
                }
                if (*(long **)(lVar30 + -0x68) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar30 + -0x68) + 0x20))();
                }
                if (*(long **)(lVar30 + -0x88) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar30 + -0x88) + 0x20))();
                }
                if (lVar30 + -0xb0 != lVar46) {
                  do {
                    if (*(long **)(lVar30 + -0xb8) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar30 + -0xb8) + 0x20))();
                    }
                    if (*(long **)(lVar30 + -0xd8) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar30 + -0xd8) + 0x20))();
                    }
                    if (*(long **)(lVar30 + -0xf8) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar30 + -0xf8) + 0x20))();
                    }
                    if (*(long **)(lVar30 + -0x118) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar30 + -0x118) + 0x20))();
                    }
                    if (*(long **)(lVar30 + -0x138) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar30 + -0x138) + 0x20))();
                    }
                    lVar30 = lVar30 + -0xb0;
                  } while (lVar46 + 0xb0 != lVar30);
                }
              }
              if (lVar46 != 0) {
                plVar38 = (long *)*plVar38;
                uVar21 = (**(code **)(*plVar38 + 0xc0))(plVar38);
                if ((uVar21 & 1) != 0) {
                  if (*(char *)(lVar17 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar17 + 0x38d488) = 1;
                    *(undefined8 *)(lVar17 + 0x38d478) = 0;
                    *(undefined8 *)(lVar17 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar17 + 0x38d480)) {
                    FUN_02bcc824(plVar38,lVar46,lVar29 - lVar46,8);
                    goto LAB_016955ec;
                  }
                }
                (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,lVar29 - lVar46,8);
              }
            }
            else {
              FUN_01697004(plVar38,lVar29,&local_128);
              plVar16[0x14] = plVar16[0x14] + 0xb0;
            }
LAB_016955ec:
            uVar36 = uVar36 + 1;
            if (*puVar3 <= (uint)uVar36) {
              if (local_80 != (long *)0x0) {
                (**(code **)(*local_80 + 0x20))();
              }
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              if (local_c0 != (long *)0x0) {
                (**(code **)(*local_c0 + 0x20))();
              }
              if (local_e0 != (long *)0x0) {
                (**(code **)(*local_e0 + 0x20))();
              }
              if (local_100 != (long *)0x0) {
                (**(code **)(*local_100 + 0x20))();
              }
              break;
            }
            puVar32 = (uint *)(lVar15 + (uVar36 & 0xffffffff) * 4);
            piVar5 = (int *)((long)puVar32 + (ulong)*puVar32);
            if (((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
                (uVar21 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar21 == 0)) ||
               (*(int *)((long)piVar5 + uVar21) == 0)) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            if (local_e0 != (long *)0x0) {
              (**(code **)(*local_e0 + 0x20))();
            }
            if (local_100 != (long *)0x0) {
              (**(code **)(*local_100 + 0x20))();
            }
            if (!bVar12) break;
          }
          uVar47 = *(undefined8 *)(param_2 + 8);
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
            local_128 = (undefined1 *)0x0;
          }
          else {
            uVar36 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
            local_128 = (undefined1 *)0x0;
            if (uVar36 != 0) {
              local_128 = *(undefined1 **)((long)piVar4 + uVar36);
            }
          }
          uVar36 = (ulong)*(ushort *)((long)puVar41 + (4 - (long)(int)*puVar41));
          puVar32 = (uint *)((long)puVar41 + uVar36);
          uVar21 = (ulong)*puVar32;
          bVar7 = *(byte *)((long)puVar32 + uVar21 + 4);
          local_130 = &DAT_cbf29ce484222645;
          if (bVar7 != 0) {
            pbVar34 = (byte *)((long)puVar41 + uVar21 + uVar36 + 5);
            do {
              local_130 = (undefined1 *)(((ulong)local_130 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar34;
              pbVar34 = pbVar34 + 1;
            } while (bVar7 != 0);
          }
          if (((*PTR_DAT_04379678 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379678), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379678);
          }
          lVar29 = *(long *)PTR_DAT_04379680;
          *(long *)PTR_DAT_04379688 = lVar29;
          plVar38 = *(long **)(lVar29 + 0x100);
          if (plVar38 != (long *)0x0) {
            plVar16 = plVar38 + 10;
            do {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar12) {
                *(int *)plVar16 = (int)*plVar16 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          plVar16 = (long *)plVar38[0x20];
          if (plVar16 != (long *)0x0) {
            plVar24 = plVar16 + 10;
            do {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar12) {
                *(int *)plVar24 = (int)*plVar24 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          local_138 = (long *)plVar16[0xf];
          if (local_138 != (long *)0x0) {
            lVar29 = local_138[0xb];
            if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar29 + 0x10) == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
              *(undefined8 *)(lVar29 + 0x10) = uVar22;
            }
            piVar5 = (int *)(lVar29 + 0xc);
            do {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar12) {
                *piVar5 = *piVar5 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          lVar29 = FUN_016971e0(auStack_70,uVar47,&local_128,&local_130,&local_138);
          plVar24 = local_78;
          if (lVar29 != 0) {
            piVar5 = (int *)(lVar29 + 0x50);
            do {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar12) {
                *piVar5 = *piVar5 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          plVar23 = (long *)local_78[0x1a];
          local_78[0x1a] = 0;
          if (plVar23 != (long *)0x0) {
            plVar2 = plVar23 + 10;
            do {
              iVar14 = (int)*plVar2 + -1;
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *(int *)plVar2 = iVar14;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*plVar23 + 0x10))();
            }
          }
          plVar24[0x1a] = lVar29;
          if (local_138 != (long *)0x0) {
            lVar29 = local_138[0xb];
            piVar5 = (int *)(lVar29 + 0xc);
            do {
              iVar14 = *piVar5;
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar12) {
                *piVar5 = iVar14 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar29 + 0x18) = 0;
              (**(code **)(*local_138 + 0x20))();
            }
          }
          plVar24 = plVar16 + 10;
          do {
            iVar14 = (int)*plVar24 + -1;
            cVar9 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar12) {
              *(int *)plVar24 = iVar14;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
          plVar16 = plVar38 + 10;
          do {
            iVar14 = (int)*plVar16 + -1;
            cVar9 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar12) {
              *(int *)plVar16 = iVar14;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar38 + 0x10))(plVar38);
          }
          uVar36 = (ulong)*(ushort *)((long)piVar4 + (6 - (long)*piVar4));
          puVar32 = (uint *)((long)piVar4 + uVar36);
          uVar21 = (ulong)*puVar32;
          puVar32 = (uint *)((long)puVar32 + uVar21);
          puVar43 = puVar32 + 1;
          uVar48 = *puVar32;
          if (uVar48 != 0) {
            lVar20 = local_78[0x1a];
            lVar29 = local_150 + uVar21 + uVar36 + uVar31;
            puVar32 = puVar43;
            do {
              puVar44 = puVar32 + 1;
              uVar40 = *puVar32;
              pbVar34 = (byte *)((long)puVar44 + (ulong)uVar40);
              local_118 = (undefined1 *)strlen((char *)pbVar34);
              bVar7 = *pbVar34;
              local_128 = &DAT_cbf29ce484222645;
              if (bVar7 != 0) {
                pbVar37 = (byte *)(lVar29 + (ulong)uVar40);
                do {
                  local_128 = (undefined1 *)(((ulong)local_128 ^ (ulong)bVar7) * 0x100000001b3);
                  bVar7 = *pbVar37;
                  pbVar37 = pbVar37 + 1;
                } while (bVar7 != 0);
              }
              local_110 = (long *)0x0;
              local_120 = pbVar34;
              FUN_01696420(lVar20 + 0x78,&local_128);
              if (local_110 != (long *)0x0) {
                (**(code **)(*local_110 + 0x20))();
              }
              lVar29 = lVar29 + 4;
              puVar32 = puVar44;
            } while (puVar44 != puVar43 + uVar48);
          }
          lVar20 = *param_1;
          puVar42 = (undefined8 *)(lVar20 + 0x70);
          lVar29 = *(long *)(lVar20 + 0x60);
          if (lVar29 == *(long *)(lVar20 + 0x68)) {
            uVar36 = *(ulong *)(lVar20 + 0x78);
            lVar29 = lVar29 - *(long *)(lVar20 + 0x58) >> 3;
            uVar31 = lVar29 + 1;
            if (0x7ffffffffffffffe < uVar36) {
              uVar36 = 0x7fffffffffffffff;
            }
            if (uVar36 < uVar31) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar30 = *(long *)(lVar20 + 0x68) - *(long *)(lVar20 + 0x58);
            uVar21 = lVar30 >> 2;
            if (uVar31 <= uVar21) {
              uVar31 = uVar21;
            }
            if ((ulong)(lVar30 >> 3) < uVar36 >> 1) {
              uVar36 = uVar31;
            }
            if (uVar36 == 0) {
              lVar30 = 0;
            }
            else {
              lVar30 = (**(code **)(*(long *)*puVar42 + 0x10))((long *)*puVar42,uVar36 << 3,8);
              if (lVar30 == 0) {
                (**(code **)(*(long *)*puVar42 + 0xb8))();
              }
            }
            lVar46 = lVar30 + lVar29 * 8;
            FUN_01697374(puVar42,lVar46,&local_78);
            plVar38 = *(long **)(lVar20 + 0x58);
            plVar16 = *(long **)(lVar20 + 0x60);
            lVar29 = lVar46 + 8;
            if (plVar16 == plVar38) {
              plVar16 = plVar38;
            }
            else {
              do {
                lVar46 = lVar46 + -8;
                plVar16 = plVar16 + -1;
                FUN_01697374(puVar42,lVar46,plVar16);
              } while (plVar38 != plVar16);
              plVar16 = *(long **)(lVar20 + 0x58);
              plVar38 = *(long **)(lVar20 + 0x60);
            }
            *(long *)(lVar20 + 0x58) = lVar46;
            *(long *)(lVar20 + 0x60) = lVar29;
            lVar29 = *(long *)(lVar20 + 0x68);
            *(ulong *)(lVar20 + 0x68) = lVar30 + uVar36 * 8;
joined_r0x01695ab0:
            if (plVar38 != plVar16) {
              while( true ) {
                plVar38 = plVar38 + -1;
                plVar24 = (long *)*plVar38;
                if (plVar24 == (long *)0x0) break;
                plVar23 = plVar24 + 10;
                do {
                  iVar14 = (int)*plVar23 + -1;
                  cVar9 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar12) {
                    *(int *)plVar23 = iVar14;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar14 != 0) break;
                (**(code **)(*plVar24 + 0x10))();
                if (plVar38 == plVar16) goto LAB_01695ab4;
              }
              goto joined_r0x01695ab0;
            }
LAB_01695ab4:
            if (plVar16 != (long *)0x0) {
              plVar38 = (long *)*puVar42;
              lVar29 = lVar29 - (long)plVar16;
              uVar31 = (**(code **)(*plVar38 + 0xc0))(plVar38);
              if ((uVar31 & 1) != 0) {
                if (*(char *)(lVar17 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar17 + 0x38d488) = 1;
                  *(undefined8 *)(lVar17 + 0x38d478) = 0;
                  *(undefined8 *)(lVar17 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar17 + 0x38d480)) {
                  FUN_02bcc824(plVar38,plVar16,lVar29,8);
                  goto LAB_01695ab8;
                }
              }
              (**(code **)(*plVar38 + 0x18))(plVar38,plVar16,lVar29,8);
            }
          }
          else {
            FUN_01697374(puVar42,lVar29,&local_78);
            *(long *)(lVar20 + 0x60) = *(long *)(lVar20 + 0x60) + 8;
          }
LAB_01695ab8:
          uVar48 = (int)uVar26 + 1;
          if (uVar48 < *puVar3) {
            piVar4 = (int *)((long)(puVar3 + (ulong)uVar48 + 1) + (ulong)puVar3[(ulong)uVar48 + 1]);
            if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
              puVar28 = (undefined1 *)0x0;
            }
            else {
              uVar31 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
              if (uVar31 == 0) {
                puVar28 = (undefined1 *)0x0;
              }
              else {
                puVar28 = *(undefined1 **)((long)piVar4 + uVar31);
              }
            }
            puVar32 = (uint *)(lVar15 + (ulong)uVar48 * 4);
            piVar4 = (int *)((long)puVar32 + (ulong)*puVar32);
            if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
               (uVar31 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar31 == 0)) {
              puVar35 = (undefined1 *)0x0;
            }
            else {
              puVar35 = *(undefined1 **)((long)piVar4 + uVar31);
            }
            bVar12 = puVar28 == &DAT_cbf29ce484222645 && puVar35 == &DAT_cbf29ce484222645;
            bVar10 = (bool)(bVar10 | bVar12);
          }
          else {
            bVar12 = true;
            bVar10 = true;
          }
          if (local_78 != (long *)0x0) {
            plVar38 = local_78 + 10;
            do {
              iVar14 = (int)*plVar38 + -1;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar11) {
                *(int *)plVar38 = iVar14;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
          }
          uVar26 = uVar26 + 1;
          local_150 = local_150 + 4;
          if (bVar12) {
            if (bVar10) {
              return;
            }
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              return;
            }
            plVar38 = param_1 + 10;
            do {
              iVar14 = (int)*plVar38 + -1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar10) {
                *(int *)plVar38 = iVar14;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*param_1 + 0x10))();
              return;
            }
            return;
          }
        } while( true );
      }
LAB_01694824:
      puVar42 = puVar42 + 1;
    } while (puVar42 != puVar6);
  }
LAB_01694c50:
  *param_1 = 0;
  return;
}


