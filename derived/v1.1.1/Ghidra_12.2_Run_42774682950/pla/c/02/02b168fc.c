/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b168fc; name: FUN_02b168fc
 */


/* WARNING: Removing unreachable block (ram,0x02b16b94) */
/* WARNING: Removing unreachable block (ram,0x02b180e0) */

void FUN_02b168fc(undefined1 *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  char *pcVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  undefined8 unaff_x23;
  long lVar33;
  undefined8 unaff_x24;
  long *plVar34;
  long lVar35;
  long *plVar36;
  float fVar37;
  long local_1a8;
  long *local_168;
  char local_148 [8];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  char local_110 [8];
  long local_108;
  char *pcStack_100;
  ulong local_f8;
  long *local_f0;
  long *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  long *local_c8;
  char local_c0;
  long local_b8;
  char *local_b0;
  ulong uStack_a8;
  long *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70 [2];
  
  FUN_02b16854(&local_e8,param_4,param_5);
  plVar27 = local_e8;
  if (local_e8 == (long *)0x0) {
    uVar26 = *(ulong *)PTR_DAT_04379c88;
  }
  else {
    uVar26 = local_e8[0xb];
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
  }
  uVar17 = *(ulong *)(param_2 + 200);
  if (uVar17 == 0) {
LAB_02b16a4c:
    plVar25 = (long *)0x0;
  }
  else {
    uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & uVar26;
    }
    else {
      uVar22 = uVar26;
      if (uVar17 <= uVar26) {
        uVar22 = 0;
        if (uVar17 != 0) {
          uVar22 = uVar26 / uVar17;
        }
        uVar22 = uVar26 - uVar22 * uVar17;
      }
    }
    plVar25 = *(long **)(*(long *)(param_2 + 0xc0) + uVar22 * 8);
    if (plVar25 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) {
        if (uVar21 < 2) {
          do {
            if (plVar25[1] == uVar26) {
              if (plVar25[2] == uVar26) break;
            }
            else if ((plVar25[1] & uVar17 - 1) != uVar22) goto LAB_02b16a4c;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar25[1];
            if (uVar21 == uVar26) {
              if (plVar25[2] == uVar26) break;
            }
            else {
              if (uVar17 <= uVar21) {
                uVar23 = 0;
                if (uVar17 != 0) {
                  uVar23 = uVar21 / uVar17;
                }
                uVar21 = uVar21 - uVar23 * uVar17;
              }
              if (uVar21 != uVar22) goto LAB_02b16a4c;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
  }
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  if (plVar25 == (long *)0x0) {
    uVar26 = 0;
  }
  else {
    uVar26 = (ulong)*(uint *)(plVar25 + 6);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (plVar25 != (long *)0x0) {
    plVar25 = (long *)nn::os::GetCurrentThread();
    plVar27 = (long *)(param_2 + 0xb0);
    do {
      plVar5 = (long *)*plVar27;
      lVar18 = *(long *)(param_2 + 0xb8);
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar11) {
        *plVar27 = (long)plVar5;
        *(long *)(param_2 + 0xb8) = lVar18;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
joined_r0x02b16ab4:
    while ((plVar5 != (long *)0x0 && (plVar25 != plVar5))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa4));
      do {
        plVar5 = (long *)*plVar27;
        lVar18 = *(long *)(param_2 + 0xb8);
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = (long)plVar5;
          *(long *)(param_2 + 0xb8) = lVar18;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      if ((long *)*plVar27 != plVar5 || *(long *)(param_2 + 0xb8) != lVar18) goto LAB_02b16abc;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar11) {
        *plVar27 = (long)plVar5;
        *(long *)(param_2 + 0xb4) = lVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar18 = *(long *)(param_2 + 0x60);
    if ((uVar26 < (ulong)((*(long *)(param_2 + 0x68) - lVar18 >> 3) * -0x1111111111111111)) &&
       (*(char *)(lVar18 + uVar26 * 0x78 + 0x50) != '\0')) {
      lVar18 = lVar18 + uVar26 * 0x78;
      uVar26 = *(ulong *)(lVar18 + 0x58);
      unaff_x23 = *(undefined8 *)(lVar18 + 0x60);
      unaff_x24 = *(undefined8 *)(lVar18 + 0x68);
      plVar25 = *(long **)(lVar18 + 0x70);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x18))(plVar25);
      }
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    do {
      lVar18 = *plVar27;
      lVar19 = *(long *)(param_2 + 0xb8);
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar18;
        *(long *)(param_2 + 0xb8) = lVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    while( true ) {
      if (*plVar27 != lVar18 || *(long *)(param_2 + 0xb8) != lVar19) break;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar18;
        *(long *)(param_2 + 0xb4) = lVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_02b16bb8;
    }
    ClearExclusiveLocal();
    lVar18 = *plVar27;
    lVar19 = *(long *)(param_2 + 0xb8);
    do {
      do {
        lVar31 = *plVar27;
        if (lVar31 != lVar18 || *(long *)(param_2 + 0xb8) != lVar19) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto LAB_02b18160;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar7) {
          *plVar27 = lVar18;
          *(long *)(param_2 + 0xb4) = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar7 = true;
LAB_02b18160:
      lVar18 = lVar31;
      lVar19 = *(long *)(param_2 + 0xb8);
    } while (!bVar7);
LAB_02b16bb8:
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa4));
    if (bVar11) {
      *param_1 = 1;
      *(ulong *)(param_1 + 8) = uVar26;
      *(undefined8 *)(param_1 + 0x10) = unaff_x23;
      *(undefined8 *)(param_1 + 0x18) = unaff_x24;
      *(long **)(param_1 + 0x20) = plVar25;
      return;
    }
  }
  plVar27 = *(long **)(*(long *)(param_2 + 0x58) + 0x90);
  plVar25 = *(long **)(*(long *)(param_2 + 0x58) + 0x98);
  if (plVar27 == plVar25) {
LAB_02b16c14:
    if ((plVar27 != plVar25) &&
       (lVar18 = *plVar27,
       (int)((ulong)(*(long *)(lVar18 + 0x80) - *(long *)(lVar18 + 0x78)) >> 3) != 0)) {
      uVar26 = 0;
      puVar1 = (undefined8 *)(param_2 + 0x78);
      plVar25 = (long *)(param_2 + 0xc0);
      plVar5 = (long *)(param_2 + 0xb0);
      plVar2 = (long *)(param_2 + 0xf0);
LAB_02b16ca0:
      plVar34 = *(long **)(*(long *)(lVar18 + 0x78) + uVar26 * 8);
      if (plVar34 != (long *)0x0) {
        plVar3 = plVar34 + 10;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar18 = plVar34[0xf];
        plVar28 = (long *)plVar34[0x12];
        if (plVar28 != (long *)0x0) {
          (**(code **)(*plVar28 + 0x18))(plVar28);
          lVar19 = *param_5;
          (**(code **)(*plVar28 + 0x20))(plVar28);
          if (lVar18 != lVar19) {
            bVar11 = false;
            goto LAB_02b172a4;
          }
LAB_02b16cd8:
          if (*(char *)plVar34[0x14] == '\0') {
            lVar18 = plVar34[0xf];
            pcVar29 = (char *)plVar34[0x10];
            uVar17 = plVar34[0x11];
            local_168 = (long *)plVar34[0x12];
            if (local_168 != (long *)0x0) {
              (**(code **)(*local_168 + 0x18))(local_168);
            }
joined_r0x02b17e40:
            if (local_168 != (long *)0x0) {
              (**(code **)(*local_168 + 0x18))(local_168);
            }
          }
          else {
            FUN_02b32f8c(&local_e8,plVar34 + 0x13,&DAT_039b07fe,plVar34 + 0xf);
            local_168 = local_e8;
            if (local_e8 == (long *)0x0) {
              lVar18 = *(long *)PTR_DAT_04379c88;
LAB_02b180c0:
              pcVar29 = *(char **)PTR_PTR_04379d00;
            }
            else {
              lVar18 = local_e8[0xb];
              if (local_e8 == (long *)0x0) goto LAB_02b180c0;
              pcVar29 = (char *)local_e8[0xc];
            }
            if (local_e8 != (long *)0x0) {
              uVar17 = local_e8[0xd];
              (**(code **)(*local_e8 + 0x18))();
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              goto joined_r0x02b17e40;
            }
            uVar17 = 0;
            local_168 = (long *)0x0;
          }
          local_110[0] = '\x01';
          local_108 = lVar18;
          pcStack_100 = pcVar29;
          local_f8 = uVar17;
          local_f0 = local_168;
          if ((uVar17 < 4) || (iVar12 = strncmp(pcVar29,"iso:",4), iVar12 != 0)) {
            local_e8 = (long *)plVar34[0xf];
            local_e0 = (undefined1 *)plVar34[0x10];
            local_d8 = (undefined1 *)plVar34[0x11];
            plVar28 = (long *)plVar34[0x12];
            local_d0 = plVar28;
            if (plVar28 == (long *)0x0) {
              FUN_02b16854(&local_118,param_4,&local_e8);
              if (local_118 != (long *)0x0) goto LAB_02b16de8;
LAB_02b17d60:
              local_e8 = *(long **)PTR_DAT_04379c88;
              if (local_118 == (long *)0x0) goto LAB_02b17d70;
LAB_02b16df4:
              local_e0 = (undefined1 *)local_118[0xc];
              if (local_118 != (long *)0x0) goto LAB_02b16e00;
LAB_02b17d80:
              local_d8 = (undefined1 *)0x0;
              local_d0 = local_118;
            }
            else {
              (**(code **)(*plVar28 + 0x18))(plVar28);
              FUN_02b16854(&local_118,param_4,&local_e8);
              (**(code **)(*plVar28 + 0x20))(plVar28);
              if (local_118 == (long *)0x0) goto LAB_02b17d60;
LAB_02b16de8:
              local_e8 = (long *)local_118[0xb];
              if (local_118 != (long *)0x0) goto LAB_02b16df4;
LAB_02b17d70:
              local_e0 = *(undefined1 **)PTR_PTR_04379d00;
              if (local_118 == (long *)0x0) goto LAB_02b17d80;
LAB_02b16e00:
              plVar28 = local_118;
              local_d8 = (undefined1 *)local_118[0xd];
              local_d0 = (long *)0x0;
              (**(code **)(*local_118 + 0x18))(local_118);
              local_d0 = plVar28;
            }
            snprintf(local_148,0x10,"%d",(ulong)*(uint *)(param_2 + 0x128));
            FUN_0143f7cc(&local_120,&local_e8,local_148);
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            plVar28 = local_120;
            uVar30 = *param_3;
            if (local_120 == (long *)0x0) {
              local_e8 = *(long **)PTR_DAT_04379c88;
LAB_02b18068:
              local_e0 = *(undefined1 **)PTR_PTR_04379d00;
              if (local_120 != (long *)0x0) goto LAB_02b16e84;
LAB_02b18078:
              local_d8 = (undefined1 *)0x0;
            }
            else {
              local_e8 = (long *)local_120[0xb];
              if (local_120 == (long *)0x0) goto LAB_02b18068;
              local_e0 = (undefined1 *)local_120[0xc];
              if (local_120 == (long *)0x0) goto LAB_02b18078;
LAB_02b16e84:
              local_d8 = (undefined1 *)local_120[0xd];
              local_d0 = (long *)0x0;
              (**(code **)(*local_120 + 0x18))(local_120);
            }
            local_d0 = plVar28;
            FUN_02b31144(local_148,uVar30,local_110,&local_e8,0);
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar11) {
                *(int *)plVar3 = (int)*plVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            pcVar29 = (char *)plVar34[0x10];
            plVar28 = (long *)plVar34[0x12];
            if (plVar28 == (long *)0x0) {
              if (local_118 != (long *)0x0) goto LAB_02b16ef4;
LAB_02b17da4:
              plVar15 = (long *)PTR_DAT_04379c88;
            }
            else {
              (**(code **)(*plVar28 + 0x18))(plVar28);
              if (local_118 == (long *)0x0) goto LAB_02b17da4;
LAB_02b16ef4:
              plVar15 = local_118 + 0xb;
            }
            plVar10 = local_118;
            lVar18 = *plVar15;
            if (local_118 == (long *)0x0) {
              plVar15 = (long *)PTR_PTR_04379d00;
            }
            else {
              plVar15 = local_118 + 0xc;
            }
            lVar19 = *plVar15;
            if (local_118 == (long *)0x0) {
              local_1a8 = 0;
            }
            else {
              local_1a8 = local_118[0xd];
              (**(code **)(*local_118 + 0x18))(local_118);
            }
            local_d8 = &DAT_03996322;
            local_98 = '\0';
            local_e8 = (long *)0x0;
            local_e0 = &DAT_cbf29ce484222645;
            local_c0 = '\0';
            local_d0 = (long *)0x0;
            local_c8 = (long *)0x0;
            if (*pcVar29 == '\0') {
              plVar15 = (long *)FUN_00938550();
              if (plVar15 == (long *)0x0) goto LAB_02b16f9c;
              (**(code **)(*plVar15 + 0x18))(plVar15);
              if (plVar15 == (long *)0x0) goto LAB_02b17ebc;
LAB_02b16fa4:
              lVar31 = plVar15[0xb];
              if (plVar15 != (long *)0x0) goto LAB_02b16fb0;
LAB_02b17ecc:
              lVar33 = *(long *)PTR_PTR_04379d00;
              if (plVar15 == (long *)0x0) goto LAB_02b17edc;
LAB_02b16fbc:
              lVar35 = plVar15[0xd];
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
            else {
              if (((*PTR_DAT_04379cd0 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379cd0);
              }
              uVar30 = *(undefined8 *)PTR_DAT_04379cd8;
              *(undefined8 *)PTR_DAT_04379ce0 = uVar30;
              FUN_02a47cd8(local_70,uVar30,pcVar29);
              plVar15 = local_70[0];
LAB_02b16f9c:
              if (plVar15 != (long *)0x0) goto LAB_02b16fa4;
LAB_02b17ebc:
              lVar31 = *(long *)PTR_DAT_04379c88;
              if (plVar15 == (long *)0x0) goto LAB_02b17ecc;
LAB_02b16fb0:
              lVar33 = plVar15[0xc];
              if (plVar15 != (long *)0x0) goto LAB_02b16fbc;
LAB_02b17edc:
              lVar35 = 0;
            }
            plVar24 = local_c8;
            local_c8 = (long *)0x0;
            local_e0 = (undefined1 *)lVar31;
            local_d8 = (undefined1 *)lVar33;
            local_d0 = (long *)lVar35;
            if (plVar24 != (long *)0x0) {
              (**(code **)(*plVar24 + 0x20))();
            }
            local_c8 = plVar15;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar11) {
                *(int *)plVar3 = (int)*plVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            plVar15 = plVar34;
            if (local_e8 != (long *)0x0) {
              plVar24 = local_e8 + 10;
              do {
                iVar12 = (int)*plVar24 + -1;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar11) {
                  *(int *)plVar24 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 == 0) {
                lVar31 = *local_e8;
                local_e8 = plVar34;
                (**(code **)(lVar31 + 0x10))();
                plVar15 = local_e8;
              }
            }
            local_e8 = plVar15;
            plVar15 = local_f0;
            if (local_c0 == '\0') {
              if (local_110[0] != '\0') {
                local_b8 = local_108;
                local_a0 = local_f0;
                local_b0 = pcStack_100;
                uStack_a8 = local_f8;
                if (local_f0 != (long *)0x0) {
                  (**(code **)(*local_f0 + 0x18))();
                }
                local_c0 = '\x01';
              }
            }
            else if (local_110[0] == '\0') {
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              local_c0 = '\0';
            }
            else {
              local_b8 = local_108;
              local_b0 = pcStack_100;
              uStack_a8 = local_f8;
              if (local_f0 != (long *)0x0) {
                (**(code **)(*local_f0 + 0x18))(local_f0);
              }
              plVar24 = local_a0;
              local_a0 = plVar15;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x20))();
              }
            }
            plVar15 = local_128;
            if (local_98 == '\0') {
              if (local_148[0] != '\0') {
                local_90 = local_140;
                local_78 = local_128;
                local_88 = uStack_138;
                uStack_80 = local_130;
                if (local_128 != (long *)0x0) {
                  (**(code **)(*local_128 + 0x18))();
                }
                local_98 = '\x01';
              }
            }
            else if (local_148[0] == '\0') {
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              local_98 = '\0';
            }
            else {
              local_90 = local_140;
              local_88 = uStack_138;
              uStack_80 = local_130;
              if (local_128 != (long *)0x0) {
                (**(code **)(*local_128 + 0x18))(local_128);
              }
              plVar24 = local_78;
              local_78 = plVar15;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x20))();
              }
            }
            lVar31 = nn::os::GetCurrentThread();
            do {
              if (*plVar5 != 0 || *(long *)(param_2 + 0xb8) != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa4));
                  while (*plVar5 == 0 && *(long *)(param_2 + 0xb8) == 0) {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar11) {
                      *plVar5 = lVar31;
                      *(undefined8 *)(param_2 + 0xb8) = 0;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_02b17178;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar11) {
                *plVar5 = lVar31;
                *(undefined8 *)(param_2 + 0xb8) = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_02b17178:
            uVar17 = *(ulong *)(param_2 + 0x68);
            lVar31 = (long)(uVar17 - *(long *)(param_2 + 0x60)) >> 3;
            lVar33 = lVar31 * -0x1111111111111111;
            if (uVar17 < *(ulong *)(param_2 + 0x70)) {
              FUN_02b18540(puVar1,uVar17,&local_e8);
              *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 0x78;
            }
            else {
              uVar21 = *(ulong *)(param_2 + 0x80);
              uVar17 = lVar33 + 1;
              if (0x7ffffffffffffffe < uVar21) {
                uVar21 = 0x7fffffffffffffff;
              }
              if (uVar21 < uVar17) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar35 = (long)(*(ulong *)(param_2 + 0x70) - *(long *)(param_2 + 0x60)) >> 3;
              if ((ulong)(lVar35 * -0x1111111111111111) < uVar21 >> 1) {
                uVar22 = lVar35 * -0x2222222222222222;
                uVar21 = uVar17;
                if (uVar17 <= uVar22) {
                  uVar21 = uVar22;
                }
              }
              if (uVar21 == 0) {
                lVar35 = 0;
              }
              else {
                lVar35 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar21 * 0x78,8);
                if (lVar35 == 0) {
                  (**(code **)(*(long *)*puVar1 + 0xb8))();
                }
              }
              plVar24 = (long *)(lVar35 + lVar31 * 8);
              FUN_02b18540(puVar1,plVar24,&local_e8);
              plVar15 = *(long **)(param_2 + 0x60);
              if (*(long **)(param_2 + 0x68) == plVar15) {
                plVar14 = plVar15;
                plVar16 = plVar24;
              }
              else {
                plVar14 = *(long **)(param_2 + 0x68);
                plVar36 = plVar24;
                do {
                  uVar30 = *puVar1;
                  if ((*PTR_DAT_04379520 & 1) == 0) {
                    iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
                    puVar9 = PTR_DAT_04379528;
                    if (iVar12 != 0) {
                      FUN_008a62a4(PTR_DAT_04379528);
                      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379520);
                    }
                  }
                  lVar31 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                  if (lVar31 != 0) {
                    if (0xf < *(ulong *)(lVar31 + 0x80)) goto LAB_02b18184;
                    *(undefined8 *)(lVar31 + *(ulong *)(lVar31 + 0x80) * 8) = uVar30;
                    *(long *)(lVar31 + 0x80) = *(long *)(lVar31 + 0x80) + 1;
                  }
                  plVar32 = plVar14 + -0xf;
                  lVar20 = *plVar32;
                  plVar16 = plVar36 + -0xf;
                  *plVar16 = lVar20;
                  if (lVar20 != 0) {
                    piVar4 = (int *)(lVar20 + 0x50);
                    do {
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                      if (bVar11) {
                        *piVar4 = *piVar4 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  plVar36[-0xe] = plVar14[-0xe];
                  plVar36[-0xd] = plVar14[-0xd];
                  plVar36[-0xc] = plVar14[-0xc];
                  plVar13 = (long *)plVar14[-0xb];
                  plVar36[-0xb] = (long)plVar13;
                  if (plVar13 != (long *)0x0) {
                    (**(code **)(*plVar13 + 0x18))();
                  }
                  *(undefined1 *)(plVar36 + -10) = 0;
                  if ((char)plVar14[-10] != '\0') {
                    plVar36[-9] = plVar14[-9];
                    plVar36[-8] = plVar14[-8];
                    plVar36[-7] = plVar14[-7];
                    plVar13 = (long *)plVar14[-6];
                    plVar36[-6] = (long)plVar13;
                    if (plVar13 != (long *)0x0) {
                      (**(code **)(*plVar13 + 0x18))();
                    }
                    *(undefined1 *)(plVar36 + -10) = 1;
                  }
                  *(undefined1 *)(plVar36 + -5) = 0;
                  if ((char)plVar14[-5] != '\0') {
                    plVar36[-4] = plVar14[-4];
                    plVar36[-3] = plVar14[-3];
                    plVar36[-2] = plVar14[-2];
                    plVar14 = (long *)plVar14[-1];
                    plVar36[-1] = (long)plVar14;
                    if (plVar14 != (long *)0x0) {
                      (**(code **)(*plVar14 + 0x18))();
                    }
                    *(undefined1 *)(plVar36 + -5) = 1;
                  }
                  if (lVar31 != 0) {
                    *(long *)(lVar31 + 0x80) = *(long *)(lVar31 + 0x80) + -1;
                  }
                  plVar14 = plVar32;
                  plVar36 = plVar16;
                } while (plVar32 != plVar15);
                plVar15 = *(long **)(param_2 + 0x68);
                plVar14 = *(long **)(param_2 + 0x60);
              }
              *(long **)(param_2 + 0x60) = plVar16;
              *(long **)(param_2 + 0x68) = plVar24 + 0xf;
              lVar31 = *(long *)(param_2 + 0x70);
              *(ulong *)(param_2 + 0x70) = lVar35 + uVar21 * 0x78;
              while (plVar15 != plVar14) {
                if ((char)plVar15[-5] != '\0') {
                  if ((long *)plVar15[-1] != (long *)0x0) {
                    (**(code **)(*(long *)plVar15[-1] + 0x20))();
                  }
                  *(undefined1 *)(plVar15 + -5) = 0;
                }
                plVar24 = plVar15 + -0xf;
                if ((char)plVar15[-10] != '\0') {
                  if ((long *)plVar15[-6] != (long *)0x0) {
                    (**(code **)(*(long *)plVar15[-6] + 0x20))();
                  }
                  *(undefined1 *)(plVar15 + -10) = 0;
                }
                if ((long *)plVar15[-0xb] != (long *)0x0) {
                  (**(code **)(*(long *)plVar15[-0xb] + 0x20))();
                }
                plVar16 = (long *)*plVar24;
                plVar15 = plVar24;
                if (plVar16 != (long *)0x0) {
                  plVar24 = plVar16 + 10;
                  do {
                    iVar12 = (int)*plVar24 + -1;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar11) {
                      *(int *)plVar24 = iVar12;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar12 == 0) {
                    (**(code **)(*plVar16 + 0x10))();
                  }
                }
              }
              if (plVar14 != (long *)0x0) {
                lVar31 = lVar31 - (long)plVar14;
                plVar15 = (long *)*puVar1;
                uVar17 = (**(code **)(*plVar15 + 0xc0))(plVar15);
                if ((uVar17 & 1) != 0) {
                  lVar35 = tpidr_el0;
                  if (*(char *)(lVar35 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar35 + 0x38d488) = 1;
                    *(undefined8 *)(lVar35 + 0x38d478) = 0;
                    *(undefined8 *)(lVar35 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar35 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar35 + 0x38d480)) {
                    FUN_02bcc824(plVar15,plVar14,lVar31,8);
                    goto LAB_02b17564;
                  }
                }
                (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,lVar31,8);
              }
            }
LAB_02b17564:
            plVar15 = (long *)(**(code **)(**(long **)(param_2 + 0xf8) + 0x10))
                                        (*(long **)(param_2 + 0xf8),0x38,8);
            if (plVar15 == (long *)0x0) {
              (**(code **)(**(long **)(param_2 + 0xf8) + 0xb8))();
            }
            uVar30 = *(undefined8 *)(param_2 + 0xf8);
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar9 = PTR_DAT_04379528;
              if (iVar12 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar31 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar31 != 0) {
              if (0xf < *(ulong *)(lVar31 + 0x80)) {
LAB_02b18184:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar31 + *(ulong *)(lVar31 + 0x80) * 8) = uVar30;
              *(long *)(lVar31 + 0x80) = *(long *)(lVar31 + 0x80) + 1;
            }
            plVar15[2] = lVar18;
            plVar15[3] = lVar19;
            plVar15[4] = local_1a8;
            plVar15[5] = (long)plVar10;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
            *(int *)(plVar15 + 6) = (int)lVar33;
            if (lVar31 != 0) {
              *(long *)(lVar31 + 0x80) = *(long *)(lVar31 + 0x80) + -1;
            }
            uVar17 = plVar15[2];
            *plVar15 = 0;
            plVar15[1] = uVar17;
            uVar21 = *(ulong *)(param_2 + 200);
            if (uVar21 == 0) {
LAB_02b1781c:
              fVar37 = (float)(*(long *)(param_2 + 0x118) + 1);
              if ((uVar21 == 0) || (*(float *)(param_2 + 0x120) * (float)uVar21 < fVar37)) {
                uVar17 = (ulong)(uVar21 < 3 || (uVar21 & uVar21 - 1) != 0) | uVar21 << 1;
                uVar22 = (ulong)(fVar37 / *(float *)(param_2 + 0x120));
                if (uVar22 <= uVar17) {
                  uVar22 = uVar17;
                }
                if (uVar22 - 1 == 0) {
                  uVar22 = 2;
                  bVar11 = uVar21 < 3;
                  uVar17 = uVar22;
                  if (1 < uVar21) goto LAB_02b17884;
LAB_02b1792c:
                  FUN_02b186f0(plVar25,uVar22);
                }
                else {
                  if ((uVar22 & uVar22 - 1) != 0) {
                    uVar22 = std::__next_prime(uVar22);
                    uVar21 = *(ulong *)(param_2 + 200);
                  }
                  bVar11 = uVar21 <= uVar22;
                  uVar17 = uVar22;
                  if (uVar21 < uVar22) goto LAB_02b1792c;
LAB_02b17884:
                  if (!bVar11) {
                    uVar22 = (ulong)((float)*(ulong *)(param_2 + 0x118) /
                                    *(float *)(param_2 + 0x120));
                    if ((uVar21 < 3) ||
                       (uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
                       uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333),
                       1 < (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                       ) {
                      uVar22 = std::__next_prime(uVar22);
                    }
                    else if (1 < uVar22) {
                      uVar22 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar22 - 1) & 0x3f);
                    }
                    if (uVar22 <= uVar17) {
                      uVar22 = uVar17;
                    }
                    if (uVar22 < uVar21) goto LAB_02b1792c;
                  }
                }
                uVar21 = *(ulong *)(param_2 + 200);
                uVar17 = plVar15[1];
              }
              uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
              uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
              uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar22 < 2) {
                uVar17 = uVar21 - 1 & uVar17;
              }
              else if (uVar21 <= uVar17) {
                uVar23 = 0;
                if (uVar21 != 0) {
                  uVar23 = uVar17 / uVar21;
                }
                uVar17 = uVar17 - uVar23 * uVar21;
              }
              plVar24 = *(long **)(*plVar25 + uVar17 * 8);
              if (plVar24 == (long *)0x0) {
                *plVar15 = *plVar2;
                *plVar2 = (long)plVar15;
                *(long **)(*plVar25 + uVar17 * 8) = plVar2;
                if (*plVar15 != 0) {
                  uVar17 = *(ulong *)(*plVar15 + 8);
                  if (uVar22 < 2) {
                    uVar17 = uVar17 & uVar21 - 1;
                  }
                  else if (uVar21 <= uVar17) {
                    uVar22 = 0;
                    if (uVar21 != 0) {
                      uVar22 = uVar17 / uVar21;
                    }
                    uVar17 = uVar17 - uVar22 * uVar21;
                  }
                  plVar24 = (long *)(*plVar25 + uVar17 * 8);
                  goto LAB_02b179fc;
                }
              }
              else {
                *plVar15 = *plVar24;
LAB_02b179fc:
                *plVar24 = (long)plVar15;
              }
              *(long *)(param_2 + 0x118) = *(long *)(param_2 + 0x118) + 1;
            }
            else {
              uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
              uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
              uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar22 < 2) {
                uVar23 = uVar21 - 1 & uVar17;
              }
              else {
                uVar23 = uVar17;
                if (uVar21 <= uVar17) {
                  uVar23 = 0;
                  if (uVar21 != 0) {
                    uVar23 = uVar17 / uVar21;
                  }
                  uVar23 = uVar17 - uVar23 * uVar21;
                }
              }
              plVar24 = *(long **)(*plVar25 + uVar23 * 8);
              if (plVar24 == (long *)0x0) goto LAB_02b1781c;
              if (uVar22 < 2) {
                do {
                  plVar24 = (long *)*plVar24;
                  if ((plVar24 == (long *)0x0) || ((plVar24[1] & uVar21 - 1) != uVar23))
                  goto LAB_02b1781c;
                } while (plVar24[2] != uVar17);
              }
              else {
                do {
                  plVar24 = (long *)*plVar24;
                  if (plVar24 == (long *)0x0) goto LAB_02b1781c;
                  uVar22 = plVar24[1];
                  if (uVar21 <= uVar22) {
                    uVar8 = 0;
                    if (uVar21 != 0) {
                      uVar8 = uVar22 / uVar21;
                    }
                    uVar22 = uVar22 - uVar8 * uVar21;
                  }
                  if (uVar22 != uVar23) goto LAB_02b1781c;
                } while (plVar24[2] != uVar17);
              }
              if (plVar15 != (long *)0x0) {
                if ((long *)plVar15[5] != (long *)0x0) {
                  (**(code **)(*(long *)plVar15[5] + 0x20))();
                }
                plVar24 = *(long **)(param_2 + 0xf8);
                uVar17 = (**(code **)(*plVar24 + 0xc0))(plVar24);
                if ((uVar17 & 1) != 0) {
                  lVar18 = tpidr_el0;
                  if (*(char *)(lVar18 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar18 + 0x38d488) = 1;
                    *(undefined8 *)(lVar18 + 0x38d478) = 0;
                    *(undefined8 *)(lVar18 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar18 + 0x38d480)) {
                    FUN_02bcc824(plVar24,plVar15,0x38,8);
                    goto LAB_02b17a10;
                  }
                }
                (**(code **)(*plVar24 + 0x18))(plVar24,plVar15,0x38,8);
              }
            }
LAB_02b17a10:
            do {
              lVar18 = *plVar5;
              lVar19 = *(long *)(param_2 + 0xb8);
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar11) {
                *plVar5 = lVar18;
                *(long *)(param_2 + 0xb8) = lVar19;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              if (*plVar5 != lVar18 || *(long *)(param_2 + 0xb8) != lVar19) {
                ClearExclusiveLocal();
                lVar18 = *plVar5;
                lVar19 = *(long *)(param_2 + 0xb8);
                goto LAB_02b17a40;
              }
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar11) {
                *plVar5 = 0;
                *(long *)(param_2 + 0xb4) = lVar19;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_02b17a90;
          }
          *param_1 = 0;
          *(long *)(param_1 + 8) = lVar18;
          *(char **)(param_1 + 0x10) = pcVar29;
          *(ulong *)(param_1 + 0x18) = uVar17;
          *(long **)(param_1 + 0x20) = local_168;
          if (local_168 != (long *)0x0) {
            (**(code **)(*local_168 + 0x18))(local_168);
          }
          *param_1 = 1;
          goto joined_r0x02b17cd0;
        }
        if (lVar18 == *param_5) goto LAB_02b16cd8;
        bVar11 = false;
        goto LAB_02b172a4;
      }
      goto LAB_02b16c84;
    }
  }
  else {
    do {
      if (*(long *)(*plVar27 + 0x58) == *param_4) goto LAB_02b16c14;
      plVar27 = plVar27 + 1;
    } while (plVar25 != plVar27);
  }
LAB_02b180f0:
  *param_1 = 0;
  return;
LAB_02b16abc:
  ClearExclusiveLocal();
  plVar5 = (long *)*plVar27;
  lVar18 = *(long *)(param_2 + 0xb8);
  goto joined_r0x02b16ab4;
LAB_02b17a40:
  do {
    lVar31 = *plVar5;
    if (lVar31 == lVar18 && *(long *)(param_2 + 0xb8) == lVar19) {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar11) {
        *plVar5 = 0;
        *(long *)(param_2 + 0xb4) = lVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_02b17a40;
      bVar11 = true;
    }
    else {
      bVar11 = false;
      ClearExclusiveLocal();
    }
    lVar18 = lVar31;
    lVar19 = *(long *)(param_2 + 0xb8);
  } while (!bVar11);
LAB_02b17a90:
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa4));
  if (local_98 != '\0') {
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_98 = '\0';
  }
  if (local_c0 != '\0') {
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    local_c0 = '\0';
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    plVar15 = local_e8 + 10;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *(int *)plVar15 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  do {
    iVar12 = (int)*plVar3 + -1;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *(int *)plVar3 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  plVar28 = (long *)plVar34[0x16];
  plVar34[0x13] = (long)&DAT_cbf29ce484222645;
  plVar34[0x16] = 0;
  plVar34[0x14] = (long)&DAT_03996322;
  plVar34[0x15] = 0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  plVar28 = local_120;
  if (local_120 == (long *)0x0) {
    lVar18 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar18 = local_120[0xb];
    if (local_120 != (long *)0x0) {
      lVar19 = local_120[0xc];
      goto joined_r0x02b180a0;
    }
  }
  lVar19 = *(long *)PTR_PTR_04379d00;
joined_r0x02b180a0:
  if (local_120 == (long *)0x0) {
    plVar34[0xf] = lVar18;
    plVar34[0x10] = lVar19;
    plVar34[0x11] = 0;
  }
  else {
    lVar31 = local_120[0xd];
    (**(code **)(*local_120 + 0x18))(local_120);
    plVar34[0xf] = lVar18;
    plVar34[0x10] = lVar19;
    plVar34[0x11] = lVar31;
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  plVar15 = (long *)plVar34[0x12];
  plVar34[0x12] = (long)plVar28;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  FUN_02b73040(plVar34,param_3);
  FUN_02b3365c(&local_e8,*param_3,local_148);
  if (local_e8 != (long *)0x0) {
    FUN_02b2aaa0();
  }
  *param_1 = 0;
  if (local_148[0] != '\0') {
    *(undefined8 *)(param_1 + 8) = local_140;
    *(undefined8 *)(param_1 + 0x10) = uStack_138;
    *(undefined8 *)(param_1 + 0x18) = local_130;
    *(long **)(param_1 + 0x20) = local_128;
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x18))();
    }
    *param_1 = 1;
  }
  if (local_e8 != (long *)0x0) {
    plVar28 = local_e8 + 10;
    do {
      iVar12 = (int)*plVar28 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar11) {
        *(int *)plVar28 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if (local_148[0] != '\0') {
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    local_148[0] = '\0';
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
joined_r0x02b17cd0:
  if (local_110[0] != '\0') {
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    local_110[0] = '\0';
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  bVar11 = true;
LAB_02b172a4:
  do {
    iVar12 = (int)*plVar3 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *(int *)plVar3 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  if (bVar11) {
    return;
  }
LAB_02b16c84:
  lVar18 = *plVar27;
  uVar26 = uVar26 + 1;
  if (((ulong)(*(long *)(lVar18 + 0x80) - *(long *)(lVar18 + 0x78)) >> 3 & 0xffffffff) <= uVar26)
  goto LAB_02b180f0;
  goto LAB_02b16ca0;
}


