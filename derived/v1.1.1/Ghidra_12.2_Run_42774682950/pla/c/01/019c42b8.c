/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c42b8; name: FUN_019c42b8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_019c42b8(long *param_1,long *******param_2,undefined8 param_3,ulong param_4,long param_5,
                 long *param_6,long *param_7,int param_8,long *param_9,long param_10)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long *******ppppppplVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  ulong uVar34;
  long *******ppppppplVar35;
  int *piVar36;
  bool bVar37;
  long *plVar38;
  int *piVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined4 local_3bc;
  undefined1 *local_3b8;
  long *******local_3b0;
  long *******ppppppplStack_3a8;
  int local_384;
  long *******local_290;
  long *******ppppppplStack_288;
  undefined1 *local_280;
  long *local_278;
  undefined8 local_270;
  long *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined8 local_250;
  long *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined8 local_230;
  long *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  long *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  long *******local_1e0;
  long *******local_1d8;
  ulong local_1d0;
  long *local_1c8;
  long *******local_1c0;
  long *******local_1b8;
  ulong local_1b0;
  long *local_1a8;
  ulong local_1a0;
  long local_198;
  long local_190;
  long *local_188;
  long *******local_180;
  long *******local_178;
  undefined1 *local_170;
  long *local_168;
  undefined8 local_160;
  long *local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70 [2];
  
  for (plVar13 = (long *)param_6[1]; plVar13 != param_6; plVar13 = (long *)plVar13[1]) {
    if (plVar13[2] == param_4) goto LAB_019c5cf4;
  }
  plVar32 = param_6 + 3;
  local_70[0] = param_4;
  plVar13 = (long *)(**(code **)(*(long *)*plVar32 + 0x10))((long *)*plVar32,0x18,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*(long *)*plVar32 + 0xb8))();
  }
  *plVar13 = 0;
  FUN_019c9508(plVar32,plVar13 + 2,local_70);
  plVar13[1] = (long)param_6;
  lVar14 = *param_6;
  *plVar13 = lVar14;
  *(long **)(lVar14 + 8) = plVar13;
  *param_6 = (long)plVar13;
  param_6[2] = param_6[2] + 1;
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar18 = local_70[0];
  ppppppplStack_3a8 = (long *******)0x0;
  local_3b0 = (long *******)0x0;
  lVar15 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar15;
  lVar16 = *(long *)(*(long *)(lVar15 + 0x78) + 0x70);
  uVar17 = param_7[1];
  lVar14 = tpidr_el0;
  if (uVar17 != 0) {
    uVar24 = 0;
    if (uVar17 != 0) {
      uVar24 = local_70[0] / uVar17;
    }
    uVar22 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar33 = uVar17 - 1 & local_70[0];
    }
    else {
      uVar33 = local_70[0];
      if (uVar17 <= local_70[0]) {
        uVar33 = local_70[0] - uVar24 * uVar17;
      }
    }
    lVar31 = *param_7;
    plVar13 = *(long **)(lVar31 + uVar33 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar26 = uVar17 - 1;
      if (uVar22 < 2) {
        do {
          if (plVar13[1] == local_70[0]) {
            if (plVar13[2] == local_70[0]) goto LAB_019c448c;
          }
          else if ((plVar13[1] & uVar26) != uVar33) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar34 = plVar13[1];
          if (uVar34 == local_70[0]) {
            if (plVar13[2] == local_70[0]) goto LAB_019c448c;
          }
          else {
            if (uVar17 <= uVar34) {
              uVar7 = 0;
              if (uVar17 != 0) {
                uVar7 = uVar34 / uVar17;
              }
              uVar34 = uVar34 - uVar7 * uVar17;
            }
            if (uVar34 != uVar33) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  local_3bc = 0;
  local_384 = 0;
  bVar8 = false;
  local_3b8 = &DAT_cbf29ce484222645;
  goto LAB_019c4928;
LAB_019c4b10:
  lVar31 = plVar32[4];
  plVar42 = (long *)plVar32[7];
  if (plVar42 == (long *)0x0) {
    plVar32 = (long *)plVar32[0x17];
  }
  else {
    (**(code **)(*plVar42 + 0x18))(plVar42);
    plVar32 = (long *)plVar32[0x17];
  }
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x18))(plVar32);
  }
  if (lVar31 != param_5) {
    ppppppplStack_288 = (long *******)&local_290;
    local_c0 = (undefined1 *)0x0;
    local_260 = (undefined1 *)((ulong)local_260 & 0xffffffff00000000);
    local_280 = (undefined1 *)0x0;
    local_270 = 0x1fffffffffffffff;
    local_268 = (long *)0x0;
    local_290 = ppppppplStack_288;
    local_278 = param_1;
    for (plVar29 = (long *)param_6[1]; plVar29 != param_6; plVar29 = (long *)plVar29[1]) {
      ppppppplVar11 = (long *******)(**(code **)(*local_278 + 0x10))(local_278,0x18,8);
      if (ppppppplVar11 == (long *******)0x0) {
        (**(code **)(*local_278 + 0xb8))();
      }
      *ppppppplVar11 = (long ******)0x0;
      FUN_019c9508(&local_278,ppppppplVar11 + 2,plVar29 + 2);
      *ppppppplVar11 = (long ******)local_290;
      ppppppplVar11[1] = (long ******)&local_290;
      local_290[1] = (long ******)ppppppplVar11;
      local_280 = local_280 + 1;
      local_290 = ppppppplVar11;
    }
    uVar18 = FUN_019c42b8(param_1,param_2,param_3,lVar31,param_5,&local_290,param_7,param_8 + 1,
                          &local_d0,param_10);
    if ((uVar18 & 1) != 0) {
      if (param_8 == 0) {
        if ((*(ushort *)((long)piVar39 - (long)*piVar39) < 5) ||
           (uVar18 = (ulong)((ushort *)((long)piVar39 - (long)*piVar39))[2], uVar18 == 0)) {
          lVar31 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar39 + uVar18);
          lVar31 = (long)puVar1 + (ulong)*puVar1;
        }
        bVar6 = *(byte *)(lVar31 + 4);
        puVar19 = &DAT_cbf29ce484222645;
        if (bVar6 != 0) {
          puVar19 = &DAT_cbf29ce484222645;
          pbVar25 = (byte *)(lVar31 + 5);
          do {
            puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar25;
            pbVar25 = pbVar25 + 1;
          } while (bVar6 != 0);
        }
        puVar23 = *(undefined1 **)(lVar16 + 0x1b0);
        if (puVar23 != (undefined1 *)0x0) {
          uVar18 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            puVar27 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar19);
          }
          else {
            puVar27 = puVar19;
            if (puVar23 <= puVar19) {
              uVar17 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar19 / (ulong)puVar23;
              }
              puVar27 = puVar19 + -(uVar17 * (long)puVar23);
            }
          }
          plVar29 = *(long **)(*(long *)(lVar16 + 0x1a8) + (long)puVar27 * 8);
          if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
            if (uVar18 < 2) {
              do {
                if ((undefined1 *)plVar29[1] == puVar19) {
                  if ((undefined1 *)plVar29[2] == puVar19) goto LAB_019c59dc;
                }
                else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) != puVar27)
                goto LAB_019c5d30;
                plVar29 = (long *)*plVar29;
                if (plVar29 == (long *)0x0) goto LAB_019c5d30;
              } while( true );
            }
            do {
              puVar28 = (undefined1 *)plVar29[1];
              if (puVar28 == puVar19) {
                if ((undefined1 *)plVar29[2] == puVar19) goto LAB_019c59dc;
              }
              else {
                if (puVar23 <= puVar28) {
                  uVar18 = 0;
                  if (puVar23 != (undefined1 *)0x0) {
                    uVar18 = (ulong)puVar28 / (ulong)puVar23;
                  }
                  puVar28 = puVar28 + -(uVar18 * (long)puVar23);
                }
                if (puVar28 != puVar27) break;
              }
              plVar29 = (long *)*plVar29;
              if (plVar29 == (long *)0x0) break;
            } while( true );
          }
        }
        goto LAB_019c5d30;
      }
      goto LAB_019c5a78;
    }
    goto joined_r0x019c5ab8;
  }
  if (param_8 == 0) {
    if ((*(ushort *)((long)piVar39 - (long)*piVar39) < 5) ||
       (uVar18 = (ulong)((ushort *)((long)piVar39 - (long)*piVar39))[2], uVar18 == 0)) {
      lVar31 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar39 + uVar18);
      lVar31 = (long)puVar1 + (ulong)*puVar1;
    }
    bVar6 = *(byte *)(lVar31 + 4);
    puVar19 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      puVar19 = &DAT_cbf29ce484222645;
      pbVar25 = (byte *)(lVar31 + 5);
      do {
        puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar6 != 0);
    }
    puVar23 = *(undefined1 **)(lVar16 + 0x1b0);
    if (puVar23 != (undefined1 *)0x0) {
      uVar18 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar19);
      }
      else {
        puVar27 = puVar19;
        if (puVar23 <= puVar19) {
          uVar17 = 0;
          if (puVar23 != (undefined1 *)0x0) {
            uVar17 = (ulong)puVar19 / (ulong)puVar23;
          }
          puVar27 = puVar19 + -(uVar17 * (long)puVar23);
        }
      }
      plVar29 = *(long **)(*(long *)(lVar16 + 0x1a8) + (long)puVar27 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar29[1] == puVar19) {
              if ((undefined1 *)plVar29[2] == puVar19) goto LAB_019c4ee0;
            }
            else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) != puVar27)
            goto LAB_019c5d30;
            plVar29 = (long *)*plVar29;
            if (plVar29 == (long *)0x0) goto LAB_019c5d30;
          } while( true );
        }
        do {
          puVar28 = (undefined1 *)plVar29[1];
          if (puVar28 == puVar19) {
            if ((undefined1 *)plVar29[2] == puVar19) goto LAB_019c4ee0;
          }
          else {
            if (puVar23 <= puVar28) {
              uVar18 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar28 / (ulong)puVar23;
              }
              puVar28 = puVar28 + -(uVar18 * (long)puVar23);
            }
            if (puVar28 != puVar27) break;
          }
          plVar29 = (long *)*plVar29;
          if (plVar29 == (long *)0x0) break;
        } while( true );
      }
    }
    goto LAB_019c5d30;
  }
  goto LAB_019c5984;
LAB_019c59dc:
  plVar40 = (long *)plVar29[7];
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x18))(plVar40);
  }
  local_1d8 = (long *******)plVar29[9];
  local_1c8 = (long *)plVar29[0xb];
  local_1b8 = (long *******)plVar29[0xd];
  local_1a8 = (long *)plVar29[0xf];
  local_198 = plVar29[0x11];
  local_188 = (long *)plVar29[0x13];
  local_1e0 = (long *******)plVar29[8];
  local_1d0 = plVar29[10];
  local_1c0 = (long *******)plVar29[0xc];
  local_1b0 = plVar29[0xe];
  local_1a0 = plVar29[0x10];
  local_190 = plVar29[0x12];
  plVar29 = (long *)plVar29[0x17];
  if (plVar29 == (long *)0x0) {
    local_b8 = CONCAT44(local_b8._4_4_,0x17);
    local_d0 = local_1c0;
    ppppppplStack_c8 = local_1b8;
    local_c0 = puVar19;
  }
  else {
    (**(code **)(*plVar29 + 0x18))(plVar29);
    local_d0 = local_1c0;
    ppppppplStack_c8 = local_1b8;
    local_b8 = CONCAT44(local_b8._4_4_,0x17);
    local_c0 = puVar19;
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x20))(plVar40);
  }
LAB_019c5a78:
  if (!bVar8) {
LAB_019c5a90:
    local_384 = (int)local_280;
    local_3b8 = local_c0;
    local_3bc = (undefined4)local_b8;
    ppppppplStack_3a8 = ppppppplStack_c8;
    local_3b0 = local_d0;
  }
  else if (local_280 < (undefined1 *)(long)local_384) goto LAB_019c5a90;
  bVar8 = true;
joined_r0x019c5ab8:
  if (local_280 != (undefined1 *)0x0) {
    (*ppppppplStack_288)[1] = (long *****)local_290[1];
    *local_290[1] = (long *****)*ppppppplStack_288;
    local_280 = (undefined1 *)0x0;
    ppppppplVar11 = ppppppplStack_288;
    plVar29 = local_278;
    while (local_278 = plVar29, (long ********)ppppppplVar11 != &local_290) {
      ppppppplVar35 = (long *******)ppppppplVar11[1];
      uVar18 = (**(code **)(*plVar29 + 0xc0))(plVar29);
      if ((uVar18 & 1) == 0) {
LAB_019c5b54:
        (**(code **)(*plVar29 + 0x18))(plVar29,ppppppplVar11,0x18,8);
        ppppppplVar11 = ppppppplVar35;
        plVar29 = local_278;
      }
      else {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_019c5b54;
        FUN_02bcc824(plVar29,ppppppplVar11,0x18,8);
        ppppppplVar11 = ppppppplVar35;
        plVar29 = local_278;
      }
    }
  }
  bVar37 = false;
  if (plVar32 == (long *)0x0) goto LAB_019c5c10;
  goto LAB_019c5c00;
LAB_019c4ee0:
  plVar40 = (long *)plVar29[7];
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x18))(plVar40);
  }
  ppppppplStack_c8 = (long *******)plVar29[9];
  local_b8 = plVar29[0xb];
  local_a8 = plVar29[0xd];
  local_98 = plVar29[0xf];
  local_88 = plVar29[0x11];
  local_78 = plVar29[0x13];
  local_d0 = (long *******)plVar29[8];
  local_c0 = (undefined1 *)plVar29[10];
  local_b0 = plVar29[0xc];
  local_a0 = plVar29[0xe];
  local_90 = plVar29[0x10];
  local_80 = plVar29[0x12];
  plVar29 = (long *)plVar29[0x17];
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 0x18))(plVar29);
  }
  param_9[1] = local_a8;
  param_9[2] = (long)puVar19;
  *param_9 = local_b0;
  *(undefined4 *)(param_9 + 3) = 0x17;
  plVar12 = (long *)FUN_01e66244(lVar15,local_70[0]);
  if (plVar12 != (long *)0x0) {
    lVar31 = *plVar12;
    lVar4 = plVar12[1];
    if (lVar31 != lVar4) {
      bVar37 = false;
LAB_019c4fac:
      FUN_019c7928(&local_1e0,lVar31);
      plVar12 = local_158;
      if ((local_1c0 != param_2) && (*(char *)local_1b8 != '\0')) goto LAB_019c5250;
      local_258 = &DAT_03996322;
      local_268 = (long *)0x0;
      local_260 = &DAT_cbf29ce484222645;
      local_250 = 0;
      local_248 = (long *)0x0;
      local_240 = &DAT_cbf29ce484222645;
      local_238 = &DAT_03996322;
      local_230 = 0;
      local_228 = (long *)0x0;
      local_220 = &DAT_cbf29ce484222645;
      local_218 = &DAT_03996322;
      local_210 = 0;
      local_208 = (long *)0x0;
      local_200 = &DAT_cbf29ce484222645;
      local_1f8 = &DAT_03996322;
      local_1f0 = 0;
      local_1e8 = (long *)0x0;
      local_290 = local_180;
      ppppppplStack_288 = local_178;
      local_270 = local_160;
      local_280 = local_170;
      local_278 = local_168;
      if (local_158 == (long *)0x0) {
        local_268 = local_158;
      }
      else {
        (**(code **)(*local_158 + 0x18))(local_158);
        plVar38 = local_268;
        local_268 = plVar12;
        if (plVar38 != (long *)0x0) {
          (**(code **)(*plVar38 + 0x20))();
        }
      }
      plVar12 = local_138;
      local_260 = (undefined1 *)local_150;
      local_258 = (undefined1 *)local_148;
      local_250 = local_140;
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))(local_138);
      }
      plVar38 = local_248;
      local_248 = plVar12;
      if (plVar38 != (long *)0x0) {
        (**(code **)(*plVar38 + 0x20))();
      }
      plVar12 = local_118;
      local_240 = (undefined1 *)local_130;
      local_238 = (undefined1 *)local_128;
      local_230 = local_120;
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x18))(local_118);
      }
      plVar38 = local_228;
      local_228 = plVar12;
      if (plVar38 != (long *)0x0) {
        (**(code **)(*plVar38 + 0x20))();
      }
      plVar12 = local_f8;
      local_220 = (undefined1 *)local_110;
      local_218 = (undefined1 *)local_108;
      local_210 = local_100;
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x18))(local_f8);
      }
      plVar38 = local_208;
      local_208 = plVar12;
      if (plVar38 != (long *)0x0) {
        (**(code **)(*plVar38 + 0x20))();
      }
      plVar12 = local_d8;
      local_1f8 = (undefined1 *)local_e8;
      local_1f0 = local_e0;
      local_200 = (undefined1 *)local_f0;
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x18))(local_d8);
      }
      plVar38 = local_1e8;
      local_1e8 = plVar12;
      if (plVar38 != (long *)0x0) {
        (**(code **)(*plVar38 + 0x20))();
      }
      uVar17 = FUN_0165ff30(&local_290);
      uVar18 = local_1a0;
      if ((uVar17 & 1) == 0) {
        iVar10 = 0;
        goto joined_r0x019c51ec;
      }
      uVar17 = *(ulong *)(lVar16 + 0x1b0);
      if (uVar17 != 0) {
        uVar24 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
        uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar24 < 2) {
          uVar22 = uVar17 - 1 & local_1a0;
        }
        else {
          uVar22 = local_1a0;
          if (uVar17 <= local_1a0) {
            uVar22 = 0;
            if (uVar17 != 0) {
              uVar22 = local_1a0 / uVar17;
            }
            uVar22 = local_1a0 - uVar22 * uVar17;
          }
        }
        plVar12 = *(long **)(*(long *)(lVar16 + 0x1a8) + uVar22 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          if (uVar24 < 2) {
            do {
              if (plVar12[1] == local_1a0) {
                if (plVar12[2] == local_1a0) goto LAB_019c534c;
              }
              else if ((plVar12[1] & uVar17 - 1) != uVar22) goto LAB_019c5d30;
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) goto LAB_019c5d30;
            } while( true );
          }
          do {
            uVar24 = plVar12[1];
            if (uVar24 == local_1a0) {
              if (plVar12[2] == local_1a0) goto LAB_019c534c;
            }
            else {
              if (uVar17 <= uVar24) {
                uVar33 = 0;
                if (uVar17 != 0) {
                  uVar33 = uVar24 / uVar17;
                }
                uVar24 = uVar24 - uVar33 * uVar17;
              }
              if (uVar24 != uVar22) break;
            }
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) break;
          } while( true );
        }
      }
      goto LAB_019c5d30;
    }
  }
LAB_019c54e0:
  puVar43 = (undefined8 *)*plVar13;
  puVar5 = (undefined8 *)plVar13[1];
  if (puVar43 != puVar5) {
    iVar10 = 0;
LAB_019c5504:
    piVar36 = (int *)*puVar43;
    if (piVar36 == piVar39) goto LAB_019c54f8;
    if ((*(ushort *)((long)piVar36 - (long)*piVar36) < 0xb) ||
       (uVar18 = (ulong)((ushort *)((long)piVar36 - (long)*piVar36))[5], uVar18 == 0)) {
      lVar31 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar36 + uVar18);
      lVar31 = (long)puVar1 + (ulong)*puVar1;
    }
    bVar6 = *(byte *)(lVar31 + 4);
    puVar19 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      puVar19 = &DAT_cbf29ce484222645;
      pbVar25 = (byte *)(lVar31 + 5);
      do {
        puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar6 != 0);
    }
    puVar23 = *(undefined1 **)(lVar16 + 0x1b0);
    if (puVar23 != (undefined1 *)0x0) {
      uVar18 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar19);
      }
      else {
        puVar27 = puVar19;
        if (puVar23 <= puVar19) {
          uVar17 = 0;
          if (puVar23 != (undefined1 *)0x0) {
            uVar17 = (ulong)puVar19 / (ulong)puVar23;
          }
          puVar27 = puVar19 + -(uVar17 * (long)puVar23);
        }
      }
      plVar12 = *(long **)(*(long *)(lVar16 + 0x1a8) + (long)puVar27 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar12[1] == puVar19) {
              if ((undefined1 *)plVar12[2] == puVar19) goto LAB_019c5674;
            }
            else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar23 + -1)) != puVar27)
            goto LAB_019c5d30;
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_019c5d30;
          } while( true );
        }
        do {
          puVar28 = (undefined1 *)plVar12[1];
          if (puVar28 == puVar19) {
            if ((undefined1 *)plVar12[2] == puVar19) goto LAB_019c5674;
          }
          else {
            if (puVar23 <= puVar28) {
              uVar18 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar28 / (ulong)puVar23;
              }
              puVar28 = puVar28 + -(uVar18 * (long)puVar23);
            }
            if (puVar28 != puVar27) break;
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) break;
        } while( true );
      }
    }
    goto LAB_019c5d30;
  }
LAB_019c594c:
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 0x20))();
  }
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x20))();
  }
LAB_019c5984:
  bVar37 = true;
  uVar9 = 1;
  if (plVar32 != (long *)0x0) {
LAB_019c5c00:
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
LAB_019c5c10:
  if (plVar42 != (long *)0x0) {
    (**(code **)(*plVar42 + 0x20))(plVar42);
  }
  if (bVar37) goto LAB_019c5cf8;
  puVar44 = puVar44 + 1;
  if (puVar44 == puVar3) goto LAB_019c5cc8;
  goto LAB_019c49a8;
LAB_019c534c:
  plVar38 = (long *)plVar12[7];
  if (plVar38 != (long *)0x0) {
    (**(code **)(*plVar38 + 0x18))(plVar38);
  }
  lVar20 = plVar12[0xd];
  lVar21 = plVar12[0xc];
  plVar12 = (long *)plVar12[0x17];
  if (plVar12 == (long *)0x0) {
    param_9[1] = lVar20;
    param_9[2] = uVar18;
    *param_9 = lVar21;
    *(undefined4 *)(param_9 + 3) = 0x17;
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    param_9[1] = lVar20;
    param_9[2] = uVar18;
    *param_9 = lVar21;
    *(undefined4 *)(param_9 + 3) = 0x17;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar38 != (long *)0x0) {
    (**(code **)(*plVar38 + 0x20))(plVar38);
  }
  bVar37 = true;
  iVar10 = 9;
joined_r0x019c51ec:
  if (local_1e8 != (long *)0x0) {
    (**(code **)(*local_1e8 + 0x20))();
  }
  if (local_208 != (long *)0x0) {
    (**(code **)(*local_208 + 0x20))();
  }
  if (local_228 != (long *)0x0) {
    (**(code **)(*local_228 + 0x20))();
  }
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 0x20))();
  }
  if (local_268 != (long *)0x0) {
    (**(code **)(*local_268 + 0x20))();
  }
  if (iVar10 == 0) {
LAB_019c5250:
    iVar10 = 0;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  lVar31 = lVar31 + 0x110;
  if ((lVar31 == lVar4) || (iVar10 != 0)) goto LAB_019c54dc;
  goto LAB_019c4fac;
LAB_019c54dc:
  if (!bVar37) goto LAB_019c54e0;
  goto LAB_019c594c;
LAB_019c5674:
  lVar31 = plVar12[4];
  plVar38 = (long *)plVar12[7];
  if (plVar38 == (long *)0x0) {
    plVar12 = (long *)plVar12[0x17];
  }
  else {
    (**(code **)(*plVar38 + 0x18))(plVar38);
    plVar12 = (long *)plVar12[0x17];
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (lVar31 == param_5) {
    if ((*(ushort *)((long)piVar36 - (long)*piVar36) < 5) ||
       (uVar18 = (ulong)((ushort *)((long)piVar36 - (long)*piVar36))[2], uVar18 == 0)) {
      lVar31 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar36 + uVar18);
      lVar31 = (long)puVar1 + (ulong)*puVar1;
    }
    bVar6 = *(byte *)(lVar31 + 4);
    puVar19 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      puVar19 = &DAT_cbf29ce484222645;
      pbVar25 = (byte *)(lVar31 + 5);
      do {
        puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar6 != 0);
    }
    puVar23 = *(undefined1 **)(lVar16 + 0x1b0);
    if (puVar23 != (undefined1 *)0x0) {
      uVar18 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        puVar27 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar19);
      }
      else {
        puVar27 = puVar19;
        if (puVar23 <= puVar19) {
          uVar17 = 0;
          if (puVar23 != (undefined1 *)0x0) {
            uVar17 = (ulong)puVar19 / (ulong)puVar23;
          }
          puVar27 = puVar19 + -(uVar17 * (long)puVar23);
        }
      }
      plVar30 = *(long **)(*(long *)(lVar16 + 0x1a8) + (long)puVar27 * 8);
      if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar30[1] == puVar19) {
              if ((undefined1 *)plVar30[2] == puVar19) goto LAB_019c57f8;
            }
            else if ((undefined1 *)((ulong)plVar30[1] & (ulong)(puVar23 + -1)) != puVar27)
            goto LAB_019c5d30;
            plVar30 = (long *)*plVar30;
            if (plVar30 == (long *)0x0) goto LAB_019c5d30;
          } while( true );
        }
        do {
          puVar28 = (undefined1 *)plVar30[1];
          if (puVar28 == puVar19) {
            if ((undefined1 *)plVar30[2] == puVar19) goto LAB_019c57f8;
          }
          else {
            if (puVar23 <= puVar28) {
              uVar18 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar28 / (ulong)puVar23;
              }
              puVar28 = puVar28 + -(uVar18 * (long)puVar23);
            }
            if (puVar28 != puVar27) break;
          }
          plVar30 = (long *)*plVar30;
          if (plVar30 == (long *)0x0) break;
        } while( true );
      }
    }
    goto LAB_019c5d30;
  }
LAB_019c58bc:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar38 != (long *)0x0) {
    (**(code **)(*plVar38 + 0x20))(plVar38);
  }
LAB_019c54f8:
  puVar43 = puVar43 + 1;
  if (puVar43 == puVar5) goto LAB_019c594c;
  goto LAB_019c5504;
LAB_019c57f8:
  plVar41 = (long *)plVar30[7];
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x18))(plVar41);
  }
  local_1d8 = (long *******)plVar30[9];
  local_1c8 = (long *)plVar30[0xb];
  local_1b8 = (long *******)plVar30[0xd];
  local_1a8 = (long *)plVar30[0xf];
  local_198 = plVar30[0x11];
  local_188 = (long *)plVar30[0x13];
  local_1e0 = (long *******)plVar30[8];
  local_1d0 = plVar30[10];
  local_1c0 = (long *******)plVar30[0xc];
  local_1b0 = plVar30[0xe];
  local_1a0 = plVar30[0x10];
  local_190 = plVar30[0x12];
  plVar30 = (long *)plVar30[0x17];
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x18))(plVar30);
  }
  puVar2 = (undefined8 *)(param_10 + (long)iVar10 * 0x20);
  puVar2[1] = local_1b8;
  puVar2[2] = puVar19;
  *puVar2 = local_1c0;
  *(undefined4 *)(puVar2 + 3) = 0x17;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))(plVar30);
  }
  iVar10 = iVar10 + 1;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x20))(plVar41);
  }
  goto LAB_019c58bc;
LAB_019c448c:
  if (uVar22 < 2) {
    uVar33 = uVar26 & local_70[0];
    plVar13 = *(long **)(lVar31 + uVar33 * 8);
  }
  else {
    uVar33 = local_70[0];
    if (uVar17 <= local_70[0]) {
      uVar33 = local_70[0] - uVar24 * uVar17;
    }
    plVar13 = *(long **)(lVar31 + uVar33 * 8);
  }
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    if (uVar22 < 2) {
      do {
        if (plVar13[1] == local_70[0]) {
          if (plVar13[2] == local_70[0]) goto LAB_019c44fc;
        }
        else if ((plVar13[1] & uVar26) != uVar33) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar24 = plVar13[1];
        if (uVar24 == local_70[0]) {
          if (plVar13[2] == local_70[0]) goto LAB_019c44fc;
        }
        else {
          if (uVar17 <= uVar24) {
            uVar22 = 0;
            if (uVar17 != 0) {
              uVar22 = uVar24 / uVar17;
            }
            uVar24 = uVar24 - uVar22 * uVar17;
          }
          if (uVar24 != uVar33) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_019c5d30:
                    /* WARNING: Subroutine does not return */
  FUN_019c8c40();
LAB_019c44fc:
  plVar32 = (long *)plVar13[3];
  plVar13 = (long *)plVar13[4];
  if (plVar32 == plVar13) {
    local_3bc = 0;
    local_384 = 0;
    bVar8 = false;
    local_3b8 = &DAT_cbf29ce484222645;
    ppppppplStack_3a8 = (long *******)0x0;
    local_3b0 = (long *******)0x0;
  }
  else {
    bVar8 = false;
    local_384 = 0;
    local_3bc = 0;
    ppppppplStack_3a8 = (long *******)0x0;
    local_3b0 = (long *******)0x0;
    local_3b8 = &DAT_cbf29ce484222645;
    do {
      lVar31 = *plVar32;
      lVar4 = plVar32[1];
      if (lVar31 == param_5) {
        if (param_8 == 0) {
          uVar9 = FUN_019c2828(param_3,uVar18,param_5,lVar4,param_1,param_9,param_9 + 2,param_9 + 3)
          ;
        }
        else {
          uVar9 = 1;
        }
        goto LAB_019c5cf8;
      }
      local_1c0 = (long *******)0x1fffffffffffffff;
      local_280 = (undefined1 *)0x0;
      local_1d0 = 0;
      local_1b8 = (long *******)0x0;
      local_1b0 = local_1b0 & 0xffffffff00000000;
      local_1e0 = (long *******)&local_1e0;
      local_1d8 = (long *******)&local_1e0;
      local_1c8 = param_1;
      for (plVar42 = (long *)param_6[1]; plVar42 != param_6; plVar42 = (long *)plVar42[1]) {
        ppppppplVar11 = (long *******)(**(code **)(*local_1c8 + 0x10))(local_1c8,0x18,8);
        if (ppppppplVar11 == (long *******)0x0) {
          (**(code **)(*local_1c8 + 0xb8))();
        }
        *ppppppplVar11 = (long ******)0x0;
        FUN_019c9508(&local_1c8,ppppppplVar11 + 2,plVar42 + 2);
        *ppppppplVar11 = (long ******)local_1e0;
        ppppppplVar11[1] = (long ******)&local_1e0;
        local_1e0[1] = (long ******)ppppppplVar11;
        local_1d0 = local_1d0 + 1;
        local_1e0 = ppppppplVar11;
      }
      uVar17 = FUN_019c42b8(param_1,param_2,param_3,lVar31,param_5,&local_1e0,param_7,param_8 + 1,
                            &local_290,param_10);
      if ((uVar17 & 1) != 0) {
        if ((param_8 == 0) &&
           (uVar17 = FUN_019c2828(param_3,uVar18,param_5,lVar4,param_1,&local_290,&local_280,
                                  &local_278), (uVar17 & 1) == 0)) {
          local_290 = (long *******)0x0;
          local_278 = (long *)((ulong)local_278 & 0xffffffff00000000);
          ppppppplStack_288 = (long *******)0x0;
          local_280 = &DAT_cbf29ce484222645;
        }
        if (bVar8) {
          if ((ulong)(long)local_384 <= local_1d0) goto joined_r0x019c46c4;
        }
        else {
          bVar8 = true;
        }
        local_384 = (int)local_1d0;
        local_3bc = local_278._0_4_;
        local_3b8 = local_280;
        local_3b0 = local_290;
        ppppppplStack_3a8 = ppppppplStack_288;
      }
joined_r0x019c46c4:
      if (local_1d0 != 0) {
        (*local_1d8)[1] = (long *****)local_1e0[1];
        *local_1e0[1] = (long *****)*local_1d8;
        local_1d0 = 0;
        ppppppplVar11 = local_1d8;
        plVar42 = local_1c8;
        while (local_1c8 = plVar42, (long ********)ppppppplVar11 != &local_1e0) {
          ppppppplVar35 = (long *******)ppppppplVar11[1];
          uVar17 = (**(code **)(*plVar42 + 0xc0))(plVar42);
          if ((uVar17 & 1) == 0) {
LAB_019c47f8:
            (**(code **)(*plVar42 + 0x18))(plVar42,ppppppplVar11,0x18,8);
            ppppppplVar11 = ppppppplVar35;
            plVar42 = local_1c8;
          }
          else {
            if (*(char *)(lVar14 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar14 + 0x38d488) = 1;
              *(undefined8 *)(lVar14 + 0x38d478) = 0;
              *(undefined8 *)(lVar14 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_019c47f8;
            FUN_02bcc824(plVar42,ppppppplVar11,0x18,8);
            ppppppplVar11 = ppppppplVar35;
            plVar42 = local_1c8;
          }
        }
      }
      plVar32 = plVar32 + 2;
    } while (plVar32 != plVar13);
  }
LAB_019c4928:
  plVar13 = (long *)FUN_01e665b0(lVar15,uVar18);
  if (plVar13 != (long *)0x0) {
    puVar44 = (undefined8 *)*plVar13;
    puVar3 = (undefined8 *)plVar13[1];
    if (puVar44 != puVar3) {
      uVar9 = 0;
LAB_019c49a8:
      piVar39 = (int *)*puVar44;
      if ((*(ushort *)((long)piVar39 - (long)*piVar39) < 0xb) ||
         (uVar18 = (ulong)((ushort *)((long)piVar39 - (long)*piVar39))[5], uVar18 == 0)) {
        lVar31 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar39 + uVar18);
        lVar31 = (long)puVar1 + (ulong)*puVar1;
      }
      bVar6 = *(byte *)(lVar31 + 4);
      puVar19 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        puVar19 = &DAT_cbf29ce484222645;
        pbVar25 = (byte *)(lVar31 + 5);
        do {
          puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar6 != 0);
      }
      puVar23 = *(undefined1 **)(lVar16 + 0x1b0);
      if (puVar23 != (undefined1 *)0x0) {
        uVar18 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar27 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar19);
        }
        else {
          puVar27 = puVar19;
          if (puVar23 <= puVar19) {
            uVar17 = 0;
            if (puVar23 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar19 / (ulong)puVar23;
            }
            puVar27 = puVar19 + -(uVar17 * (long)puVar23);
          }
        }
        plVar32 = *(long **)(*(long *)(lVar16 + 0x1a8) + (long)puVar27 * 8);
        if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if ((undefined1 *)plVar32[1] == puVar19) {
                if ((undefined1 *)plVar32[2] == puVar19) goto LAB_019c4b10;
              }
              else if ((undefined1 *)((ulong)plVar32[1] & (ulong)(puVar23 + -1)) != puVar27)
              goto LAB_019c5d30;
              plVar32 = (long *)*plVar32;
              if (plVar32 == (long *)0x0) goto LAB_019c5d30;
            } while( true );
          }
          do {
            puVar28 = (undefined1 *)plVar32[1];
            if (puVar28 == puVar19) {
              if ((undefined1 *)plVar32[2] == puVar19) goto LAB_019c4b10;
            }
            else {
              if (puVar23 <= puVar28) {
                uVar18 = 0;
                if (puVar23 != (undefined1 *)0x0) {
                  uVar18 = (ulong)puVar28 / (ulong)puVar23;
                }
                puVar28 = puVar28 + -(uVar18 * (long)puVar23);
              }
              if (puVar28 != puVar27) break;
            }
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) break;
          } while( true );
        }
      }
      goto LAB_019c5d30;
    }
  }
LAB_019c5cc8:
  if (bVar8) {
    uVar9 = 1;
    param_9[2] = (long)local_3b8;
    param_9[1] = (long)ppppppplStack_3a8;
    *param_9 = (long)local_3b0;
    *(undefined4 *)(param_9 + 3) = local_3bc;
  }
  else {
LAB_019c5cf4:
    uVar9 = 0;
  }
LAB_019c5cf8:
  return uVar9 & 1;
}


