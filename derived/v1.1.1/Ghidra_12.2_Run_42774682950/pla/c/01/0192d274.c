/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192d274; name: FUN_0192d274
 */


/* WARNING: Removing unreachable block (ram,0x0192e17c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0192d274(long param_1,uint param_2)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  bool bVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  int *piVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  byte *pbVar28;
  uint *puVar29;
  long lVar30;
  undefined1 *puVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 *puVar35;
  long lVar36;
  ulong uVar37;
  long *plVar38;
  ulong uVar39;
  undefined1 *puVar40;
  ulong uVar41;
  int *piVar42;
  int iVar43;
  long *plVar44;
  long *plVar45;
  int *piVar46;
  char cVar47;
  int iVar48;
  int *piVar49;
  ulong *puVar50;
  ulong *puVar51;
  uint *puVar52;
  ulong *puVar53;
  ulong *puVar54;
  long *plVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  int local_e44;
  undefined1 *local_e40;
  int local_de8;
  long *local_de0;
  long *local_dd8;
  long *local_dd0;
  long *local_dc8;
  long *local_dc0;
  undefined8 local_db8;
  undefined1 *local_db0;
  ulong local_da8;
  undefined1 *local_da0;
  char local_d98 [8];
  long *local_d90;
  long *local_d88;
  long *local_d80;
  long *local_d78;
  long *local_d70;
  bool local_d64 [4];
  undefined8 local_d60;
  ulong uStack_d58;
  undefined8 local_d50;
  undefined2 local_d48;
  undefined4 local_d44;
  undefined2 local_d40;
  undefined8 local_d3c;
  undefined1 local_d34;
  undefined4 local_d30;
  undefined1 *local_d28;
  undefined1 *puStack_d20;
  undefined1 *local_d18;
  undefined1 *puStack_d10;
  long local_d08;
  int local_d00;
  undefined4 local_cfc;
  undefined8 local_cf8;
  undefined1 local_cf0;
  int local_cec;
  undefined1 *local_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined1 *local_cd0;
  byte *local_cc8;
  size_t local_cc0;
  long *local_cb8 [2];
  undefined2 local_ca8 [2];
  undefined4 local_ca4;
  undefined2 local_ca0 [2];
  undefined8 local_c9c;
  undefined1 local_c94 [4];
  undefined4 local_c90 [2];
  undefined8 local_c88 [7];
  undefined1 local_c50 [4];
  undefined4 local_c4c;
  undefined8 local_c48 [345];
  long local_180;
  char local_178;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  long *local_138;
  ulong local_130;
  undefined8 local_128;
  undefined4 local_120;
  long local_118;
  ulong local_110;
  long local_108;
  long *local_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  ulong *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  long *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  char local_a8 [8];
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  uint local_68;
  uint local_64;
  
  FUN_0192ce14(local_d98);
  if (local_d98[0] != '\0') {
    local_da0 = (undefined1 *)0x0;
    local_db0 = &DAT_f4b17a579f18960;
    local_da8 = 0x82a2b175229d6a5b;
    if (*(char *)(param_1 + 0x58) == '\0') {
      nn::crypto::GenerateCryptographicallyRandomBytes(&local_cd0,8);
      local_db0 = local_cd0;
    }
    else {
      local_db0 = *(undefined1 **)(param_1 + 0x60);
    }
    local_da8 = 0x82a2b175229d6a5b;
    local_da0 = local_db0;
    lVar10 = FUN_0192cab8(local_d90);
    plVar45 = *(long **)(lVar10 + 0x30);
    if (plVar45 != (long *)0x0) {
      plVar55 = (long *)PTR_DAT_04379560;
      do {
        piVar49 = (int *)plVar45[3];
        if (*(ushort *)((long)piVar49 - (long)*piVar49) < 5) {
          local_db8 = 0;
        }
        else {
          uVar17 = (ulong)((ushort *)((long)piVar49 - (long)*piVar49))[2];
          local_db8 = 0;
          if (uVar17 != 0) {
            local_db8 = *(undefined8 *)((long)piVar49 + uVar17);
          }
        }
        if (((*PTR_DAT_0437a780 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a780);
        }
        lVar10 = *(long *)PTR_DAT_0437a788;
        *(long *)PTR_DAT_0437a790 = lVar10;
        for (plVar44 = *(long **)(*(long *)(lVar10 + 0x78) + 0x930); plVar44 != (long *)0x0;
            plVar44 = (long *)*plVar44) {
          piVar46 = (int *)plVar44[3];
          if (*(ushort *)((long)piVar49 - (long)*piVar49) < 5) {
            lVar10 = 0;
          }
          else {
            uVar17 = (ulong)((ushort *)((long)piVar49 - (long)*piVar49))[2];
            lVar10 = 0;
            if (uVar17 != 0) {
              lVar10 = *(long *)((long)piVar49 + uVar17);
            }
          }
          if (*(ushort *)((long)piVar46 - (long)*piVar46) < 5) {
            if (lVar10 == 0) goto LAB_0192d428;
          }
          else {
            uVar17 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[2];
            lVar24 = 0;
            if (uVar17 != 0) {
              lVar24 = *(long *)((long)piVar46 + uVar17);
            }
            if (lVar10 == lVar24) {
LAB_0192d428:
              FUN_01930360();
            }
          }
        }
        FUN_01102c4c(local_d80,&local_db8);
        plVar44 = local_d90;
        if (local_d90 != (long *)0x0) {
          lVar10 = local_d90[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar11;
          }
          piVar46 = (int *)(lVar10 + 0xc);
          do {
            cVar47 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
            if (bVar16) {
              *piVar46 = *piVar46 + 1;
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
        }
        plVar12 = local_d78;
        local_dc0 = local_d78;
        if (local_d78 == (long *)0x0) {
          uVar17 = FUN_0193053c(piVar49,&local_dc0,&local_db0);
          uVar17 = uVar17 & 0xffffffff;
joined_r0x01930118:
          if (plVar44 == (long *)0x0) goto LAB_0192d530;
LAB_0192d514:
          lVar10 = plVar44[0xb];
          piVar46 = (int *)(lVar10 + 0xc);
          do {
            iVar9 = *piVar46;
            cVar47 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
            if (bVar16) {
              *piVar46 = iVar9 + -1;
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          if (iVar9 + -1 != 0) goto LAB_0192d530;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar44 + 0x20))(plVar44);
          if ((uVar17 & 1) != 0) goto LAB_0192d534;
LAB_0192d6ec:
          FUN_01102c4c(local_d80,&local_db8);
          plVar44 = local_d78;
          local_de0 = local_d78;
          if (local_d78 == (long *)0x0) {
            FUN_01930c88(piVar49,&local_de0);
          }
          else {
            lVar10 = local_d78[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_01930330:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar11;
            }
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = *piVar46 + 1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            FUN_01930c88(piVar49,&local_de0);
            lVar10 = plVar44[0xb];
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar46;
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = iVar9 + -1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar44 + 0x20))(plVar44);
            }
          }
          if (((*PTR_DAT_0437a780 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a780);
          }
          lVar10 = *(long *)PTR_DAT_0437a788;
          *(long *)PTR_DAT_0437a790 = lVar10;
          plVar44 = *(long **)(*(long *)(lVar10 + 0x78) + 0x930);
          if (plVar44 != (long *)0x0) {
LAB_0192d7a8:
            puVar27 = &DAT_cbf29ce484222645;
            piVar46 = (int *)plVar44[3];
            if (*(ushort *)((long)piVar49 - (long)*piVar49) < 5) {
              lVar10 = 0;
            }
            else {
              uVar17 = (ulong)((ushort *)((long)piVar49 - (long)*piVar49))[2];
              lVar10 = 0;
              if (uVar17 != 0) {
                lVar10 = *(long *)((long)piVar49 + uVar17);
              }
            }
            if (*(ushort *)((long)piVar46 - (long)*piVar46) < 5) {
              if (lVar10 == 0) goto LAB_0192d7f8;
              goto LAB_0192d7a0;
            }
            uVar17 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[2];
            lVar24 = 0;
            if (uVar17 != 0) {
              lVar24 = *(long *)((long)piVar46 + uVar17);
            }
            if (lVar10 != lVar24) goto LAB_0192d7a0;
LAB_0192d7f8:
            if (((*PTR_DAT_04379558 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379700,plVar55,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379558);
            }
            lVar10 = *plVar55;
            *(long *)PTR_DAT_04379568 = lVar10;
            plVar12 = *(long **)(lVar10 + 0x228);
            if (plVar12 != (long *)0x0) {
              lVar10 = plVar12[0xb];
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar11;
              }
              piVar42 = (int *)(lVar10 + 0xc);
              do {
                cVar47 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                if (bVar16) {
                  *piVar42 = *piVar42 + 1;
                  cVar47 = ExclusiveMonitorsStatus();
                }
              } while (cVar47 != '\0');
            }
            puVar18 = (ushort *)((long)piVar46 - (long)*piVar46);
            if ((*puVar18 < 7) || ((ulong)puVar18[3] == 0)) {
              lVar10 = 0;
            }
            else {
              puVar52 = (uint *)((long)piVar46 + (ulong)puVar18[3]);
              lVar10 = (long)puVar52 + (ulong)*puVar52;
            }
            bVar3 = *(byte *)(lVar10 + 4);
            if (bVar3 != 0) {
              pbVar26 = (byte *)(lVar10 + 5);
              do {
                puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar3) * 0x100000001b3);
                bVar3 = *pbVar26;
                pbVar26 = pbVar26 + 1;
              } while (bVar3 != 0);
            }
            puVar31 = (undefined1 *)((long *)plVar12[0x37])[1];
            if (puVar31 != (undefined1 *)0x0) {
              uVar17 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555);
              uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
              uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar17 < 2) {
                puVar35 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar27);
              }
              else {
                puVar35 = puVar27;
                if (puVar31 <= puVar27) {
                  uVar25 = 0;
                  if (puVar31 != (undefined1 *)0x0) {
                    uVar25 = (ulong)puVar27 / (ulong)puVar31;
                  }
                  puVar35 = puVar27 + -(uVar25 * (long)puVar31);
                }
              }
              plVar38 = *(long **)(*(long *)plVar12[0x37] + (long)puVar35 * 8);
              if ((plVar38 == (long *)0x0) || (plVar38 = (long *)*plVar38, plVar38 == (long *)0x0))
              goto LAB_0192fd70;
              if (uVar17 < 2) {
                do {
                  if ((undefined1 *)plVar38[1] == puVar27) {
                    if ((undefined1 *)plVar38[2] == puVar27) goto LAB_0192d9c8;
                  }
                  else if ((undefined1 *)((ulong)plVar38[1] & (ulong)(puVar31 + -1)) != puVar35)
                  break;
                  plVar38 = (long *)*plVar38;
                } while (plVar38 != (long *)0x0);
              }
              else {
                do {
                  puVar40 = (undefined1 *)plVar38[1];
                  if (puVar40 == puVar27) {
                    if ((undefined1 *)plVar38[2] == puVar27) goto LAB_0192d9c8;
                  }
                  else {
                    if (puVar31 <= puVar40) {
                      uVar17 = 0;
                      if (puVar31 != (undefined1 *)0x0) {
                        uVar17 = (ulong)puVar40 / (ulong)puVar31;
                      }
                      puVar40 = puVar40 + -(uVar17 * (long)puVar31);
                    }
                    if (puVar40 != puVar35) break;
                  }
                  plVar38 = (long *)*plVar38;
                } while (plVar38 != (long *)0x0);
              }
              goto LAB_0192fd6c;
            }
            goto LAB_0192fd70;
          }
        }
        else {
          lVar10 = local_d78[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar11;
          }
          piVar46 = (int *)(lVar10 + 0xc);
          do {
            cVar47 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
            if (bVar16) {
              *piVar46 = *piVar46 + 1;
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          uVar17 = FUN_0193053c(piVar49,&local_dc0,&local_db0);
          lVar10 = plVar12[0xb];
          uVar17 = uVar17 & 0xffffffff;
          piVar46 = (int *)(lVar10 + 0xc);
          do {
            iVar9 = *piVar46;
            cVar47 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
            if (bVar16) {
              *piVar46 = iVar9 + -1;
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            goto joined_r0x01930118;
          }
          if (plVar44 != (long *)0x0) goto LAB_0192d514;
LAB_0192d530:
          if ((uVar17 & 1) == 0) goto LAB_0192d6ec;
LAB_0192d534:
          plVar44 = local_d90;
          if (local_d90 != (long *)0x0) {
            lVar10 = local_d90[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar11;
            }
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = *piVar46 + 1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
          }
          plVar12 = local_d88;
          local_dc8 = local_d88;
          if (local_d88 != (long *)0x0) {
            lVar10 = local_d88[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar11;
            }
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = *piVar46 + 1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
          }
          plVar38 = local_d80;
          local_dd0 = local_d80;
          if (local_d80 != (long *)0x0) {
            lVar10 = local_d80[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar11;
            }
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = *piVar46 + 1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
          }
          plVar14 = local_d70;
          local_dd8 = local_d70;
          if (local_d70 == (long *)0x0) {
            uVar17 = FUN_01930680(piVar49,&local_dc8,&local_dd0,&local_dd8,&local_db0);
            uVar17 = uVar17 & 0xffffffff;
          }
          else {
            lVar10 = local_d70[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar11;
            }
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = *piVar46 + 1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            uVar17 = FUN_01930680(piVar49,&local_dc8,&local_dd0,&local_dd8,&local_db0);
            lVar10 = plVar14[0xb];
            uVar17 = uVar17 & 0xffffffff;
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar46;
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = iVar9 + -1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          if (plVar38 != (long *)0x0) {
            lVar10 = plVar38[0xb];
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar46;
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = iVar9 + -1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar38 + 0x20))(plVar38);
            }
          }
          if (plVar12 != (long *)0x0) {
            lVar10 = plVar12[0xb];
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar46;
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = iVar9 + -1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
          }
          if (plVar44 != (long *)0x0) {
            lVar10 = plVar44[0xb];
            piVar46 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar46;
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
              if (bVar16) {
                *piVar46 = iVar9 + -1;
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar44 + 0x20))(plVar44);
            }
          }
          if (((uVar17 & 1) == 0) || ((param_2 & 1) != 0)) goto LAB_0192d6ec;
        }
LAB_0192d368:
        plVar45 = (long *)*plVar45;
      } while (plVar45 != (long *)0x0);
      if (local_d98[0] == '\0') {
        return;
      }
    }
    if (local_d70 != (long *)0x0) {
      lVar10 = local_d70[0xb];
      piVar49 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar49;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar49,0x10);
        if (bVar16) {
          *piVar49 = iVar9 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_d70 + 0x20))();
      }
    }
    if (local_d78 != (long *)0x0) {
      lVar10 = local_d78[0xb];
      piVar49 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar49;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar49,0x10);
        if (bVar16) {
          *piVar49 = iVar9 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_d78 + 0x20))();
      }
    }
    if (local_d80 != (long *)0x0) {
      lVar10 = local_d80[0xb];
      piVar49 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar49;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar49,0x10);
        if (bVar16) {
          *piVar49 = iVar9 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_d80 + 0x20))();
      }
    }
    if (local_d88 != (long *)0x0) {
      lVar10 = local_d88[0xb];
      piVar49 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar49;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar49,0x10);
        if (bVar16) {
          *piVar49 = iVar9 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_d88 + 0x20))();
      }
    }
    if (local_d90 != (long *)0x0) {
      lVar10 = local_d90[0xb];
      piVar49 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar49;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar49,0x10);
        if (bVar16) {
          *piVar49 = iVar9 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_d90 + 0x20))();
      }
    }
  }
  return;
LAB_0192d9c8:
  if ((char)plVar38[3] == '\0') goto LAB_0192fd6c;
  if (*puVar18 < 9) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    if ((ulong)puVar18[4] != 0) {
      iVar9 = *(int *)((long)piVar46 + (ulong)puVar18[4]);
    }
  }
  do {
    uVar17 = (ulong)local_db0 ^ local_da8;
    iVar48 = (int)local_da8;
    local_da8 = uVar17 >> 0x1b | uVar17 << 0x25;
    uVar33 = (int)local_db0 + iVar48 & 0x7f;
    local_db0 = (undefined1 *)
                (uVar17 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ uVar17 << 0x10);
  } while (99 < uVar33);
  iVar48 = 100;
  if ((param_2 & 1) == 0) {
    iVar48 = iVar9;
  }
  if (iVar48 <= (int)uVar33) goto LAB_0192fd6c;
  plVar38 = (long *)FUN_0192ce14(local_a8,param_1 + 8);
  if (local_a8[0] != '\0') {
    puVar18 = (ushort *)((long)piVar46 - (long)*piVar46);
    uVar4 = *puVar18;
    plVar38 = plVar12;
    if (uVar4 < 5) {
      local_e40 = (undefined1 *)0x0;
LAB_0192eaa4:
      local_de8 = 0;
LAB_0192ded0:
      uVar33 = 0;
LAB_0192db18:
      puVar18 = (ushort *)((long)piVar46 - (long)*piVar46);
      uVar4 = *puVar18;
      if (uVar4 < 0xf) {
        local_e44 = 0;
LAB_0192db48:
        iVar9 = 0;
      }
      else {
        if ((ulong)puVar18[7] != 0) {
          local_e44 = *(int *)((long)piVar46 + (ulong)puVar18[7]);
          if (0x10 < uVar4) goto LAB_0192db40;
          goto LAB_0192db48;
        }
        local_e44 = 0;
        if (uVar4 < 0x11) goto LAB_0192db48;
LAB_0192db40:
        if ((ulong)puVar18[8] == 0) goto LAB_0192db48;
        iVar9 = *(int *)((long)piVar46 + (ulong)puVar18[8]);
      }
      local_c8 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
      local_d0 = (ulong *)0x0;
      local_e0 = (ulong *)0x0;
      local_d8 = (ulong *)0x0;
      local_c0 = 0x7ffffffffffffff;
      uStack_b8 = 0;
      local_b0 = 0;
      puVar52 = (uint *)((long)piVar46 + (ulong)puVar18[0x11]);
      uVar17 = (ulong)*puVar52;
      puVar52 = (uint *)((long)puVar52 + uVar17);
      puVar29 = puVar52 + 1;
      uVar25 = (ulong)*puVar52;
      lVar10 = tpidr_el0;
      if (uVar25 != 0) {
        lVar24 = (long)piVar46 + uVar17 + puVar18[0x11] + 9;
        puVar52 = puVar29;
        do {
          puVar27 = &DAT_cbf29ce484222645;
          puVar21 = puVar52 + 1;
          uVar34 = *puVar52;
          pbVar26 = (byte *)((long)puVar21 + (ulong)uVar34);
          local_cc0 = strlen((char *)pbVar26);
          bVar3 = *pbVar26;
          if (bVar3 != 0) {
            pbVar28 = (byte *)(lVar24 + (ulong)uVar34);
            do {
              puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (bVar3 != 0);
          }
          local_cb8[0] = (long *)0x0;
          local_cd0 = puVar27;
          local_cc8 = pbVar26;
          if (*pbVar26 != 0) {
            if (local_d8 == local_d0) {
              lVar36 = (long)local_d8 - (long)local_e0 >> 5;
              uVar17 = lVar36 + 1;
              uVar19 = local_c0;
              if (0x7ffffffffffffffe < local_c0) {
                uVar19 = 0x7fffffffffffffff;
              }
              if (uVar19 < uVar17) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_d0 - (long)local_e0 >> 5) < uVar19 >> 1) {
                uVar32 = (long)local_d0 - (long)local_e0 >> 4;
                uVar19 = uVar17;
                if (uVar17 <= uVar32) {
                  uVar19 = uVar32;
                }
              }
              if (uVar19 == 0) {
                lVar20 = 0;
              }
              else {
                lVar20 = (**(code **)(*local_c8 + 0x10))(local_c8,uVar19 << 5,8);
                if (lVar20 == 0) {
                  (**(code **)(*local_c8 + 0xb8))();
                }
              }
              puVar53 = (ulong *)(lVar20 + lVar36 * 0x20);
              FUN_00b835e0(&local_c8,puVar53,&local_cd0);
              puVar8 = local_e0;
              puVar54 = puVar53;
              puVar1 = local_e0;
              puVar51 = local_e0;
              puVar50 = local_d8;
              puVar7 = local_d0;
              while( true ) {
                local_e0 = puVar54;
                local_d0 = (ulong *)(lVar20 + uVar19 * 0x20);
                puVar54 = puVar53 + 4;
                plVar55 = local_c8;
                if (puVar50 == puVar8) break;
                puVar54 = local_e0 + -4;
                puVar50 = puVar50 + -4;
                local_e0 = puVar1;
                local_d0 = puVar7;
                FUN_00b835e0(&local_c8,puVar54,puVar50);
                puVar1 = local_e0;
                puVar51 = local_d8;
                puVar7 = local_d0;
              }
              while( true ) {
                local_d8 = puVar54;
                local_c8 = plVar55;
                if (puVar51 == puVar1) break;
                puVar53 = puVar51 + -1;
                puVar51 = puVar51 + -4;
                puVar54 = local_d8;
                if ((long *)*puVar53 != (long *)0x0) {
                  (**(code **)(*(long *)*puVar53 + 0x20))();
                  puVar54 = local_d8;
                  plVar55 = local_c8;
                }
              }
              if (puVar1 != (ulong *)0x0) {
                uVar17 = (**(code **)(*plVar55 + 0xc0))(plVar55);
                if ((uVar17 & 1) != 0) {
                  if (*(char *)(lVar10 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar10 + 0x38d488) = 1;
                    *(undefined8 *)(lVar10 + 0x38d478) = 0;
                    *(undefined8 *)(lVar10 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar10 + 0x38d480)) {
                    FUN_02bcc824(plVar55,puVar1,(long)puVar7 - (long)puVar1,8);
                    goto LAB_0192ddc4;
                  }
                }
                (**(code **)(*plVar55 + 0x18))(plVar55,puVar1,(long)puVar7 - (long)puVar1,8);
              }
            }
            else {
              FUN_00b835e0(&local_c8,local_d8,&local_cd0);
              local_d8 = local_d8 + 4;
            }
LAB_0192ddc4:
            if (local_cb8[0] != (long *)0x0) {
              (**(code **)(*local_cb8[0] + 0x20))();
            }
          }
          lVar24 = lVar24 + 4;
          puVar52 = puVar21;
        } while (puVar21 != puVar29 + uVar25);
      }
      lVar24 = (long)local_d8 - (long)local_e0;
      if (lVar24 == 0) {
        puVar31 = (undefined1 *)0x0;
LAB_0192e108:
        local_de8 = (int)puVar31;
      }
      else {
        local_de8 = uVar33 + local_de8;
        puVar27 = (undefined1 *)0x0;
        puVar31 = (undefined1 *)(lVar24 >> 5);
        do {
          if (lVar24 == 0) {
            puVar35 = local_db0 + local_da8;
            local_da8 = local_da8 ^ (ulong)local_db0;
            local_db0 = (undefined1 *)
                        (local_da8 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                        local_da8 << 0x10);
            local_da8 = local_da8 >> 0x1b | local_da8 << 0x25;
          }
          else if (lVar24 == 0x20) {
            puVar35 = (undefined1 *)0x0;
          }
          else {
            lVar24 = 0x3f;
            if ((0x7fffffffffffffffU >> (LZCOUNT(puVar31) & 0x3fU) & (ulong)puVar31) != 0) {
              lVar24 = 0x40;
            }
            uVar25 = lVar24 - LZCOUNT(puVar31);
            uVar17 = uVar25 >> 6;
            if ((uVar25 & 0x3f) != 0) {
              uVar17 = uVar17 + 1;
            }
            if (uVar25 < uVar17) {
              uVar17 = 0;
            }
            else {
              uVar19 = 0;
              if (uVar17 != 0) {
                uVar19 = uVar25 / uVar17;
              }
              uVar17 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
            }
            do {
              uVar25 = (ulong)local_db0 ^ local_da8;
              puVar35 = local_db0 + local_da8;
              local_da8 = uVar25 >> 0x1b | uVar25 << 0x25;
              puVar35 = (undefined1 *)((ulong)puVar35 & uVar17);
              local_db0 = (undefined1 *)
                          (uVar25 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                          uVar25 << 0x10);
            } while (puVar31 <= puVar35);
          }
          puVar53 = local_e0 + (long)puVar27 * 4;
          uVar17 = *puVar53;
          uVar19 = puVar53[1];
          uVar25 = puVar53[2];
          plVar55 = (long *)puVar53[3];
          if (plVar55 != (long *)0x0) {
            (**(code **)(*plVar55 + 0x18))(plVar55);
          }
          puVar53 = (ulong *)((long)local_e0 + (((long)puVar35 << 0x20) >> 0x1b));
          puVar51 = local_e0 + (long)puVar27 * 4;
          *puVar51 = *puVar53;
          puVar51[1] = puVar53[1];
          plVar14 = (long *)puVar53[3];
          puVar51[2] = puVar53[2];
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          plVar13 = (long *)puVar51[3];
          puVar51[3] = (ulong)plVar14;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x20))();
          }
          puVar53 = local_e0 + (long)(int)puVar35 * 4;
          *puVar53 = uVar17;
          puVar53[1] = uVar19;
          puVar53[2] = uVar25;
          if (plVar55 != (long *)0x0) {
            (**(code **)(*plVar55 + 0x18))(plVar55);
          }
          plVar14 = (long *)puVar53[3];
          puVar53[3] = (ulong)plVar55;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x20))();
          }
          if (plVar55 != (long *)0x0) {
            (**(code **)(*plVar55 + 0x20))(plVar55);
          }
          lVar24 = (long)local_d8 - (long)local_e0;
          puVar27 = puVar27 + 1;
          puVar31 = (undefined1 *)(lVar24 >> 5);
        } while (puVar27 < puVar31);
        if (puVar31 <= (undefined1 *)(long)local_de8) goto LAB_0192e108;
        puVar53 = local_e0 + (long)local_de8 * 4;
        puVar51 = local_d8;
        while (puVar53 != puVar51) {
          puVar1 = puVar51 + -1;
          puVar51 = puVar51 + -4;
          if ((long *)*puVar1 != (long *)0x0) {
            (**(code **)(*(long *)*puVar1 + 0x20))();
          }
        }
        local_d8 = puVar53;
      }
      local_100 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_f0 = 0;
      local_f8 = 0xffffffffffffffff;
      local_e8 = 0;
      iVar48 = *piVar46;
      uVar25 = (ulong)*(ushort *)((long)piVar46 + (0x24 - (long)iVar48));
      puVar52 = (uint *)((long)piVar46 + uVar25);
      uVar17 = (ulong)*puVar52;
      uVar33 = *(uint *)((long)puVar52 + uVar17);
      if ((int)uVar33 < 1) {
        iVar43 = 0;
      }
      else {
        if (uVar33 == 1) {
          lVar36 = 0;
          iVar43 = 0;
        }
        else {
          lVar24 = uVar25 + uVar17;
          lVar36 = 0;
          iVar43 = 0;
          piVar42 = piVar46;
          do {
            if (*(int *)((long)piVar42 + lVar24 + 4) <= local_de8) {
              uVar25 = (ulong)*(ushort *)((long)piVar46 + (0x26 - (long)iVar48));
              iVar2 = *(int *)((long)piVar42 + uVar25 + *(uint *)((long)piVar46 + uVar25) + 4);
              if (iVar43 <= iVar2) {
                iVar43 = iVar2;
              }
            }
            if (*(int *)((long)piVar42 + lVar24 + 8) <= local_de8) {
              uVar25 = (ulong)*(ushort *)((long)piVar46 + (0x26 - (long)iVar48));
              iVar2 = *(int *)((long)piVar42 + uVar25 + *(uint *)((long)piVar46 + uVar25) + 8);
              if (iVar43 <= iVar2) {
                iVar43 = iVar2;
              }
            }
            lVar36 = lVar36 + -2;
            piVar42 = piVar42 + 2;
          } while (((ulong)uVar33 & 1) - (ulong)uVar33 != lVar36);
          lVar36 = -lVar36;
          if ((uVar33 & 1) == 0) goto LAB_0192e254;
        }
        if (*(int *)((long)puVar52 + lVar36 * 4 + uVar17 + 4) <= local_de8) {
          puVar52 = (uint *)((long)piVar46 +
                            (ulong)*(ushort *)((long)piVar46 + (0x26 - (long)iVar48)));
          iVar48 = *(int *)((long)puVar52 + lVar36 * 4 + (ulong)*puVar52 + 4);
          if (iVar43 <= iVar48) {
            iVar43 = iVar48;
          }
        }
      }
LAB_0192e254:
      iVar48 = local_de8;
      if (local_de8 < 1) {
        bVar16 = false;
      }
      else {
        do {
          while( true ) {
            iVar48 = iVar48 + -1;
            if (iVar43 < 1) break;
            if (local_110 == local_108 * 0x40) {
              if (local_f8 < 0x1ffffffffffffff) {
                uVar17 = local_f8 << 6;
                if (uVar17 < local_110 + 1) goto LAB_01930358;
              }
              else {
                uVar17 = 0x7fffffffffffffff;
                if (0x7fffffffffffffff < local_110 + 1) {
LAB_01930358:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
              }
              if (local_110 < uVar17 >> 1) {
                uVar17 = local_110 + 0x40 & 0xffffffffffffffc0;
                if (uVar17 <= (ulong)(local_108 << 7)) {
                  uVar17 = local_108 << 7;
                }
              }
              FUN_00bb993c(&local_118,uVar17);
            }
            uVar17 = local_110 + 1;
            uVar25 = local_110 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(local_118 + uVar25) =
                 *(ulong *)(local_118 + uVar25) | 1L << (local_110 & 0x3f);
            iVar43 = iVar43 + -1;
            local_110 = uVar17;
            if (iVar48 == 0) goto LAB_0192e3b8;
          }
          if (local_110 == local_108 * 0x40) {
            if (local_f8 < 0x1ffffffffffffff) {
              uVar17 = local_f8 << 6;
              if (uVar17 < local_110 + 1) goto LAB_01930358;
            }
            else {
              uVar17 = 0x7fffffffffffffff;
              if (0x7fffffffffffffff < local_110 + 1) goto LAB_01930358;
            }
            if (local_110 < uVar17 >> 1) {
              uVar17 = local_110 + 0x40 & 0xffffffffffffffc0;
              if (uVar17 <= (ulong)(local_108 << 7)) {
                uVar17 = local_108 << 7;
              }
            }
            FUN_00bb993c(&local_118,uVar17);
          }
          uVar17 = local_110 + 1;
          uVar25 = local_110 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(local_118 + uVar25) =
               *(ulong *)(local_118 + uVar25) & (1L << (local_110 & 0x3f) ^ 0xffffffffffffffffU);
          local_110 = uVar17;
        } while (iVar48 != 0);
LAB_0192e3b8:
        if (local_110 != 0) {
          uVar17 = 0;
          if (local_110 != 1) goto LAB_0192e3f0;
          do {
            uVar25 = 0;
            while( true ) {
              uVar37 = uVar17 >> 3 & 0x1ffffffffffffff8;
              uVar19 = (ulong)(long)(int)uVar25 >> 6;
              uVar39 = 1L << (uVar17 & 0x3f);
              uVar32 = 1L << ((long)(int)uVar25 & 0x3fU);
              uVar41 = *(ulong *)(local_118 + uVar37);
              uVar25 = uVar41 & (uVar39 ^ 0xffffffffffffffff);
              if ((uVar32 & *(ulong *)(local_118 + uVar19 * 8)) != 0) {
                uVar25 = uVar41 | uVar39;
              }
              *(ulong *)(local_118 + uVar37) = uVar25;
              if ((uVar41 & uVar39) == 0) {
                uVar32 = *(ulong *)(local_118 + uVar19 * 8) & (uVar32 ^ 0xffffffffffffffff);
              }
              else {
                uVar32 = *(ulong *)(local_118 + uVar19 * 8) | uVar32;
              }
              *(ulong *)(local_118 + uVar19 * 8) = uVar32;
              uVar17 = uVar17 + 1;
              if (local_110 <= uVar17) goto LAB_0192e4bc;
              if (local_110 == 1) break;
LAB_0192e3f0:
              lVar24 = 0x3f;
              if ((0x7fffffffffffffffU >> (LZCOUNT(local_110) & 0x3fU) & local_110) != 0) {
                lVar24 = 0x40;
              }
              uVar19 = lVar24 - LZCOUNT(local_110);
              uVar25 = uVar19 >> 6;
              if ((uVar19 & 0x3f) != 0) {
                uVar25 = uVar25 + 1;
              }
              if (uVar19 < uVar25) {
                uVar19 = 0;
              }
              else {
                uVar32 = 0;
                if (uVar25 != 0) {
                  uVar32 = uVar19 / uVar25;
                }
                uVar19 = 0xffffffffffffffff >> (-uVar32 & 0x3f);
              }
              do {
                uVar32 = (ulong)local_db0 ^ local_da8;
                puVar27 = local_db0 + local_da8;
                local_da8 = uVar32 >> 0x1b | uVar32 << 0x25;
                uVar25 = (ulong)puVar27 & uVar19;
                local_db0 = (undefined1 *)
                            (uVar32 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                            uVar32 << 0x10);
              } while (local_110 <= uVar25);
            }
          } while( true );
        }
LAB_0192e4bc:
        bVar16 = true;
      }
      local_138 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
      local_148 = 0;
      local_150 = 0;
      local_140 = 0;
      local_128 = 0;
      local_130 = 0x3fffffffffffffff;
      local_120 = 0;
      if (bVar16) {
        iVar48 = 0;
        if (local_e44 < 1) goto LAB_0192e538;
        do {
          local_e44 = local_e44 + -1;
          FUN_01931614(&local_150,&DAT_03a7c71c);
          uVar17 = local_140;
LAB_0192e520:
          local_140 = uVar17;
          iVar48 = iVar48 + 1;
          if (iVar48 == local_de8) goto LAB_0192e780;
        } while (0 < local_e44);
LAB_0192e538:
        if (0 < iVar9) {
          FUN_01931614(&local_150,&DAT_03a7c718);
          uVar17 = local_140;
          iVar9 = iVar9 + -1;
          goto LAB_0192e520;
        }
        local_cd0 = (undefined1 *)((ulong)local_cd0 & 0xffffffff00000000);
        if (local_148 < local_140) {
          FUN_018c2ce0(&local_138,local_148,&local_cd0);
          local_148 = local_148 + 4;
          uVar17 = local_140;
        }
        else {
          lVar24 = (long)(local_148 - local_150) >> 2;
          uVar17 = lVar24 + 1;
          uVar25 = local_130;
          if (0x7ffffffffffffffe < local_130) {
            uVar25 = 0x7fffffffffffffff;
          }
          if (uVar25 < uVar17) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar19 = (long)(local_140 - local_150) >> 1;
          if (uVar17 <= uVar19) {
            uVar17 = uVar19;
          }
          if ((ulong)((long)(local_140 - local_150) >> 2) < uVar25 >> 1) {
            uVar25 = uVar17;
          }
          if (uVar25 == 0) {
            lVar36 = 0;
          }
          else {
            lVar36 = (**(code **)(*local_138 + 0x10))(local_138,uVar25 << 2,4);
            if (lVar36 == 0) {
              (**(code **)(*local_138 + 0xb8))();
            }
          }
          uVar19 = lVar36 + lVar24 * 4;
          uVar17 = lVar36 + uVar25 * 4;
          FUN_018c2ce0(&local_138,uVar19,&local_cd0);
          uVar32 = local_150;
          uVar25 = uVar19 + 4;
          uVar37 = local_148;
          if (local_148 != local_150) {
            do {
              uVar19 = uVar19 - 4;
              uVar37 = uVar37 - 4;
              FUN_018c2ce0(&local_138,uVar19,uVar37);
            } while (uVar32 != uVar37);
            uVar32 = local_150;
          }
          plVar55 = local_138;
          local_150 = uVar19;
          local_148 = uVar25;
          if (uVar32 != 0) {
            lVar24 = local_140 - uVar32;
            local_140 = uVar17;
            uVar17 = (**(code **)(*local_138 + 0xc0))(local_138);
            if ((uVar17 & 1) != 0) {
              if (*(char *)(lVar10 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar10 + 0x38d488) = 1;
                *(undefined8 *)(lVar10 + 0x38d478) = 0;
                *(undefined8 *)(lVar10 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar10 + 0x38d480)) {
                FUN_02bcc824(plVar55,uVar32,lVar24,4);
                uVar17 = local_140;
                goto LAB_0192e520;
              }
            }
            (**(code **)(*plVar55 + 0x18))(plVar55,uVar32,lVar24,4);
            uVar17 = local_140;
          }
        }
        goto LAB_0192e520;
      }
LAB_0192e780:
      plVar55 = (long *)PTR_DAT_04379560;
      lVar24 = local_148 - local_150;
      if (lVar24 != 0) {
        puVar27 = (undefined1 *)0x0;
        puVar31 = (undefined1 *)(lVar24 >> 2);
        do {
          if (lVar24 == 0) {
            puVar35 = local_db0 + local_da8;
            local_da8 = local_da8 ^ (ulong)local_db0;
            local_db0 = (undefined1 *)
                        (local_da8 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                        local_da8 << 0x10);
            local_da8 = local_da8 >> 0x1b | local_da8 << 0x25;
          }
          else if (lVar24 == 4) {
            puVar35 = (undefined1 *)0x0;
          }
          else {
            lVar24 = 0x3f;
            if ((0x7fffffffffffffffU >> (LZCOUNT(puVar31) & 0x3fU) & (ulong)puVar31) != 0) {
              lVar24 = 0x40;
            }
            uVar25 = lVar24 - LZCOUNT(puVar31);
            uVar17 = uVar25 >> 6;
            if ((uVar25 & 0x3f) != 0) {
              uVar17 = uVar17 + 1;
            }
            if (uVar25 < uVar17) {
              uVar17 = 0;
            }
            else {
              uVar19 = 0;
              if (uVar17 != 0) {
                uVar19 = uVar25 / uVar17;
              }
              uVar17 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
            }
            do {
              uVar25 = (ulong)local_db0 ^ local_da8;
              puVar35 = local_db0 + local_da8;
              local_da8 = uVar25 >> 0x1b | uVar25 << 0x25;
              puVar35 = (undefined1 *)((ulong)puVar35 & uVar17);
              local_db0 = (undefined1 *)
                          (uVar25 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                          uVar25 << 0x10);
            } while (puVar31 <= puVar35);
          }
          uVar17 = -((ulong)puVar35 >> 0x1f & 1) & 0xfffffffc00000000 |
                   ((ulong)puVar35 & 0xffffffff) << 2;
          uVar56 = *(undefined4 *)(local_150 + (long)puVar27 * 4);
          *(undefined4 *)(local_150 + (long)puVar27 * 4) = *(undefined4 *)(local_150 + uVar17);
          *(undefined4 *)(local_150 + uVar17) = uVar56;
          lVar24 = local_148 - local_150;
          puVar27 = puVar27 + 1;
          puVar31 = (undefined1 *)(lVar24 >> 2);
        } while (puVar27 < puVar31);
      }
      do {
        uVar17 = (ulong)local_db0 ^ local_da8;
        iVar9 = (int)local_da8;
        local_da8 = uVar17 >> 0x1b | uVar17 << 0x25;
        uVar33 = (int)local_db0 + iVar9 & 0x7f;
        local_db0 = (undefined1 *)
                    (uVar17 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ uVar17 << 0x10)
        ;
      } while (99 < uVar33);
      if (((*PTR_DAT_0437a780 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a780);
      }
      lVar24 = *(long *)PTR_DAT_0437a788;
      *(long *)PTR_DAT_0437a790 = lVar24;
      puVar29 = *(uint **)(*(long *)(*(long *)(lVar24 + 0x78) + 0x5b0) + 0x250);
      piVar42 = (int *)((long)puVar29 + (ulong)*puVar29);
      uVar25 = (ulong)*(ushort *)((long)piVar42 + (4 - (long)*piVar42));
      puVar52 = (uint *)((long)piVar42 + uVar25);
      uVar19 = (ulong)*puVar52;
      uVar17 = (ulong)*(uint *)((long)puVar52 + uVar19);
      if (uVar17 == 0) {
        cVar47 = '\0';
        lVar24 = 0;
      }
      else {
        lVar36 = *puVar29 + uVar19 + uVar25;
        lVar24 = 0;
        cVar47 = '\0';
        iVar9 = 0;
        do {
          uVar25 = (ulong)*(uint *)((long)puVar29 + lVar24 + lVar36 + 4);
          lVar20 = lVar24 + uVar25 + lVar36;
          lVar30 = lVar24 + (uVar25 - (long)*(int *)((long)puVar29 + lVar20 + 4)) + lVar36;
          if (*(ushort *)((long)puVar29 + lVar30 + 4) < 7) {
            iVar48 = 0;
          }
          else {
            uVar19 = (ulong)*(ushort *)((long)puVar29 + lVar30 + 10);
            iVar48 = 0;
            if (uVar19 != 0) {
              iVar48 = *(int *)((long)puVar29 + lVar24 + uVar25 + uVar19 + lVar36 + 4);
            }
          }
          iVar9 = iVar48 + iVar9;
          if ((int)uVar33 < iVar9) {
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar30 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar30;
            uVar17 = *(ulong *)(lVar30 + 0x60);
            if (uVar17 == 0) goto LAB_0192fe94;
            uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
            uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
            uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar19 < 2) {
              uVar32 = uVar17 - 1 & 0x9459466dc0004abc;
            }
            else {
              uVar32 = 0x9459466dc0004abc;
              if (uVar17 < 0x9459466dc0004abd) {
                uVar32 = 0;
                if (uVar17 != 0) {
                  uVar32 = 0x9459466dc0004abc / uVar17;
                }
                uVar32 = 0x9459466dc0004abc - uVar32 * uVar17;
              }
            }
            plVar55 = *(long **)(*(long *)(lVar30 + 0x58) + uVar32 * 8);
            if ((plVar55 == (long *)0x0) || (plVar55 = (long *)*plVar55, plVar55 == (long *)0x0))
            goto LAB_0192fe94;
            if (1 < uVar19) goto LAB_0192ea38;
            goto LAB_0192ebbc;
          }
          lVar24 = lVar24 + 4;
          cVar47 = cVar47 + '\x01';
        } while (uVar17 * 4 != lVar24);
        lVar24 = 0;
        plVar55 = (long *)PTR_DAT_04379560;
      }
      goto LAB_0192ee00;
    }
    local_e40 = (undefined1 *)0x0;
    if (((ulong)puVar18[2] == 0) ||
       (local_e40 = *(undefined1 **)((long)piVar46 + (ulong)puVar18[2]),
       local_e40 != &DAT_cbf29ce484222645)) {
      if (uVar4 < 0xb) goto LAB_0192eaa4;
      uVar17 = (ulong)puVar18[5];
      uVar33 = (uint)puVar18[5];
      if (uVar17 == 0) {
        local_de8 = 0;
        if (0xc < uVar4) goto LAB_0192da94;
joined_r0x0192deb4:
        iVar9 = 0;
        iVar48 = 0;
        if (uVar33 != 0) goto LAB_0192dec4;
LAB_0192daa0:
        iVar9 = iVar9 - uVar33;
      }
      else {
        local_de8 = *(int *)((long)piVar46 + uVar17);
        if (uVar4 < 0xd) goto joined_r0x0192deb4;
LAB_0192da94:
        if ((ulong)puVar18[6] == 0) goto joined_r0x0192deb4;
        iVar9 = *(int *)((long)piVar46 + (ulong)puVar18[6]);
        iVar48 = iVar9;
        if (uVar33 == 0) goto LAB_0192daa0;
LAB_0192dec4:
        iVar9 = iVar48 - *(int *)((long)piVar46 + uVar17);
      }
      if (iVar9 == 0) goto LAB_0192ded0;
      uVar34 = iVar9 + 1;
      if (uVar34 == 0) {
        uVar33 = (int)local_da8 + (int)local_db0;
        local_da8 = local_da8 ^ (ulong)local_db0;
        local_db0 = (undefined1 *)
                    (local_da8 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                    local_da8 << 0x10);
        local_da8 = local_da8 >> 0x1b | local_da8 << 0x25;
      }
      else {
        lVar10 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar34) & 0x1f) & uVar34) != 0) {
          lVar10 = 0x20;
        }
        uVar25 = lVar10 - LZCOUNT(uVar34);
        uVar17 = uVar25 >> 6;
        if ((uVar25 & 0x3f) != 0) {
          uVar17 = uVar17 + 1;
        }
        if (uVar25 < uVar17) {
          uVar23 = 0;
        }
        else {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = uVar25 / uVar17;
          }
          uVar23 = (uint)(0xffffffffffffffff >> (-uVar19 & 0x3f));
        }
        do {
          uVar17 = (ulong)local_db0 ^ local_da8;
          iVar9 = (int)local_da8;
          local_da8 = uVar17 >> 0x1b | uVar17 << 0x25;
          uVar33 = (int)local_db0 + iVar9 & uVar23;
          local_db0 = (undefined1 *)
                      (uVar17 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^
                      uVar17 << 0x10);
        } while (uVar34 <= uVar33);
      }
      goto LAB_0192db18;
    }
    bVar16 = false;
    if (local_80 != (long *)0x0) goto LAB_0192fcac;
    goto LAB_0192fcc8;
  }
  goto LAB_0192fd60;
LAB_0192ea38:
  do {
    uVar19 = plVar55[1];
    if (uVar19 == 0x9459466dc0004abc) {
      if (plVar55[2] == -0x6ba6b9923fffb544) goto LAB_0192ec34;
    }
    else {
      if (uVar17 <= uVar19) {
        uVar37 = 0;
        if (uVar17 != 0) {
          uVar37 = uVar19 / uVar17;
        }
        uVar19 = uVar19 - uVar37 * uVar17;
      }
      if (uVar19 != uVar32) break;
    }
    plVar55 = (long *)*plVar55;
  } while (plVar55 != (long *)0x0);
LAB_0192fe94:
  iVar9 = 0;
  goto LAB_0192eda4;
  while( true ) {
    plVar55 = (long *)*plVar55;
    iVar9 = 0;
    if (plVar55 == (long *)0x0) break;
LAB_0192ebbc:
    if (plVar55[1] == 0x9459466dc0004abc) {
      if (plVar55[2] == -0x6ba6b9923fffb544) goto LAB_0192ec34;
    }
    else if ((plVar55[1] & uVar17 - 1) != uVar32) {
      iVar9 = 0;
      break;
    }
  }
LAB_0192eda4:
  lVar20 = (long)*(int *)((long)puVar29 + lVar20 + 4);
  if (*(ushort *)((long)puVar29 + lVar24 + (uVar25 - lVar20) + lVar36 + 4) < 5) {
    iVar48 = 0;
  }
  else {
    uVar17 = (ulong)*(ushort *)((long)puVar29 + lVar24 + (uVar25 - lVar20) + lVar36 + 8);
    iVar48 = 0;
    if (uVar17 != 0) {
      iVar48 = *(int *)((long)puVar29 + lVar24 + uVar17 + uVar25 + lVar36 + 4);
    }
  }
  lVar24 = (long)((iVar48 + iVar9) * 1000);
  plVar55 = (long *)PTR_DAT_04379560;
LAB_0192ee00:
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,plVar55,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar36 = *plVar55;
  *(long *)PTR_DAT_04379568 = lVar36;
  plVar14 = *(long **)(lVar36 + 0x228);
  if (plVar14 != (long *)0x0) {
    lVar36 = plVar14[0xb];
    if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) goto LAB_01930330;
    if (*(long *)(lVar36 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
      *(undefined8 *)(lVar36 + 0x10) = uVar11;
    }
    piVar42 = (int *)(lVar36 + 0xc);
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar16) {
        *piVar42 = *piVar42 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar51 = local_d8;
  puVar53 = local_e0;
  if (local_e0 != local_d8) {
LAB_0192ee80:
    uVar17 = *puVar53;
    plVar55 = (long *)puVar53[3];
    if (plVar55 != (long *)0x0) {
      (**(code **)(*plVar55 + 0x18))(plVar55);
    }
    uVar25 = ((long *)plVar14[0x37])[1];
    if (uVar25 != 0) {
      uVar19 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar32 = uVar25 - 1 & uVar17;
      }
      else if (uVar17 < uVar25) {
        uVar32 = uVar17;
      }
      else {
        uVar32 = 0;
        if (uVar25 != 0) {
          uVar32 = uVar17 / uVar25;
        }
        uVar32 = uVar17 - uVar32 * uVar25;
      }
      plVar13 = *(long **)(*(long *)plVar14[0x37] + uVar32 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar13[1] == uVar17) {
              if (plVar13[2] == uVar17) goto LAB_0192ef94;
            }
            else if ((plVar13[1] & uVar25 - 1) != uVar32) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar13[1];
            if (uVar19 == uVar17) {
              if (plVar13[2] == uVar17) goto LAB_0192ef94;
            }
            else {
              if (uVar25 <= uVar19) {
                uVar37 = 0;
                if (uVar25 != 0) {
                  uVar37 = uVar19 / uVar25;
                }
                uVar19 = uVar19 - uVar37 * uVar25;
              }
              if (uVar19 != uVar32) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    goto LAB_0192ef9c;
  }
LAB_0192efbc:
  memset(&local_cd0,0,0xb80);
  lVar36 = 0;
  do {
    lVar20 = lVar36 + 0x90;
    *(undefined4 *)((long)local_ca8 + lVar36 + 4) = 0;
    *(undefined2 *)((long)local_ca0 + lVar36) = 0;
    *(undefined8 *)((long)local_ca0 + lVar36 + 4) = 0xffffffff00000000;
    *(undefined8 *)((long)local_cb8 + lVar36 + 8) = 0;
    *(undefined2 *)((long)local_ca8 + lVar36) = 0;
    local_c94[lVar36] = 0;
    *(undefined4 *)((long)local_c90 + lVar36) = 0;
    *(undefined1 **)((long)local_c88 + lVar36 + 0x30) = &DAT_cbf29ce484222645;
    local_c50[lVar36] = 0;
    *(undefined4 *)(local_c50 + lVar36 + 4) = 0;
    *(undefined1 **)((long)local_c48 + lVar36) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)local_cb8 + lVar36 + -8) = 0;
    *(undefined8 *)((long)local_cb8 + lVar36) = 0;
    *(undefined1 **)((long)local_c88 + lVar36) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)local_c88 + lVar36 + 8) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)local_c88 + lVar36 + 0x10) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)local_c88 + lVar36 + 0x18) = 0;
    *(undefined8 *)((long)local_c88 + lVar36 + 0x20) = 0;
    *(undefined8 *)((long)local_c88 + lVar36 + 0x28) = 0;
    lVar36 = lVar20;
  } while (lVar20 != 0xb40);
  local_cc8 = (byte *)CONCAT71(local_cc8._1_7_,1);
  local_cd0 = local_e40;
  local_180 = lVar24;
  local_178 = cVar47;
  lVar24 = FUN_018b51ac(local_98);
  puVar21 = *(uint **)(*(long *)(lVar24 + 8) + 0x250);
  piVar42 = (int *)((long)puVar21 + (ulong)*puVar21);
  uVar17 = (ulong)*(ushort *)((long)piVar42 + (4 - (long)*piVar42));
  puVar29 = (uint *)((long)piVar42 + uVar17);
  uVar25 = (ulong)*puVar29;
  puVar29 = (uint *)((long)puVar29 + uVar25);
  puVar52 = puVar29 + 1;
  uVar19 = (ulong)*puVar29;
  plVar55 = (long *)PTR_DAT_04379560;
  if (uVar19 != 0) {
    puVar29 = puVar52 + uVar19;
    iVar9 = 0;
    lVar24 = (long)puVar21 + uVar25 + uVar17 + (ulong)*puVar21 + 0xd;
LAB_0192f0ec:
    if (iVar9 < local_de8) {
      uVar33 = *puVar52;
      piVar42 = (int *)((long)puVar52 + (ulong)uVar33);
      if (0x18 < *(ushort *)((long)piVar42 - (long)*piVar42)) {
        uVar17 = (ulong)((ushort *)((long)piVar42 - (long)*piVar42))[0xc];
        if ((uVar17 != 0) && (*(char *)((long)piVar42 + uVar17) != '\0')) {
          local_64 = 0;
          if ((*(ushort *)((long)piVar42 - (long)*piVar42) < 9) ||
             (uVar17 = (ulong)((ushort *)((long)piVar42 - (long)*piVar42))[4], uVar17 == 0)) {
            lVar36 = 0;
          }
          else {
            puVar21 = (uint *)((long)piVar42 + uVar17);
            lVar36 = (long)puVar21 + (ulong)*puVar21;
          }
          lVar36 = FUN_01931870(lVar36,&local_64);
          if (lVar36 != 0) {
            local_68 = 0;
            if ((*(ushort *)((long)piVar42 - (long)*piVar42) < 0x2d) ||
               (uVar17 = (ulong)((ushort *)((long)piVar42 - (long)*piVar42))[0x16], uVar17 == 0)) {
              lVar36 = 0;
            }
            else {
              puVar21 = (uint *)((long)piVar42 + uVar17);
              lVar36 = (long)puVar21 + (ulong)*puVar21;
            }
            piVar15 = (int *)FUN_01931a60(lVar36,&local_68);
            if (piVar15 != (int *)0x0) {
              if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                 (uVar17 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar17 == 0)) {
                uVar17 = 0;
              }
              else {
                uVar17 = *(ulong *)((long)piVar15 + uVar17);
              }
              if (((*PTR_DAT_0437a780 & 1) == 0) &&
                 (iVar48 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar48 != 0)) {
                FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a780);
              }
              lVar36 = *(long *)PTR_DAT_0437a788;
              *(long *)PTR_DAT_0437a790 = lVar36;
              lVar36 = *(long *)(lVar36 + 0x78);
              uVar25 = *(ulong *)(lVar36 + 0x8a0);
              if (uVar25 != 0) {
                uVar19 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar19 < 2) {
                  uVar32 = uVar25 - 1 & uVar17;
                }
                else {
                  uVar32 = uVar17;
                  if (uVar25 <= uVar17) {
                    uVar32 = 0;
                    if (uVar25 != 0) {
                      uVar32 = uVar17 / uVar25;
                    }
                    uVar32 = uVar17 - uVar32 * uVar25;
                  }
                }
                plVar13 = *(long **)(*(long *)(lVar36 + 0x898) + uVar32 * 8);
                if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)
                   ) {
                  if (uVar19 < 2) {
                    do {
                      if (plVar13[1] == uVar17) {
                        if (plVar13[2] == uVar17) goto LAB_0192f2d8;
                      }
                      else if ((plVar13[1] & uVar25 - 1) != uVar32) break;
                      plVar13 = (long *)*plVar13;
                    } while (plVar13 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar19 = plVar13[1];
                      if (uVar19 == uVar17) {
                        if (plVar13[2] == uVar17) goto LAB_0192f2d8;
                      }
                      else {
                        if (uVar25 <= uVar19) {
                          uVar37 = 0;
                          if (uVar25 != 0) {
                            uVar37 = uVar19 / uVar25;
                          }
                          uVar19 = uVar19 - uVar37 * uVar25;
                        }
                        if (uVar19 != uVar32) break;
                      }
                      plVar13 = (long *)*plVar13;
                    } while (plVar13 != (long *)0x0);
                  }
                }
              }
              if (((*PTR_DAT_0437a780 & 1) == 0) &&
                 (iVar48 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar48 != 0)) {
                FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a780);
              }
              *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
              plVar55 = (long *)PTR_DAT_04379560;
            }
          }
        }
      }
      goto LAB_0192f0dc;
    }
  }
LAB_0192f98c:
  plVar13 = local_90 + 0x40;
  if ((undefined1 *)local_90[0x40] == local_cd0) {
LAB_0192fa60:
    memcpy(plVar13,&local_cd0,0xb79);
  }
  else {
    if ((undefined1 *)local_90[0x1b0] == local_cd0) {
      plVar13 = local_90 + 0x1b0;
      goto LAB_0192fa60;
    }
    if ((undefined1 *)local_90[800] == local_cd0) {
      plVar13 = local_90 + 800;
      goto LAB_0192fa60;
    }
    if ((undefined1 *)local_90[0x490] == local_cd0) {
      plVar13 = local_90 + 0x490;
      goto LAB_0192fa60;
    }
    if ((undefined1 *)local_90[0x600] == local_cd0) {
      plVar13 = local_90 + 0x600;
      goto LAB_0192fa60;
    }
    if (((((undefined1 *)local_90[0x40] == &DAT_cbf29ce484222645) ||
         (plVar13 = local_90 + 0x1b0, (undefined1 *)local_90[0x1b0] == &DAT_cbf29ce484222645)) ||
        (plVar13 = local_90 + 800, (undefined1 *)local_90[800] == &DAT_cbf29ce484222645)) ||
       ((plVar13 = local_90 + 0x490, (undefined1 *)local_90[0x490] == &DAT_cbf29ce484222645 ||
        (plVar13 = local_90 + 0x600, (undefined1 *)local_90[0x600] == &DAT_cbf29ce484222645))))
    goto LAB_0192fa60;
  }
  uVar17 = local_150;
  plVar13 = local_138;
  if (plVar14 != (long *)0x0) {
    lVar24 = plVar14[0xb];
    piVar42 = (int *)(lVar24 + 0xc);
    do {
      iVar9 = *piVar42;
      cVar47 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar16) {
        *piVar42 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      uVar17 = local_150;
      plVar13 = local_138;
    }
  }
  local_150 = uVar17;
  local_138 = plVar13;
  if (uVar17 != 0) {
    lVar24 = local_140 - uVar17;
    local_148 = uVar17;
    uVar25 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar17,lVar24,4);
        goto LAB_0192fb24;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar17,lVar24,4);
  }
LAB_0192fb24:
  plVar14 = local_100;
  lVar24 = local_118;
  puVar51 = local_e0;
  puVar53 = local_d8;
  if (local_118 != 0) {
    lVar36 = local_108 << 3;
    uVar17 = (**(code **)(*local_100 + 0xc0))(local_100);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar24,lVar36,1);
        puVar51 = local_e0;
        puVar53 = local_d8;
        goto joined_r0x0192fc94;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar24,lVar36,1);
    puVar51 = local_e0;
    puVar53 = local_d8;
  }
joined_r0x0192fc94:
  puVar1 = puVar51;
  local_d8 = puVar53;
  plVar14 = local_c8;
  local_e0 = puVar51;
  if (puVar51 != (ulong *)0x0) {
    while( true ) {
      local_e0 = puVar1;
      local_c8 = plVar14;
      if (puVar53 == puVar51) break;
      puVar50 = puVar53 + -1;
      puVar53 = puVar53 + -4;
      if ((long *)*puVar50 != (long *)0x0) {
        (**(code **)(*(long *)*puVar50 + 0x20))();
        puVar1 = local_e0;
        plVar14 = local_c8;
      }
    }
    lVar24 = (long)local_d0 - (long)puVar1;
    local_d8 = puVar51;
    uVar17 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar14,puVar1,lVar24,8);
        goto joined_r0x0192fbfc;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,puVar1,lVar24,8);
  }
joined_r0x0192fbfc:
  if (local_a8[0] == '\0') goto LAB_0192fd6c;
  bVar16 = true;
  if (local_80 == (long *)0x0) {
LAB_0192fcc8:
    if (local_88 == (long *)0x0) goto LAB_0192fcec;
LAB_0192fcd0:
    lVar10 = local_88[0xb];
    piVar42 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar42;
      cVar47 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar6) {
        *piVar42 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 != 0) goto LAB_0192fcec;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_88 + 0x20))();
    if (local_90 != (long *)0x0) goto LAB_0192fcf4;
LAB_0192fd10:
    if (local_98 == (long *)0x0) goto LAB_0192fd34;
LAB_0192fd18:
    lVar10 = local_98[0xb];
    piVar42 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar42;
      cVar47 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar6) {
        *piVar42 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 != 0) goto LAB_0192fd34;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_98 + 0x20))();
    if (local_a0 != (long *)0x0) goto LAB_0192fd3c;
LAB_0192fd58:
    if (bVar16) goto LAB_0192fd6c;
  }
  else {
LAB_0192fcac:
    lVar10 = local_80[0xb];
    piVar42 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar42;
      cVar47 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar6) {
        *piVar42 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 != 0) goto LAB_0192fcc8;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_80 + 0x20))();
    if (local_88 != (long *)0x0) goto LAB_0192fcd0;
LAB_0192fcec:
    if (local_90 == (long *)0x0) goto LAB_0192fd10;
LAB_0192fcf4:
    lVar10 = local_90[0xb];
    piVar42 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar42;
      cVar47 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar6) {
        *piVar42 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 != 0) goto LAB_0192fd10;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_90 + 0x20))();
    if (local_98 != (long *)0x0) goto LAB_0192fd18;
LAB_0192fd34:
    if (local_a0 == (long *)0x0) goto LAB_0192fd58;
LAB_0192fd3c:
    lVar10 = local_a0[0xb];
    piVar42 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar42;
      cVar47 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar42,0x10);
      if (bVar6) {
        *piVar42 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 != 0) goto LAB_0192fd58;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_a0 + 0x20))();
    if (bVar16) goto LAB_0192fd6c;
  }
LAB_0192fd60:
  FUN_01930360(plVar38,piVar46);
LAB_0192fd6c:
  if (plVar12 != (long *)0x0) {
LAB_0192fd70:
    lVar10 = plVar12[0xb];
    piVar46 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar46;
      cVar47 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar16) {
        *piVar46 = iVar9 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
LAB_0192d7a0:
  plVar44 = (long *)*plVar44;
  if (plVar44 == (long *)0x0) goto LAB_0192d368;
  goto LAB_0192d7a8;
LAB_0192ec34:
  plVar55 = (long *)plVar55[3];
  if (plVar55 == (long *)0x0) goto LAB_0192fe94;
  plVar14 = plVar55 + 10;
  do {
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar16) {
      *(int *)plVar14 = (int)*plVar14 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar17 = plVar55[0x14];
  if (uVar17 == 0) {
    iVar9 = 0;
  }
  else {
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar32 = uVar17 - 1 & 0x6f77b4a06e799935;
    }
    else {
      uVar32 = 0x6f77b4a06e799935;
      if (uVar17 < 0x6f77b4a06e799936) {
        uVar32 = 0;
        if (uVar17 != 0) {
          uVar32 = 0x6f77b4a06e799935 / uVar17;
        }
        uVar32 = 0x6f77b4a06e799935 - uVar32 * uVar17;
      }
    }
    plVar13 = *(long **)(plVar55[0x13] + uVar32 * 8);
    if (plVar13 == (long *)0x0) {
      iVar9 = 0;
    }
    else {
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        iVar9 = 0;
      }
      else if (uVar19 < 2) {
        do {
          if (plVar13[1] == 0x6f77b4a06e799935) {
            if (plVar13[2] == 0x6f77b4a06e799935) goto LAB_0192ed8c;
          }
          else if ((plVar13[1] & uVar17 - 1) != uVar32) {
            iVar9 = 0;
            break;
          }
          plVar13 = (long *)*plVar13;
          iVar9 = 0;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar13[1];
          if (uVar19 == 0x6f77b4a06e799935) {
            if (plVar13[2] == 0x6f77b4a06e799935) goto LAB_0192ed8c;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar37 = 0;
              if (uVar17 != 0) {
                uVar37 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar37 * uVar17;
            }
            if (uVar19 != uVar32) {
              iVar9 = 0;
              goto LAB_0192ed90;
            }
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
        iVar9 = 0;
      }
    }
  }
  goto LAB_0192ed90;
LAB_0192ed8c:
  iVar9 = (int)plVar13[6];
LAB_0192ed90:
  do {
    iVar48 = (int)*plVar14 + -1;
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar16) {
      *(int *)plVar14 = iVar48;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar48 == 0) {
    (**(code **)(*plVar55 + 0x10))();
  }
  goto LAB_0192eda4;
LAB_0192ef94:
  *(undefined1 *)(plVar13 + 3) = 1;
LAB_0192ef9c:
  if (plVar55 != (long *)0x0) {
    (**(code **)(*plVar55 + 0x20))(plVar55);
  }
  puVar53 = puVar53 + 4;
  if (puVar53 == puVar51) goto LAB_0192efbc;
  goto LAB_0192ee80;
LAB_0192f2d8:
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar48 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar48 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  plVar55 = (long *)PTR_DAT_04379560;
  puVar21 = (uint *)((long)piVar42 + (ulong)*(ushort *)((long)piVar42 + (8 - (long)*piVar42)));
  piVar22 = (int *)plVar13[3];
  puVar21 = (uint *)((long)puVar21 + (ulong)local_68 * 4 + (ulong)*puVar21 + 4);
  piVar15 = (int *)((long)puVar21 + (ulong)*puVar21);
  if (*(ushort *)((long)piVar15 - (long)*piVar15) < 0x13) {
    piVar15 = (int *)0x0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[9];
    if (uVar17 == 0) {
      piVar15 = (int *)0x0;
    }
    else {
      puVar21 = (uint *)((long)piVar15 + uVar17);
      piVar15 = (int *)((long)puVar21 + (ulong)*puVar21);
    }
  }
  puVar18 = (ushort *)((long)piVar15 - (long)*piVar15);
  uVar4 = *puVar18;
  uVar57 = 0;
  uVar56 = 0;
  uStack_d58 = 0;
  if (4 < uVar4) {
    uVar56 = 0;
    if ((ulong)puVar18[2] != 0) {
      uVar56 = *(undefined4 *)((long)piVar15 + (ulong)puVar18[2]);
    }
    if (uVar4 < 7) {
      uVar57 = 0;
    }
    else {
      uVar57 = 0;
      if ((ulong)puVar18[3] != 0) {
        uVar57 = *(undefined4 *)((long)piVar15 + (ulong)puVar18[3]);
      }
      if ((8 < uVar4) && ((ulong)puVar18[4] != 0)) {
        uStack_d58 = (ulong)*(uint *)((long)piVar15 + (ulong)puVar18[4]);
        goto LAB_0192f3bc;
      }
    }
    uStack_d58 = 0;
  }
LAB_0192f3bc:
  local_d60 = CONCAT44(uVar57,uVar56);
  local_d50 = 1;
  local_d48 = 0;
  local_d44 = 0;
  local_d40 = 0;
  local_d3c = 0xffffffff00000000;
  local_d30 = 1;
  puStack_d10 = local_db0 + local_da8;
  local_da8 = local_da8 ^ (ulong)local_db0;
  local_d34 = 0;
  local_d28 = &DAT_cbf29ce484222645;
  puStack_d20 = &DAT_cbf29ce484222645;
  uVar25 = local_da8 >> 0x1b | local_da8 << 0x25;
  uVar17 = local_da8 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ local_da8 << 0x10;
  local_d18 = &DAT_cbf29ce484222645;
  local_d08 = uVar25 + uVar17;
  uVar25 = uVar25 ^ uVar17;
  local_da8 = uVar25 >> 0x1b | uVar25 << 0x25;
  local_db0 = (undefined1 *)(uVar25 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar25 << 0x10);
  puVar18 = (ushort *)((long)piVar46 - (long)*piVar46);
  uVar4 = *puVar18;
  if (uVar4 < 0x13) {
    local_d00 = 0;
LAB_0192f734:
    uVar34 = 0;
  }
  else {
    uVar17 = (ulong)puVar18[9];
    uVar34 = (uint)puVar18[9];
    if (uVar17 == 0) {
      local_d00 = 0;
      if (0x14 < uVar4) goto LAB_0192f460;
joined_r0x0192f468:
      iVar48 = 0;
      iVar43 = 0;
      if (uVar34 != 0) goto LAB_0192f724;
LAB_0192f46c:
      iVar48 = iVar48 - uVar34;
    }
    else {
      local_d00 = *(int *)((long)piVar46 + uVar17);
      if (uVar4 < 0x15) goto joined_r0x0192f468;
LAB_0192f460:
      if ((ulong)puVar18[10] == 0) goto joined_r0x0192f468;
      iVar48 = *(int *)((long)piVar46 + (ulong)puVar18[10]);
      iVar43 = iVar48;
      if (uVar34 == 0) goto LAB_0192f46c;
LAB_0192f724:
      iVar48 = iVar43 - *(int *)((long)piVar46 + uVar17);
    }
    if (iVar48 == 0) goto LAB_0192f734;
    uVar23 = iVar48 + 1;
    if (uVar23 == 0) {
      uVar17 = (ulong)local_db0 ^ local_da8;
      uVar34 = (int)local_db0 + (int)(uVar25 >> 0x1b);
      local_da8 = uVar17 >> 0x1b | uVar17 << 0x25;
      local_db0 = (undefined1 *)
                  (uVar17 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ uVar17 << 0x10);
    }
    else {
      lVar36 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar23) & 0x1f) & uVar23) != 0) {
        lVar36 = 0x20;
      }
      uVar25 = lVar36 - LZCOUNT(uVar23);
      uVar17 = uVar25 >> 6;
      if ((uVar25 & 0x3f) != 0) {
        uVar17 = uVar17 + 1;
      }
      if (uVar25 < uVar17) {
        uVar17 = 0;
      }
      else {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar25 / uVar17;
        }
        uVar17 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
      }
      do {
        uVar25 = (ulong)local_db0 ^ local_da8;
        iVar48 = (int)local_da8;
        local_da8 = uVar25 >> 0x1b | uVar25 << 0x25;
        uVar34 = (int)local_db0 + iVar48 & (uint)uVar17;
        local_db0 = (undefined1 *)
                    (uVar25 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ uVar25 << 0x10)
        ;
      } while (uVar23 <= uVar34);
    }
  }
  local_d00 = uVar34 + local_d00;
  local_cfc = 0;
  if (*(ushort *)((long)piVar42 - (long)*piVar42) < 5) {
    local_cf8 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar42 - (long)*piVar42))[2];
    local_cf8 = 0;
    if (uVar17 != 0) {
      local_cf8 = *(undefined8 *)((long)piVar42 + uVar17);
    }
  }
  local_cf0 = 0;
  puVar18 = (ushort *)((long)piVar46 - (long)*piVar46);
  uVar4 = *puVar18;
  if (uVar4 < 0x17) {
    local_cec = 0;
LAB_0192f758:
    uVar34 = 0;
  }
  else {
    uVar17 = (ulong)puVar18[0xb];
    uVar34 = (uint)puVar18[0xb];
    if (uVar17 == 0) {
      local_cec = 0;
      if (0x18 < uVar4) goto LAB_0192f540;
joined_r0x0192f548:
      iVar48 = 0;
      iVar43 = 0;
      if (uVar34 != 0) goto LAB_0192f748;
LAB_0192f54c:
      iVar48 = iVar48 - uVar34;
    }
    else {
      local_cec = *(int *)((long)piVar46 + uVar17);
      if (uVar4 < 0x19) goto joined_r0x0192f548;
LAB_0192f540:
      if ((ulong)puVar18[0xc] == 0) goto joined_r0x0192f548;
      iVar48 = *(int *)((long)piVar46 + (ulong)puVar18[0xc]);
      iVar43 = iVar48;
      if (uVar34 == 0) goto LAB_0192f54c;
LAB_0192f748:
      iVar48 = iVar43 - *(int *)((long)piVar46 + uVar17);
    }
    if (iVar48 == 0) goto LAB_0192f758;
    uVar23 = iVar48 + 1;
    if (uVar23 == 0) {
      uVar34 = (int)local_db0 + (int)local_da8;
      uVar17 = (ulong)local_db0 ^ local_da8;
      local_da8 = uVar17 >> 0x1b | uVar17 << 0x25;
      local_db0 = (undefined1 *)
                  (uVar17 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ uVar17 << 0x10);
    }
    else {
      lVar36 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar23) & 0x1f) & uVar23) != 0) {
        lVar36 = 0x20;
      }
      uVar25 = lVar36 - LZCOUNT(uVar23);
      uVar17 = uVar25 >> 6;
      if ((uVar25 & 0x3f) != 0) {
        uVar17 = uVar17 + 1;
      }
      if (uVar25 < uVar17) {
        uVar17 = 0;
      }
      else {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar25 / uVar17;
        }
        uVar17 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
      }
      do {
        uVar25 = (ulong)local_db0 ^ local_da8;
        iVar48 = (int)local_da8;
        local_da8 = uVar25 >> 0x1b | uVar25 << 0x25;
        uVar34 = (int)local_db0 + iVar48 & (uint)uVar17;
        local_db0 = (undefined1 *)
                    (uVar25 ^ ((ulong)local_db0 >> 0x28 | (long)local_db0 << 0x18) ^ uVar25 << 0x10)
        ;
      } while (uVar23 <= uVar34);
    }
  }
  local_cec = uVar34 + local_cec;
  uVar17 = (ulong)*(ushort *)((long)piVar42 + (8 - (long)*piVar42));
  puVar21 = (uint *)((long)piVar42 + uVar17);
  uVar25 = (ulong)*puVar21;
  puVar21 = (uint *)((long)puVar21 + (ulong)local_64 * 4 + uVar25 + 4);
  uVar19 = (ulong)*puVar21;
  piVar42 = (int *)((long)puVar21 + uVar19);
  uVar32 = (ulong)*(ushort *)((long)piVar42 + (8 - (long)*piVar42));
  puVar21 = (uint *)((long)piVar42 + uVar32);
  uVar37 = (ulong)*puVar21;
  bVar3 = *(byte *)((long)puVar21 + uVar37 + 4);
  local_ce8 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    pbVar26 = (byte *)(lVar24 + uVar37 + (ulong)local_64 * 4 + uVar32 + uVar19 + uVar25 + uVar17 +
                                (ulong)uVar33);
    do {
      local_ce8 = (undefined1 *)(((ulong)local_ce8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar26;
      pbVar26 = pbVar26 + 1;
    } while (bVar3 != 0);
  }
  uVar17 = (ulong)iVar9;
  local_ce0 = 0;
  uStack_cd8 = 0;
  iVar48 = *(int *)(local_150 + (long)iVar9 * 4);
  if (iVar48 == 1) {
    local_d64[0] = (*(ulong *)(local_118 + (uVar17 >> 3 & 0x1ffffffffffffff8)) &
                   1L << (uVar17 & 0x3f)) != 0;
    if (8 < *(ushort *)((long)piVar22 - (long)*piVar22)) {
      uVar4 = ((ushort *)((long)piVar22 - (long)*piVar22))[4];
      goto joined_r0x0192f820;
    }
  }
  else if (iVar48 == 2) {
    local_d64[0] = (*(ulong *)(local_118 + (uVar17 >> 3 & 0x1ffffffffffffff8)) &
                   1L << (uVar17 & 0x3f)) != 0;
    if (10 < *(ushort *)((long)piVar22 - (long)*piVar22)) {
      uVar4 = ((ushort *)((long)piVar22 - (long)*piVar22))[5];
      goto joined_r0x0192f820;
    }
  }
  else {
    local_d64[0] = (*(ulong *)(local_118 + (uVar17 >> 3 & 0x1ffffffffffffff8)) &
                   1L << (uVar17 & 0x3f)) != 0;
    if (6 < *(ushort *)((long)piVar22 - (long)*piVar22)) {
      uVar4 = ((ushort *)((long)piVar22 - (long)*piVar22))[3];
joined_r0x0192f820:
      if ((ulong)uVar4 == 0) {
        lVar36 = 0;
      }
      else {
        puVar21 = (uint *)((long)piVar22 + (ulong)uVar4);
        lVar36 = (long)puVar21 + (ulong)*puVar21;
      }
      goto LAB_0192f7a8;
    }
  }
  lVar36 = 0;
LAB_0192f7a8:
  uVar25 = FUN_01931c40(param_1,&local_d60,piVar46,local_d64,lVar36,&local_db0);
  if ((uVar25 & 1) != 0) {
    iVar9 = iVar9 + 1;
    memcpy(local_cb8 + uVar17 * 0x12 + -1,&local_d60,0x90);
  }
LAB_0192f0dc:
  puVar52 = puVar52 + 1;
  lVar24 = lVar24 + 4;
  if (puVar52 == puVar29) goto LAB_0192f98c;
  goto LAB_0192f0ec;
}


