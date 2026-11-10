/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd7e7c; name: FUN_02bd7e7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd7e7c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],long param_6,long param_7)

{
  int *piVar1;
  MutexType *pMVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  uint uVar42;
  int iVar43;
  long *plVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  undefined8 *puVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  long *plVar54;
  long *plVar55;
  ulong *puVar56;
  ulong *puVar57;
  ushort *puVar58;
  ushort *puVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 extraout_b0;
  byte bVar63;
  undefined1 extraout_var;
  byte bVar64;
  undefined1 uVar65;
  undefined1 extraout_var_00;
  byte bVar66;
  undefined1 uVar67;
  undefined1 extraout_var_01;
  byte bVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  byte extraout_var_02;
  byte bVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  byte extraout_var_03;
  byte bVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  byte extraout_var_04;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte extraout_var_05;
  byte bVar80;
  undefined1 uVar81;
  byte extraout_var_06;
  byte bVar82;
  undefined1 uVar83;
  byte extraout_var_07;
  byte bVar84;
  undefined1 uVar85;
  byte extraout_var_08;
  byte bVar86;
  undefined1 uVar87;
  byte extraout_var_09;
  byte bVar88;
  undefined1 extraout_var_10;
  byte bVar89;
  undefined1 uVar90;
  undefined1 extraout_var_11;
  byte bVar91;
  undefined1 uVar92;
  undefined1 extraout_var_12;
  byte bVar93;
  undefined1 uVar94;
  undefined1 extraout_var_13;
  byte bVar95;
  float fVar96;
  float fVar104;
  float fVar106;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar105;
  float fVar107;
  float fVar108;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar109;
  undefined1 auVar103 [16];
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  undefined1 uVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar139;
  float fVar136;
  byte bVar137;
  byte bVar138;
  byte bVar140;
  byte bVar144;
  float fVar141;
  byte bVar142;
  byte bVar143;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined8 uVar149;
  float fVar158;
  float fVar159;
  undefined1 auVar152 [16];
  undefined1 auVar151 [16];
  undefined1 auVar150 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 uVar160;
  undefined1 uVar161;
  undefined1 uVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined8 uVar169;
  undefined8 uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  float fVar177;
  undefined8 uVar178;
  undefined8 uVar179;
  undefined8 uVar180;
  undefined8 uVar181;
  float fVar184;
  float fVar185;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  undefined8 uVar190;
  undefined8 uVar191;
  float fVar192;
  float fVar193;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 *local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  uVar115 = param_3[0xf];
  uVar81 = param_3[0xe];
  uVar78 = param_3[0xd];
  uVar75 = param_3[0xc];
  bVar122 = param_3[0xb];
  bVar121 = param_3[10];
  bVar120 = param_3[9];
  bVar119 = param_3[8];
  bVar88 = param_3[7];
  bVar86 = param_3[6];
  bVar84 = param_3[5];
  bVar82 = param_3[4];
  uVar72 = param_3[3];
  uVar69 = param_3[2];
  uVar67 = param_3[1];
  uVar65 = param_3[0];
  if (*(char *)(param_6 + 0x78) == '\0') {
    return;
  }
  if (*(int *)(param_6 + 0x7c) != 2) {
    return;
  }
  if ((*(char *)(param_6 + 0x262) != '\0') && (*(long *)(param_6 + 0x100) != 0)) {
    puVar56 = *(ulong **)(param_6 + 0x218);
    puVar57 = *(ulong **)(param_6 + 0x220);
    if (puVar56 != puVar57) {
      lVar46 = tpidr_el0;
      uVar47 = *(ulong *)(param_6 + 0x110);
joined_r0x02bd7ef0:
      if (uVar47 != 0) {
        uVar48 = uVar47 - (uVar47 >> 1 & 0x5555555555555555);
        uVar48 = (uVar48 & 0x3333333333333333) + (uVar48 >> 2 & 0x3333333333333333);
        uVar45 = *puVar56;
        uVar48 = (uVar48 + (uVar48 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar48 < 2) {
          uVar52 = uVar47 - 1 & uVar45;
        }
        else {
          uVar52 = uVar45;
          if (uVar47 <= uVar45) {
            uVar52 = 0;
            if (uVar47 != 0) {
              uVar52 = uVar45 / uVar47;
            }
            uVar52 = uVar45 - uVar52 * uVar47;
          }
        }
        lVar49 = *(long *)(param_6 + 0x108);
        puVar50 = *(undefined8 **)(lVar49 + uVar52 * 8);
        if ((puVar50 != (undefined8 *)0x0) && (plVar55 = (long *)*puVar50, plVar55 != (long *)0x0))
        {
          uVar51 = uVar47 - 1;
          if (uVar48 < 2) {
            do {
              if (plVar55[1] == uVar45) {
                if (plVar55[2] == uVar45) goto LAB_02bd8010;
              }
              else if ((plVar55[1] & uVar51) != uVar52) break;
              plVar55 = (long *)*plVar55;
            } while (plVar55 != (long *)0x0);
          }
          else {
            do {
              uVar53 = plVar55[1];
              if (uVar53 == uVar45) {
                if (plVar55[2] == uVar45) goto LAB_02bd8010;
              }
              else {
                if (uVar47 <= uVar53) {
                  uVar6 = 0;
                  if (uVar47 != 0) {
                    uVar6 = uVar53 / uVar47;
                  }
                  uVar53 = uVar53 - uVar6 * uVar47;
                }
                if (uVar53 != uVar52) break;
              }
              plVar55 = (long *)*plVar55;
            } while (plVar55 != (long *)0x0);
          }
        }
      }
      goto LAB_02bd7f14;
    }
    goto LAB_02bd8214;
  }
LAB_02bd821c:
  if ((*(char *)(param_6 + 0x261) != '\0') && (*(long *)(param_6 + 0x100) != 0)) {
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar43 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar43 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar46 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar46;
    pMVar2 = (MutexType *)(*(long *)(lVar46 + 0x230) + 0x128);
    nn::os::LockMutex(pMVar2);
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0x8000000000000000;
    puVar58 = *(ushort **)(param_6 + 0x1e8);
    puVar59 = *(ushort **)(param_6 + 0x1f0);
    uVar47 = (ulong)((long)puVar59 - (long)puVar58) >> 1;
    if ((int)uVar47 < 1) {
      if (puVar58 != puVar59) goto LAB_02bd82c0;
    }
    else {
      local_a8 = (undefined8 *)FUN_02be22ac(PTR_PTR_0434a080,uVar47,0,0,(long)&local_a0 + 4);
      puVar58 = *(ushort **)(param_6 + 0x1e8);
      puVar59 = *(ushort **)(param_6 + 0x1f0);
      if (puVar58 != puVar59) {
LAB_02bd82c0:
LAB_02bd82f8:
        uVar3 = *puVar58;
        uVar47 = (ulong)uVar3;
        *(ushort *)((long)local_a8 + (long)(int)local_a0 * 2) = uVar3;
        local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + 1);
        uVar48 = *(ulong *)(param_6 + 0x198);
        if (uVar48 != 0) {
          uVar45 = uVar48 - (uVar48 >> 1 & 0x5555555555555555);
          uVar45 = (uVar45 & 0x3333333333333333) + (uVar45 >> 2 & 0x3333333333333333);
          uVar45 = (uVar45 + (uVar45 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar45 < 2) {
            uVar52 = (int)uVar48 - 1 & uVar47;
          }
          else {
            uVar52 = uVar47;
            if (uVar48 <= uVar47) {
              uVar52 = 0;
              if (uVar48 != 0) {
                uVar52 = uVar47 / uVar48;
              }
              uVar52 = uVar47 - uVar52 * uVar48;
            }
          }
          lVar46 = *(long *)(param_6 + 400);
          puVar50 = *(undefined8 **)(lVar46 + uVar52 * 8);
          if ((puVar50 != (undefined8 *)0x0) && (plVar55 = (long *)*puVar50, plVar55 != (long *)0x0)
             ) {
            uVar51 = uVar48 - 1;
            if (uVar45 < 2) {
              do {
                if (plVar55[1] == uVar47) {
                  if (*(uint *)(plVar55 + 2) == (uint)uVar3) goto LAB_02bd83f8;
                }
                else if ((plVar55[1] & uVar51) != uVar52) break;
                plVar55 = (long *)*plVar55;
              } while (plVar55 != (long *)0x0);
            }
            else {
              do {
                uVar53 = plVar55[1];
                if (uVar53 == uVar47) {
                  if (*(uint *)(plVar55 + 2) == (uint)uVar3) goto LAB_02bd83f8;
                }
                else {
                  if (uVar48 <= uVar53) {
                    uVar6 = 0;
                    if (uVar48 != 0) {
                      uVar6 = uVar53 / uVar48;
                    }
                    uVar53 = uVar53 - uVar6 * uVar48;
                  }
                  if (uVar53 != uVar52) break;
                }
                plVar55 = (long *)*plVar55;
              } while (plVar55 != (long *)0x0);
            }
          }
        }
        goto LAB_02bd82e8;
      }
    }
LAB_02bd8628:
    FUN_02f704c8(*(undefined8 *)(param_6 + 0x100),local_a8,local_a0 & 0xffffffff);
    uVar47 = local_a0;
    *(undefined1 *)(param_6 + 0x261) = 0;
    *(undefined8 *)(param_6 + 0x1f0) = *(undefined8 *)(param_6 + 0x1e8);
    uVar42 = local_a0._4_4_;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < (long)uVar47) && (local_a8 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_a8,(uVar42 & 0x3fffffff) << 1);
    }
    nn::os::UnlockMutex(pMVar2);
  }
  if (((*(char *)(param_6 + 0x260) != '\0') &&
      (FUN_02bd8d3c(&local_70,param_6), local_70 != (long *)0x0)) && (local_70[1] != 0)) {
    plVar55 = local_70 + 2;
    do {
      lVar46 = *plVar55;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar55,0x10);
      if (bVar5) {
        *plVar55 = lVar46 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar46 + -1 == 0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  if (*(int *)(param_6 + 0xe4) == 2) {
    lVar46 = nn::os::GetCurrentThread();
    plVar55 = (long *)(param_7 + 0x10);
    do {
      if (*plVar55 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_7 + 4));
          while (*plVar55 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar55,0x10);
            if (bVar5) {
              *plVar55 = lVar46;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02bd8710;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar55,0x10);
      if (bVar5) {
        *plVar55 = lVar46;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02bd8710:
    lVar46 = (**(code **)(**(long **)(param_6 + 0xd0) + 0x180))
                       (*(long **)(param_6 + 0xd0),*(undefined8 *)(param_6 + 0xd8));
    *(undefined8 *)(param_7 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_7 + 4));
    uVar40 = *(undefined8 *)(lVar46 + 0x38);
    uVar36 = *(undefined8 *)(lVar46 + 0x30);
    uVar169 = *(undefined8 *)(param_6 + 0x298);
    uVar39 = *(undefined8 *)(param_6 + 0x290);
    FUN_032cb3d8(&local_80,lVar46);
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_008c4b3c(&local_a8,param_6 + 0x68);
    FUN_00956dac(&local_88,&local_a8);
    puVar50 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a8 + 1);
      do {
        iVar43 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar43 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar43 + -1 == 0) {
        local_a8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar43 = __cxa_guard_acquire(PTR_DAT_04379498), iVar43 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar46 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar46;
        local_68 = *puVar50;
        FUN_02a44274(lVar46 + 0xd8,&local_68);
      }
    }
    plVar55 = local_88;
    if (local_88 != (long *)0x0) {
      local_e0 = (float)uVar39;
      fStack_dc = (float)((ulong)uVar39 >> 0x20);
      fStack_d8 = (float)uVar169;
      fStack_d4 = (float)((ulong)uVar169 >> 0x20);
      local_e0 = (float)uVar36 - local_e0;
      fStack_dc = (float)((ulong)uVar36 >> 0x20) - fStack_dc;
      uVar70 = SUB41(fStack_dc,0);
      uVar73 = (undefined1)((uint)fStack_dc >> 8);
      uVar76 = (undefined1)((uint)fStack_dc >> 0x10);
      uVar79 = (undefined1)((uint)fStack_dc >> 0x18);
      fStack_d8 = (float)uVar40 - fStack_d8;
      uVar83 = (undefined1)((uint)fStack_d8 >> 8);
      uVar85 = (undefined1)((uint)fStack_d8 >> 0x10);
      uVar87 = (undefined1)((uint)fStack_d8 >> 0x18);
      fStack_d4 = (float)((ulong)uVar40 >> 0x20) - fStack_d4;
      uVar90 = (undefined1)((uint)fStack_d4 >> 8);
      uVar92 = (undefined1)((uint)fStack_d4 >> 0x10);
      uVar94 = (undefined1)((uint)fStack_d4 >> 0x18);
      auVar97[4] = uVar70;
      auVar97._0_4_ = local_e0;
      auVar97[5] = uVar73;
      auVar97[6] = uVar76;
      auVar97[7] = uVar79;
      auVar97[8] = SUB41(fStack_d8,0);
      auVar97[9] = uVar83;
      auVar97[10] = uVar85;
      auVar97[0xb] = uVar87;
      auVar97[0xc] = SUB41(fStack_d4,0);
      auVar97[0xd] = uVar90;
      auVar97[0xe] = uVar92;
      auVar97[0xf] = uVar94;
      auVar171[4] = uVar70;
      auVar171._0_4_ = local_e0;
      auVar171[5] = uVar73;
      auVar171[6] = uVar76;
      auVar171[7] = uVar79;
      auVar171[8] = SUB41(fStack_d8,0);
      auVar171[9] = uVar83;
      auVar171[10] = uVar85;
      auVar171[0xb] = uVar87;
      auVar171[0xc] = SUB41(fStack_d4,0);
      auVar171[0xd] = uVar90;
      auVar171[0xe] = uVar92;
      auVar171[0xf] = uVar94;
      auVar97 = NEON_ext(auVar97,auVar171,8,1);
      auVar98._8_8_ = auVar97._8_8_;
      auVar98._0_4_ = auVar97._0_4_;
      auVar98._4_4_ = 0;
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      auVar97 = auVar98;
      FUN_0095aa3c(&local_a8,local_88 + 0x4e);
      local_98 = plVar55[0x50];
      FUN_02bd4a68(&local_90,&local_a8);
      puVar50 = local_a8;
      if (local_a8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a8 + 1);
        do {
          iVar43 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar43 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar43 + -1 == 0) {
          local_a8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar43 = __cxa_guard_acquire(PTR_DAT_04379498), iVar43 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar46 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar46;
          local_68 = *puVar50;
          FUN_02a44274(lVar46 + 0xd8,&local_68);
        }
      }
      auVar182._8_8_ = uStack_78;
      auVar182._0_8_ = local_80;
      fVar188 = (float)(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar73,CONCAT14(uVar70,local_e0))))
                       >> 0x20);
      if (local_90 == (long *)0x0) {
        local_90 = (long *)0x0;
        fVar60 = 0.0;
      }
      else {
        (**(code **)(*local_90 + 0x40))();
        auVar99._4_12_ = auVar97._4_12_;
        fVar62 = auVar182._0_4_;
        fVar136 = auVar182._4_4_;
        fVar141 = auVar182._8_4_;
        fVar60 = auVar97._0_4_;
        fVar61 = auVar97._8_4_;
        if (*(char *)(param_6 + 0x281) == '\0') {
          bVar71 = auVar97[4];
          bVar74 = auVar97[5];
          bVar77 = auVar97[6];
          bVar80 = auVar97[7];
          bVar89 = 0;
          bVar91 = 0;
          bVar93 = 0;
          bVar95 = 0;
          auVar100._4_12_ = auVar99._4_12_;
          auVar100._0_4_ = fVar61;
          uVar47 = auVar100._0_8_ & 0xffffffff;
          fVar96 = (float)CONCAT13(extraout_var_01,
                                   CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
          auVar150._4_12_ = param_5._4_12_;
          auVar150._0_4_ = fVar96;
          fVar105 = (float)(CONCAT17(uVar72,CONCAT16(uVar69,CONCAT15(uVar67,CONCAT14(uVar65,fVar96))
                                                    )) >> 0x20);
          auVar152._12_4_ = param_5._12_4_;
          auVar152._0_8_ = auVar150._0_8_;
          auVar152._8_4_ = fVar105;
          auVar151._8_8_ = auVar152._8_8_;
          auVar151._4_4_ = fVar60;
          auVar151._0_4_ = fVar96;
          auVar153._0_12_ = auVar151._0_12_;
          auVar153._12_4_ = 0;
          bVar114 = (byte)uVar47;
          bVar116 = (byte)(uVar47 >> 8);
          bVar117 = (byte)(uVar47 >> 0x10);
          bVar118 = (byte)(uVar47 >> 0x18);
          bVar123 = 0;
          bVar124 = 0;
          bVar125 = 0;
          bVar126 = 0;
          auVar101._0_4_ =
               0.0 - (fVar96 * fVar62 +
                      (float)CONCAT13(extraout_var_05,
                                      CONCAT12(extraout_var_04,
                                               (short)(CONCAT12(extraout_var_03,
                                                                CONCAT11(extraout_var_02,uVar72)) >>
                                                      8))) * fVar136 +
                     (float)CONCAT13(extraout_var_09,
                                     CONCAT12(extraout_var_08,
                                              (short)(CONCAT12(extraout_var_07,
                                                               CONCAT11(extraout_var_06,
                                                                        extraout_var_05)) >> 8))) *
                     fVar141);
          auVar101._4_4_ = 0.0 - (fVar60 * fVar62 + auVar97._4_4_ * fVar136 + fVar61 * fVar141);
          auVar101._8_4_ =
               0.0 - (fVar105 * fVar62 +
                      (float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar82))) * fVar136 +
                     (float)CONCAT13(bVar122,CONCAT12(bVar121,CONCAT11(bVar120,bVar119))) * fVar141)
          ;
          auVar101._12_4_ = 0.0 - (fVar62 * 0.0 + fVar136 * 0.0 + fVar141 * 0.0);
          bVar63 = extraout_var_02;
          bVar64 = extraout_var_03;
          bVar66 = extraout_var_04;
          bVar68 = extraout_var_05;
          bVar110 = extraout_var_06;
          bVar111 = extraout_var_07;
          bVar112 = extraout_var_08;
          bVar113 = extraout_var_09;
        }
        else {
          uVar36 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a880);
          uVar39 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a6f0);
          auVar16[1] = uVar67;
          auVar16[0] = uVar65;
          auVar16[2] = uVar69;
          auVar16[3] = uVar72;
          auVar16[4] = bVar82;
          auVar16[5] = bVar84;
          auVar16[6] = bVar86;
          auVar16[7] = bVar88;
          auVar16[8] = bVar119;
          auVar16[9] = bVar120;
          auVar16[10] = bVar121;
          auVar16[0xb] = bVar122;
          auVar16[0xc] = uVar75;
          auVar16[0xd] = uVar78;
          auVar16[0xe] = uVar81;
          auVar16[0xf] = uVar115;
          uVar178 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a6d8);
          auVar17[1] = uVar67;
          auVar17[0] = uVar65;
          auVar17[2] = uVar69;
          auVar17[3] = uVar72;
          auVar17[4] = bVar82;
          auVar17[5] = bVar84;
          auVar17[6] = bVar86;
          auVar17[7] = bVar88;
          auVar17[8] = bVar119;
          auVar17[9] = bVar120;
          auVar17[10] = bVar121;
          auVar17[0xb] = bVar122;
          auVar17[0xc] = uVar75;
          auVar17[0xd] = uVar78;
          auVar17[0xe] = uVar81;
          auVar17[0xf] = uVar115;
          uVar169 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
          auVar18[1] = uVar67;
          auVar18[0] = uVar65;
          auVar18[2] = uVar69;
          auVar18[3] = uVar72;
          auVar18[4] = bVar82;
          auVar18[5] = bVar84;
          auVar18[6] = bVar86;
          auVar18[7] = bVar88;
          auVar18[8] = bVar119;
          auVar18[9] = bVar120;
          auVar18[10] = bVar121;
          auVar18[0xb] = bVar122;
          auVar18[0xc] = uVar75;
          auVar18[0xd] = uVar78;
          auVar18[0xe] = uVar81;
          auVar18[0xf] = uVar115;
          uVar40 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6f0);
          uVar179 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a6d8);
          uVar170 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a680);
          auVar19[1] = uVar67;
          auVar19[0] = uVar65;
          auVar19[2] = uVar69;
          auVar19[3] = uVar72;
          auVar19[4] = bVar82;
          auVar19[5] = bVar84;
          auVar19[6] = bVar86;
          auVar19[7] = bVar88;
          auVar19[8] = bVar119;
          auVar19[9] = bVar120;
          auVar19[10] = bVar121;
          auVar19[0xb] = bVar122;
          auVar19[0xc] = uVar75;
          auVar19[0xd] = uVar78;
          auVar19[0xe] = uVar81;
          auVar19[0xf] = uVar115;
          uVar180 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a880);
          uVar20 = CONCAT13(uVar72,CONCAT12(uVar69,CONCAT11(uVar67,uVar65)));
          uVar7 = CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
          auVar165._0_4_ =
               (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
               (float)uVar36 * (float)uVar169 -
               (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
               (float)uVar170 * (float)uVar180;
          auVar165._4_4_ =
               (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02)))
               * (float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar169 >> 0x20) -
               (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02)))
               * (float)((ulong)uVar170 >> 0x20) * (float)((ulong)uVar180 >> 0x20);
          auVar165._8_4_ =
               (float)CONCAT13(extraout_var_09,
                               CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06)))
               * (float)uVar39 * (float)uVar178 -
               (float)CONCAT13(extraout_var_09,
                               CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06)))
               * (float)uVar179 * (float)uVar40;
          auVar165._12_4_ =
               (float)CONCAT13(extraout_var_13,
                               CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10)))
               * (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar178 >> 0x20) -
               (float)CONCAT13(extraout_var_13,
                               CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10)))
               * (float)((ulong)uVar179 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
          auVar171 = NEON_ext(auVar165,auVar165,8,1);
          auVar166._0_4_ = auVar165._0_4_ + auVar165._4_4_ + auVar171._0_4_ + auVar171._4_4_;
          auVar166._4_4_ = auVar166._0_4_;
          auVar166._8_4_ = auVar166._0_4_;
          auVar166._12_4_ = auVar166._0_4_;
          auVar171 = NEON_frecpe(auVar166,4);
          auVar182 = NEON_frecps(auVar171,auVar166,4);
          auVar172._0_4_ = auVar171._0_4_ * auVar182._0_4_;
          auVar172._4_4_ = auVar171._4_4_ * auVar182._4_4_;
          auVar172._8_4_ = auVar171._8_4_ * auVar182._8_4_;
          auVar172._12_4_ = auVar171._12_4_ * auVar182._12_4_;
          auVar171 = NEON_frecps(auVar172,auVar166,4);
          fVar96 = auVar172._0_4_ * auVar171._0_4_;
          fVar105 = auVar172._4_4_ * auVar171._4_4_;
          fVar106 = auVar172._8_4_ * auVar171._8_4_;
          fVar108 = auVar172._12_4_ * auVar171._12_4_;
          auVar99._0_4_ = fVar61;
          uVar47 = auVar99._0_8_ & 0xffffffff;
          auVar173._4_4_ = fVar60;
          auVar173._0_4_ = uVar7;
          auVar173._8_4_ = uVar20;
          auVar173._12_4_ = 0;
          auVar183._4_4_ = auVar97._4_4_;
          auVar183._0_4_ =
               (int)(CONCAT17(extraout_var_05,
                              CONCAT16(extraout_var_04,
                                       CONCAT15(extraout_var_03,CONCAT14(extraout_var_02,uVar7))))
                    >> 0x20);
          auVar183._8_4_ =
               (int)(CONCAT17(bVar88,CONCAT16(bVar86,CONCAT15(bVar84,CONCAT14(bVar82,uVar20)))) >>
                    0x20);
          auVar183._12_4_ = 0;
          uVar8 = (undefined2)
                  (CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05)) >> 8);
          uVar65 = (undefined1)uVar47;
          uVar67 = (undefined1)(uVar47 >> 8);
          uVar69 = (undefined1)(uVar47 >> 0x10);
          uVar72 = (undefined1)(uVar47 >> 0x18);
          uVar180 = a64_TBL(ZEXT816(0),auVar183,DAT_0388a880);
          uVar178 = a64_TBL(ZEXT816(0),auVar183,DAT_0388a6f0);
          auVar9[2] = extraout_var_08;
          auVar9._0_2_ = uVar8;
          auVar9[3] = extraout_var_09;
          auVar9[4] = uVar65;
          auVar9[5] = uVar67;
          auVar9[6] = uVar69;
          auVar9[7] = uVar72;
          auVar9[8] = bVar119;
          auVar9[9] = bVar120;
          auVar9[10] = bVar121;
          auVar9[0xb] = bVar122;
          auVar9._12_4_ = 0;
          uVar190 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6d8);
          auVar10[2] = extraout_var_08;
          auVar10._0_2_ = uVar8;
          auVar10[3] = extraout_var_09;
          auVar10[4] = uVar65;
          auVar10[5] = uVar67;
          auVar10[6] = uVar69;
          auVar10[7] = uVar72;
          auVar10[8] = bVar119;
          auVar10[9] = bVar120;
          auVar10[10] = bVar121;
          auVar10[0xb] = bVar122;
          auVar10._12_4_ = 0;
          uVar179 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a680);
          fVar187 = (float)((ulong)uVar179 >> 0x20);
          auVar11[2] = extraout_var_08;
          auVar11._0_2_ = uVar8;
          auVar11[3] = extraout_var_09;
          auVar11[4] = uVar65;
          auVar11[5] = uVar67;
          auVar11[6] = uVar69;
          auVar11[7] = uVar72;
          auVar11[8] = bVar119;
          auVar11[9] = bVar120;
          auVar11[10] = bVar121;
          auVar11[0xb] = bVar122;
          auVar11._12_4_ = 0;
          uVar191 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a880);
          auVar12[2] = extraout_var_08;
          auVar12._0_2_ = uVar8;
          auVar12[3] = extraout_var_09;
          auVar12[4] = uVar65;
          auVar12[5] = uVar67;
          auVar12[6] = uVar69;
          auVar12[7] = uVar72;
          auVar12[8] = bVar119;
          auVar12[9] = bVar120;
          auVar12[10] = bVar121;
          auVar12[0xb] = bVar122;
          auVar12._12_4_ = 0;
          uVar36 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6f0);
          uVar149 = a64_TBL(ZEXT816(0),auVar173,DAT_0388a880);
          fVar189 = (float)((ulong)uVar190 >> 0x20);
          uVar40 = a64_TBL(ZEXT816(0),auVar173,DAT_0388a6f0);
          uVar39 = a64_TBL(ZEXT816(0),auVar183,DAT_0388a680);
          uVar181 = a64_TBL(ZEXT816(0),auVar183,DAT_0388a6d8);
          uVar170 = a64_TBL(ZEXT816(0),auVar173,DAT_0388a6d8);
          uVar169 = a64_TBL(ZEXT816(0),auVar173,DAT_0388a680);
          fVar104 = (float)((ulong)uVar180 >> 0x20);
          fVar107 = (float)((ulong)uVar178 >> 0x20);
          fVar60 = (float)((ulong)uVar39 >> 0x20);
          fVar192 = (float)((ulong)uVar191 >> 0x20);
          fVar61 = (float)((ulong)uVar181 >> 0x20);
          fVar193 = (float)((ulong)uVar36 >> 0x20);
          fVar158 = (float)((ulong)uVar149 >> 0x20);
          fVar159 = (float)((ulong)uVar40 >> 0x20);
          fVar37 = (float)((ulong)uVar169 >> 0x20);
          fVar35 = (float)((ulong)uVar170 >> 0x20);
          fVar177 = fVar96 * ((float)uVar180 * (float)uVar179 - (float)uVar191 * (float)uVar39);
          fVar184 = fVar105 * (fVar104 * fVar187 - fVar192 * fVar60);
          fVar185 = fVar106 * ((float)uVar178 * (float)uVar190 - (float)uVar36 * (float)uVar181);
          fVar186 = fVar108 * (fVar107 * fVar189 - fVar193 * fVar61);
          fVar109 = fVar96 * ((float)uVar191 * (float)uVar169 - (float)uVar149 * (float)uVar179);
          fVar187 = fVar105 * (fVar192 * fVar37 - fVar158 * fVar187);
          fVar192 = fVar106 * ((float)uVar36 * (float)uVar170 - (float)uVar40 * (float)uVar190);
          fVar189 = fVar108 * (fVar193 * fVar35 - fVar159 * fVar189);
          fVar96 = fVar96 * ((float)uVar39 * (float)uVar149 - (float)uVar180 * (float)uVar169);
          fVar105 = fVar105 * (fVar60 * fVar158 - fVar104 * fVar37);
          fVar106 = fVar106 * ((float)uVar181 * (float)uVar40 - (float)uVar178 * (float)uVar170);
          fVar108 = fVar108 * (fVar61 * fVar159 - fVar107 * fVar35);
          iVar43 = -(uint)(auVar166._0_4_ == 0.0);
          iVar13 = -(uint)(auVar166._0_4_ == 0.0);
          iVar14 = -(uint)(auVar166._0_4_ == 0.0);
          iVar15 = -(uint)(auVar166._0_4_ == 0.0);
          fVar60 = (-(fVar177 * fVar62) - fVar109 * fVar136) - fVar96 * fVar141;
          fVar61 = (-(fVar184 * fVar62) - fVar187 * fVar136) - fVar105 * fVar141;
          fVar37 = (-(fVar185 * fVar62) - fVar192 * fVar136) - fVar106 * fVar141;
          fVar62 = (-(fVar186 * fVar62) - fVar189 * fVar136) - fVar108 * fVar141;
          bVar127 = ~(byte)iVar43;
          bVar132 = ~(byte)((uint)iVar43 >> 8);
          bVar133 = ~(byte)((uint)iVar43 >> 0x10);
          bVar134 = ~(byte)((uint)iVar43 >> 0x18);
          bVar135 = ~(byte)iVar13;
          bVar137 = ~(byte)((uint)iVar13 >> 8);
          bVar138 = ~(byte)((uint)iVar13 >> 0x10);
          bVar139 = ~(byte)((uint)iVar13 >> 0x18);
          bVar140 = ~(byte)iVar14;
          bVar142 = ~(byte)((uint)iVar14 >> 8);
          bVar143 = ~(byte)((uint)iVar14 >> 0x10);
          bVar144 = ~(byte)((uint)iVar14 >> 0x18);
          bVar145 = ~(byte)iVar15;
          bVar146 = ~(byte)((uint)iVar15 >> 8);
          bVar147 = ~(byte)((uint)iVar15 >> 0x10);
          bVar148 = ~(byte)((uint)iVar15 >> 0x18);
          auVar153[0] = SUB41(fVar177,0) & bVar127;
          auVar153[1] = (byte)((uint)fVar177 >> 8) & bVar132;
          auVar153[2] = (byte)((uint)fVar177 >> 0x10) & bVar133;
          auVar153[3] = (byte)((uint)fVar177 >> 0x18) & bVar134;
          auVar153[4] = SUB41(fVar184,0) & bVar135;
          auVar153[5] = (byte)((uint)fVar184 >> 8) & bVar137;
          auVar153[6] = (byte)((uint)fVar184 >> 0x10) & bVar138;
          auVar153[7] = (byte)((uint)fVar184 >> 0x18) & bVar139;
          auVar153[8] = SUB41(fVar185,0) & bVar140;
          auVar153[9] = (byte)((uint)fVar185 >> 8) & bVar142;
          auVar153[10] = (byte)((uint)fVar185 >> 0x10) & bVar143;
          auVar153[0xb] = (byte)((uint)fVar185 >> 0x18) & bVar144;
          auVar153[0xc] = SUB41(fVar186,0) & bVar145;
          auVar153[0xd] = (byte)((uint)fVar186 >> 8) & bVar146;
          auVar153[0xe] = (byte)((uint)fVar186 >> 0x10) & bVar147;
          auVar153[0xf] = (byte)((uint)fVar186 >> 0x18) & bVar148;
          bVar63 = SUB41(fVar109,0) & bVar127;
          bVar64 = (byte)((uint)fVar109 >> 8) & bVar132;
          bVar66 = (byte)((uint)fVar109 >> 0x10) & bVar133;
          bVar68 = (byte)((uint)fVar109 >> 0x18) & bVar134;
          bVar71 = SUB41(fVar187,0) & bVar135;
          bVar74 = (byte)((uint)fVar187 >> 8) & bVar137;
          bVar77 = (byte)((uint)fVar187 >> 0x10) & bVar138;
          bVar80 = (byte)((uint)fVar187 >> 0x18) & bVar139;
          bVar82 = SUB41(fVar192,0) & bVar140;
          bVar84 = (byte)((uint)fVar192 >> 8) & bVar142;
          bVar86 = (byte)((uint)fVar192 >> 0x10) & bVar143;
          bVar88 = (byte)((uint)fVar192 >> 0x18) & bVar144;
          bVar89 = SUB41(fVar189,0) & bVar145;
          bVar91 = (byte)((uint)fVar189 >> 8) & bVar146;
          bVar93 = (byte)((uint)fVar189 >> 0x10) & bVar147;
          bVar95 = (byte)((uint)fVar189 >> 0x18) & bVar148;
          bVar110 = SUB41(fVar96,0) & bVar127;
          bVar111 = (byte)((uint)fVar96 >> 8) & bVar132;
          bVar112 = (byte)((uint)fVar96 >> 0x10) & bVar133;
          bVar113 = (byte)((uint)fVar96 >> 0x18) & bVar134;
          bVar114 = SUB41(fVar105,0) & bVar135;
          bVar116 = (byte)((uint)fVar105 >> 8) & bVar137;
          bVar117 = (byte)((uint)fVar105 >> 0x10) & bVar138;
          bVar118 = (byte)((uint)fVar105 >> 0x18) & bVar139;
          bVar119 = SUB41(fVar106,0) & bVar140;
          bVar120 = (byte)((uint)fVar106 >> 8) & bVar142;
          bVar121 = (byte)((uint)fVar106 >> 0x10) & bVar143;
          bVar122 = (byte)((uint)fVar106 >> 0x18) & bVar144;
          bVar123 = SUB41(fVar108,0) & bVar145;
          bVar124 = (byte)((uint)fVar108 >> 8) & bVar146;
          bVar125 = (byte)((uint)fVar108 >> 0x10) & bVar147;
          bVar126 = (byte)((uint)fVar108 >> 0x18) & bVar148;
          auVar101[0] = SUB41(fVar60,0) & bVar127;
          auVar101[1] = (byte)((uint)fVar60 >> 8) & bVar132;
          auVar101[2] = (byte)((uint)fVar60 >> 0x10) & bVar133;
          auVar101[3] = (byte)((uint)fVar60 >> 0x18) & bVar134;
          auVar101[4] = SUB41(fVar61,0) & bVar135;
          auVar101[5] = (byte)((uint)fVar61 >> 8) & bVar137;
          auVar101[6] = (byte)((uint)fVar61 >> 0x10) & bVar138;
          auVar101[7] = (byte)((uint)fVar61 >> 0x18) & bVar139;
          auVar101[8] = SUB41(fVar37,0) & bVar140;
          auVar101[9] = (byte)((uint)fVar37 >> 8) & bVar142;
          auVar101[10] = (byte)((uint)fVar37 >> 0x10) & bVar143;
          auVar101[0xb] = (byte)((uint)fVar37 >> 0x18) & bVar144;
          auVar101[0xc] = SUB41(fVar62,0) & bVar145;
          auVar101[0xd] = (byte)((uint)fVar62 >> 8) & bVar146;
          auVar101[0xe] = (byte)((uint)fVar62 >> 0x10) & bVar147;
          auVar101[0xf] = (byte)((uint)fVar62 >> 0x18) & bVar148;
        }
        fVar106 = auVar153._0_4_;
        fVar136 = auVar153._4_4_ * local_e0;
        fVar141 = auVar153._8_4_ * local_e0;
        fVar96 = auVar153._12_4_ * local_e0;
        fVar60 = (float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar82))) * fVar188;
        fVar61 = (float)CONCAT13(bVar95,CONCAT12(bVar93,CONCAT11(bVar91,bVar89))) * fVar188;
        fVar62 = (float)CONCAT13(bVar126,CONCAT12(bVar125,CONCAT11(bVar124,bVar123))) *
                 auVar98._0_4_;
        local_e0 = fVar106 * local_e0 +
                   (float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar63))) * fVar188 +
                   (float)CONCAT13(bVar113,CONCAT12(bVar112,CONCAT11(bVar111,bVar110))) *
                   auVar98._0_4_ + auVar101._0_4_;
        fVar188 = fVar136 + (float)CONCAT13(bVar80,CONCAT12(bVar77,CONCAT11(bVar74,bVar71))) *
                            fVar188 +
                  (float)CONCAT13(bVar118,CONCAT12(bVar117,CONCAT11(bVar116,bVar114))) *
                  auVar98._0_4_ + auVar101._4_4_;
        auVar98._0_4_ =
             fVar141 + fVar60 +
             (float)CONCAT13(bVar122,CONCAT12(bVar121,CONCAT11(bVar120,bVar119))) * auVar98._0_4_ +
             auVar101._8_4_;
        fVar60 = fVar96 + fVar61 + fVar62 + auVar101._12_4_;
        fVar61 = (float)CONCAT13(bVar80,CONCAT12(bVar77,CONCAT11(bVar74,bVar71)));
        fVar62 = (float)CONCAT13(bVar122,CONCAT12(bVar121,CONCAT11(bVar120,bVar119)));
        auVar97 = NEON_fmov(0x3f800000,4);
        uVar36 = NEON_ext(auVar153._0_8_,
                          CONCAT17(bVar118,CONCAT16(bVar117,CONCAT15(bVar116,CONCAT14(bVar114,
                                                  CONCAT13(bVar113,CONCAT12(bVar112,CONCAT11(bVar111
                                                  ,bVar110))))))),4,1);
        fVar141 = (float)_DAT_03889820 * fVar106 + (float)_DAT_0388a450 * fVar61 +
                  (float)_DAT_03889eb0 * fVar62 + auVar97._0_4_;
        fVar96 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar106 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar61 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar62 + auVar97._4_4_;
        fVar105 = (float)_UNK_03889828 * fVar106 + (float)_UNK_0388a458 * fVar61 +
                  (float)_UNK_03889eb8 * fVar62 + auVar97._8_4_;
        fVar106 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar106 +
                  (float)((ulong)_UNK_0388a458 >> 0x20) * fVar61 +
                  (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar62 + auVar97._12_4_;
        auVar97 = NEON_ext(auVar153,auVar153,8,1);
        fVar61 = (float)uVar36 + (float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar63)));
        fVar136 = (float)((ulong)uVar36 >> 0x20);
        fVar62 = fVar136 + auVar97._0_4_;
        uVar115 = SUB41(fVar62,0);
        uVar70 = (undefined1)((uint)fVar62 >> 8);
        uVar73 = (undefined1)((uint)fVar62 >> 0x10);
        uVar76 = (undefined1)((uint)fVar62 >> 0x18);
        fVar62 = (float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar82))) +
                 (float)CONCAT13(bVar118,CONCAT12(bVar117,CONCAT11(bVar116,bVar114)));
        uVar79 = SUB41(fVar62,0);
        uVar83 = (undefined1)((uint)fVar62 >> 8);
        uVar85 = (undefined1)((uint)fVar62 >> 0x10);
        uVar87 = (undefined1)((uint)fVar62 >> 0x18);
        auVar128._0_4_ =
             (float)uVar36 - (float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar63)));
        auVar128._4_4_ = fVar136 - auVar97._0_4_;
        auVar128._8_4_ =
             (float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar82))) -
             (float)CONCAT13(bVar118,CONCAT12(bVar117,CONCAT11(bVar116,bVar114)));
        auVar128._12_4_ = 0;
        auVar21[4] = uVar115;
        auVar21._0_4_ = fVar61;
        auVar21[5] = uVar70;
        auVar21[6] = uVar73;
        auVar21[7] = uVar76;
        auVar21[8] = uVar79;
        auVar21[9] = uVar83;
        auVar21[10] = uVar85;
        auVar21[0xb] = uVar87;
        auVar21._12_4_ = 0;
        uVar170 = a64_TBL(ZEXT816(0),auVar21,auVar128,DAT_0388a888);
        uVar161 = (undefined1)((ulong)uVar170 >> 0x20);
        uVar162 = (undefined1)((ulong)uVar170 >> 0x28);
        uVar163 = (undefined1)((ulong)uVar170 >> 0x30);
        uVar164 = (undefined1)((ulong)uVar170 >> 0x38);
        auVar22[4] = uVar115;
        auVar22._0_4_ = fVar61;
        auVar22[5] = uVar70;
        auVar22[6] = uVar73;
        auVar22[7] = uVar76;
        auVar22[8] = uVar79;
        auVar22[9] = uVar83;
        auVar22[10] = uVar85;
        auVar22[0xb] = uVar87;
        auVar22._12_4_ = 0;
        uVar36 = a64_TBL(ZEXT816(0),auVar22,auVar128,DAT_0388a710);
        uVar65 = (undefined1)((ulong)uVar36 >> 8);
        uVar67 = (undefined1)((ulong)uVar36 >> 0x10);
        uVar69 = (undefined1)((ulong)uVar36 >> 0x18);
        uVar72 = (undefined1)((ulong)uVar36 >> 0x20);
        uVar75 = (undefined1)((ulong)uVar36 >> 0x28);
        uVar78 = (undefined1)((ulong)uVar36 >> 0x30);
        uVar81 = (undefined1)((ulong)uVar36 >> 0x38);
        auVar23[4] = uVar115;
        auVar23._0_4_ = fVar61;
        auVar23[5] = uVar70;
        auVar23[6] = uVar73;
        auVar23[7] = uVar76;
        auVar23[8] = uVar79;
        auVar23[9] = uVar83;
        auVar23[10] = uVar85;
        auVar23[0xb] = uVar87;
        auVar23._12_4_ = 0;
        uVar39 = a64_TBL(ZEXT816(0),auVar23,auVar128,DAT_0388a758);
        uVar90 = SUB41(fVar141,0);
        uVar92 = (undefined1)((uint)fVar141 >> 8);
        uVar94 = (undefined1)((uint)fVar141 >> 0x10);
        uVar160 = (undefined1)((uint)fVar141 >> 0x18);
        auVar24[4] = uVar115;
        auVar24._0_4_ = fVar61;
        auVar24[5] = uVar70;
        auVar24[6] = uVar73;
        auVar24[7] = uVar76;
        auVar24[8] = uVar79;
        auVar24[9] = uVar83;
        auVar24[10] = uVar85;
        auVar24[0xb] = uVar87;
        auVar24._12_4_ = 0;
        uVar40 = a64_TBL(ZEXT816(0),auVar24,auVar128,DAT_0388a880);
        auVar25[4] = uVar115;
        auVar25._0_4_ = fVar61;
        auVar25[5] = uVar70;
        auVar25[6] = uVar73;
        auVar25[7] = uVar76;
        auVar25[8] = uVar79;
        auVar25[9] = uVar83;
        auVar25[10] = uVar85;
        auVar25[0xb] = uVar87;
        auVar25._12_4_ = 0;
        uVar169 = a64_TBL(ZEXT816(0),auVar25,auVar128,DAT_0388a640);
        auVar154._0_4_ = (undefined4)uVar170;
        auVar154._4_4_ = fVar96;
        auVar154._8_8_ = uVar39;
        auVar26[4] = uVar115;
        auVar26._0_4_ = fVar61;
        auVar26[5] = uVar70;
        auVar26[6] = uVar73;
        auVar26[7] = uVar76;
        auVar26[8] = uVar79;
        auVar26[9] = uVar83;
        auVar26[10] = uVar85;
        auVar26[0xb] = uVar87;
        auVar26._12_4_ = 0;
        uVar170 = a64_TBL(ZEXT816(0),auVar26,auVar128,DAT_0388a700);
        auVar27[4] = uVar115;
        auVar27._0_4_ = fVar61;
        auVar27[5] = uVar70;
        auVar27[6] = uVar73;
        auVar27[7] = uVar76;
        auVar27[8] = uVar79;
        auVar27[9] = uVar83;
        auVar27[10] = uVar85;
        auVar27[0xb] = uVar87;
        auVar27._12_4_ = 0;
        uVar39 = a64_TBL(ZEXT816(0),auVar27,auVar128,DAT_0388a590);
        auVar129._4_4_ = fVar96;
        auVar129._0_4_ = fVar96;
        auVar129._8_4_ = fVar96;
        auVar129._12_4_ = fVar96;
        uVar115 = SUB41(fVar105,0);
        uVar70 = (undefined1)((uint)fVar105 >> 8);
        uVar73 = (undefined1)((uint)fVar105 >> 0x10);
        uVar76 = (undefined1)((uint)fVar105 >> 0x18);
        auVar167._0_8_ = CONCAT44(-(uint)(fVar141 <= fVar96),-(uint)(fVar141 <= fVar96));
        auVar167._8_4_ = -(uint)(fVar141 <= fVar96);
        auVar167._12_4_ = -(uint)(fVar141 <= fVar96);
        auVar174._8_8_ = auVar167._8_8_;
        auVar174._0_8_ = auVar167._0_8_;
        auVar33[4] = uVar161;
        auVar33._0_4_ = fVar141;
        auVar33[5] = uVar162;
        auVar33[6] = uVar163;
        auVar33[7] = uVar164;
        auVar33[8] = (char)uVar36;
        auVar33[9] = uVar65;
        auVar33[10] = uVar67;
        auVar33[0xb] = uVar69;
        auVar33[0xc] = uVar72;
        auVar33[0xd] = uVar75;
        auVar33[0xe] = uVar78;
        auVar33[0xf] = uVar81;
        auVar168[4] = uVar161;
        auVar168._0_4_ = fVar141;
        auVar168[5] = uVar162;
        auVar168[6] = uVar163;
        auVar168[7] = uVar164;
        auVar168[8] = (char)uVar36;
        auVar168[9] = uVar65;
        auVar168[10] = uVar67;
        auVar168[0xb] = uVar69;
        auVar168[0xc] = uVar72;
        auVar168[0xd] = uVar75;
        auVar168[0xe] = uVar78;
        auVar168[0xf] = uVar81;
        auVar168 = auVar168 ^ (auVar33 ^ auVar154) & auVar167;
        auVar28[4] = uVar90;
        auVar28._0_4_ = fVar141;
        auVar28[5] = uVar92;
        auVar28[6] = uVar94;
        auVar28[7] = uVar160;
        auVar28[8] = uVar90;
        auVar28[9] = uVar92;
        auVar28[10] = uVar94;
        auVar28[0xb] = uVar160;
        auVar28[0xc] = uVar90;
        auVar28[0xd] = uVar92;
        auVar28[0xe] = uVar94;
        auVar28[0xf] = uVar160;
        auVar175[4] = uVar90;
        auVar175._0_4_ = fVar141;
        auVar175[5] = uVar92;
        auVar175[6] = uVar94;
        auVar175[7] = uVar160;
        auVar175[8] = uVar90;
        auVar175[9] = uVar92;
        auVar175[10] = uVar94;
        auVar175[0xb] = uVar160;
        auVar175[0xc] = uVar90;
        auVar175[0xd] = uVar92;
        auVar175[0xe] = uVar94;
        auVar175[0xf] = uVar160;
        auVar175 = auVar175 ^ (auVar28 ^ auVar129) & auVar174;
        auVar130._0_8_ =
             CONCAT44(-(uint)(auVar175._4_4_ <= fVar105),-(uint)(auVar175._0_4_ <= fVar105));
        auVar130._8_4_ = -(uint)(auVar175._8_4_ <= fVar105);
        auVar130._12_4_ = -(uint)(auVar175._12_4_ <= fVar105);
        auVar155._8_8_ = auVar130._8_8_;
        auVar155._0_8_ = auVar130._0_8_;
        auVar34[8] = uVar115;
        auVar34._0_8_ = uVar40;
        auVar34[9] = uVar70;
        auVar34[10] = uVar73;
        auVar34[0xb] = uVar76;
        auVar34[0xc] = (char)((ulong)uVar169 >> 0x20);
        auVar34[0xd] = (char)((ulong)uVar169 >> 0x28);
        auVar34[0xe] = (char)((ulong)uVar169 >> 0x30);
        auVar34[0xf] = (char)((ulong)uVar169 >> 0x38);
        auVar168 = auVar168 ^ (auVar168 ^ auVar34) & auVar130;
        auVar29[4] = uVar115;
        auVar29._0_4_ = fVar105;
        auVar29[5] = uVar70;
        auVar29[6] = uVar73;
        auVar29[7] = uVar76;
        auVar29[8] = uVar115;
        auVar29[9] = uVar70;
        auVar29[10] = uVar73;
        auVar29[0xb] = uVar76;
        auVar29[0xc] = uVar115;
        auVar29[0xd] = uVar70;
        auVar29[0xe] = uVar73;
        auVar29[0xf] = uVar76;
        auVar175 = auVar175 ^ (auVar175 ^ auVar29) & auVar155;
        auVar41._8_8_ = uStack_78;
        auVar41._0_8_ = local_80;
        auVar102._0_4_ = -(uint)(auVar175._0_4_ <= fVar106);
        auVar102._4_4_ = -(uint)(auVar175._4_4_ <= fVar106);
        auVar102._8_4_ = -(uint)(auVar175._8_4_ <= fVar106);
        auVar102._12_4_ = -(uint)(auVar175._12_4_ <= fVar106);
        auVar38._8_4_ = (int)uVar39;
        auVar38._0_8_ = uVar170;
        auVar38._12_4_ = fVar106;
        auVar168 = auVar168 ^ (auVar168 ^ auVar38) & auVar102;
        fVar96 = auVar168._0_4_;
        fVar61 = fVar96 * fVar96;
        fVar106 = auVar168._4_4_;
        fVar62 = fVar106 * fVar106;
        uVar65 = (undefined1)((uint)fVar62 >> 8);
        uVar67 = (undefined1)((uint)fVar62 >> 0x10);
        uVar69 = (undefined1)((uint)fVar62 >> 0x18);
        fVar108 = auVar168._8_4_;
        fVar136 = fVar108 * fVar108;
        uVar72 = (undefined1)((uint)fVar136 >> 8);
        uVar75 = (undefined1)((uint)fVar136 >> 0x10);
        uVar78 = (undefined1)((uint)fVar136 >> 0x18);
        fVar109 = auVar168._12_4_;
        fVar141 = fVar109 * fVar109;
        uVar81 = (undefined1)((uint)fVar141 >> 8);
        uVar115 = (undefined1)((uint)fVar141 >> 0x10);
        uVar70 = (undefined1)((uint)fVar141 >> 0x18);
        auVar30[4] = SUB41(fVar62,0);
        auVar30._0_4_ = fVar61;
        auVar30[5] = uVar65;
        auVar30[6] = uVar67;
        auVar30[7] = uVar69;
        auVar30[8] = SUB41(fVar136,0);
        auVar30[9] = uVar72;
        auVar30[10] = uVar75;
        auVar30[0xb] = uVar78;
        auVar30[0xc] = SUB41(fVar141,0);
        auVar30[0xd] = uVar81;
        auVar30[0xe] = uVar115;
        auVar30[0xf] = uVar70;
        auVar31[4] = SUB41(fVar62,0);
        auVar31._0_4_ = fVar61;
        auVar31[5] = uVar65;
        auVar31[6] = uVar67;
        auVar31[7] = uVar69;
        auVar31[8] = SUB41(fVar136,0);
        auVar31[9] = uVar72;
        auVar31[10] = uVar75;
        auVar31[0xb] = uVar78;
        auVar31[0xc] = SUB41(fVar141,0);
        auVar31[0xd] = uVar81;
        auVar31[0xe] = uVar115;
        auVar31[0xf] = uVar70;
        auVar97 = NEON_ext(auVar30,auVar31,8,1);
        fVar61 = auVar97._0_4_ + fVar61;
        fVar62 = auVar97._4_4_ + fVar62;
        fVar136 = fVar61 + fVar62;
        fVar61 = fVar61 + fVar62;
        uVar65 = SUB41(fVar61,0);
        uVar67 = (undefined1)((uint)fVar61 >> 8);
        uVar69 = (undefined1)((uint)fVar61 >> 0x10);
        uVar72 = (undefined1)((uint)fVar61 >> 0x18);
        auVar32[4] = uVar65;
        auVar32._0_4_ = fVar136;
        auVar32[5] = uVar67;
        auVar32[6] = uVar69;
        auVar32[7] = uVar72;
        auVar32[8] = SUB41(fVar136,0);
        auVar32[9] = (char)((uint)fVar136 >> 8);
        auVar32[10] = (char)((uint)fVar136 >> 0x10);
        auVar32[0xb] = (char)((uint)fVar136 >> 0x18);
        auVar32[0xc] = uVar65;
        auVar32[0xd] = uVar67;
        auVar32[0xe] = uVar69;
        auVar32[0xf] = uVar72;
        auVar97 = NEON_frsqrte(auVar32,4);
        auVar156._0_4_ = auVar97._0_4_ * fVar136;
        auVar156._4_4_ = auVar97._4_4_ * fVar61;
        auVar156._8_4_ = auVar97._8_4_ * fVar136;
        uVar8 = (undefined2)(CONCAT15(uVar67,CONCAT14(uVar65,fVar136)) >> 0x20);
        auVar156._12_4_ = auVar97._12_4_ * (float)CONCAT13(uVar72,CONCAT12(uVar69,uVar8));
        auVar171 = NEON_frsqrts(auVar97,auVar156,4);
        auVar131._0_4_ = auVar97._0_4_ * auVar171._0_4_;
        auVar131._4_4_ = auVar97._4_4_ * auVar171._4_4_;
        auVar131._8_4_ = auVar97._8_4_ * auVar171._8_4_;
        auVar131._12_4_ = auVar97._12_4_ * auVar171._12_4_;
        auVar157._0_4_ = fVar136 * auVar131._0_4_;
        auVar157._4_4_ = fVar61 * auVar131._4_4_;
        auVar157._8_4_ = fVar136 * auVar131._8_4_;
        auVar157._12_4_ = (float)CONCAT13(uVar72,CONCAT12(uVar69,uVar8)) * auVar131._12_4_;
        iVar43 = -(uint)(fVar136 == 0.0);
        iVar13 = -(uint)(fVar61 == 0.0);
        iVar14 = -(uint)(fVar136 == 0.0);
        iVar15 = -(uint)((float)CONCAT13(uVar72,CONCAT12(uVar69,uVar8)) == 0.0);
        auVar97 = NEON_frsqrts(auVar131,auVar157,4);
        fVar96 = auVar131._0_4_ * auVar97._0_4_ * fVar96;
        fVar106 = auVar131._4_4_ * auVar97._4_4_ * fVar106;
        fVar108 = auVar131._8_4_ * auVar97._8_4_ * fVar108;
        fVar109 = auVar131._12_4_ * auVar97._12_4_ * fVar109;
        uVar36 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a6c8);
        fVar105 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                  CONCAT12((byte)((uint)fVar96 >> 0x10) &
                                           ~(byte)((uint)iVar43 >> 0x10),
                                           CONCAT11((byte)((uint)fVar96 >> 8) &
                                                    ~(byte)((uint)iVar43 >> 8),
                                                    SUB41(fVar96,0) & ~(byte)iVar43)));
        auVar103._0_8_ =
             CONCAT17((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                      CONCAT16((byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                               CONCAT15((byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                        CONCAT14(SUB41(fVar106,0) & ~(byte)iVar13,fVar105))));
        auVar103[8] = SUB41(fVar108,0) & ~(byte)iVar14;
        auVar103[9] = (byte)((uint)fVar108 >> 8) & ~(byte)((uint)iVar14 >> 8);
        auVar103[10] = (byte)((uint)fVar108 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
        auVar103[0xb] = (byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
        auVar103[0xc] = SUB41(fVar109,0) & ~(byte)iVar15;
        auVar103[0xd] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar15 >> 8);
        auVar103[0xe] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
        auVar103[0xf] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
        uVar40 = a64_TBL(ZEXT816(0),auVar103,DAT_0388a680);
        uVar178 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a680);
        uVar170 = a64_TBL(ZEXT816(0),auVar103,DAT_0388a580);
        uVar39 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a580);
        fVar141 = (float)uVar40 * (float)uVar36;
        fVar61 = (float)((ulong)uVar40 >> 0x20);
        fVar96 = fVar61 * (float)((ulong)uVar36 >> 0x20);
        fVar106 = (float)((ulong)auVar103._0_8_ >> 0x20);
        uVar169 = a64_TBL(ZEXT816(0),auVar103,DAT_0388a880);
        fVar109 = (float)((ulong)uVar169 >> 0x20);
        uVar36 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a880);
        uVar179 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a790);
        fVar108 = (float)((ulong)uVar170 >> 0x20);
        auVar176._8_8_ = local_80;
        auVar176._0_8_ = local_80;
        uVar180 = a64_TBL(ZEXT816(0),auVar176,DAT_0388a648);
        fVar62 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar136 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        auVar182._0_4_ =
             ((float)local_80 * (float)uVar170 + (float)_DAT_03889ad0 * fVar105 * (float)uVar39 +
             (float)_DAT_03889ad0 * (float)uVar169 * (float)uVar178) - (float)uVar40 * (float)uVar36
        ;
        auVar182._4_4_ =
             ((float)((ulong)local_80 >> 0x20) * fVar108 +
              fVar62 * fVar106 * (float)((ulong)uVar39 >> 0x20) +
             fVar62 * fVar109 * (float)((ulong)uVar178 >> 0x20)) -
             fVar61 * (float)((ulong)uVar36 >> 0x20);
        auVar182._8_4_ =
             ((float)uStack_78 * (float)uVar170 + (float)_UNK_03889ad8 * fVar141 +
             (float)_UNK_03889ad8 * fVar105 * (float)uVar180) - (float)uVar169 * (float)uVar179;
        auVar182._12_4_ =
             ((float)((ulong)uStack_78 >> 0x20) * fVar108 +
              fVar136 * (float)CONCAT13((char)((uint)fVar96 >> 0x18),
                                        CONCAT12((char)((uint)fVar96 >> 0x10),
                                                 (short)(CONCAT15((char)((uint)fVar96 >> 8),
                                                                  CONCAT14(SUB41(fVar96,0),fVar141))
                                                        >> 0x20))) +
             fVar136 * fVar106 * (float)((ulong)uVar180 >> 0x20)) -
             fVar109 * (float)((ulong)uVar179 >> 0x20);
      }
      *(undefined1 *)(local_88 + 0x1c) = 1;
      local_88[0x19] = auVar182._8_8_;
      local_88[0x18] = auVar182._0_8_;
      local_88[0x1b] = CONCAT44(fVar60,auVar98._0_4_);
      local_88[0x1a] = CONCAT44(fVar188,local_e0);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))(local_90);
      }
      if (local_88 != (long *)0x0) {
        lVar46 = local_88[0xb];
        piVar1 = (int *)(lVar46 + 0xc);
        do {
          iVar43 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar43 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar43 + -1 == 0) {
          *(undefined8 *)(lVar46 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
  return;
LAB_02bd8010:
  if (uVar48 < 2) {
    uVar45 = uVar51 & uVar45;
  }
  else if (uVar47 <= uVar45) {
    uVar52 = 0;
    if (uVar47 != 0) {
      uVar52 = uVar45 / uVar47;
    }
    uVar45 = uVar45 - uVar52 * uVar47;
  }
  plVar44 = *(long **)(lVar49 + uVar45 * 8);
  do {
    plVar54 = plVar44;
    plVar44 = (long *)*plVar54;
  } while ((long *)*plVar54 != plVar55);
  if (plVar54 == (long *)(param_6 + 0x130)) {
LAB_02bd8080:
    if (*plVar55 != 0) {
      uVar52 = *(ulong *)(*plVar55 + 8);
      if (uVar48 < 2) {
        uVar52 = uVar52 & uVar51;
      }
      else if (uVar47 <= uVar52) {
        uVar53 = 0;
        if (uVar47 != 0) {
          uVar53 = uVar52 / uVar47;
        }
        uVar52 = uVar52 - uVar53 * uVar47;
      }
      if (uVar52 == uVar45) goto LAB_02bd80c0;
    }
    *(undefined8 *)(lVar49 + uVar45 * 8) = 0;
  }
  else {
    uVar52 = plVar54[1];
    if (uVar48 < 2) {
      uVar52 = uVar52 & uVar51;
    }
    else if (uVar47 <= uVar52) {
      uVar53 = 0;
      if (uVar47 != 0) {
        uVar53 = uVar52 / uVar47;
      }
      uVar52 = uVar52 - uVar53 * uVar47;
    }
    if (uVar52 != uVar45) goto LAB_02bd8080;
  }
LAB_02bd80c0:
  lVar49 = *plVar55;
  if (lVar49 != 0) {
    uVar52 = *(ulong *)(lVar49 + 8);
    if (uVar48 < 2) {
      uVar52 = uVar52 & uVar51;
    }
    else if (uVar47 <= uVar52) {
      uVar48 = 0;
      if (uVar47 != 0) {
        uVar48 = uVar52 / uVar47;
      }
      uVar52 = uVar52 - uVar48 * uVar47;
    }
    if (uVar52 != uVar45) {
      *(long **)(*(long *)(param_6 + 0x108) + uVar52 * 8) = plVar54;
      lVar49 = *plVar55;
    }
  }
  *plVar54 = lVar49;
  *plVar55 = 0;
  *(long *)(param_6 + 0x150) = *(long *)(param_6 + 0x150) + -1;
  plVar44 = (long *)plVar55[3];
  if (plVar44 != (long *)0x0) {
    lVar49 = plVar44[0xb];
    piVar1 = (int *)(lVar49 + 0xc);
    do {
      iVar43 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar43 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar43 + -1 == 0) {
      *(undefined8 *)(lVar49 + 0x18) = 0;
      (**(code **)(*plVar44 + 0x20))();
    }
  }
  plVar44 = *(long **)(param_6 + 0x138);
  uVar47 = (**(code **)(*plVar44 + 0xc0))(plVar44);
  if ((uVar47 & 1) != 0) {
    if (*(char *)(lVar46 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar46 + 0x38d488) = 1;
      *(undefined8 *)(lVar46 + 0x38d478) = 0;
      *(undefined8 *)(lVar46 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar46 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar46 + 0x38d480)) {
      FUN_02bcc824(plVar44,plVar55,0x20,8);
      goto LAB_02bd7f14;
    }
  }
  (**(code **)(*plVar44 + 0x18))(plVar44,plVar55,0x20,8);
LAB_02bd7f14:
  puVar56 = puVar56 + 1;
  if (puVar56 == puVar57) goto LAB_02bd8210;
  uVar47 = *(ulong *)(param_6 + 0x110);
  goto joined_r0x02bd7ef0;
LAB_02bd8210:
  puVar56 = *(ulong **)(param_6 + 0x218);
LAB_02bd8214:
  *(undefined1 *)(param_6 + 0x262) = 0;
  *(ulong **)(param_6 + 0x220) = puVar56;
  goto LAB_02bd821c;
LAB_02bd83f8:
  if (uVar45 < 2) {
    uVar47 = uVar51 & uVar47;
  }
  else if (uVar48 <= uVar47) {
    uVar52 = 0;
    if (uVar48 != 0) {
      uVar52 = uVar47 / uVar48;
    }
    uVar47 = uVar47 - uVar52 * uVar48;
  }
  plVar44 = *(long **)(lVar46 + uVar47 * 8);
  do {
    plVar54 = plVar44;
    plVar44 = (long *)*plVar54;
  } while ((long *)*plVar54 != plVar55);
  if (plVar54 == (long *)(param_6 + 0x1b8)) {
LAB_02bd8468:
    if (*plVar55 != 0) {
      uVar52 = *(ulong *)(*plVar55 + 8);
      if (uVar45 < 2) {
        uVar52 = uVar52 & uVar51;
      }
      else if (uVar48 <= uVar52) {
        uVar53 = 0;
        if (uVar48 != 0) {
          uVar53 = uVar52 / uVar48;
        }
        uVar52 = uVar52 - uVar53 * uVar48;
      }
      if (uVar52 == uVar47) goto LAB_02bd84a8;
    }
    *(undefined8 *)(lVar46 + uVar47 * 8) = 0;
  }
  else {
    uVar52 = plVar54[1];
    if (uVar45 < 2) {
      uVar52 = uVar52 & uVar51;
    }
    else if (uVar48 <= uVar52) {
      uVar53 = 0;
      if (uVar48 != 0) {
        uVar53 = uVar52 / uVar48;
      }
      uVar52 = uVar52 - uVar53 * uVar48;
    }
    if (uVar52 != uVar47) goto LAB_02bd8468;
  }
LAB_02bd84a8:
  lVar46 = *plVar55;
  if (lVar46 != 0) {
    uVar52 = *(ulong *)(lVar46 + 8);
    if (uVar45 < 2) {
      uVar52 = uVar52 & uVar51;
    }
    else if (uVar48 <= uVar52) {
      uVar45 = 0;
      if (uVar48 != 0) {
        uVar45 = uVar52 / uVar48;
      }
      uVar52 = uVar52 - uVar45 * uVar48;
    }
    if (uVar52 != uVar47) {
      *(long **)(*(long *)(param_6 + 400) + uVar52 * 8) = plVar54;
      lVar46 = *plVar55;
    }
  }
  *plVar54 = lVar46;
  *plVar55 = 0;
  *(long *)(param_6 + 0x1d8) = *(long *)(param_6 + 0x1d8) + -1;
  plVar44 = (long *)plVar55[3];
  if (plVar44 != (long *)0x0) {
    lVar46 = plVar44[0xb];
    piVar1 = (int *)(lVar46 + 0xc);
    do {
      iVar43 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar43 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar43 + -1 == 0) {
      *(undefined8 *)(lVar46 + 0x18) = 0;
      (**(code **)(*plVar44 + 0x20))();
    }
  }
  plVar44 = *(long **)(param_6 + 0x1c0);
  uVar47 = (**(code **)(*plVar44 + 0xc0))(plVar44);
  if ((uVar47 & 1) != 0) {
    lVar46 = tpidr_el0;
    if (*(char *)(lVar46 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar46 + 0x38d488) = 1;
      *(undefined8 *)(lVar46 + 0x38d478) = 0;
      *(undefined8 *)(lVar46 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar46 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar46 + 0x38d480)) {
      FUN_02bcc824(plVar44,plVar55,0x20,8);
      goto LAB_02bd82e8;
    }
  }
  (**(code **)(*plVar44 + 0x18))(plVar44,plVar55,0x20,8);
LAB_02bd82e8:
  puVar58 = puVar58 + 1;
  if (puVar58 == puVar59) goto LAB_02bd8628;
  goto LAB_02bd82f8;
}


