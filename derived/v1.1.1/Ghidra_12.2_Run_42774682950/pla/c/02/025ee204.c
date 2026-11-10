/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ee204; name: FUN_025ee204
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025ee204(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined8 *param_6)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined1 *puVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  undefined1 *puVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_var;
  float fVar44;
  float fVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float extraout_var_01;
  float extraout_var_03;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float extraout_var_00;
  float extraout_var_02;
  float extraout_var_04;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar58;
  undefined1 auVar46 [12];
  float fVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar47 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar60 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar83;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar84;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar108;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 uVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar128;
  float fVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float local_170;
  float fStack_16c;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  long *local_150;
  code *local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_88;
  long *local_80 [2];
  
  if (*(int *)(param_5 + 0x240) != 0) {
    switch(*(int *)(param_5 + 0x240)) {
    case 1:
      FUN_025f29a8(param_5);
      return;
    case 2:
      if (((*PTR_DAT_04379e28 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e28);
      }
      lVar26 = *(long *)PTR_DAT_04379e30;
      *(long *)PTR_DAT_04379e38 = lVar26;
      if (lVar26 == 0) {
        return;
      }
      uVar23 = FUN_00d26384(lVar26,1);
      if ((uVar23 & 1) == 0) {
        return;
      }
      local_a0 = DAT_0388a290;
      uStack_98 = DAT_0388a298;
      local_150 = (long *)0x860c86057a6741f7;
      local_148 = (code *)0x396ef1b;
      local_140 = 0x1c;
      local_138 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar28 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar28;
      puVar25 = *(undefined1 **)(lVar28 + 0x60);
      if (puVar25 != (undefined1 *)0x0) {
        uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar25) {
          puVar27 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar32 = 0;
          if (puVar25 != (undefined1 *)0x0) {
            uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
          }
          puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
        }
        plVar29 = *(long **)(*(long *)(lVar28 + 0x58) + (long)puVar27 * 8);
        if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
          if (uVar23 < 2) {
            do {
              if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ee758;
              }
              else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27)
              goto LAB_025ee91c;
              plVar29 = (long *)*plVar29;
              uVar18 = 0;
            } while (plVar29 != (long *)0x0);
            goto LAB_025ee798;
          }
          do {
            puVar31 = (undefined1 *)plVar29[1];
            if (puVar31 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ee758;
            }
            else {
              if (puVar25 <= puVar31) {
                uVar23 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar31 / (ulong)puVar25;
                }
                puVar31 = puVar31 + -(uVar23 * (long)puVar25);
              }
              if (puVar31 != puVar27) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
      break;
    case 3:
      if (((*PTR_DAT_04379e28 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e28);
      }
      lVar26 = *(long *)PTR_DAT_04379e30;
      *(long *)PTR_DAT_04379e38 = lVar26;
      if (lVar26 == 0) {
        return;
      }
      uVar23 = FUN_00d26848(lVar26,1);
      if ((uVar23 & 1) == 0) {
        return;
      }
      FUN_025f2d8c(param_5);
      *(undefined4 *)(param_5 + 0x240) = 4;
      return;
    case 4:
      iVar21 = *(int *)(param_5 + 0x2a0);
      *(int *)(param_5 + 0x2a0) = iVar21 + 1;
      puVar13 = PTR_DAT_04379660;
      local_150 = (long *)0x20591ea8b8d70e98;
      local_148 = (code *)0x38bc13a;
      local_140 = 0x1d;
      local_138 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar15 = PTR_DAT_04379670;
      puVar14 = PTR_DAT_04379668;
      lVar26 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar26;
      puVar25 = *(undefined1 **)(lVar26 + 0x60);
      if (puVar25 != (undefined1 *)0x0) {
        uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar27 = &DAT_7c08eae870e235e0;
          if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
            uVar32 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
            }
            puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
          }
        }
        plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
        if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
          if (uVar23 < 2) {
            do {
              if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ee3a0;
              }
              else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27)
              goto LAB_025ee5d0;
              plVar29 = (long *)*plVar29;
              iVar22 = 0;
            } while (plVar29 != (long *)0x0);
            goto joined_r0x025ee8a4;
          }
          do {
            puVar31 = (undefined1 *)plVar29[1];
            if (puVar31 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ee3a0;
            }
            else {
              if (puVar25 <= puVar31) {
                uVar23 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar31 / (ulong)puVar25;
                }
                puVar31 = puVar31 + -(uVar23 * (long)puVar25);
              }
              if (puVar31 != puVar27) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
      goto LAB_025ee5d0;
    case 5:
      if (((*PTR_DAT_04379e28 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e28);
      }
      lVar26 = *(long *)PTR_DAT_04379e30;
      *(long *)PTR_DAT_04379e38 = lVar26;
      if (lVar26 == 0) {
        return;
      }
      uVar23 = FUN_00d26384(lVar26,1);
      if ((uVar23 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_5 + 0x240) = 0;
      return;
    default:
      return;
    }
    goto LAB_025ee91c;
  }
  if ((*(byte *)(param_5 + 0x2b0) & 0xf) != 0) {
    return;
  }
  if (*(long *)(param_5 + 0x1f0) != 0) {
    FUN_00cfac20(local_80,*(long *)(param_5 + 0x1f0));
    if (local_80[0] == (long *)0x0) goto LAB_025ee248;
    local_150 = (long *)0x0;
    local_148 = (code *)0x0;
    FUN_00ac3fa4(&local_150,local_80[0] + 0x49);
    if (local_150 == (long *)0x0) {
      local_88 = (long *)0x0;
LAB_025ee98c:
      if (local_88 == (long *)0x0) goto LAB_025f08a8;
LAB_025ee994:
      uVar23 = (**(code **)(*local_88 + 0x250))();
      puVar16 = PTR_DAT_043796f8;
      puVar15 = PTR_DAT_043796f0;
      puVar14 = PTR_DAT_043794d8;
      puVar13 = PTR_DAT_043794d0;
      if ((uVar23 & 1) == 0) {
        lVar26 = *(long *)(param_5 + 0x210);
        if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
          piVar1 = (int *)(lVar26 + 0xc);
          iVar21 = *(int *)(lVar26 + 0xc);
          do {
            plVar29 = *(long **)(lVar26 + 0x10);
            if (((*puVar15 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar15), iVar22 != 0)) {
              if (((*puVar13 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar13), iVar22 != 0)) {
                uVar24 = FUN_0087f8f0();
                *(undefined8 *)puVar14 = uVar24;
                __cxa_guard_release(puVar13);
              }
              *(undefined **)puVar16 = puVar14;
              __cxa_guard_release(puVar15);
            }
            while( true ) {
              if (plVar29 == (long *)0x0) goto LAB_025eec5c;
              if (plVar29 == (long *)puVar16) break;
              plVar29 = (long *)*plVar29;
            }
            iVar22 = *piVar1;
            if (iVar22 == iVar21) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar21 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_025f1cb0;
              lVar26 = *(long *)(lVar26 + 0x18);
              if (lVar26 != 0) {
                plVar29 = (long *)(lVar26 + -0x50);
                uVar23 = FUN_01f26cf4(plVar29,&DAT_03a7d1f0);
                lVar26 = *(long *)(lVar26 + 8);
                piVar1 = (int *)(lVar26 + 0xc);
                do {
                  iVar21 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar21 != 1) {
                  bVar4 = false;
                  if ((uVar23 & 1) == 0) goto LAB_025f1d50;
LAB_025f1d30:
                  if (bVar4) {
                    (**(code **)(*plVar29 + 0x20))(plVar29);
                  }
                  break;
                }
                *(undefined8 *)(lVar26 + 0x18) = 0;
                bVar4 = true;
                if ((uVar23 & 1) != 0) goto LAB_025f1d30;
LAB_025f1d50:
                if (bVar4) {
                  (**(code **)(*plVar29 + 0x20))(plVar29);
                }
                bVar4 = false;
                goto joined_r0x025f1d5c;
              }
              break;
            }
            ClearExclusiveLocal();
LAB_025f1cb0:
            iVar21 = iVar22;
          } while (iVar22 != 0);
        }
LAB_025eec5c:
        local_150 = (long *)0x0;
        local_148 = (code *)0x0;
        FUN_00cf9db0(&local_150,local_80[0] + 0xf1);
        if (local_150 == (long *)0x0) {
          local_a0 = (long *)0x0;
LAB_025eec7c:
          if (local_a0 != (long *)0x0) goto LAB_025eec84;
LAB_025f13b8:
          uVar23 = (**(code **)(*local_88 + 0x218))();
          if ((uVar23 & 1) != 0) {
LAB_025f13e0:
            plVar29 = (long *)0x0;
            goto LAB_025f13e4;
          }
          uVar23 = (**(code **)(*local_88 + 0x228))();
          plVar29 = local_88;
          if ((uVar23 & 1) != 0) goto LAB_025f13e0;
          if (local_88 != (long *)0x0) {
            lVar26 = local_88[0xb];
            if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_025f188c;
            if (*(long *)(lVar26 + 0x10) == 0) {
              uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
              *(undefined8 *)(lVar26 + 0x10) = uVar24;
            }
            piVar1 = (int *)(lVar26 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
LAB_025ef14c:
          bVar4 = false;
          if (local_a0 != (long *)0x0) goto LAB_025f13f0;
LAB_025f140c:
          if (!bVar4) goto LAB_025f14ac;
LAB_025f1410:
          bVar4 = false;
          goto LAB_025f1414;
        }
        FUN_00959eac(&local_a0);
        plVar29 = local_150;
        if (local_150 == (long *)0x0) goto LAB_025eec7c;
        plVar37 = local_150 + 1;
        do {
          iVar21 = (int)*plVar37 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar4) {
            *(int *)plVar37 = iVar21;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 != 0) goto LAB_025eec7c;
        local_150[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_d0 = *plVar29;
        FUN_02a44274(lVar26 + 0xd8,&local_d0);
        if (local_a0 == (long *)0x0) goto LAB_025f13b8;
LAB_025eec84:
        local_150 = (long *)0x0;
        local_148 = (code *)0x0;
        FUN_00ac3fa4(&local_150,local_a0 + 0x49);
        FUN_0099c748(&local_b0,&local_150);
        plVar29 = local_150;
        if (local_150 != (long *)0x0) {
          plVar37 = local_150 + 1;
          do {
            iVar21 = (int)*plVar37 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar4) {
              *(int *)plVar37 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 == 0) {
            local_150[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar26;
            local_d0 = *plVar29;
            FUN_02a44274(lVar26 + 0xd8,&local_d0);
          }
        }
        plVar37 = local_b0;
        plVar29 = local_b0;
        if (local_b0 != (long *)0x0) {
          iVar21 = *(int *)((long)local_a0 + 0x59c);
          if (iVar21 == 4) {
            lVar26 = local_b0[0xb];
            if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) {
LAB_025f188c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar26 + 0x10) == 0) {
              uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
              *(undefined8 *)(lVar26 + 0x10) = uVar24;
            }
            piVar1 = (int *)(lVar26 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_025ef120:
            bVar4 = false;
            plVar29 = plVar37;
          }
          else {
            if (iVar21 == 1) {
              plVar34 = (long *)(**(code **)local_b0[10])(local_b0 + 10);
              plVar29 = local_b0;
              if ((*PTR_DAT_04382fe0 & 1) == 0) {
                iVar21 = __cxa_guard_acquire(PTR_DAT_04382fe0);
                puVar13 = PTR_DAT_04379f00;
                plVar29 = local_b0;
                if (iVar21 != 0) {
                  if ((*PTR_DAT_04379ef8 & 1) == 0) {
                    iVar21 = __cxa_guard_acquire(PTR_DAT_04379ef8);
                    puVar14 = PTR_DAT_04379e90;
                    if (iVar21 != 0) {
                      if ((*PTR_DAT_04379e88 & 1) == 0) {
                        iVar21 = __cxa_guard_acquire(PTR_DAT_04379e88);
                        puVar15 = PTR_DAT_043795e0;
                        if (iVar21 != 0) {
                          if (((*PTR_DAT_043795d8 & 1) == 0) &&
                             (iVar21 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar21 != 0)) {
                            if (((*PTR_DAT_043794d0 & 1) == 0) &&
                               (iVar21 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar21 != 0)) {
                              uVar24 = FUN_0087f8f0();
                              *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                              __cxa_guard_release(PTR_DAT_043794d0);
                            }
                            *(undefined **)puVar15 = PTR_DAT_043794d8;
                            __cxa_guard_release(PTR_DAT_043795d8);
                          }
                          *(undefined **)puVar14 = puVar15;
                          __cxa_guard_release(PTR_DAT_04379e88);
                        }
                      }
                      *(undefined **)puVar13 = puVar14;
                      __cxa_guard_release(PTR_DAT_04379ef8);
                    }
                  }
                  *(undefined **)PTR_DAT_04382fe8 = puVar13;
                  __cxa_guard_release(PTR_DAT_04382fe0);
                  plVar29 = local_b0;
                }
              }
              for (; local_b0 = plVar29, plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
                if (plVar34 == (long *)PTR_DAT_04382fe8) {
                  if ((char)plVar37[0x196] != '\0') goto LAB_025ef0d4;
                  break;
                }
              }
              if (plVar29 == (long *)0x0) goto LAB_025ef14c;
              lVar26 = plVar29[0xb];
              if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_025f188c;
              if (*(long *)(lVar26 + 0x10) == 0) {
                uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
                *(undefined8 *)(lVar26 + 0x10) = uVar24;
              }
              piVar1 = (int *)(lVar26 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar37 = plVar29;
              } while (cVar3 != '\0');
              goto LAB_025ef120;
            }
            if (iVar21 == 0) {
              lVar26 = local_b0[0xb];
              if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_025f188c;
              if (*(long *)(lVar26 + 0x10) == 0) {
                uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
                *(undefined8 *)(lVar26 + 0x10) = uVar24;
              }
              piVar1 = (int *)(lVar26 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_025ef120;
            }
LAB_025ef0d4:
            plVar29 = (long *)0x0;
            bVar4 = true;
          }
          if (local_b0 != (long *)0x0) {
            lVar26 = local_b0[0xb];
            piVar1 = (int *)(lVar26 + 0xc);
            do {
              iVar21 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar21 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar21 + -1 == 0) {
              *(undefined8 *)(lVar26 + 0x18) = 0;
              (**(code **)(*local_b0 + 0x20))();
            }
          }
          if (!bVar4) goto LAB_025ef14c;
        }
LAB_025f13e4:
        bVar4 = true;
        if (local_a0 == (long *)0x0) goto LAB_025f140c;
LAB_025f13f0:
        lVar26 = local_a0[0xb];
        piVar1 = (int *)(lVar26 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 != 0) goto LAB_025f140c;
        *(undefined8 *)(lVar26 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
        if (bVar4) goto LAB_025f1410;
LAB_025f14ac:
        uVar23 = (**(code **)(*plVar29 + 0xf0))(plVar29);
        if ((uVar23 & 1) != 0) {
          local_150 = (long *)0x0;
          local_148 = (code *)0x0;
          FUN_01a9e404(&local_150,plVar29 + 0xc1);
          plVar37 = local_150;
          puVar15 = PTR_DAT_0437b090;
          puVar14 = PTR_DAT_0437b088;
          puVar13 = PTR_DAT_043795e0;
          if (local_150 == (long *)0x0) goto LAB_025f14d8;
          if (*(int *)((long)local_150 + 0xc) != 0) {
            piVar1 = (int *)((long)local_150 + 0xc);
            iVar21 = *(int *)((long)local_150 + 0xc);
            do {
              plVar34 = (long *)plVar37[2];
              if (((*puVar14 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar14), iVar22 != 0)) {
                if (((*PTR_DAT_043795d8 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar22 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar22 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar22 != 0)) {
                    uVar24 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar13 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043795d8);
                }
                *(undefined **)puVar15 = puVar13;
                __cxa_guard_release(puVar14);
              }
              while( true ) {
                if (plVar34 == (long *)0x0) goto LAB_025f26b8;
                if (plVar34 == (long *)puVar15) break;
                plVar34 = (long *)*plVar34;
              }
              iVar22 = *piVar1;
              if (iVar22 == iVar21) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar21 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar26 = plVar37[3];
                  plVar37 = (long *)0x0;
                  plVar34 = local_150;
                  if (lVar26 != 0) {
                    plVar37 = (long *)(lVar26 + -0x50);
                  }
                  goto joined_r0x025f1e18;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar21 = iVar22;
            } while (iVar22 != 0);
          }
LAB_025f26b8:
          plVar37 = (long *)0x0;
          plVar34 = local_150;
joined_r0x025f1e18:
          local_150 = plVar34;
          if (plVar34 != (long *)0x0) {
            plVar30 = plVar34 + 1;
            do {
              iVar21 = (int)*plVar30 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar4) {
                *(int *)plVar30 = iVar21;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar21 == 0) {
              plVar34[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar26;
              local_d0 = *plVar34;
              FUN_02a44274(lVar26 + 0xd8,&local_d0);
            }
          }
          if (plVar37 == (long *)0x0) goto LAB_025f14d8;
          uVar23 = (**(code **)(*plVar29 + 0x1a8))(plVar29);
          if (((uVar23 & 1) == 0) &&
             (uVar23 = (**(code **)(*plVar29 + 0x1b0))(plVar29), (uVar23 & 1) == 0)) {
            FUN_01839c8c(&local_150,plVar29 + 0x15a);
            uVar23 = (**(code **)(*plVar29 + 0x1a0))(plVar29);
            fVar128 = 1.0;
            if ((uVar23 & 1) == 0) {
              if (local_150 != (long *)0x0) goto LAB_025f1f3c;
            }
            else if (local_150 != (long *)0x0) {
              auVar48._0_4_ = *(float *)(local_150 + 0x2a) * (float)DAT_0388a140;
              auVar48._4_4_ =
                   *(float *)((long)local_150 + 0x154) * (float)((ulong)DAT_0388a140 >> 0x20);
              auVar48._8_4_ = *(float *)(local_150 + 0x2b) * (float)DAT_0388a148;
              auVar48._12_4_ =
                   *(float *)((long)local_150 + 0x15c) * (float)((ulong)DAT_0388a148 >> 0x20);
              param_2 = NEON_ext(auVar48,auVar48,8,1);
              fVar129 = param_2._0_4_ + auVar48._0_4_ + param_2._4_4_ + auVar48._4_4_;
              fVar128 = -1.0;
              if (-1.0 <= fVar129) {
                param_2 = ZEXT816(0x3f800000);
                fVar128 = fVar129;
                if (param_2._0_4_ < fVar129) {
                  fVar128 = param_2._0_4_;
                }
              }
LAB_025f1f3c:
              lVar26 = local_150[0xb];
              piVar1 = (int *)(lVar26 + 0xc);
              do {
                iVar21 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar21 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar21 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*local_150 + 0x20))();
              }
            }
            fVar128 = (float)FUN_0095d8f0(fVar128);
            puVar13 = PTR_DAT_04379660;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            puVar15 = PTR_DAT_04379670;
            puVar14 = PTR_DAT_04379668;
            lVar26 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar26;
            puVar25 = *(undefined1 **)(lVar26 + 0x60);
            fVar129 = 0.0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
              uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar23 < 2) {
                puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
              }
              else {
                puVar27 = &DAT_7c08eae870e235e0;
                if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
                  uVar32 = 0;
                  if (puVar25 != (undefined1 *)0x0) {
                    uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
                  }
                  puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
                }
              }
              plVar34 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
              if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0))
              {
                if (uVar23 < 2) {
                  do {
                    if ((undefined1 *)plVar34[1] == &DAT_7c08eae870e235e0) {
                      if ((undefined1 *)plVar34[2] == &DAT_7c08eae870e235e0) goto LAB_025f2028;
                    }
                    else if ((undefined1 *)((ulong)plVar34[1] & (ulong)(puVar25 + -1)) != puVar27)
                    break;
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
                else {
                  do {
                    puVar31 = (undefined1 *)plVar34[1];
                    if (puVar31 == &DAT_7c08eae870e235e0) {
                      if ((undefined1 *)plVar34[2] == &DAT_7c08eae870e235e0) goto LAB_025f2028;
                    }
                    else {
                      if (puVar25 <= puVar31) {
                        uVar23 = 0;
                        if (puVar25 != (undefined1 *)0x0) {
                          uVar23 = (ulong)puVar31 / (ulong)puVar25;
                        }
                        puVar31 = puVar31 + -(uVar23 * (long)puVar25);
                      }
                      if (puVar31 != puVar27) break;
                    }
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
              }
            }
            goto joined_r0x025f2328;
          }
          goto LAB_025f1ea0;
        }
LAB_025f14d8:
        bVar4 = false;
        goto joined_r0x025f1ed4;
      }
      bVar4 = false;
      goto LAB_025ee9a8;
    }
    FUN_0095dafc(&local_88);
    plVar29 = local_150;
    if (local_150 == (long *)0x0) goto LAB_025ee98c;
    plVar37 = local_150 + 1;
    do {
      iVar21 = (int)*plVar37 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = iVar21;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 != 0) goto LAB_025ee98c;
    local_150[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar26 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar26;
    local_d0 = *plVar29;
    FUN_02a44274(lVar26 + 0xd8,&local_d0);
    if (local_88 != (long *)0x0) goto LAB_025ee994;
LAB_025f08a8:
    bVar4 = false;
    goto joined_r0x025ef598;
  }
  local_80[0] = (long *)0x0;
  goto LAB_025ee248;
LAB_025ee3a0:
  plVar29 = (long *)plVar29[3];
  if (plVar29 == (long *)0x0) {
LAB_025ee5d0:
    iVar22 = 0;
  }
  else {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar22 = FUN_00d78f50(plVar29,&local_150);
    do {
      iVar83 = (int)*plVar37 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = iVar83;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar83 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
    }
  }
joined_r0x025ee8a4:
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (iVar21 <= iVar22) {
    return;
  }
  *(undefined4 *)(param_5 + 0x2a0) = 0;
  if (((*PTR_DAT_04379e28 & 1) == 0) &&
     (iVar21 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar21 != 0)) {
    FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e28);
  }
  lVar26 = *(long *)PTR_DAT_04379e30;
  *(long *)PTR_DAT_04379e38 = lVar26;
  if (lVar26 == 0) goto LAB_025ee554;
  local_150 = (long *)0xf8875e81a019540a;
  local_148 = (code *)0x39025fe;
  local_140 = 0x1b;
  local_138 = (long *)0x0;
  if (((*puVar13 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar28 = *(long *)puVar14;
  *(long *)puVar15 = lVar28;
  puVar25 = *(undefined1 **)(lVar28 + 0x60);
  if (puVar25 != (undefined1 *)0x0) {
    uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar27 = &DAT_7c08eae870e235e0;
      if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
        uVar32 = 0;
        if (puVar25 != (undefined1 *)0x0) {
          uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
        }
        puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
      }
    }
    plVar29 = *(long **)(*(long *)(lVar28 + 0x58) + (long)puVar27 * 8);
    if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ee4ec;
          }
          else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27)
          goto LAB_025ee8f4;
          plVar29 = (long *)*plVar29;
          uVar18 = 0;
        } while (plVar29 != (long *)0x0);
        goto LAB_025ee52c;
      }
      do {
        puVar31 = (undefined1 *)plVar29[1];
        if (puVar31 == &DAT_7c08eae870e235e0) {
          if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ee4ec;
        }
        else {
          if (puVar25 <= puVar31) {
            uVar23 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar23 = (ulong)puVar31 / (ulong)puVar25;
            }
            puVar31 = puVar31 + -(uVar23 * (long)puVar25);
          }
          if (puVar31 != puVar27) break;
        }
        plVar29 = (long *)*plVar29;
      } while (plVar29 != (long *)0x0);
    }
  }
LAB_025ee8f4:
  uVar18 = 0;
  goto LAB_025ee52c;
LAB_025f2028:
  plVar34 = (long *)plVar34[3];
  if (plVar34 != (long *)0x0) {
    plVar30 = plVar34 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar4) {
        *(int *)plVar30 = (int)*plVar30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar34[0x21];
    fVar129 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0x240d1afb40763bf6;
      }
      else if (uVar23 < 0x240d1afb40763bf7) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0x240d1afb40763bf6 / uVar23;
        }
        uVar33 = 0x240d1afb40763bf6 - uVar33 * uVar23;
      }
      else {
        uVar33 = 0x240d1afb40763bf6;
      }
      plVar35 = *(long **)(plVar34[0x20] + uVar33 * 8);
      if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar35[1] == 0x240d1afb40763bf6) {
              if (plVar35[2] == 0x240d1afb40763bf6) goto LAB_025f216c;
            }
            else if ((plVar35[1] & uVar23 - 1) != uVar33) break;
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar35[1];
            if (uVar32 == 0x240d1afb40763bf6) {
              if (plVar35[2] == 0x240d1afb40763bf6) goto LAB_025f216c;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
      }
    }
    goto LAB_025f2170;
  }
  goto joined_r0x025f2328;
LAB_025f216c:
  fVar129 = *(float *)(plVar35 + 6);
LAB_025f2170:
  do {
    iVar21 = (int)*plVar30 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar4) {
      *(int *)plVar30 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar34 + 0x10))();
  }
joined_r0x025f2328:
  if (fVar128 <= fVar129) {
    fVar128 = (float)FUN_01830208(plVar37);
    plVar34 = local_80[0];
    if (fVar128 <= 0.0) {
      if (((*puVar13 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar26 = *(long *)puVar14;
      *(long *)puVar15 = lVar26;
      puVar25 = *(undefined1 **)(lVar26 + 0x60);
      fVar128 = 0.0;
      if (puVar25 != (undefined1 *)0x0) {
        uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar27 = &DAT_7c08eae870e235e0;
          if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
            uVar32 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
            }
            puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
          }
        }
        plVar30 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
        if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
          if (uVar23 < 2) {
            do {
              if ((undefined1 *)plVar30[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar30[2] == &DAT_7c08eae870e235e0) goto LAB_025f223c;
              }
              else if ((undefined1 *)((ulong)plVar30[1] & (ulong)(puVar25 + -1)) != puVar27) break;
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
          }
          else {
            do {
              puVar31 = (undefined1 *)plVar30[1];
              if (puVar31 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar30[2] == &DAT_7c08eae870e235e0) goto LAB_025f223c;
              }
              else {
                if (puVar25 <= puVar31) {
                  uVar23 = 0;
                  if (puVar25 != (undefined1 *)0x0) {
                    uVar23 = (ulong)puVar31 / (ulong)puVar25;
                  }
                  puVar31 = puVar31 + -(uVar23 * (long)puVar25);
                }
                if (puVar31 != puVar27) break;
              }
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
          }
        }
      }
      goto LAB_025f23c0;
    }
  }
  goto LAB_025f1ea0;
LAB_025f223c:
  plVar30 = (long *)plVar30[3];
  if (plVar30 != (long *)0x0) {
    plVar35 = plVar30 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar4) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar30[0x21];
    fVar128 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0xc360bb596c3d4d6a;
      }
      else if (uVar23 < 0xc360bb596c3d4d6b) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0xc360bb596c3d4d6a / uVar23;
        }
        uVar33 = 0xc360bb596c3d4d6a - uVar33 * uVar23;
      }
      else {
        uVar33 = 0xc360bb596c3d4d6a;
      }
      plVar36 = *(long **)(plVar30[0x20] + uVar33 * 8);
      if ((plVar36 != (long *)0x0) && (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar36[1] == 0xc360bb596c3d4d6a) {
              if (plVar36[2] == -0x3c9f44a693c2b296) goto LAB_025f23a8;
            }
            else if ((plVar36[1] & uVar23 - 1) != uVar33) break;
            plVar36 = (long *)*plVar36;
          } while (plVar36 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar36[1];
            if (uVar32 == 0xc360bb596c3d4d6a) {
              if (plVar36[2] == -0x3c9f44a693c2b296) goto LAB_025f23a8;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar36 = (long *)*plVar36;
          } while (plVar36 != (long *)0x0);
        }
      }
    }
    goto LAB_025f23ac;
  }
  goto LAB_025f23c0;
LAB_025f23a8:
  fVar128 = *(float *)(plVar36 + 6);
LAB_025f23ac:
  do {
    iVar21 = (int)*plVar35 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar4) {
      *(int *)plVar35 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar30 + 0x10))();
  }
LAB_025f23c0:
  auVar48 = (**(code **)(*plVar34 + 0x140))(plVar34);
  param_2 = *(undefined1 (*) [16])(plVar34 + 0xfa);
  fVar129 = fVar128 + param_2._0_4_;
  param_3 = ZEXT416((uint)fVar129);
  if (fVar129 <= auVar48._0_4_) {
    param_3 = *(undefined1 (*) [16])(plVar34 + 0xfc);
    fVar129 = param_3._0_4_ - fVar128;
    param_4 = ZEXT416((uint)fVar129);
    if (auVar48._0_4_ <= fVar129) {
      fVar129 = auVar48._4_4_;
      param_4 = ZEXT416((uint)fVar129);
      if ((fVar128 + param_2._4_4_ <= fVar129) && (fVar129 <= param_3._4_4_ - fVar128)) {
        fVar129 = fVar128 + param_2._8_4_;
        param_2 = ZEXT416((uint)fVar129);
        if ((fVar129 <= auVar48._8_4_) &&
           (fVar128 = param_3._8_4_ - fVar128, param_2 = ZEXT416((uint)fVar128),
           auVar48._8_4_ <= fVar128)) {
          FUN_009c69bc(&local_150,plVar29);
          param_3 = *(undefined1 (*) [16])(local_150 + 0x1a);
          local_170 = param_3._0_4_;
          fStack_16c = param_3._4_4_;
          if (local_150 == (long *)0x0) {
LAB_025f2470:
            bVar2 = *puVar13;
          }
          else {
            lVar26 = local_150[0xb];
            piVar1 = (int *)(lVar26 + 0xc);
            do {
              iVar21 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar21 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar21 + -1 != 0) goto LAB_025f2470;
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
            bVar2 = *puVar13;
          }
          if (((bVar2 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar26 = *(long *)puVar14;
          *(long *)puVar15 = lVar26;
          puVar25 = *(undefined1 **)(lVar26 + 0x60);
          local_160 = 0.0;
          if (puVar25 != (undefined1 *)0x0) {
            uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
            uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
            uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar23 < 2) {
              puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
            }
            else {
              puVar27 = &DAT_7c08eae870e235e0;
              if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
                uVar32 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
                }
                puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
              }
            }
            plVar34 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
            if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
              if (uVar23 < 2) {
                do {
                  if ((undefined1 *)plVar34[1] == &DAT_7c08eae870e235e0) {
                    if ((undefined1 *)plVar34[2] == &DAT_7c08eae870e235e0) goto LAB_025f2510;
                  }
                  else if ((undefined1 *)((ulong)plVar34[1] & (ulong)(puVar25 + -1)) != puVar27)
                  break;
                  plVar34 = (long *)*plVar34;
                } while (plVar34 != (long *)0x0);
              }
              else {
                do {
                  puVar31 = (undefined1 *)plVar34[1];
                  if (puVar31 == &DAT_7c08eae870e235e0) {
                    if ((undefined1 *)plVar34[2] == &DAT_7c08eae870e235e0) goto LAB_025f2510;
                  }
                  else {
                    if (puVar25 <= puVar31) {
                      uVar23 = 0;
                      if (puVar25 != (undefined1 *)0x0) {
                        uVar23 = (ulong)puVar31 / (ulong)puVar25;
                      }
                      puVar31 = puVar31 + -(uVar23 * (long)puVar25);
                    }
                    if (puVar31 != puVar27) break;
                  }
                  plVar34 = (long *)*plVar34;
                } while (plVar34 != (long *)0x0);
              }
            }
          }
          goto LAB_025f2928;
        }
      }
    }
  }
  goto LAB_025f1ea0;
LAB_025f2510:
  plVar34 = (long *)plVar34[3];
  if (plVar34 != (long *)0x0) {
    plVar30 = plVar34 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar4) {
        *(int *)plVar30 = (int)*plVar30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar34[0x21];
    local_160 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0xccbbeaf99d6d6ed7;
      }
      else if (uVar23 < 0xccbbeaf99d6d6ed8) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0xccbbeaf99d6d6ed7 / uVar23;
        }
        uVar33 = 0xccbbeaf99d6d6ed7 - uVar33 * uVar23;
      }
      else {
        uVar33 = 0xccbbeaf99d6d6ed7;
      }
      plVar35 = *(long **)(plVar34[0x20] + uVar33 * 8);
      if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar35[1] == 0xccbbeaf99d6d6ed7) {
              if (plVar35[2] == -0x3344150662929129) goto LAB_025f290c;
            }
            else if ((plVar35[1] & uVar23 - 1) != uVar33) break;
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar35[1];
            if (uVar32 == 0xccbbeaf99d6d6ed7) {
              if (plVar35[2] == -0x3344150662929129) goto LAB_025f290c;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
      }
    }
    goto LAB_025f2914;
  }
  goto LAB_025f2928;
LAB_025f290c:
  local_160 = *(float *)(plVar35 + 6);
LAB_025f2914:
  do {
    iVar21 = (int)*plVar30 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar4) {
      *(int *)plVar30 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar34 + 0x10))();
  }
LAB_025f2928:
  fVar128 = (float)DAT_0388a140 * local_160;
  fVar129 = (float)((ulong)DAT_0388a140 >> 0x20) * local_160;
  fVar44 = (float)DAT_0388a148 * local_160;
  local_160 = (float)((ulong)DAT_0388a148 >> 0x20) * local_160;
  param_2._0_8_ = (long *)CONCAT44(fStack_16c + fVar129,local_170 + fVar128);
  param_2._8_4_ = param_3._8_4_ + fVar44;
  param_2._12_4_ = param_3._12_4_ + local_160;
  auVar96._0_8_ = (long *)CONCAT44(fStack_16c - fVar129,local_170 - fVar128);
  auVar96._8_4_ = param_3._8_4_ - fVar44;
  auVar96._12_4_ = param_3._12_4_ - local_160;
  uStack_a8 = auVar96._8_8_;
  uStack_98 = param_2._8_8_;
  local_b0 = auVar96._0_8_;
  local_a0 = param_2._0_8_;
  uVar23 = FUN_01f56878(&local_a0,&local_b0,0,&local_150);
  if ((uVar23 & 1) == 0) {
LAB_025f1ea0:
    bVar4 = false;
  }
  else {
    param_2 = ZEXT816(0x40a00000);
    bVar4 = true;
    uVar23 = FUN_01a89ce8(plVar29,&local_150,&local_150,0,&local_d0,1,1,0);
    if ((uVar23 & 1) == 0) goto LAB_025f1ea0;
  }
  lVar26 = plVar37[0xb];
  piVar1 = (int *)(lVar26 + 0xc);
  do {
    iVar21 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar21 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*plVar37 + 0x20))(plVar37);
joined_r0x025f1ed4:
    if (plVar29 == (long *)0x0) goto LAB_025ee9a8;
LAB_025f1418:
    lVar26 = plVar29[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 != 0) goto LAB_025ee9a8;
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))(plVar29);
joined_r0x025f1d5c:
    if (local_88 != (long *)0x0) goto LAB_025ee9b0;
LAB_025ee9cc:
    if (local_80[0] == (long *)0x0) goto LAB_025ee9f0;
LAB_025ee9d4:
    lVar26 = local_80[0][0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 != 0) goto LAB_025ee9f0;
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*local_80[0] + 0x20))();
    if (bVar4) goto LAB_025ee9fc;
LAB_025ee248:
    lVar26 = *(long *)(param_5 + 0x1f0);
    if (lVar26 == 0) goto LAB_025ee250;
LAB_025eea18:
    FUN_00cfac20(&local_a0,lVar26);
    if (local_a0 != (long *)0x0) {
      local_150 = (long *)0x0;
      local_148 = (code *)0x0;
      FUN_00ac3fa4(&local_150,local_a0 + 0x49);
      FUN_0099c748(&local_b0,&local_150);
      plVar29 = local_150;
      if (local_150 != (long *)0x0) {
        plVar37 = local_150 + 1;
        do {
          iVar21 = (int)*plVar37 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar4) {
            *(int *)plVar37 = iVar21;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 == 0) {
          local_150[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_d0 = *plVar29;
          FUN_02a44274(lVar26 + 0xd8,&local_d0);
        }
      }
      if (local_b0 != (long *)0x0) {
        FUN_009c69bc(&local_150);
        auVar48 = *(undefined1 (*) [16])(local_150 + 0x1a);
        fStack_158 = auVar48._8_4_;
        fStack_154 = auVar48._12_4_;
        local_160 = auVar48._0_4_;
        fStack_15c = auVar48._4_4_;
        if (local_150 != (long *)0x0) {
          lVar26 = local_150[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        local_150 = (long *)0x0;
        local_148 = (code *)0x0;
        FUN_00cf9db0(&local_150,local_a0 + 0xf1);
        if (local_150 != (long *)0x0) {
          FUN_00959eac(local_80);
          plVar29 = local_150;
          if (local_150 == (long *)0x0) goto LAB_025eeb0c;
          plVar37 = local_150 + 1;
          do {
            iVar21 = (int)*plVar37 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar4) {
              *(int *)plVar37 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 != 0) goto LAB_025eeb0c;
          local_150[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_d0 = *plVar29;
          FUN_02a44274(lVar26 + 0xd8,&local_d0);
          if (local_80[0] != (long *)0x0) goto LAB_025eeb14;
LAB_025eedc8:
          uVar19 = (**(code **)(*local_b0 + 0x1b0))();
          local_150 = (long *)0x0;
          local_148 = (code *)0x0;
          FUN_01a2bf84(&local_150,local_b0 + 0xb9);
          FUN_009c685c(local_80,&local_150);
          plVar29 = local_150;
          if (local_150 != (long *)0x0) {
            plVar37 = local_150 + 1;
            do {
              iVar21 = (int)*plVar37 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar4) {
                *(int *)plVar37 = iVar21;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar21 == 0) {
              local_150[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar26;
              local_d0 = *plVar29;
              FUN_02a44274(lVar26 + 0xd8,&local_d0);
            }
          }
          if (local_80[0] != (long *)0x0) {
            uVar20 = (**(code **)(*local_80[0] + 0x238))();
            uVar19 = uVar19 | uVar20;
            if (local_80[0] != (long *)0x0) {
              lVar26 = local_80[0][0xb];
              piVar1 = (int *)(lVar26 + 0xc);
              do {
                iVar21 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar21 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar21 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*local_80[0] + 0x20))();
              }
            }
          }
          if ((uVar19 & 1) != 0) {
            if (*(float *)(param_5 + 0x254) < 1.1920929e-07) {
              auVar8._8_4_ = fStack_158;
              auVar8._0_8_ = CONCAT44(fStack_15c,local_160);
              auVar8._12_4_ = fStack_154;
              *(long *)(param_5 + 0x268) = auVar8._8_8_;
              *(ulong *)(param_5 + 0x260) = CONCAT44(fStack_15c,local_160);
            }
            lVar26 = (*(code *)**(undefined8 **)*param_6)((undefined8 *)*param_6,1);
            fVar128 = *(float *)(param_5 + 0x254) +
                      (float)((double)*(long *)(lVar26 + 8) / 1000000000.0);
            *(float *)(param_5 + 0x254) = fVar128;
            puVar13 = PTR_DAT_04379660;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            puVar15 = PTR_DAT_04379670;
            puVar14 = PTR_DAT_04379668;
            lVar26 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar26;
            puVar25 = *(undefined1 **)(lVar26 + 0x60);
            fVar129 = 0.0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
              uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar23 < 2) {
                puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
              }
              else {
                uVar32 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
                }
                puVar27 = &DAT_7c08eae870e235e0;
                if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
                  puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
                }
              }
              plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
              if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0))
              {
                if (uVar23 < 2) {
                  do {
                    if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
                      if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025eefb8;
                    }
                    else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27)
                    break;
                    plVar29 = (long *)*plVar29;
                  } while (plVar29 != (long *)0x0);
                }
                else {
                  do {
                    puVar31 = (undefined1 *)plVar29[1];
                    if (puVar31 == &DAT_7c08eae870e235e0) {
                      if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025eefb8;
                    }
                    else {
                      if (puVar25 <= puVar31) {
                        uVar23 = 0;
                        if (puVar25 != (undefined1 *)0x0) {
                          uVar23 = (ulong)puVar31 / (ulong)puVar25;
                        }
                        puVar31 = puVar31 + -(uVar23 * (long)puVar25);
                      }
                      if (puVar31 != puVar27) break;
                    }
                    plVar29 = (long *)*plVar29;
                  } while (plVar29 != (long *)0x0);
                }
              }
            }
            goto joined_r0x025ef488;
          }
          goto LAB_025ef740;
        }
        local_80[0] = (long *)0x0;
LAB_025eeb0c:
        if (local_80[0] == (long *)0x0) goto LAB_025eedc8;
LAB_025eeb14:
        local_150 = (long *)0x0;
        local_148 = (code *)0x0;
        FUN_00ac3fa4(&local_150,local_80[0] + 0x49);
        FUN_0099c748(&local_88,&local_150);
        plVar29 = local_b0;
        local_b0 = (long *)0x0;
        if (plVar29 != (long *)0x0) {
          lVar26 = plVar29[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*plVar29 + 0x20))();
          }
        }
        local_b0 = local_88;
        plVar29 = local_150;
        local_88 = (long *)0x0;
        if (local_150 != (long *)0x0) {
          plVar37 = local_150 + 1;
          do {
            iVar21 = (int)*plVar37 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar4) {
              *(int *)plVar37 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 == 0) {
            local_150[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar26;
            local_d0 = *plVar29;
            FUN_02a44274(lVar26 + 0xd8,&local_d0);
          }
        }
        if (local_b0 != (long *)0x0) {
          FUN_009c69bc(&local_150);
          auVar48 = *(undefined1 (*) [16])(local_150 + 0x1a);
          fStack_158 = auVar48._8_4_;
          fStack_154 = auVar48._12_4_;
          local_160 = auVar48._0_4_;
          fStack_15c = auVar48._4_4_;
          if (local_150 != (long *)0x0) {
            lVar26 = local_150[0xb];
            piVar1 = (int *)(lVar26 + 0xc);
            do {
              iVar21 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar21 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar21 + -1 == 0) {
              *(undefined8 *)(lVar26 + 0x18) = 0;
              (**(code **)(*local_150 + 0x20))();
            }
          }
        }
        plVar37 = local_80[0];
        iVar21 = *(int *)((long)local_80[0] + 0x59c);
        plVar29 = (long *)(**(code **)local_80[0][10])(local_80[0] + 10);
        if ((*PTR_DAT_04379ee8 & 1) == 0) {
          iVar22 = __cxa_guard_acquire(PTR_DAT_04379ee8);
          puVar13 = PTR_DAT_043795d0;
          if (iVar22 != 0) {
            if (((*PTR_DAT_043795c8 & 1) == 0) &&
               (iVar22 = __cxa_guard_acquire(PTR_DAT_043795c8), iVar22 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar22 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar22 != 0)) {
                  uVar24 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar13 = PTR_DAT_043795e0;
              __cxa_guard_release(PTR_DAT_043795c8);
            }
            *(undefined **)PTR_DAT_04379ef0 = puVar13;
            __cxa_guard_release(PTR_DAT_04379ee8);
          }
        }
        for (; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
          if (plVar29 == (long *)PTR_DAT_04379ef0) {
            uVar23 = (**(code **)(*plVar37 + 0x150))(plVar37);
            if ((iVar21 == 3) || ((uVar23 & 1) != 0)) goto LAB_025eed8c;
            goto LAB_025eed7c;
          }
        }
        if (iVar21 == 3) {
LAB_025eed8c:
          auVar7._8_4_ = fStack_158;
          auVar7._0_8_ = CONCAT44(fStack_15c,local_160);
          auVar7._12_4_ = fStack_154;
          bVar4 = true;
          *(undefined4 *)(param_5 + 0x254) = 0;
          *(long *)(param_5 + 0x268) = auVar7._8_8_;
          *(ulong *)(param_5 + 0x260) = CONCAT44(fStack_15c,local_160);
        }
        else {
LAB_025eed7c:
          bVar4 = false;
        }
        if (local_80[0] != (long *)0x0) {
          lVar26 = local_80[0][0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_80[0] + 0x20))();
          }
        }
        if (!bVar4) goto LAB_025eedc8;
        goto LAB_025ef74c;
      }
      goto joined_r0x025ef774;
    }
    goto LAB_025ef794;
  }
LAB_025f1414:
  if (plVar29 != (long *)0x0) goto LAB_025f1418;
LAB_025ee9a8:
  if (local_88 == (long *)0x0) goto LAB_025ee9cc;
LAB_025ee9b0:
  lVar26 = local_88[0xb];
  piVar1 = (int *)(lVar26 + 0xc);
  do {
    iVar21 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar21 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 + -1 != 0) goto LAB_025ee9cc;
  *(undefined8 *)(lVar26 + 0x18) = 0;
  (**(code **)(*local_88 + 0x20))();
joined_r0x025ef598:
  if (local_80[0] != (long *)0x0) goto LAB_025ee9d4;
LAB_025ee9f0:
  if (!bVar4) goto LAB_025ee248;
LAB_025ee9fc:
  if (*(long *)(param_5 + 0x1f0) == 0) {
    local_a0 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_a0);
    if (local_a0 != (long *)0x0) {
      local_150 = (long *)0x0;
      local_148 = (code *)0x0;
      FUN_00cf9db0(&local_150,local_a0 + 0xf1);
      if (local_150 == (long *)0x0) {
        local_b0 = (long *)0x0;
      }
      else {
        FUN_00959eac(&local_b0);
        plVar29 = local_150;
        if (local_150 != (long *)0x0) {
          plVar37 = local_150 + 1;
          do {
            iVar21 = (int)*plVar37 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar4) {
              *(int *)plVar37 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 == 0) {
            local_150[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar26;
            local_d0 = *plVar29;
            FUN_02a44274(lVar26 + 0xd8,&local_d0);
          }
        }
      }
      auVar48 = NEON_fmov(0x3f800000,4);
      fStack_158 = auVar48._8_4_;
      fStack_154 = auVar48._12_4_;
      local_160 = auVar48._0_4_;
      fStack_15c = auVar48._4_4_;
      if (local_b0 == (long *)0x0) {
        FUN_009c69bc(&local_150,param_5);
        (**(code **)(*local_150 + 0x40))();
        *(long *)(param_5 + 0x228) = param_4._8_8_;
        *(long *)(param_5 + 0x220) = param_4._0_8_;
        if (local_150 != (long *)0x0) {
          lVar26 = local_150[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        FUN_009c69bc(&local_150,param_5);
        (**(code **)(*local_150 + 0x40))();
        auVar67._0_4_ = extraout_s0 * extraout_s0;
        auVar67._4_4_ = extraout_var * extraout_var;
        auVar67._8_4_ = extraout_var_01 * extraout_var_01;
        auVar67._12_4_ = extraout_var_03 * extraout_var_03;
        auVar48 = NEON_ext(auVar67,auVar67,8,1);
        fVar129 = auVar48._0_4_ + auVar67._0_4_;
        fVar44 = auVar48._4_4_ + auVar67._4_4_;
        fVar128 = fVar129 + fVar44;
        fVar129 = fVar129 + fVar44;
        auVar68._8_8_ = CONCAT44(fVar129,fVar128);
        auVar68._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar68,4);
        auVar95._0_4_ = auVar48._0_4_ * fVar128;
        auVar95._4_4_ = auVar48._4_4_ * fVar129;
        auVar95._8_4_ = auVar48._8_4_ * fVar128;
        auVar95._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar95,4);
        auVar86._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar86._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar86._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar86._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar97._0_4_ = fVar128 * auVar86._0_4_;
        auVar97._4_4_ = fVar129 * auVar86._4_4_;
        auVar97._8_4_ = fVar128 * auVar86._8_4_;
        auVar97._12_4_ = fVar129 * auVar86._12_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        iVar84 = -(uint)(fVar129 == 0.0);
        auVar48 = NEON_frsqrts(auVar86,auVar97,4);
        fVar128 = extraout_s0 * auVar86._0_4_ * auVar48._0_4_;
        fVar129 = extraout_var * auVar86._4_4_ * auVar48._4_4_;
        fVar44 = extraout_var_01 * auVar86._8_4_ * auVar48._8_4_;
        fVar45 = extraout_var_03 * auVar86._12_4_ * auVar48._12_4_;
        fVar57 = (float)CONCAT13((byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                 CONCAT12((byte)((uint)fVar128 >> 0x10) &
                                          ~(byte)((uint)iVar21 >> 0x10),
                                          CONCAT11((byte)((uint)fVar128 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   SUB41(fVar128,0) & ~(byte)iVar21)));
        auVar69._0_8_ =
             CONCAT17((byte)((uint)fVar129 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar129 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar129 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar129,0) & ~(byte)iVar22,fVar57))));
        auVar69[8] = SUB41(fVar44,0) & ~(byte)iVar83;
        auVar69[9] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar69[10] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar69[0xb] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        auVar69[0xc] = SUB41(fVar45,0) & ~(byte)iVar84;
        auVar69[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar84 >> 8);
        auVar69[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
        auVar69[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
        fVar44 = param_2._0_4_;
        auVar87._0_4_ = fVar44 * fVar44;
        fVar45 = param_2._4_4_;
        auVar87._4_4_ = fVar45 * fVar45;
        fVar58 = param_2._8_4_;
        auVar87._8_4_ = fVar58 * fVar58;
        auVar87._12_4_ = param_2._12_4_ * param_2._12_4_;
        auVar48 = NEON_ext(auVar87,auVar87,8,1);
        fVar129 = auVar48._0_4_ + auVar87._0_4_;
        fVar94 = auVar48._4_4_ + auVar87._4_4_;
        fVar128 = fVar129 + fVar94;
        fVar129 = fVar129 + fVar94;
        auVar88._8_8_ = CONCAT44(fVar129,fVar128);
        auVar88._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar88,4);
        auVar110._0_4_ = auVar48._0_4_ * fVar128;
        auVar110._4_4_ = auVar48._4_4_ * fVar129;
        auVar110._8_4_ = auVar48._8_4_ * fVar128;
        auVar110._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar110,4);
        auVar98._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar98._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar98._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar98._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar111._0_4_ = fVar128 * auVar98._0_4_;
        auVar111._4_4_ = fVar129 * auVar98._4_4_;
        auVar111._8_4_ = fVar128 * auVar98._8_4_;
        auVar111._12_4_ = fVar129 * auVar98._12_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        auVar48 = NEON_frsqrts(auVar98,auVar111,4);
        fVar44 = fVar44 * auVar98._0_4_ * auVar48._0_4_;
        fVar45 = fVar45 * auVar98._4_4_ * auVar48._4_4_;
        fVar58 = fVar58 * auVar98._8_4_ * auVar48._8_4_;
        fVar94 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                 CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                          ~(byte)((uint)iVar21 >> 0x10),
                                          CONCAT11((byte)((uint)fVar44 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   SUB41(fVar44,0) & ~(byte)iVar21)));
        auVar46._0_8_ =
             CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,fVar94))));
        auVar46[8] = SUB41(fVar58,0) & ~(byte)iVar83;
        auVar46[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar46[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar46[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        fVar44 = param_3._0_4_;
        auVar99._0_4_ = fVar44 * fVar44;
        fVar45 = param_3._4_4_;
        auVar99._4_4_ = fVar45 * fVar45;
        fVar58 = param_3._8_4_;
        auVar99._8_4_ = fVar58 * fVar58;
        auVar99._12_4_ = param_3._12_4_ * param_3._12_4_;
        auVar48 = NEON_ext(auVar99,auVar99,8,1);
        fVar129 = auVar48._0_4_ + auVar99._0_4_;
        fVar108 = auVar48._4_4_ + auVar99._4_4_;
        fVar128 = fVar129 + fVar108;
        fVar129 = fVar129 + fVar108;
        auVar100._8_8_ = CONCAT44(fVar129,fVar128);
        auVar100._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar100,4);
        auVar120._0_4_ = auVar48._0_4_ * fVar128;
        auVar120._4_4_ = auVar48._4_4_ * fVar129;
        auVar120._8_4_ = auVar48._8_4_ * fVar128;
        auVar120._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar120,4);
        auVar112._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar112._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar112._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar112._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar121._0_4_ = fVar128 * auVar112._0_4_;
        auVar121._4_4_ = fVar129 * auVar112._4_4_;
        auVar121._8_4_ = fVar128 * auVar112._8_4_;
        auVar121._12_4_ = fVar129 * auVar112._12_4_;
        auVar48 = NEON_frsqrts(auVar112,auVar121,4);
        fVar44 = fVar44 * auVar112._0_4_ * auVar48._0_4_;
        fVar45 = fVar45 * auVar112._4_4_ * auVar48._4_4_;
        fVar58 = fVar58 * auVar112._8_4_ * auVar48._8_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        auVar59._0_8_ =
             CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,
                                                 CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                          ~(byte)((uint)iVar21 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                                   ~(byte)((uint)iVar21 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar44 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar44,0) & ~(byte)iVar21))))))
                     );
        auVar59[8] = SUB41(fVar58,0) & ~(byte)iVar83;
        auVar59[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar59[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar59[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        uVar24 = NEON_ext(auVar69._0_8_,auVar59._0_8_,4,1);
        auVar48 = NEON_ext(auVar69,auVar69,8,1);
        fVar128 = (float)((ulong)auVar46._0_8_ >> 0x20);
        fVar129 = auVar59._8_4_;
        local_160 = (float)_DAT_03889820 * fVar57 + (float)_DAT_0388a450 * fVar128 +
                    (float)_DAT_03889eb0 * fVar129 + local_160;
        fStack_15c = (float)((ulong)_DAT_03889820 >> 0x20) * fVar57 +
                     (float)((ulong)_DAT_0388a450 >> 0x20) * fVar128 +
                     (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar129 + fStack_15c;
        fStack_158 = (float)_UNK_03889828 * fVar57 + (float)_UNK_0388a458 * fVar128 +
                     (float)_UNK_03889eb8 * fVar129 + fStack_158;
        fStack_154 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar57 +
                     (float)((ulong)_UNK_0388a458 >> 0x20) * fVar128 +
                     (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar129 + fStack_154;
        fVar128 = (float)((ulong)auVar59._0_8_ >> 0x20);
        auVar61._0_4_ = (float)uVar24 + fVar94;
        fVar129 = (float)((ulong)uVar24 >> 0x20);
        auVar61._4_4_ = fVar129 + auVar48._0_4_;
        auVar61._8_4_ = auVar46._8_4_ + fVar128;
        auVar61._12_4_ = 0;
        auVar70._0_4_ = (float)uVar24 - fVar94;
        auVar70._4_4_ = fVar129 - auVar48._0_4_;
        auVar70._8_4_ = auVar46._8_4_ - fVar128;
        auVar70._12_4_ = 0;
        uVar24 = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a888);
        uVar85 = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a710);
        auVar101._8_8_ = uVar85;
        auVar101._0_8_ = uVar24;
        uVar109 = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a640);
        uVar85 = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a758);
        auVar123._4_12_ = auVar101._4_12_;
        auVar123._0_4_ = local_160;
        auVar89._0_8_ = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a880);
        auVar49._0_4_ = (undefined4)uVar24;
        auVar49._4_4_ = fStack_15c;
        auVar49._8_8_ = uVar85;
        auVar113._0_8_ = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a700);
        uVar24 = a64_TBL(ZEXT816(0),auVar61,auVar70,DAT_0388a590);
        auVar71._4_4_ = fStack_15c;
        auVar71._0_4_ = fStack_15c;
        auVar71._8_4_ = fStack_15c;
        auVar71._12_4_ = fStack_15c;
        auVar89._12_4_ = (undefined4)((ulong)uVar109 >> 0x20);
        auVar89._8_4_ = fStack_158;
        auVar113._8_8_ = uVar24;
        auVar131._4_4_ = local_160;
        auVar131._0_4_ = local_160;
        auVar131._8_4_ = local_160;
        auVar131._12_4_ = local_160;
        auVar122._0_8_ = CONCAT44(-(uint)(local_160 <= fStack_15c),-(uint)(local_160 <= fStack_15c))
        ;
        auVar122._8_4_ = -(uint)(local_160 <= fStack_15c);
        auVar122._12_4_ = -(uint)(local_160 <= fStack_15c);
        auVar130._8_8_ = auVar122._8_8_;
        auVar130._0_8_ = auVar122._0_8_;
        auVar123 = auVar123 ^ (auVar123 ^ auVar49) & auVar122;
        auVar50._4_4_ = fStack_158;
        auVar50._0_4_ = fStack_158;
        auVar50._8_4_ = fStack_158;
        auVar50._12_4_ = fStack_158;
        auVar114._0_12_ = auVar113._0_12_;
        auVar114._12_4_ = fStack_154;
        auVar131 = auVar131 ^ (auVar131 ^ auVar71) & auVar130;
        auVar62._0_8_ =
             CONCAT44(-(uint)(auVar131._4_4_ <= fStack_158),-(uint)(auVar131._0_4_ <= fStack_158));
        auVar62._8_4_ = -(uint)(auVar131._8_4_ <= fStack_158);
        auVar62._12_4_ = -(uint)(auVar131._12_4_ <= fStack_158);
        auVar72._8_8_ = auVar62._8_8_;
        auVar72._0_8_ = auVar62._0_8_;
        auVar123 = auVar123 ^ (auVar123 ^ auVar89) & auVar62;
        auVar131 = auVar131 ^ (auVar131 ^ auVar50) & auVar72;
        auVar40._0_4_ = -(uint)(auVar131._0_4_ <= fStack_154);
        auVar40._4_4_ = -(uint)(auVar131._4_4_ <= fStack_154);
        auVar40._8_4_ = -(uint)(auVar131._8_4_ <= fStack_154);
        auVar40._12_4_ = -(uint)(auVar131._12_4_ <= fStack_154);
        auVar123 = auVar123 ^ (auVar123 ^ auVar114) & auVar40;
        fVar44 = auVar123._0_4_;
        auVar51._0_4_ = fVar44 * fVar44;
        fVar45 = auVar123._4_4_;
        auVar51._4_4_ = fVar45 * fVar45;
        fVar58 = auVar123._8_4_;
        auVar51._8_4_ = fVar58 * fVar58;
        fVar94 = auVar123._12_4_;
        auVar51._12_4_ = fVar94 * fVar94;
        auVar48 = NEON_ext(auVar51,auVar51,8,1);
        fVar129 = auVar48._0_4_ + auVar51._0_4_;
        fVar57 = auVar48._4_4_ + auVar51._4_4_;
        fVar128 = fVar129 + fVar57;
        fVar129 = fVar129 + fVar57;
        auVar52._8_8_ = CONCAT44(fVar129,fVar128);
        auVar52._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar52,4);
        auVar73._0_4_ = auVar48._0_4_ * fVar128;
        auVar73._4_4_ = auVar48._4_4_ * fVar129;
        auVar73._8_4_ = auVar48._8_4_ * fVar128;
        auVar73._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar73,4);
        auVar63._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar63._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar63._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar63._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar74._0_4_ = fVar128 * auVar63._0_4_;
        auVar74._4_4_ = fVar129 * auVar63._4_4_;
        auVar74._8_4_ = fVar128 * auVar63._8_4_;
        auVar74._12_4_ = fVar129 * auVar63._12_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        iVar84 = -(uint)(fVar129 == 0.0);
        auVar48 = NEON_frsqrts(auVar63,auVar74,4);
        fVar44 = auVar63._0_4_ * auVar48._0_4_ * fVar44;
        fVar45 = auVar63._4_4_ * auVar48._4_4_ * fVar45;
        fVar58 = auVar63._8_4_ * auVar48._8_4_ * fVar58;
        fVar94 = auVar63._12_4_ * auVar48._12_4_ * fVar94;
        auVar41._0_8_ =
             CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,
                                                 CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                          ~(byte)((uint)iVar21 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                                   ~(byte)((uint)iVar21 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar44 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar44,0) & ~(byte)iVar21))))))
                     );
        auVar41[8] = SUB41(fVar58,0) & ~(byte)iVar83;
        auVar41[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar41[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar41[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        auVar41[0xc] = SUB41(fVar94,0) & ~(byte)iVar84;
        auVar41[0xd] = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar84 >> 8);
        auVar41[0xe] = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
        auVar41[0xf] = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
        *(long *)(param_5 + 0x238) = auVar41._8_8_;
        *(undefined8 *)(param_5 + 0x230) = auVar41._0_8_;
        if (local_150 != (long *)0x0) {
          lVar26 = local_150[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto joined_r0x025f17e4;
        }
      }
      else {
        FUN_009c69bc(&local_150);
        (**(code **)(*local_150 + 0x40))();
        *(long *)(param_5 + 0x228) = param_4._8_8_;
        *(long *)(param_5 + 0x220) = param_4._0_8_;
        if (local_150 != (long *)0x0) {
          lVar26 = local_150[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        FUN_009c69bc(&local_150,local_b0);
        (**(code **)(*local_150 + 0x40))();
        auVar75._0_4_ = extraout_s0_00 * extraout_s0_00;
        auVar75._4_4_ = extraout_var_00 * extraout_var_00;
        auVar75._8_4_ = extraout_var_02 * extraout_var_02;
        auVar75._12_4_ = extraout_var_04 * extraout_var_04;
        auVar48 = NEON_ext(auVar75,auVar75,8,1);
        fVar129 = auVar48._0_4_ + auVar75._0_4_;
        fVar44 = auVar48._4_4_ + auVar75._4_4_;
        fVar128 = fVar129 + fVar44;
        fVar129 = fVar129 + fVar44;
        auVar76._8_8_ = CONCAT44(fVar129,fVar128);
        auVar76._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar76,4);
        auVar102._0_4_ = auVar48._0_4_ * fVar128;
        auVar102._4_4_ = auVar48._4_4_ * fVar129;
        auVar102._8_4_ = auVar48._8_4_ * fVar128;
        auVar102._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar102,4);
        auVar90._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar90._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar90._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar90._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar103._0_4_ = fVar128 * auVar90._0_4_;
        auVar103._4_4_ = fVar129 * auVar90._4_4_;
        auVar103._8_4_ = fVar128 * auVar90._8_4_;
        auVar103._12_4_ = fVar129 * auVar90._12_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        iVar84 = -(uint)(fVar129 == 0.0);
        auVar48 = NEON_frsqrts(auVar90,auVar103,4);
        fVar128 = extraout_s0_00 * auVar90._0_4_ * auVar48._0_4_;
        fVar129 = extraout_var_00 * auVar90._4_4_ * auVar48._4_4_;
        fVar44 = extraout_var_02 * auVar90._8_4_ * auVar48._8_4_;
        fVar45 = extraout_var_04 * auVar90._12_4_ * auVar48._12_4_;
        fVar57 = (float)CONCAT13((byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                 CONCAT12((byte)((uint)fVar128 >> 0x10) &
                                          ~(byte)((uint)iVar21 >> 0x10),
                                          CONCAT11((byte)((uint)fVar128 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   SUB41(fVar128,0) & ~(byte)iVar21)));
        auVar77._0_8_ =
             CONCAT17((byte)((uint)fVar129 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar129 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar129 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar129,0) & ~(byte)iVar22,fVar57))));
        auVar77[8] = SUB41(fVar44,0) & ~(byte)iVar83;
        auVar77[9] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar77[10] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar77[0xb] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        auVar77[0xc] = SUB41(fVar45,0) & ~(byte)iVar84;
        auVar77[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar84 >> 8);
        auVar77[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
        auVar77[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
        fVar44 = param_2._0_4_;
        auVar91._0_4_ = fVar44 * fVar44;
        fVar45 = param_2._4_4_;
        auVar91._4_4_ = fVar45 * fVar45;
        fVar58 = param_2._8_4_;
        auVar91._8_4_ = fVar58 * fVar58;
        auVar91._12_4_ = param_2._12_4_ * param_2._12_4_;
        auVar48 = NEON_ext(auVar91,auVar91,8,1);
        fVar129 = auVar48._0_4_ + auVar91._0_4_;
        fVar94 = auVar48._4_4_ + auVar91._4_4_;
        fVar128 = fVar129 + fVar94;
        fVar129 = fVar129 + fVar94;
        auVar92._8_8_ = CONCAT44(fVar129,fVar128);
        auVar92._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar92,4);
        auVar115._0_4_ = auVar48._0_4_ * fVar128;
        auVar115._4_4_ = auVar48._4_4_ * fVar129;
        auVar115._8_4_ = auVar48._8_4_ * fVar128;
        auVar115._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar115,4);
        auVar104._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar104._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar104._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar104._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar116._0_4_ = fVar128 * auVar104._0_4_;
        auVar116._4_4_ = fVar129 * auVar104._4_4_;
        auVar116._8_4_ = fVar128 * auVar104._8_4_;
        auVar116._12_4_ = fVar129 * auVar104._12_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        auVar48 = NEON_frsqrts(auVar104,auVar116,4);
        fVar44 = fVar44 * auVar104._0_4_ * auVar48._0_4_;
        fVar45 = fVar45 * auVar104._4_4_ * auVar48._4_4_;
        fVar58 = fVar58 * auVar104._8_4_ * auVar48._8_4_;
        fVar94 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                 CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                          ~(byte)((uint)iVar21 >> 0x10),
                                          CONCAT11((byte)((uint)fVar44 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   SUB41(fVar44,0) & ~(byte)iVar21)));
        auVar47._0_8_ =
             CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,fVar94))));
        auVar47[8] = SUB41(fVar58,0) & ~(byte)iVar83;
        auVar47[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar47[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar47[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        fVar44 = param_3._0_4_;
        auVar105._0_4_ = fVar44 * fVar44;
        fVar45 = param_3._4_4_;
        auVar105._4_4_ = fVar45 * fVar45;
        fVar58 = param_3._8_4_;
        auVar105._8_4_ = fVar58 * fVar58;
        auVar105._12_4_ = param_3._12_4_ * param_3._12_4_;
        auVar48 = NEON_ext(auVar105,auVar105,8,1);
        fVar129 = auVar48._0_4_ + auVar105._0_4_;
        fVar108 = auVar48._4_4_ + auVar105._4_4_;
        fVar128 = fVar129 + fVar108;
        fVar129 = fVar129 + fVar108;
        auVar106._8_8_ = CONCAT44(fVar129,fVar128);
        auVar106._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar106,4);
        auVar124._0_4_ = auVar48._0_4_ * fVar128;
        auVar124._4_4_ = auVar48._4_4_ * fVar129;
        auVar124._8_4_ = auVar48._8_4_ * fVar128;
        auVar124._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar124,4);
        auVar117._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar117._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar117._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar117._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar125._0_4_ = fVar128 * auVar117._0_4_;
        auVar125._4_4_ = fVar129 * auVar117._4_4_;
        auVar125._8_4_ = fVar128 * auVar117._8_4_;
        auVar125._12_4_ = fVar129 * auVar117._12_4_;
        auVar48 = NEON_frsqrts(auVar117,auVar125,4);
        fVar44 = fVar44 * auVar117._0_4_ * auVar48._0_4_;
        fVar45 = fVar45 * auVar117._4_4_ * auVar48._4_4_;
        fVar58 = fVar58 * auVar117._8_4_ * auVar48._8_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        auVar60._0_8_ =
             CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,
                                                 CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                          ~(byte)((uint)iVar21 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                                   ~(byte)((uint)iVar21 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar44 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar44,0) & ~(byte)iVar21))))))
                     );
        auVar60[8] = SUB41(fVar58,0) & ~(byte)iVar83;
        auVar60[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar60[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar60[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        uVar24 = NEON_ext(auVar77._0_8_,auVar60._0_8_,4,1);
        auVar48 = NEON_ext(auVar77,auVar77,8,1);
        fVar128 = (float)((ulong)auVar47._0_8_ >> 0x20);
        fVar129 = auVar60._8_4_;
        local_160 = (float)_DAT_03889820 * fVar57 + (float)_DAT_0388a450 * fVar128 +
                    (float)_DAT_03889eb0 * fVar129 + local_160;
        fStack_15c = (float)((ulong)_DAT_03889820 >> 0x20) * fVar57 +
                     (float)((ulong)_DAT_0388a450 >> 0x20) * fVar128 +
                     (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar129 + fStack_15c;
        fStack_158 = (float)_UNK_03889828 * fVar57 + (float)_UNK_0388a458 * fVar128 +
                     (float)_UNK_03889eb8 * fVar129 + fStack_158;
        fStack_154 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar57 +
                     (float)((ulong)_UNK_0388a458 >> 0x20) * fVar128 +
                     (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar129 + fStack_154;
        fVar128 = (float)((ulong)auVar60._0_8_ >> 0x20);
        auVar64._0_4_ = (float)uVar24 + fVar94;
        fVar129 = (float)((ulong)uVar24 >> 0x20);
        auVar64._4_4_ = fVar129 + auVar48._0_4_;
        auVar64._8_4_ = auVar47._8_4_ + fVar128;
        auVar64._12_4_ = 0;
        auVar78._0_4_ = (float)uVar24 - fVar94;
        auVar78._4_4_ = fVar129 - auVar48._0_4_;
        auVar78._8_4_ = auVar47._8_4_ - fVar128;
        auVar78._12_4_ = 0;
        uVar24 = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a888);
        uVar85 = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a710);
        auVar107._8_8_ = uVar85;
        auVar107._0_8_ = uVar24;
        uVar109 = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a640);
        uVar85 = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a758);
        auVar127._4_12_ = auVar107._4_12_;
        auVar127._0_4_ = local_160;
        auVar93._0_8_ = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a880);
        auVar53._0_4_ = (undefined4)uVar24;
        auVar53._4_4_ = fStack_15c;
        auVar53._8_8_ = uVar85;
        auVar118._0_8_ = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a700);
        uVar24 = a64_TBL(ZEXT816(0),auVar64,auVar78,DAT_0388a590);
        auVar79._4_4_ = fStack_15c;
        auVar79._0_4_ = fStack_15c;
        auVar79._8_4_ = fStack_15c;
        auVar79._12_4_ = fStack_15c;
        auVar93._12_4_ = (undefined4)((ulong)uVar109 >> 0x20);
        auVar93._8_4_ = fStack_158;
        auVar118._8_8_ = uVar24;
        auVar133._4_4_ = local_160;
        auVar133._0_4_ = local_160;
        auVar133._8_4_ = local_160;
        auVar133._12_4_ = local_160;
        auVar126._0_8_ = CONCAT44(-(uint)(local_160 <= fStack_15c),-(uint)(local_160 <= fStack_15c))
        ;
        auVar126._8_4_ = -(uint)(local_160 <= fStack_15c);
        auVar126._12_4_ = -(uint)(local_160 <= fStack_15c);
        auVar132._8_8_ = auVar126._8_8_;
        auVar132._0_8_ = auVar126._0_8_;
        auVar127 = auVar127 ^ (auVar127 ^ auVar53) & auVar126;
        auVar54._4_4_ = fStack_158;
        auVar54._0_4_ = fStack_158;
        auVar54._8_4_ = fStack_158;
        auVar54._12_4_ = fStack_158;
        auVar119._0_12_ = auVar118._0_12_;
        auVar119._12_4_ = fStack_154;
        auVar133 = auVar133 ^ (auVar133 ^ auVar79) & auVar132;
        auVar65._0_8_ =
             CONCAT44(-(uint)(auVar133._4_4_ <= fStack_158),-(uint)(auVar133._0_4_ <= fStack_158));
        auVar65._8_4_ = -(uint)(auVar133._8_4_ <= fStack_158);
        auVar65._12_4_ = -(uint)(auVar133._12_4_ <= fStack_158);
        auVar80._8_8_ = auVar65._8_8_;
        auVar80._0_8_ = auVar65._0_8_;
        auVar127 = auVar127 ^ (auVar127 ^ auVar93) & auVar65;
        auVar133 = auVar133 ^ (auVar133 ^ auVar54) & auVar80;
        auVar42._0_4_ = -(uint)(auVar133._0_4_ <= fStack_154);
        auVar42._4_4_ = -(uint)(auVar133._4_4_ <= fStack_154);
        auVar42._8_4_ = -(uint)(auVar133._8_4_ <= fStack_154);
        auVar42._12_4_ = -(uint)(auVar133._12_4_ <= fStack_154);
        auVar127 = auVar127 ^ (auVar127 ^ auVar119) & auVar42;
        fVar44 = auVar127._0_4_;
        auVar55._0_4_ = fVar44 * fVar44;
        fVar45 = auVar127._4_4_;
        auVar55._4_4_ = fVar45 * fVar45;
        fVar58 = auVar127._8_4_;
        auVar55._8_4_ = fVar58 * fVar58;
        fVar94 = auVar127._12_4_;
        auVar55._12_4_ = fVar94 * fVar94;
        auVar48 = NEON_ext(auVar55,auVar55,8,1);
        fVar129 = auVar48._0_4_ + auVar55._0_4_;
        fVar57 = auVar48._4_4_ + auVar55._4_4_;
        fVar128 = fVar129 + fVar57;
        fVar129 = fVar129 + fVar57;
        auVar56._8_8_ = CONCAT44(fVar129,fVar128);
        auVar56._0_8_ = CONCAT44(fVar129,fVar128);
        auVar48 = NEON_frsqrte(auVar56,4);
        auVar81._0_4_ = auVar48._0_4_ * fVar128;
        auVar81._4_4_ = auVar48._4_4_ * fVar129;
        auVar81._8_4_ = auVar48._8_4_ * fVar128;
        auVar81._12_4_ = auVar48._12_4_ * fVar129;
        auVar96 = NEON_frsqrts(auVar48,auVar81,4);
        auVar66._0_4_ = auVar48._0_4_ * auVar96._0_4_;
        auVar66._4_4_ = auVar48._4_4_ * auVar96._4_4_;
        auVar66._8_4_ = auVar48._8_4_ * auVar96._8_4_;
        auVar66._12_4_ = auVar48._12_4_ * auVar96._12_4_;
        auVar82._0_4_ = fVar128 * auVar66._0_4_;
        auVar82._4_4_ = fVar129 * auVar66._4_4_;
        auVar82._8_4_ = fVar128 * auVar66._8_4_;
        auVar82._12_4_ = fVar129 * auVar66._12_4_;
        iVar21 = -(uint)(fVar128 == 0.0);
        iVar22 = -(uint)(fVar129 == 0.0);
        iVar83 = -(uint)(fVar128 == 0.0);
        iVar84 = -(uint)(fVar129 == 0.0);
        auVar48 = NEON_frsqrts(auVar66,auVar82,4);
        fVar44 = auVar66._0_4_ * auVar48._0_4_ * fVar44;
        fVar45 = auVar66._4_4_ * auVar48._4_4_ * fVar45;
        fVar58 = auVar66._8_4_ * auVar48._8_4_ * fVar58;
        fVar94 = auVar66._12_4_ * auVar48._12_4_ * fVar94;
        auVar43._0_8_ =
             CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,
                                                 CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                          ~(byte)((uint)iVar21 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                                   ~(byte)((uint)iVar21 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar44 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar44,0) & ~(byte)iVar21))))))
                     );
        auVar43[8] = SUB41(fVar58,0) & ~(byte)iVar83;
        auVar43[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar43[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar43[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        auVar43[0xc] = SUB41(fVar94,0) & ~(byte)iVar84;
        auVar43[0xd] = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar84 >> 8);
        auVar43[0xe] = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
        auVar43[0xf] = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
        *(long *)(param_5 + 0x238) = auVar43._8_8_;
        *(undefined8 *)(param_5 + 0x230) = auVar43._0_8_;
        if (local_150 != (long *)0x0) {
          lVar26 = local_150[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
joined_r0x025f17e4:
          if (iVar21 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
      }
      if (local_b0 != (long *)0x0) {
        lVar26 = local_b0[0xb];
        piVar1 = (int *)(lVar26 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*local_b0 + 0x20))();
        }
      }
      if (local_a0 != (long *)0x0) {
        lVar26 = local_a0[0xb];
        piVar1 = (int *)(lVar26 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*local_a0 + 0x20))();
        }
      }
    }
  }
  lVar26 = *(long *)(param_5 + 0x1f0);
  if (lVar26 != 0) goto LAB_025eea18;
  goto LAB_025ee250;
LAB_025eefb8:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar129 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0xf368df69c836a924;
      }
      else if (uVar23 < 0xf368df69c836a925) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0xf368df69c836a924 / uVar23;
        }
        uVar33 = 0xf368df69c836a924 - uVar33 * uVar23;
      }
      else {
        uVar33 = 0xf368df69c836a924;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0xf368df69c836a924) {
              if (plVar34[2] == -0xc97209637c956dc) goto LAB_025ef1c4;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0xf368df69c836a924) {
              if (plVar34[2] == -0xc97209637c956dc) goto LAB_025ef1c4;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025ef1c8;
  }
  goto joined_r0x025ef488;
LAB_025ef1c4:
  fVar129 = *(float *)(plVar34 + 6);
LAB_025ef1c8:
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
joined_r0x025ef488:
  if (fVar129 < fVar128) {
    fVar128 = local_160 - *(float *)(param_5 + 0x260);
    fVar129 = fStack_15c - *(float *)(param_5 + 0x264);
    fVar44 = fStack_158 - *(float *)(param_5 + 0x268);
    fVar45 = fStack_154 - *(float *)(param_5 + 0x26c);
    auVar38._0_4_ = fVar128 * fVar128;
    auVar38._4_4_ = fVar129 * fVar129;
    auVar38._8_4_ = fVar44 * fVar44;
    auVar38._12_4_ = fVar45 * fVar45;
    auVar48 = NEON_ext(auVar38,auVar38,8,1);
    if (((*puVar13 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar26 = *(long *)puVar14;
    *(long *)puVar15 = lVar26;
    puVar25 = *(undefined1 **)(lVar26 + 0x60);
    fVar128 = 0.0;
    if (puVar25 != (undefined1 *)0x0) {
      uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
      }
      else {
        uVar32 = 0;
        if (puVar25 != (undefined1 *)0x0) {
          uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
        }
        puVar27 = &DAT_7c08eae870e235e0;
        if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
          puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
        }
      }
      plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ef2a4;
            }
            else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            puVar31 = (undefined1 *)plVar29[1];
            if (puVar31 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025ef2a4;
            }
            else {
              if (puVar25 <= puVar31) {
                uVar23 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar31 / (ulong)puVar25;
                }
                puVar31 = puVar31 + -(uVar23 * (long)puVar25);
              }
              if (puVar31 != puVar27) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_025ef400;
  }
  goto LAB_025ef74c;
LAB_025ef2a4:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar128 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0x6702fc7d46d1e028;
      }
      else if (uVar23 < 0x6702fc7d46d1e029) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0x6702fc7d46d1e028 / uVar23;
        }
        uVar33 = 0x6702fc7d46d1e028 - uVar33 * uVar23;
      }
      else {
        uVar33 = 0x6702fc7d46d1e028;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0x6702fc7d46d1e028) {
              if (plVar34[2] == 0x6702fc7d46d1e028) goto LAB_025ef3e8;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0x6702fc7d46d1e028) {
              if (plVar34[2] == 0x6702fc7d46d1e028) goto LAB_025ef3e8;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025ef3ec;
  }
  goto LAB_025ef400;
LAB_025ef3e8:
  fVar128 = *(float *)(plVar34 + 6);
LAB_025ef3ec:
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
LAB_025ef400:
  if (fVar128 < SQRT(auVar48._0_4_ + auVar38._0_4_ + auVar48._4_4_ + auVar38._4_4_)) {
LAB_025ef740:
    *(undefined4 *)(param_5 + 0x254) = 0;
  }
  auVar9._8_4_ = fStack_158;
  auVar9._0_8_ = CONCAT44(fStack_15c,local_160);
  auVar9._12_4_ = fStack_154;
  *(long *)(param_5 + 0x268) = auVar9._8_8_;
  *(ulong *)(param_5 + 0x260) = CONCAT44(fStack_15c,local_160);
LAB_025ef74c:
  if (local_b0 != (long *)0x0) {
    lVar26 = local_b0[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
joined_r0x025ef774:
  if (local_a0 != (long *)0x0) {
    lVar26 = local_a0[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
LAB_025ef794:
  if (*(long *)(param_5 + 0x1f0) != 0) {
    FUN_00cfac20(&local_a0,*(long *)(param_5 + 0x1f0));
    if (local_a0 == (long *)0x0) goto LAB_025ee254;
    local_150 = (long *)0x0;
    local_148 = (code *)0x0;
    FUN_00ac3fa4(&local_150,local_a0 + 0x49);
    FUN_0099c748(&local_b0,&local_150);
    plVar29 = local_150;
    if (local_150 != (long *)0x0) {
      plVar37 = local_150 + 1;
      do {
        iVar21 = (int)*plVar37 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar4) {
          *(int *)plVar37 = iVar21;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar21 == 0) {
        local_150[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_d0 = *plVar29;
        FUN_02a44274(lVar26 + 0xd8,&local_d0);
      }
    }
    if (local_b0 != (long *)0x0) {
      FUN_009c69bc(&local_150);
      auVar48 = *(undefined1 (*) [16])(local_150 + 0x1a);
      fStack_158 = auVar48._8_4_;
      fStack_154 = auVar48._12_4_;
      local_160 = auVar48._0_4_;
      fStack_15c = auVar48._4_4_;
      if (local_150 != (long *)0x0) {
        lVar26 = local_150[0xb];
        piVar1 = (int *)(lVar26 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*local_150 + 0x20))();
        }
      }
      local_150 = (long *)0x0;
      local_148 = (code *)0x0;
      FUN_00cf9db0(&local_150,local_a0 + 0xf1);
      if (local_150 != (long *)0x0) {
        FUN_00959eac(local_80);
        plVar29 = local_150;
        if (local_150 == (long *)0x0) goto LAB_025ef890;
        plVar37 = local_150 + 1;
        do {
          iVar21 = (int)*plVar37 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar4) {
            *(int *)plVar37 = iVar21;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 != 0) goto LAB_025ef890;
        local_150[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_d0 = *plVar29;
        FUN_02a44274(lVar26 + 0xd8,&local_d0);
        if (local_80[0] != (long *)0x0) goto LAB_025f0d68;
LAB_025ef898:
        uVar19 = (**(code **)(*local_b0 + 0x1a8))();
        local_150 = (long *)0x0;
        local_148 = (code *)0x0;
        FUN_01a2bf84(&local_150,local_b0 + 0xb9);
        FUN_009c685c(local_80,&local_150);
        plVar29 = local_150;
        if (local_150 != (long *)0x0) {
          plVar37 = local_150 + 1;
          do {
            iVar21 = (int)*plVar37 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar4) {
              *(int *)plVar37 = iVar21;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 == 0) {
            local_150[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar26;
            local_d0 = *plVar29;
            FUN_02a44274(lVar26 + 0xd8,&local_d0);
          }
        }
        if (local_80[0] != (long *)0x0) {
          uVar20 = (**(code **)(*local_80[0] + 0x248))();
          uVar19 = uVar19 | uVar20;
          if (local_80[0] != (long *)0x0) {
            lVar26 = local_80[0][0xb];
            piVar1 = (int *)(lVar26 + 0xc);
            do {
              iVar21 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar21 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar21 + -1 == 0) {
              *(undefined8 *)(lVar26 + 0x18) = 0;
              (**(code **)(*local_80[0] + 0x20))();
            }
          }
        }
        if ((uVar19 & 1) != 0) {
          if (*(float *)(param_5 + 0x270) < 1.1920929e-07) {
            auVar11._8_4_ = fStack_158;
            auVar11._0_8_ = CONCAT44(fStack_15c,local_160);
            auVar11._12_4_ = fStack_154;
            *(long *)(param_5 + 0x288) = auVar11._8_8_;
            *(ulong *)(param_5 + 0x280) = CONCAT44(fStack_15c,local_160);
          }
          lVar26 = (*(code *)**(undefined8 **)*param_6)((undefined8 *)*param_6,1);
          fVar128 = *(float *)(param_5 + 0x270) +
                    (float)((double)*(long *)(lVar26 + 8) / 1000000000.0);
          *(float *)(param_5 + 0x270) = fVar128;
          puVar13 = PTR_DAT_04379660;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          puVar15 = PTR_DAT_04379670;
          puVar14 = PTR_DAT_04379668;
          lVar26 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar26;
          puVar25 = *(undefined1 **)(lVar26 + 0x60);
          fVar129 = 0.0;
          if (puVar25 != (undefined1 *)0x0) {
            uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
            uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
            uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar23 < 2) {
              puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
            }
            else {
              uVar32 = 0;
              if (puVar25 != (undefined1 *)0x0) {
                uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
              }
              puVar27 = &DAT_7c08eae870e235e0;
              if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
                puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
              }
            }
            plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
            if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
              if (uVar23 < 2) {
                do {
                  if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
                    if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025f0100;
                  }
                  else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27)
                  break;
                  plVar29 = (long *)*plVar29;
                } while (plVar29 != (long *)0x0);
              }
              else {
                do {
                  puVar31 = (undefined1 *)plVar29[1];
                  if (puVar31 == &DAT_7c08eae870e235e0) {
                    if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025f0100;
                  }
                  else {
                    if (puVar25 <= puVar31) {
                      uVar23 = 0;
                      if (puVar25 != (undefined1 *)0x0) {
                        uVar23 = (ulong)puVar31 / (ulong)puVar25;
                      }
                      puVar31 = puVar31 + -(uVar23 * (long)puVar25);
                    }
                    if (puVar31 != puVar27) break;
                  }
                  plVar29 = (long *)*plVar29;
                } while (plVar29 != (long *)0x0);
              }
            }
          }
          goto joined_r0x025f0654;
        }
        goto LAB_025ef970;
      }
      local_80[0] = (long *)0x0;
LAB_025ef890:
      if (local_80[0] == (long *)0x0) goto LAB_025ef898;
LAB_025f0d68:
      local_150 = (long *)0x0;
      local_148 = (code *)0x0;
      FUN_00ac3fa4(&local_150,local_80[0] + 0x49);
      FUN_0099c748(&local_88,&local_150);
      plVar29 = local_b0;
      local_b0 = (long *)0x0;
      if (plVar29 != (long *)0x0) {
        lVar26 = plVar29[0xb];
        piVar1 = (int *)(lVar26 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))();
        }
      }
      local_b0 = local_88;
      plVar29 = local_150;
      local_88 = (long *)0x0;
      if (local_150 != (long *)0x0) {
        plVar37 = local_150 + 1;
        do {
          iVar21 = (int)*plVar37 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar4) {
            *(int *)plVar37 = iVar21;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 == 0) {
          local_150[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_d0 = *plVar29;
          FUN_02a44274(lVar26 + 0xd8,&local_d0);
        }
      }
      if (local_b0 != (long *)0x0) {
        FUN_009c69bc(&local_150);
        auVar48 = *(undefined1 (*) [16])(local_150 + 0x1a);
        fStack_158 = auVar48._8_4_;
        fStack_154 = auVar48._12_4_;
        local_160 = auVar48._0_4_;
        fStack_15c = auVar48._4_4_;
        if (local_150 != (long *)0x0) {
          lVar26 = local_150[0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
      }
      if ((*(uint *)((long)local_80[0] + 0x59c) | 2) != 3) {
        if (local_80[0] != (long *)0x0) {
          lVar26 = local_80[0][0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_80[0] + 0x20))();
          }
        }
        goto LAB_025ef898;
      }
      auVar12._8_4_ = fStack_158;
      auVar12._0_8_ = CONCAT44(fStack_15c,local_160);
      auVar12._12_4_ = fStack_154;
      *(undefined4 *)(param_5 + 0x270) = 0;
      *(long *)(param_5 + 0x288) = auVar12._8_8_;
      *(ulong *)(param_5 + 0x280) = CONCAT44(fStack_15c,local_160);
      if (local_80[0] != (long *)0x0) {
        lVar26 = local_80[0][0xb];
        piVar1 = (int *)(lVar26 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
      goto joined_r0x025ef980;
    }
    goto LAB_025ef9a0;
  }
LAB_025ee250:
  local_a0 = (long *)0x0;
  goto LAB_025ee254;
LAB_025f0100:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar129 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0xdf5b2fefe207fd7d;
      }
      else if (uVar23 < 0xdf5b2fefe207fd7e) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0xdf5b2fefe207fd7d / uVar23;
        }
        uVar33 = 0xdf5b2fefe207fd7d - uVar33 * uVar23;
      }
      else {
        uVar33 = 0xdf5b2fefe207fd7d;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0xdf5b2fefe207fd7d) {
              if (plVar34[2] == -0x20a4d0101df80283) goto LAB_025f0424;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0xdf5b2fefe207fd7d) {
              if (plVar34[2] == -0x20a4d0101df80283) goto LAB_025f0424;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025f0428;
  }
  goto joined_r0x025f0654;
LAB_025f0424:
  fVar129 = *(float *)(plVar34 + 6);
LAB_025f0428:
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
joined_r0x025f0654:
  if (fVar129 < fVar128) {
    fVar128 = local_160 - *(float *)(param_5 + 0x280);
    fVar129 = fStack_15c - *(float *)(param_5 + 0x284);
    fVar44 = fStack_158 - *(float *)(param_5 + 0x288);
    fVar45 = fStack_154 - *(float *)(param_5 + 0x28c);
    auVar39._0_4_ = fVar128 * fVar128;
    auVar39._4_4_ = fVar129 * fVar129;
    auVar39._8_4_ = fVar44 * fVar44;
    auVar39._12_4_ = fVar45 * fVar45;
    auVar48 = NEON_ext(auVar39,auVar39,8,1);
    if (((*puVar13 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar26 = *(long *)puVar14;
    *(long *)puVar15 = lVar26;
    puVar25 = *(undefined1 **)(lVar26 + 0x60);
    fVar128 = 0.0;
    if (puVar25 != (undefined1 *)0x0) {
      uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
      }
      else {
        uVar32 = 0;
        if (puVar25 != (undefined1 *)0x0) {
          uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
        }
        puVar27 = &DAT_7c08eae870e235e0;
        if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
          puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
        }
      }
      plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025f0514;
            }
            else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            puVar31 = (undefined1 *)plVar29[1];
            if (puVar31 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025f0514;
            }
            else {
              if (puVar25 <= puVar31) {
                uVar23 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar31 / (ulong)puVar25;
                }
                puVar31 = puVar31 + -(uVar23 * (long)puVar25);
              }
              if (puVar31 != puVar27) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_025f0c38;
  }
  goto joined_r0x025ef980;
LAB_025f0514:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar128 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0x351482dc1ff20f6d;
      }
      else if (uVar23 < 0x351482dc1ff20f6e) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0x351482dc1ff20f6d / uVar23;
        }
        uVar33 = 0x351482dc1ff20f6d - uVar33 * uVar23;
      }
      else {
        uVar33 = 0x351482dc1ff20f6d;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0x351482dc1ff20f6d) {
              if (plVar34[2] == 0x351482dc1ff20f6d) goto LAB_025f0c20;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0x351482dc1ff20f6d) {
              if (plVar34[2] == 0x351482dc1ff20f6d) goto LAB_025f0c20;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025f0c24;
  }
  goto LAB_025f0c38;
LAB_025f0c20:
  fVar128 = *(float *)(plVar34 + 6);
LAB_025f0c24:
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
LAB_025f0c38:
  if (fVar128 < SQRT(auVar48._0_4_ + auVar39._0_4_ + auVar48._4_4_ + auVar39._4_4_)) {
LAB_025ef970:
    *(undefined4 *)(param_5 + 0x270) = 0;
  }
  auVar10._8_4_ = fStack_158;
  auVar10._0_8_ = CONCAT44(fStack_15c,local_160);
  auVar10._12_4_ = fStack_154;
  *(long *)(param_5 + 0x288) = auVar10._8_8_;
  *(ulong *)(param_5 + 0x280) = CONCAT44(fStack_15c,local_160);
joined_r0x025ef980:
  if (local_b0 != (long *)0x0) {
    lVar26 = local_b0[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
LAB_025ef9a0:
  if (local_a0 == (long *)0x0) {
LAB_025ee254:
    lVar26 = *(long *)(param_5 + 0x1f0);
  }
  else {
    lVar26 = local_a0[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 != 0) goto LAB_025ee254;
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*local_a0 + 0x20))(local_a0);
    lVar26 = *(long *)(param_5 + 0x1f0);
  }
  if (lVar26 == 0) {
    return;
  }
  FUN_00cfac20(&local_a0,lVar26);
  if (local_a0 == (long *)0x0) {
    return;
  }
  local_150 = (long *)0x0;
  local_148 = (code *)0x0;
  FUN_00ac3fa4(&local_150,local_a0 + 0x49);
  FUN_0099c748(&local_b0,&local_150);
  plVar29 = local_150;
  if (local_150 != (long *)0x0) {
    plVar37 = local_150 + 1;
    do {
      iVar21 = (int)*plVar37 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = iVar21;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar26 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar26;
      local_d0 = *plVar29;
      FUN_02a44274(lVar26 + 0xd8,&local_d0);
    }
  }
  if (local_b0 == (long *)0x0) {
    bVar4 = false;
    goto joined_r0x025eff04;
  }
  uVar23 = (**(code **)(*local_b0 + 0x228))();
  if ((uVar23 & 1) != 0) {
    iVar21 = *(int *)(param_5 + 0x250);
    *(int *)(param_5 + 0x250) = iVar21 + 1;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    fVar128 = 0.0;
    lVar26 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar26;
    puVar25 = *(undefined1 **)(lVar26 + 0x60);
    if (puVar25 != (undefined1 *)0x0) {
      uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
      }
      else {
        puVar27 = &DAT_7c08eae870e235e0;
        if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
          uVar32 = 0;
          if (puVar25 != (undefined1 *)0x0) {
            uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
          }
          puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
        }
      }
      plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025f0304;
            }
            else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            puVar31 = (undefined1 *)plVar29[1];
            if (puVar31 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025f0304;
            }
            else {
              if (puVar25 <= puVar31) {
                uVar23 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar31 / (ulong)puVar25;
                }
                puVar31 = puVar31 + -(uVar23 * (long)puVar25);
              }
              if (puVar31 != puVar27) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_025f0714;
  }
  *(undefined4 *)(param_5 + 0x250) = 0;
  goto LAB_025efaac;
LAB_025f0304:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar128 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0x9364a2da623b0b88;
      }
      else if (uVar23 < 0x9364a2da623b0b89) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0x9364a2da623b0b88 / uVar23;
        }
        uVar33 = 0x9364a2da623b0b88 - uVar33 * uVar23;
      }
      else {
        uVar33 = 0x9364a2da623b0b88;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0x9364a2da623b0b88) {
              if (plVar34[2] == -0x6c9b5d259dc4f478) goto LAB_025f06fc;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0x9364a2da623b0b88) {
              if (plVar34[2] == -0x6c9b5d259dc4f478) goto LAB_025f06fc;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025f0700;
  }
  goto LAB_025f0714;
LAB_025f06fc:
  fVar128 = *(float *)(plVar34 + 6);
LAB_025f0700:
  do {
    iVar22 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar22;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar22 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
LAB_025f0714:
  if ((float)iVar21 <= fVar128 * 30.0) {
LAB_025efaac:
    uVar23 = FUN_01af8fb4(local_a0);
    puVar13 = PTR_DAT_04379660;
    if ((uVar23 & 1) == 0) {
      fVar128 = *(float *)(param_5 + 0x254);
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar15 = PTR_DAT_04379670;
      puVar14 = PTR_DAT_04379668;
      lVar26 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar26;
      puVar25 = *(undefined1 **)(lVar26 + 0x60);
      fVar129 = 0.0;
      if (puVar25 != (undefined1 *)0x0) {
        uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar27 = &DAT_7c08eae870e235e0;
          if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
            uVar32 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
            }
            puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
          }
        }
        plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
        if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
          if (uVar23 < 2) {
            do {
              if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025efb70;
              }
              else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27) break;
              plVar29 = (long *)*plVar29;
            } while (plVar29 != (long *)0x0);
          }
          else {
            do {
              puVar31 = (undefined1 *)plVar29[1];
              if (puVar31 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025efb70;
              }
              else {
                if (puVar25 <= puVar31) {
                  uVar23 = 0;
                  if (puVar25 != (undefined1 *)0x0) {
                    uVar23 = (ulong)puVar31 / (ulong)puVar25;
                  }
                  puVar31 = puVar31 + -(uVar23 * (long)puVar25);
                }
                if (puVar31 != puVar27) break;
              }
              plVar29 = (long *)*plVar29;
            } while (plVar29 != (long *)0x0);
          }
        }
      }
      goto joined_r0x025eff50;
    }
    uVar18 = 2;
  }
  else {
    *(undefined4 *)(param_5 + 0x250) = 0;
    uVar18 = 1;
  }
  goto LAB_025f072c;
LAB_025efb70:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar129 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0xf368df69c836a924;
      }
      else if (uVar23 < 0xf368df69c836a925) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0xf368df69c836a924 / uVar23;
        }
        uVar33 = 0xf368df69c836a924 - uVar33 * uVar23;
      }
      else {
        uVar33 = 0xf368df69c836a924;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0xf368df69c836a924) {
              if (plVar34[2] == -0xc97209637c956dc) goto LAB_025efcb4;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0xf368df69c836a924) {
              if (plVar34[2] == -0xc97209637c956dc) goto LAB_025efcb4;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025efcb8;
  }
  goto joined_r0x025eff50;
LAB_025efcb4:
  fVar129 = *(float *)(plVar34 + 6);
LAB_025efcb8:
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
joined_r0x025eff50:
  if (fVar128 <= fVar129) {
    fVar128 = *(float *)(param_5 + 0x270);
    if (((*puVar13 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar26 = *(long *)puVar14;
    *(long *)puVar15 = lVar26;
    puVar25 = *(undefined1 **)(lVar26 + 0x60);
    fVar129 = 0.0;
    if (puVar25 != (undefined1 *)0x0) {
      uVar23 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar25 + -1) & 0x7c08eae870e235e0);
      }
      else {
        puVar27 = &DAT_7c08eae870e235e0;
        if (puVar25 < (undefined1 *)0x7c08eae870e235e1) {
          uVar32 = 0;
          if (puVar25 != (undefined1 *)0x0) {
            uVar32 = 0x7c08eae870e235e0 / (ulong)puVar25;
          }
          puVar27 = &DAT_7c08eae870e235e0 + -(uVar32 * (long)puVar25);
        }
      }
      plVar29 = *(long **)(*(long *)(lVar26 + 0x58) + (long)puVar27 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if ((undefined1 *)plVar29[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025efd74;
            }
            else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar25 + -1)) != puVar27) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            puVar31 = (undefined1 *)plVar29[1];
            if (puVar31 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar29[2] == &DAT_7c08eae870e235e0) goto LAB_025efd74;
            }
            else {
              if (puVar25 <= puVar31) {
                uVar23 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar31 / (ulong)puVar25;
                }
                puVar31 = puVar31 + -(uVar23 * (long)puVar25);
              }
              if (puVar31 != puVar27) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto joined_r0x025eff6c;
  }
  uVar18 = 3;
  goto LAB_025f072c;
LAB_025efd74:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = plVar29[0x21];
    fVar129 = 0.0;
    if (uVar23 != 0) {
      uVar32 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar32 < 2) {
        uVar33 = uVar23 - 1 & 0xdf5b2fefe207fd7d;
      }
      else if (uVar23 < 0xdf5b2fefe207fd7e) {
        uVar33 = 0;
        if (uVar23 != 0) {
          uVar33 = 0xdf5b2fefe207fd7d / uVar23;
        }
        uVar33 = 0xdf5b2fefe207fd7d - uVar33 * uVar23;
      }
      else {
        uVar33 = 0xdf5b2fefe207fd7d;
      }
      plVar34 = *(long **)(plVar29[0x20] + uVar33 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar32 < 2) {
          do {
            if (plVar34[1] == 0xdf5b2fefe207fd7d) {
              if (plVar34[2] == -0x20a4d0101df80283) goto LAB_025efeb8;
            }
            else if ((plVar34[1] & uVar23 - 1) != uVar33) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar34[1];
            if (uVar32 == 0xdf5b2fefe207fd7d) {
              if (plVar34[2] == -0x20a4d0101df80283) goto LAB_025efeb8;
            }
            else {
              if (uVar23 <= uVar32) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar32 / uVar23;
                }
                uVar32 = uVar32 - uVar6 * uVar23;
              }
              if (uVar32 != uVar33) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025efebc;
  }
  goto joined_r0x025eff6c;
LAB_025ee4ec:
  plVar29 = (long *)plVar29[3];
  if (plVar29 == (long *)0x0) goto LAB_025ee8f4;
  plVar37 = plVar29 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = (int)*plVar37 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = FUN_00d78f50(plVar29,&local_150);
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))(plVar29);
  }
LAB_025ee52c:
  FUN_00d26204(lVar26,1,0,uVar18);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
LAB_025ee554:
  FUN_025f32c4(param_5);
  FUN_01e0b524(param_5 + 0x2b8);
  *(undefined4 *)(param_5 + 0x240) = 5;
  return;
LAB_025ee758:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar37 = plVar29 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d78f50(plVar29,&local_150);
    do {
      iVar21 = (int)*plVar37 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar4) {
        *(int *)plVar37 = iVar21;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
    }
    goto LAB_025ee798;
  }
LAB_025ee91c:
  uVar18 = 0;
LAB_025ee798:
  FUN_00d264cc(lVar26,1,0,&DAT_03a7d900,&local_a0,uVar18,0,0);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (*(int *)(param_5 + 0x290) == 1) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar21 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar21 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_c0 = 0x17;
    local_b8 = (long *)0x0;
    local_d0 = -0x7964f3e1c3d6d8f1;
    pcStack_c8 = "PLAY_PL_FOLEY_DROWN_END";
    uVar24 = *(undefined8 *)PTR_DAT_04379c30;
    local_e0 = 0;
    uStack_d8 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar24;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (long *)0x0;
    local_150 = (long *)0x0;
    local_148 = (code *)0x0;
    FUN_02913338(uVar24,&local_d0,&local_150,0,0,0);
    pcVar17 = local_148;
    if (local_148 == (code *)0x0) {
      local_148 = (code *)0x0;
    }
    else {
      local_140 = 0;
      local_138 = (long *)0x0;
      local_150 = (long *)0x0;
      local_148 = (code *)0x0;
      (*pcVar17)(&local_130);
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  *(undefined4 *)(param_5 + 0x240) = 3;
  return;
LAB_025efeb8:
  fVar129 = *(float *)(plVar34 + 6);
LAB_025efebc:
  do {
    iVar21 = (int)*plVar37 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar4) {
      *(int *)plVar37 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
joined_r0x025eff6c:
  if (fVar129 < fVar128) {
    uVar18 = 4;
LAB_025f072c:
    bVar4 = true;
    *(undefined4 *)(param_5 + 0x290) = uVar18;
  }
  else {
    bVar4 = false;
  }
  if (local_b0 != (long *)0x0) {
    lVar26 = local_b0[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
joined_r0x025eff04:
  if (local_a0 != (long *)0x0) {
    lVar26 = local_a0[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (bVar4) {
    FUN_025f29a8();
    *(undefined4 *)(param_5 + 0x240) = 1;
  }
  return;
}


