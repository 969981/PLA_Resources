/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0169ba20; name: FUN_0169ba20
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169ba20(long *param_1,long param_2,ulong *param_3)

{
  undefined *puVar1;
  char *__s;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  size_t sVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  undefined4 uVar28;
  ulong uVar29;
  uint *puVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  ulong uVar33;
  ulong uVar34;
  uint *puVar35;
  byte *pbVar36;
  long *plVar37;
  uint *puVar38;
  undefined8 *puVar39;
  ulong uVar40;
  uint uVar41;
  uint *puVar43;
  uint *puVar42;
  uint uVar44;
  undefined1 *puVar45;
  long *plVar46;
  undefined8 uVar47;
  uint uVar48;
  undefined1 *puVar49;
  long lVar50;
  ushort *puVar51;
  long local_1b0;
  long *local_158;
  undefined1 *local_150;
  byte *local_148;
  undefined1 *local_140;
  long *local_138;
  size_t local_130;
  long *local_128;
  undefined1 *local_120;
  char *pcStack_118;
  size_t local_110;
  long *local_108;
  undefined1 *local_100;
  char *pcStack_f8;
  size_t local_f0;
  long *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  undefined1 auStack_98 [8];
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  long *plStack_70;
  
  uVar29 = *(ulong *)(param_2 + 0x80);
  if (uVar29 != 0) {
    uVar34 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
    uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
    uVar40 = *param_3;
    uVar34 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar34 < 2) {
      uVar20 = uVar29 - 1 & uVar40;
    }
    else if (uVar40 < uVar29) {
      uVar20 = uVar40;
    }
    else {
      uVar20 = 0;
      if (uVar29 != 0) {
        uVar20 = uVar40 / uVar29;
      }
      uVar20 = uVar40 - uVar20 * uVar29;
    }
    plVar37 = *(long **)(*(long *)(param_2 + 0x78) + uVar20 * 8);
    if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
      if (uVar34 < 2) {
        do {
          if (plVar37[1] == uVar40) {
            if (plVar37[2] == uVar40) goto LAB_0169bb44;
          }
          else if ((plVar37[1] & uVar29 - 1) != uVar20) break;
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
      }
      else {
        do {
          uVar34 = plVar37[1];
          if (uVar34 == uVar40) {
            if (plVar37[2] == uVar40) goto LAB_0169bb44;
          }
          else {
            if (uVar29 <= uVar34) {
              uVar33 = 0;
              if (uVar29 != 0) {
                uVar33 = uVar34 / uVar29;
              }
              uVar34 = uVar34 - uVar33 * uVar29;
            }
            if (uVar34 != uVar20) break;
          }
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
      }
    }
  }
LAB_0169baa0:
  *param_1 = 0;
  return;
LAB_0169bb44:
  puVar39 = (undefined8 *)plVar37[3];
  puVar5 = (undefined8 *)plVar37[4];
  if (puVar39 != puVar5) {
    do {
      puVar38 = (uint *)*puVar39;
      uVar29 = (ulong)(int)*puVar38;
      if ((*(ushort *)((long)puVar38 - uVar29) < 9) ||
         (uVar34 = (ulong)((ushort *)((long)puVar38 - uVar29))[4], uVar34 == 0)) {
        puVar35 = (uint *)0x0;
        uVar41 = (uint)uRam0000000000000000;
      }
      else {
        puVar35 = (uint *)((long)puVar38 + uVar34);
        puVar35 = (uint *)((long)puVar35 + (ulong)*puVar35);
        uVar41 = *puVar35;
      }
      if (uVar41 != 0) {
        uVar40 = (ulong)uVar41;
        uVar34 = 0;
        while( true ) {
          uVar41 = (uint)uVar34;
          puVar30 = (uint *)((long)puVar38 +
                            (ulong)*(ushort *)((long)puVar38 + (6 - (long)(int)uVar29)));
          puVar30 = (uint *)((long)puVar30 + uVar34 * 4 + (ulong)*puVar30 + 4);
          piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
          if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
              (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) &&
             (*(int *)((long)piVar3 + uVar29) == 1)) break;
LAB_0169bc54:
          uVar34 = (ulong)(uVar41 + 1);
          if ((uint)uVar40 <= uVar41 + 1) goto LAB_0169bbc4;
          uVar29 = (ulong)*puVar38;
        }
        if (uVar41 < (uint)uVar40) {
          uVar44 = 1;
          uVar48 = 1;
          uVar29 = uVar34;
          do {
            if (uVar48 == 0) {
              puVar30 = (uint *)((long)puVar38 +
                                (ulong)*(ushort *)((long)puVar38 + (6 - (long)(int)*puVar38)));
              puVar30 = (uint *)((long)puVar30 + uVar29 * 4 + (ulong)*puVar30 + 4);
              piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
              if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
                  (uVar20 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar20 != 0)) &&
                 (*(int *)((long)piVar3 + uVar20) != 0)) {
                uVar41 = (uint)uVar29;
                break;
              }
            }
            piVar3 = (int *)((long)(puVar35 + uVar29 + 1) + (ulong)puVar35[uVar29 + 1]);
            local_140 = &DAT_cbf29ce484222645;
            local_138 = (long *)&DAT_03996322;
            local_130 = 0;
            local_128 = (long *)0x0;
            local_120 = &DAT_cbf29ce484222645;
            pcStack_118 = "";
            local_110 = 0;
            local_108 = (long *)0x0;
            local_100 = &DAT_cbf29ce484222645;
            pcStack_f8 = "";
            local_f0 = 0;
            local_e8 = (long *)0x0;
            local_e0 = &DAT_cbf29ce484222645;
            puStack_d8 = &DAT_03996322;
            local_d0 = 0;
            local_c8 = (long *)0x0;
            local_c0 = &DAT_cbf29ce484222645;
            puStack_b8 = &DAT_03996322;
            local_b0 = 0;
            local_a8 = (long *)0x0;
            puVar51 = (ushort *)((long)piVar3 - (long)*piVar3);
            uVar7 = *puVar51;
            if (uVar7 < 5) {
              local_150 = (undefined1 *)0x0;
LAB_0169bf68:
              lVar14 = 0;
              local_148 = (byte *)0x0;
            }
            else {
              local_150 = (undefined1 *)0x0;
              if ((ulong)puVar51[2] != 0) {
                local_150 = *(undefined1 **)((long)piVar3 + (ulong)puVar51[2]);
              }
              if (uVar7 < 7) goto LAB_0169bf68;
              local_148 = (byte *)0x0;
              if ((ulong)puVar51[3] != 0) {
                local_148 = *(byte **)((long)piVar3 + (ulong)puVar51[3]);
              }
              if ((uVar7 < 9) || ((ulong)puVar51[4] == 0)) {
                lVar14 = 0;
              }
              else {
                puVar30 = (uint *)((long)piVar3 + (ulong)puVar51[4]);
                lVar14 = (long)puVar30 + (ulong)*puVar30;
              }
            }
            local_130 = strlen((char *)(lVar14 + 4));
            bVar6 = *(byte *)(lVar14 + 4);
            local_140 = &DAT_cbf29ce484222645;
            if (bVar6 != 0) {
              local_140 = &DAT_cbf29ce484222645;
              pbVar32 = (byte *)(lVar14 + 5);
              do {
                local_140 = (undefined1 *)(((ulong)local_140 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar6 != 0);
            }
            local_128 = (long *)0x0;
            if ((uVar7 < 0xb) || ((ulong)puVar51[5] == 0)) {
              lVar16 = 0;
            }
            else {
              puVar30 = (uint *)((long)piVar3 + (ulong)puVar51[5]);
              lVar16 = (long)puVar30 + (ulong)*puVar30;
            }
            local_138 = (long *)(lVar14 + 4);
            local_110 = strlen((char *)(lVar16 + 4));
            bVar6 = *(byte *)(lVar16 + 4);
            local_120 = &DAT_cbf29ce484222645;
            if (bVar6 != 0) {
              local_120 = &DAT_cbf29ce484222645;
              pbVar32 = (byte *)(lVar16 + 5);
              do {
                local_120 = (undefined1 *)(((ulong)local_120 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar6 != 0);
            }
            local_108 = (long *)0x0;
            if ((uVar7 < 0xd) || ((ulong)puVar51[6] == 0)) {
              lVar14 = 0;
            }
            else {
              puVar30 = (uint *)((long)piVar3 + (ulong)puVar51[6]);
              lVar14 = (long)puVar30 + (ulong)*puVar30;
            }
            pcStack_118 = (char *)(lVar16 + 4);
            local_f0 = strlen((char *)(lVar14 + 4));
            bVar6 = *(byte *)(lVar14 + 4);
            local_100 = &DAT_cbf29ce484222645;
            if (bVar6 != 0) {
              local_100 = &DAT_cbf29ce484222645;
              pbVar32 = (byte *)(lVar14 + 5);
              do {
                local_100 = (undefined1 *)(((ulong)local_100 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar6 != 0);
            }
            local_e8 = (long *)0x0;
            pcStack_f8 = (char *)(lVar14 + 4);
            uVar12 = FUN_0165ff30(&local_150);
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
            }
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
            if (local_e8 != (long *)0x0) {
              (**(code **)(*local_e8 + 0x20))();
            }
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            if (local_128 != (long *)0x0) {
              (**(code **)(*local_128 + 0x20))();
            }
            if ((uVar12 & 1) == 0) {
              uVar40 = (ulong)*puVar35;
              goto LAB_0169bc54;
            }
            uVar48 = uVar48 & (uVar12 ^ 1);
            uVar40 = (ulong)*puVar35;
            uVar29 = uVar29 + 1;
            uVar44 = uVar44 & uVar12;
          } while (uVar29 < uVar40);
          if (uVar44 == 0) goto LAB_0169bc54;
        }
        plVar37 = *(long **)(param_2 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar13 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_0169c4c4;
        *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar37;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        plVar15 = (long *)(**(code **)(*plVar37 + 0x10))(plVar37,0xb8,8);
        if (plVar15 == (long *)0x0) {
          (**(code **)(*plVar37 + 0xb8))(plVar37);
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
        plVar15[0x15] = 0;
        plVar15[0x16] = 0;
        plVar15[4] = 0;
        plVar15[0x13] = 0;
        plVar15[0x14] = 0;
        plVar15[0x11] = 0;
        plVar15[0x12] = 0;
        plVar15[0xf] = 0;
        plVar15[0x10] = 0;
        plVar15[0xd] = 0;
        plVar15[0xe] = 0;
        plVar15[0xb] = 0;
        plVar15[0xc] = 0;
        plVar15[9] = 0;
        plVar15[10] = 0;
        plVar15[7] = 0;
        plVar15[8] = 0;
        plVar15[5] = 0;
        plVar15[6] = 0;
        puVar1 = PTR_DAT_043796d0 + 0x10;
        plVar15[7] = 0;
        *(undefined4 *)(plVar15 + 8) = 0;
        *(undefined4 *)(plVar15 + 6) = 0;
        plVar15[2] = 0;
        plVar15[3] = 0;
        *plVar15 = (long)puVar1;
        plVar15[1] = 0;
        plVar15[2] = 0;
        plVar15[3] = 0;
        plVar15[4] = 0;
        plVar15[5] = 0;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar13 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar16 == 0) {
          lVar24 = 0;
        }
        else {
          lVar24 = 0;
          if (*(long *)(lVar16 + 0x80) != 0) {
            lVar24 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
          }
        }
        puVar25 = &DAT_cbf29ce484222645;
        plVar15[1] = lVar24;
        plVar46 = plVar15 + 10;
        *(int *)plVar46 = 0;
        *plVar15 = (long)&PTR_FUN_04224440;
        plVar15[9] = (long)&PTR_FUN_04224478;
        plVar15[0xb] = 0;
        plVar15[0xc] = 0;
        plVar15[0xd] = 0;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar13 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        lVar24 = DAT_043f1798;
        lVar16 = tpidr_el0;
        if ((((lVar17 == 0) || (*(long *)(lVar17 + 0x80) == 0)) ||
            (lVar17 = *(long *)(lVar17 + *(long *)(lVar17 + 0x80) * 8 + -8), lVar17 == 0)) &&
           (lVar17 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
          *(long *)(lVar16 + 0x20) = DAT_043f1798;
          lVar17 = lVar24;
        }
        plVar15[0xe] = lVar17;
        plVar15[0xf] = 0x1fffffffffffffff;
        plVar15[0x13] = (long)&DAT_cbf29ce484222645;
        plVar15[0x14] = (long)&DAT_03996322;
        plVar15[0x10] = 0;
        *(undefined4 *)(plVar15 + 0x11) = 0;
        *(undefined4 *)(plVar15 + 0x12) = 0;
        plVar15[0x15] = 0;
        plVar15[0x16] = 0;
        plVar15[1] = (long)plVar37;
        plVar15[2] = (long)plVar15;
        plVar15[3] = 0xb8;
        plVar15[4] = 8;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        *param_1 = (long)plVar15;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar46,0x10);
          if (bVar9) {
            *(int *)plVar46 = (int)*plVar46 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((*(ushort *)((long)puVar38 - (long)(int)*puVar38) < 0xb) ||
           (uVar29 = (ulong)((ushort *)((long)puVar38 - (long)(int)*puVar38))[5], uVar29 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar30 = (uint *)((long)puVar38 + uVar29);
          lVar14 = (long)puVar30 + (ulong)*puVar30;
        }
        sVar18 = strlen((char *)(lVar14 + 4));
        bVar6 = *(byte *)(lVar14 + 4);
        if (bVar6 != 0) {
          pbVar32 = (byte *)(lVar14 + 5);
          do {
            puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar32;
            pbVar32 = pbVar32 + 1;
          } while (bVar6 != 0);
        }
        lVar24 = *param_1;
        *(size_t *)(lVar24 + 0xa8) = sVar18;
        plVar37 = *(long **)(lVar24 + 0xb0);
        *(undefined1 **)(lVar24 + 0x98) = puVar25;
        *(char **)(lVar24 + 0xa0) = (char *)(lVar14 + 4);
        *(undefined8 *)(lVar24 + 0xb0) = 0;
        if (plVar37 != (long *)0x0) {
          (**(code **)(*plVar37 + 0x20))();
        }
        *(undefined8 *)(lVar24 + 0xb0) = 0;
        puVar51 = (ushort *)((long)puVar38 - (long)(int)*puVar38);
        uVar7 = *puVar51;
        if (uVar7 < 7) {
          lVar24 = 0;
          lVar14 = 0;
          lVar17 = 0;
        }
        else {
          lVar14 = 0;
          if ((ulong)puVar51[3] != 0) {
            puVar30 = (uint *)((long)puVar38 + (ulong)puVar51[3]);
            lVar14 = (long)puVar30 + (ulong)*puVar30;
          }
          if (uVar7 < 0xd) {
            lVar24 = 0;
          }
          else {
            lVar24 = 0;
            if ((ulong)puVar51[6] != 0) {
              puVar30 = (uint *)((long)puVar38 + (ulong)puVar51[6]);
              lVar24 = (long)puVar30 + (ulong)*puVar30;
            }
            if (0xe < uVar7) {
              lVar17 = 0;
              if ((ulong)puVar51[7] != 0) {
                puVar30 = (uint *)((long)puVar38 + (ulong)puVar51[7]);
                lVar17 = (long)puVar30 + (ulong)*puVar30;
              }
              goto LAB_0169c250;
            }
          }
          lVar17 = 0;
        }
LAB_0169c250:
        lVar14 = lVar14 + 4;
        bVar9 = false;
        local_1b0 = lVar17 + uVar34 * 4 + 0xd;
        do {
          if (*puVar35 <= uVar34) {
            return;
          }
          lVar26 = uVar34 * 4;
          uVar41 = *(uint *)(lVar14 + lVar26);
          puVar30 = (uint *)(lVar24 + 4 + lVar26);
          uVar48 = *puVar30;
          puVar42 = (uint *)(lVar17 + 4 + lVar26);
          uVar29 = (ulong)*puVar42;
          plVar37 = *(long **)(param_2 + 8);
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar1 = PTR_DAT_04379528;
            if (iVar13 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_0169c4c4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar37;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          plVar15 = (long *)(**(code **)(*plVar37 + 0x10))(plVar37,0xf0,8);
          if (plVar15 == (long *)0x0) {
            (**(code **)(*plVar37 + 0xb8))(plVar37);
            _DAT_000000e8 = 0;
            _DAT_000000e0 = 0;
            _DAT_000000d8 = 0;
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
            FUN_0169e3f8(0);
            _DAT_00000018 = 0xf0;
            _DAT_00000020 = 8;
            _DAT_00000008 = plVar37;
            _DAT_00000010 = plVar15;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
          }
          else {
            plVar15[0xb] = 0;
            plVar15[0x1c] = 0;
            plVar15[0x1d] = 0;
            plVar15[0x1a] = 0;
            plVar15[0x1b] = 0;
            plVar15[0x18] = 0;
            plVar15[0x19] = 0;
            plVar15[0x16] = 0;
            plVar15[0x17] = 0;
            plVar15[0x14] = 0;
            plVar15[0x15] = 0;
            plVar15[0x12] = 0;
            plVar15[0x13] = 0;
            plVar15[0x10] = 0;
            plVar15[0x11] = 0;
            plVar15[0xe] = 0;
            plVar15[0xf] = 0;
            plVar15[0xc] = 0;
            plVar15[0xd] = 0;
            plVar15[8] = 0;
            plVar15[9] = 0;
            plVar15[6] = 0;
            plVar15[7] = 0;
            plVar15[4] = 0;
            plVar15[5] = 0;
            plVar15[2] = 0;
            plVar15[3] = 0;
            *plVar15 = 0;
            plVar15[1] = 0;
            plVar46 = plVar15 + 10;
            *plVar46 = 0;
            FUN_0169e3f8(plVar15);
            plVar15[3] = 0xf0;
            plVar15[1] = (long)plVar37;
            plVar15[2] = (long)plVar15;
            plVar15[4] = 8;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar46,0x10);
              if (bVar11) {
                *(int *)plVar46 = (int)*plVar46 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          piVar3 = (int *)(lVar14 + lVar26 + (ulong)uVar41);
          if (*(ushort *)((long)puVar38 - (long)(int)*puVar38) < 5) {
            lVar26 = 0;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)puVar38 - (long)(int)*puVar38))[2];
            if (uVar40 == 0) {
              lVar26 = 0;
            }
            else {
              puVar43 = (uint *)((long)puVar38 + uVar40);
              lVar26 = (long)puVar43 + (ulong)*puVar43;
            }
          }
          puVar31 = &DAT_cbf29ce484222645;
          bVar6 = *(byte *)(lVar26 + 4);
          puVar25 = puVar31;
          if (bVar6 != 0) {
            pbVar32 = (byte *)(lVar26 + 5);
            do {
              puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar32;
              pbVar32 = pbVar32 + 1;
            } while (bVar6 != 0);
          }
          plVar15[0xb] = (long)puVar25;
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
            uVar28 = 0;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
            uVar28 = 0;
            if (uVar40 != 0) {
              uVar28 = *(undefined4 *)((long)piVar3 + uVar40);
            }
          }
          *(undefined4 *)(plVar15 + 0xc) = uVar28;
          piVar4 = (int *)((long)puVar30 + (ulong)uVar48);
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
            uVar28 = 0;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
            uVar28 = 0;
            if (uVar40 != 0) {
              uVar28 = *(undefined4 *)((long)piVar3 + uVar40);
            }
          }
          *(undefined4 *)((long)plVar15 + 100) = uVar28;
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 9) {
            lVar26 = 0;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4];
            lVar26 = 0;
            if (uVar40 != 0) {
              lVar26 = *(long *)((long)piVar3 + uVar40);
            }
          }
          plVar15[0xd] = lVar26;
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
            bVar11 = false;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
            bVar11 = false;
            if (uVar40 != 0) {
              bVar11 = *(char *)((long)piVar4 + uVar40) != '\0';
            }
          }
          *(bool *)(plVar15 + 0xf) = bVar11;
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) {
            bVar11 = false;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5];
            bVar11 = false;
            if (uVar40 != 0) {
              bVar11 = *(char *)((long)piVar3 + uVar40) != '\0';
            }
          }
          *(bool *)(plVar15 + 0xe) = bVar11;
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) ||
             (uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar40 == 0)) {
            bVar11 = false;
          }
          else {
            bVar11 = *(char *)((long)piVar3 + uVar40) != '\0';
          }
          *(bool *)((long)plVar15 + 0x71) = bVar11;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
             (uVar40 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar40 == 0)) {
            lVar26 = 0;
          }
          else {
            puVar30 = (uint *)((long)piVar4 + uVar40);
            lVar26 = (long)puVar30 + (ulong)*puVar30;
          }
          local_a0 = plVar15;
          sVar18 = strlen((char *)(lVar26 + 4));
          bVar6 = *(byte *)(lVar26 + 4);
          if (bVar6 != 0) {
            pbVar32 = (byte *)(lVar26 + 5);
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar32;
              pbVar32 = pbVar32 + 1;
            } while (bVar6 != 0);
          }
          plVar15[0x12] = sVar18;
          plVar37 = (long *)plVar15[0x13];
          plVar15[0x13] = 0;
          plVar15[0x10] = (long)puVar31;
          plVar15[0x11] = lVar26 + 4;
          if (plVar37 != (long *)0x0) {
            (**(code **)(*plVar37 + 0x20))();
          }
          piVar3 = (int *)((long)puVar42 + uVar29);
          plVar15[0x13] = 0;
          puVar51 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar7 = *puVar51;
          if (8 < uVar7) {
            if (((ulong)puVar51[4] == 0) || (*(int *)((long)piVar4 + (ulong)puVar51[4]) < 1)) {
              if (10 < uVar7) {
                if (((ulong)puVar51[5] != 0) && (0 < *(int *)((long)piVar4 + (ulong)puVar51[5]))) {
                  *(undefined4 *)(plVar15 + 0x14) = 1;
                  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) goto LAB_0169d710;
                  uVar7 = ((ushort *)((long)piVar4 - (long)*piVar4))[5];
joined_r0x0169d658:
                  uVar28 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar28 = *(undefined4 *)((long)piVar4 + (ulong)uVar7);
                  }
                  goto LAB_0169d6c8;
                }
                if (0xc < uVar7) {
                  if (((ulong)puVar51[6] != 0) && (0 < *(int *)((long)piVar4 + (ulong)puVar51[6])))
                  {
                    *(undefined4 *)(plVar15 + 0x14) = 0;
                    if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) goto LAB_0169d710;
                    uVar7 = ((ushort *)((long)piVar4 - (long)*piVar4))[6];
                    goto joined_r0x0169d658;
                  }
                  if (0xe < uVar7) {
                    if (((ulong)puVar51[7] == 0) || (*(int *)((long)piVar4 + (ulong)puVar51[7]) < 1)
                       ) {
                      if ((0x10 < uVar7) &&
                         (((ulong)puVar51[8] != 0 &&
                          (0 < *(int *)((long)piVar4 + (ulong)puVar51[8]))))) {
                        *(undefined1 *)((long)plVar15 + 0xa9) = 1;
                        if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) goto LAB_0169d710;
                        uVar7 = ((ushort *)((long)piVar4 - (long)*piVar4))[8];
                        goto joined_r0x0169d658;
                      }
                    }
                    else {
                      *(undefined1 *)(plVar15 + 0x15) = 1;
                      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) {
                        *(undefined4 *)((long)plVar15 + 0xa4) = 0;
                      }
                      else {
                        uVar40 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7];
                        uVar28 = 0;
                        if (uVar40 != 0) {
                          uVar28 = *(undefined4 *)((long)piVar4 + uVar40);
                        }
                        *(undefined4 *)((long)plVar15 + 0xa4) = uVar28;
                      }
                    }
                  }
                }
              }
            }
            else {
              *(undefined4 *)(plVar15 + 0x14) = 5;
              if (8 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                uVar7 = ((ushort *)((long)piVar4 - (long)*piVar4))[4];
                goto joined_r0x0169d658;
              }
LAB_0169d710:
              uVar28 = 0;
LAB_0169d6c8:
              *(undefined4 *)((long)plVar15 + 0xa4) = uVar28;
            }
          }
          plVar37 = plVar15 + 0x19;
          uVar40 = uVar34;
          while (puVar25 = &DAT_cbf29ce484222645, uVar40 < *puVar35) {
            piVar4 = (int *)((long)(puVar35 + uVar40 + 1) + (ulong)puVar35[uVar40 + 1]);
            local_140 = &DAT_cbf29ce484222645;
            local_138 = (long *)&DAT_03996322;
            local_130 = 0;
            local_128 = (long *)0x0;
            local_120 = &DAT_cbf29ce484222645;
            pcStack_118 = "";
            local_110 = 0;
            local_108 = (long *)0x0;
            local_100 = &DAT_cbf29ce484222645;
            pcStack_f8 = "";
            local_f0 = 0;
            local_e8 = (long *)0x0;
            local_e0 = &DAT_cbf29ce484222645;
            puStack_d8 = &DAT_03996322;
            local_d0 = 0;
            local_c8 = (long *)0x0;
            local_c0 = &DAT_cbf29ce484222645;
            puStack_b8 = &DAT_03996322;
            local_b0 = 0;
            local_a8 = (long *)0x0;
            puVar51 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar7 = *puVar51;
            if (uVar7 < 5) {
              local_150 = (undefined1 *)0x0;
LAB_0169d2d0:
              lVar26 = 0;
              local_148 = (byte *)0x0;
            }
            else {
              local_150 = (undefined1 *)0x0;
              if ((ulong)puVar51[2] != 0) {
                local_150 = *(undefined1 **)((long)piVar4 + (ulong)puVar51[2]);
              }
              if (uVar7 < 7) goto LAB_0169d2d0;
              local_148 = (byte *)0x0;
              if ((ulong)puVar51[3] != 0) {
                local_148 = *(byte **)((long)piVar4 + (ulong)puVar51[3]);
              }
              if ((uVar7 < 9) || ((ulong)puVar51[4] == 0)) {
                lVar26 = 0;
              }
              else {
                puVar30 = (uint *)((long)piVar4 + (ulong)puVar51[4]);
                lVar26 = (long)puVar30 + (ulong)*puVar30;
              }
            }
            local_130 = strlen((char *)(lVar26 + 4));
            bVar6 = *(byte *)(lVar26 + 4);
            local_140 = puVar25;
            if (bVar6 != 0) {
              pbVar32 = (byte *)(lVar26 + 5);
              do {
                local_140 = (undefined1 *)(((ulong)local_140 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar6 != 0);
            }
            local_128 = (long *)0x0;
            if ((uVar7 < 0xb) || ((ulong)puVar51[5] == 0)) {
              lVar19 = 0;
            }
            else {
              puVar30 = (uint *)((long)piVar4 + (ulong)puVar51[5]);
              lVar19 = (long)puVar30 + (ulong)*puVar30;
            }
            local_138 = (long *)(lVar26 + 4);
            local_110 = strlen((char *)(lVar19 + 4));
            bVar6 = *(byte *)(lVar19 + 4);
            local_120 = puVar25;
            if (bVar6 != 0) {
              pbVar32 = (byte *)(lVar19 + 5);
              do {
                local_120 = (undefined1 *)(((ulong)local_120 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar6 != 0);
            }
            local_108 = (long *)0x0;
            if ((uVar7 < 0xd) || ((ulong)puVar51[6] == 0)) {
              lVar26 = 0;
            }
            else {
              puVar30 = (uint *)((long)piVar4 + (ulong)puVar51[6]);
              lVar26 = (long)puVar30 + (ulong)*puVar30;
            }
            __s = (char *)(lVar26 + 4);
            pcStack_118 = (char *)(lVar19 + 4);
            local_f0 = strlen(__s);
            bVar6 = *(byte *)(lVar26 + 4);
            if (bVar6 != 0) {
              pbVar32 = (byte *)(lVar26 + 5);
              do {
                puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar6 != 0);
            }
            local_e8 = (long *)0x0;
            lVar26 = plVar15[0x17];
            local_100 = puVar25;
            pcStack_f8 = __s;
            if (lVar26 == plVar15[0x18]) {
              lVar26 = lVar26 - plVar15[0x16] >> 4;
              uVar33 = plVar15[0x1a];
              uVar20 = lVar26 * 0x2e8ba2e8ba2e8ba3 + 1;
              if (0x7ffffffffffffffe < uVar33) {
                uVar33 = 0x7fffffffffffffff;
              }
              if (uVar33 < uVar20) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar20 <= (ulong)(lVar26 * 0x5d1745d1745d1746)) {
                uVar20 = lVar26 * 0x5d1745d1745d1746;
              }
              if ((ulong)(lVar26 * 0x2e8ba2e8ba2e8ba3) < uVar33 >> 1) {
                uVar33 = uVar20;
              }
              local_78 = (undefined1 *)0x0;
              plStack_70 = plVar37;
              if (uVar33 == 0) {
                puVar25 = (undefined1 *)0x0;
              }
              else {
                puVar25 = (undefined1 *)
                          (**(code **)(*(long *)*plVar37 + 0x10))((long *)*plVar37,uVar33 * 0xb0,8);
                if (puVar25 == (undefined1 *)0x0) {
                  (**(code **)(*(long *)*plVar37 + 0xb8))();
                }
              }
              puVar49 = puVar25 + lVar26 * 0x10;
              local_90 = puVar25;
              local_88 = puVar49;
              local_78 = puVar25 + uVar33 * 0xb0;
              FUN_01697004(plVar37,puVar49,&local_150);
              puVar31 = puVar49 + 0xb0;
              puVar23 = (undefined1 *)plVar15[0x16];
              puVar45 = (undefined1 *)plVar15[0x17];
              local_80 = puVar31;
              if (puVar45 == puVar23) {
                local_80 = puVar23;
              }
              else {
                do {
                  puVar49 = puVar49 + -0xb0;
                  puVar45 = puVar45 + -0xb0;
                  FUN_01697004(plVar37,puVar49,puVar45);
                } while (puVar23 != puVar45);
                puVar23 = (undefined1 *)plVar15[0x16];
                local_80 = (undefined1 *)plVar15[0x17];
              }
              plVar15[0x16] = (long)puVar49;
              plVar15[0x17] = (long)puVar31;
              local_78 = (undefined1 *)plVar15[0x18];
              plVar15[0x18] = (long)(puVar25 + uVar33 * 0xb0);
              local_90 = puVar23;
              local_88 = puVar23;
              FUN_0169ed50(&local_90);
              puVar25 = local_90;
              if (local_90 != (undefined1 *)0x0) {
                lVar26 = (long)local_78 - (long)local_90;
                plVar46 = (long *)*plStack_70;
                uVar20 = (**(code **)(*plVar46 + 0xc0))(plVar46);
                if ((uVar20 & 1) != 0) {
                  if (*(char *)(lVar16 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar16 + 0x38d488) = 1;
                    *(undefined8 *)(lVar16 + 0x38d478) = 0;
                    *(undefined8 *)(lVar16 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar16 + 0x38d480)) {
                    FUN_02bcc824(plVar46,puVar25,lVar26,8);
                    goto LAB_0169cbe8;
                  }
                }
                (**(code **)(*plVar46 + 0x18))(plVar46,puVar25,lVar26,8);
              }
            }
            else {
              FUN_01697004(plVar37,lVar26,&local_150);
              plVar15[0x17] = plVar15[0x17] + 0xb0;
            }
LAB_0169cbe8:
            uVar40 = uVar40 + 1;
            if (*puVar35 <= (uint)uVar40) {
              if (local_a8 != (long *)0x0) {
                (**(code **)(*local_a8 + 0x20))();
              }
              if (local_c8 != (long *)0x0) {
                (**(code **)(*local_c8 + 0x20))();
              }
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              if (local_108 != (long *)0x0) {
                (**(code **)(*local_108 + 0x20))();
              }
              if (local_128 != (long *)0x0) {
                (**(code **)(*local_128 + 0x20))();
              }
              break;
            }
            puVar30 = (uint *)(lVar14 + (uVar40 & 0xffffffff) * 4);
            piVar4 = (int *)((long)puVar30 + (ulong)*puVar30);
            if (((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
                (uVar20 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar20 == 0)) ||
               (*(int *)((long)piVar4 + uVar20) == 0)) {
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
            }
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
            if (local_e8 != (long *)0x0) {
              (**(code **)(*local_e8 + 0x20))();
            }
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            if (local_128 != (long *)0x0) {
              (**(code **)(*local_128 + 0x20))();
            }
            if (!bVar11) break;
          }
          uVar47 = *(undefined8 *)(param_2 + 8);
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
            local_150 = (undefined1 *)0x0;
          }
          else {
            uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
            local_150 = (undefined1 *)0x0;
            if (uVar40 != 0) {
              local_150 = *(undefined1 **)((long)piVar3 + uVar40);
            }
          }
          uVar40 = (ulong)*(ushort *)((long)puVar38 + (4 - (long)(int)*puVar38));
          puVar30 = (uint *)((long)puVar38 + uVar40);
          uVar20 = (ulong)*puVar30;
          bVar6 = *(byte *)((long)puVar30 + uVar20 + 4);
          local_90 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar32 = (byte *)((long)puVar38 + uVar20 + uVar40 + 5);
            do {
              local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar32;
              pbVar32 = pbVar32 + 1;
            } while (bVar6 != 0);
          }
          if (((*PTR_DAT_04379678 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379678);
          }
          lVar26 = *(long *)PTR_DAT_04379680;
          *(long *)PTR_DAT_04379688 = lVar26;
          plVar37 = *(long **)(lVar26 + 0x100);
          if (plVar37 != (long *)0x0) {
            plVar15 = plVar37 + 10;
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar11) {
                *(int *)plVar15 = (int)*plVar15 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar15 = (long *)plVar37[0x20];
          if (plVar15 != (long *)0x0) {
            plVar46 = plVar15 + 10;
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar46,0x10);
              if (bVar11) {
                *(int *)plVar46 = (int)*plVar46 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_158 = (long *)plVar15[0xf];
          if (local_158 != (long *)0x0) {
            lVar26 = local_158[0xb];
            if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar26 + 0x10) == 0) {
              uVar21 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
              *(undefined8 *)(lVar26 + 0x10) = uVar21;
            }
            piVar4 = (int *)(lVar26 + 0xc);
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar11) {
                *piVar4 = *piVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          lVar26 = FUN_016971e0(auStack_98,uVar47,&local_150,&local_90,&local_158);
          plVar46 = local_a0;
          if (lVar26 != 0) {
            piVar4 = (int *)(lVar26 + 0x50);
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar11) {
                *piVar4 = *piVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar22 = (long *)local_a0[0x1d];
          local_a0[0x1d] = 0;
          if (plVar22 != (long *)0x0) {
            plVar2 = plVar22 + 10;
            do {
              iVar13 = (int)*plVar2 + -1;
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar11) {
                *(int *)plVar2 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*plVar22 + 0x10))();
            }
          }
          plVar46[0x1d] = lVar26;
          if (local_158 != (long *)0x0) {
            lVar26 = local_158[0xb];
            piVar4 = (int *)(lVar26 + 0xc);
            do {
              iVar13 = *piVar4;
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar11) {
                *piVar4 = iVar13 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar26 + 0x18) = 0;
              (**(code **)(*local_158 + 0x20))();
            }
          }
          plVar46 = plVar15 + 10;
          do {
            iVar13 = (int)*plVar46 + -1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar46,0x10);
            if (bVar11) {
              *(int *)plVar46 = iVar13;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          plVar15 = plVar37 + 10;
          do {
            iVar13 = (int)*plVar15 + -1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = iVar13;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*plVar37 + 0x10))(plVar37);
          }
          if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
             (uVar40 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar40 != 0)) {
            uVar20 = (ulong)*(uint *)((long)piVar3 + uVar40);
            puVar30 = (uint *)((long)((long)piVar3 + uVar40) + uVar20);
            if (puVar30 != (uint *)0x0) {
              uVar41 = *puVar30;
              if (uVar41 != 0) {
                lVar19 = local_a0[0x1d];
                lVar26 = local_1b0 + uVar20 + uVar40 + uVar29;
                puVar42 = puVar30 + 1;
                do {
                  puVar43 = puVar42 + 1;
                  uVar48 = *puVar42;
                  pbVar32 = (byte *)((long)puVar43 + (ulong)uVar48);
                  local_140 = (undefined1 *)strlen((char *)pbVar32);
                  bVar6 = *pbVar32;
                  local_150 = &DAT_cbf29ce484222645;
                  if (bVar6 != 0) {
                    pbVar36 = (byte *)(lVar26 + (ulong)uVar48);
                    do {
                      local_150 = (undefined1 *)(((ulong)local_150 ^ (ulong)bVar6) * 0x100000001b3);
                      bVar6 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    } while (bVar6 != 0);
                  }
                  local_138 = (long *)0x0;
                  local_148 = pbVar32;
                  FUN_0169da6c(lVar19 + 0x78,&local_150);
                  if (local_138 != (long *)0x0) {
                    (**(code **)(*local_138 + 0x20))();
                  }
                  lVar26 = lVar26 + 4;
                  puVar42 = puVar43;
                } while (puVar43 != puVar30 + 1 + uVar41);
              }
            }
          }
          lVar19 = *param_1;
          puVar39 = (undefined8 *)(lVar19 + 0x70);
          lVar26 = *(long *)(lVar19 + 0x60);
          if (lVar26 == *(long *)(lVar19 + 0x68)) {
            uVar40 = *(ulong *)(lVar19 + 0x78);
            lVar26 = lVar26 - *(long *)(lVar19 + 0x58) >> 3;
            uVar29 = lVar26 + 1;
            if (0x7ffffffffffffffe < uVar40) {
              uVar40 = 0x7fffffffffffffff;
            }
            if (uVar40 < uVar29) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar27 = *(long *)(lVar19 + 0x68) - *(long *)(lVar19 + 0x58);
            if ((ulong)(lVar27 >> 3) < uVar40 >> 1) {
              uVar20 = lVar27 >> 2;
              uVar40 = uVar29;
              if (uVar29 <= uVar20) {
                uVar40 = uVar20;
              }
            }
            if (uVar40 == 0) {
              lVar27 = 0;
            }
            else {
              lVar27 = (**(code **)(*(long *)*puVar39 + 0x10))((long *)*puVar39,uVar40 << 3,8);
              if (lVar27 == 0) {
                (**(code **)(*(long *)*puVar39 + 0xb8))();
              }
            }
            lVar50 = lVar27 + lVar26 * 8;
            FUN_0169ee04(puVar39,lVar50,&local_a0);
            plVar37 = *(long **)(lVar19 + 0x58);
            plVar15 = *(long **)(lVar19 + 0x60);
            lVar26 = lVar50 + 8;
            if (plVar15 == plVar37) {
              plVar15 = plVar37;
            }
            else {
              lVar50 = lVar50 + -8;
              FUN_0169ee04(puVar39,lVar50,plVar15 + -1);
              if (plVar15 + -1 != plVar37) {
                do {
                  lVar50 = lVar50 + -8;
                  FUN_0169ee04(puVar39,lVar50,plVar15 + -2);
                  plVar15 = plVar15 + -1;
                } while (plVar37 + 1 != plVar15);
              }
              plVar15 = *(long **)(lVar19 + 0x58);
              plVar37 = *(long **)(lVar19 + 0x60);
            }
            *(long *)(lVar19 + 0x58) = lVar50;
            *(long *)(lVar19 + 0x60) = lVar26;
            lVar26 = *(long *)(lVar19 + 0x68);
            *(ulong *)(lVar19 + 0x68) = lVar27 + uVar40 * 8;
            if (plVar37 != plVar15) {
              plVar37 = plVar37 + -1;
              plVar46 = (long *)*plVar37;
              if (plVar46 != (long *)0x0) {
                plVar22 = plVar46 + 10;
                do {
                  iVar13 = (int)*plVar22 + -1;
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar11) {
                    *(int *)plVar22 = iVar13;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (iVar13 == 0) goto LAB_0169d0dc;
              }
LAB_0169d0b4:
              if (plVar37 != plVar15) {
                while( true ) {
                  plVar37 = plVar37 + -1;
                  plVar46 = (long *)*plVar37;
                  if (plVar46 == (long *)0x0) break;
                  plVar22 = plVar46 + 10;
                  do {
                    iVar13 = (int)*plVar22 + -1;
                    cVar8 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar11) {
                      *(int *)plVar22 = iVar13;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar13 != 0) break;
LAB_0169d0dc:
                  (**(code **)(*plVar46 + 0x10))();
                  if (plVar37 == plVar15) goto LAB_0169d0f0;
                }
                goto LAB_0169d0b4;
              }
            }
LAB_0169d0f0:
            if (plVar15 != (long *)0x0) {
              plVar37 = (long *)*puVar39;
              lVar26 = lVar26 - (long)plVar15;
              uVar29 = (**(code **)(*plVar37 + 0xc0))(plVar37);
              if ((uVar29 & 1) != 0) {
                if (*(char *)(lVar16 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar16 + 0x38d488) = 1;
                  *(undefined8 *)(lVar16 + 0x38d478) = 0;
                  *(undefined8 *)(lVar16 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar16 + 0x38d480)) {
                  FUN_02bcc824(plVar37,plVar15,lVar26,8);
                  goto LAB_0169d0f4;
                }
              }
              (**(code **)(*plVar37 + 0x18))(plVar37,plVar15,lVar26,8);
            }
          }
          else {
            FUN_0169ee04(puVar39,lVar26,&local_a0);
            *(long *)(lVar19 + 0x60) = *(long *)(lVar19 + 0x60) + 8;
          }
LAB_0169d0f4:
          uVar41 = (int)uVar34 + 1;
          if (uVar41 < *puVar35) {
            piVar3 = (int *)((long)(puVar35 + (ulong)uVar41 + 1) + (ulong)puVar35[(ulong)uVar41 + 1]
                            );
            if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
               (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 == 0)) {
              puVar25 = (undefined1 *)0x0;
            }
            else {
              puVar25 = *(undefined1 **)((long)piVar3 + uVar29);
            }
            puVar30 = (uint *)(lVar14 + (ulong)uVar41 * 4);
            piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
            if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
               (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar29 == 0)) {
              puVar31 = (undefined1 *)0x0;
            }
            else {
              puVar31 = *(undefined1 **)((long)piVar3 + uVar29);
            }
            bVar11 = puVar25 == &DAT_cbf29ce484222645 && puVar31 == &DAT_cbf29ce484222645;
            bVar9 = (bool)(bVar9 | bVar11);
          }
          else {
            bVar11 = true;
            bVar9 = true;
          }
          if (local_a0 != (long *)0x0) {
            plVar37 = local_a0 + 10;
            do {
              iVar13 = (int)*plVar37 + -1;
              cVar8 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar10) {
                *(int *)plVar37 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_a0 + 0x10))();
            }
          }
          uVar34 = uVar34 + 1;
          local_1b0 = local_1b0 + 4;
          if (bVar11) {
            if (bVar9) {
              return;
            }
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              return;
            }
            plVar37 = param_1 + 10;
            do {
              iVar13 = (int)*plVar37 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar9) {
                *(int *)plVar37 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*param_1 + 0x10))();
              return;
            }
            return;
          }
        } while( true );
      }
LAB_0169bbc4:
      puVar39 = puVar39 + 1;
    } while (puVar39 != puVar5);
  }
  goto LAB_0169baa0;
}


