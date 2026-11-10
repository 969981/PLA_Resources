/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b8dc64; name: FUN_01b8dc64
 */


undefined8
FUN_01b8dc64(int *param_1,undefined8 *param_2,undefined8 param_3,short *param_4,uint param_5)

{
  int *piVar1;
  undefined8 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 uStack_238;
  undefined8 *local_230;
  undefined8 uStack_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  long *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  long *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  long *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  long *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  long local_70;
  undefined1 local_68;
  long *local_58;
  
  if (((param_5 & 1) == 0) || ((char)param_1[4] == '\0')) {
    bVar6 = false;
  }
  else {
    local_208 = 10;
    local_218 = 0;
    uStack_210 = 0;
    local_204 = 0;
    local_1fc = 0;
    local_1f4 = 0;
    local_1ec = 0;
    local_1e4 = 0;
    local_1dc = 0;
    local_1d4 = 0;
    local_1cc = 0;
    local_1c4 = 0x3f80000000000001;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_c8 = 0;
    local_1b8 = &DAT_cbf29ce484222645;
    local_1b0 = &DAT_03996322;
    local_198 = &DAT_cbf29ce484222645;
    local_190 = &DAT_03996322;
    local_178 = &DAT_cbf29ce484222645;
    local_170 = &DAT_03996322;
    local_158 = &DAT_cbf29ce484222645;
    local_150 = &DAT_03996322;
    local_138 = &DAT_cbf29ce484222645;
    local_130 = &DAT_03996322;
    local_118 = &DAT_cbf29ce484222645;
    local_110 = &DAT_03996322;
    uStack_a4 = 0x3f800000;
    local_68 = 1;
    local_1a8 = 0;
    local_1a0 = (long *)0x0;
    local_188 = 0;
    local_180 = (long *)0x0;
    local_168 = 0;
    local_160 = (long *)0x0;
    local_148 = 0;
    local_140 = (long *)0x0;
    local_128 = 0;
    local_120 = (long *)0x0;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = 0;
    local_100 = (long *)0x0;
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_220 = (undefined8 *)CONCAT62(local_220._2_6_,*param_4);
    local_80 = *(ulong *)(param_4 + 0xd0);
    local_78 = *(long *)(param_4 + 0xd4);
    local_70 = *(long *)(param_4 + 0xd8);
    if (((local_80 & 0xff) == 0) || ((char)param_1[0x70] == '\0')) {
      bVar6 = (char)param_1[0x70] == '\0' && (local_80 & 0xff) == 0;
    }
    else {
      bVar6 = param_1[0x71] == (int)(local_80 >> 0x20);
    }
    bVar6 = (bool)((short)param_1[8] == *param_4 & bVar6 &
                  (*(long *)(param_1 + 0x72) == local_78 && *(long *)(param_1 + 0x74) == local_70));
  }
  iVar7 = *param_1;
  if (iVar7 - 2U < 2) {
    if (bVar6) {
      if (iVar7 != 3) {
        return 0;
      }
      if ((param_1[0x7f] != 0) && (iVar7 = param_1[0x7f] + -1, param_1[0x7f] = iVar7, iVar7 != 0)) {
        return 0;
      }
      iVar7 = 2;
LAB_01b8de4c:
      *param_1 = iVar7;
      return 0;
    }
    FUN_01b91d38(param_1);
    *param_1 = 0;
  }
  else if (iVar7 == 1) {
    lVar13 = *(long *)(param_1 + 0x7c);
    if (lVar13 == 0) {
      *param_1 = 0;
      cVar4 = DAT_00000068;
    }
    else {
      cVar4 = *(char *)(lVar13 + 0x68);
    }
    if (cVar4 == '\0') {
      if (param_1[0x7e] == 0) {
        return 0;
      }
      param_1[0x7e] = param_1[0x7e] + -1;
      return 0;
    }
    plVar11 = *(long **)(lVar13 + 0x70);
    if (plVar11 != (long *)0x0) {
      lVar13 = plVar11[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01b8e7b8;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar9 = (long *)FUN_01b93540(plVar11 + 0x1e);
      if (plVar9 != (long *)0x0) {
        local_230 = (undefined8 *)0x0;
        uStack_228 = 0;
        FUN_008c4b3c(&local_230,*(long *)(param_1 + 2) + 0x260);
        FUN_01b7436c(plVar9,&local_230,*(long *)(param_1 + 2) + 0x270,0);
        puVar12 = local_230;
        if (local_230 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_230 + 1);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            local_230[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_220 = (undefined8 *)*puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_220);
          }
        }
        (**(code **)(*plVar9 + 0x18))(&local_220,plVar9);
        local_248 = (undefined8 *)0x0;
        local_240 = (undefined8 *)0x0;
        FUN_01b7bc64(&local_248,&local_220);
        puVar12 = local_220;
        if (local_220 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_220 + 1);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            local_220[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = (long *)*puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        FUN_01b824c0(param_1 + 0x78,&local_248);
        puVar12 = local_248;
        if (local_248 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_248 + 1);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            local_248[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_220 = (undefined8 *)*puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_220);
          }
        }
      }
      lVar13 = plVar11[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    plVar11 = *(long **)(param_1 + 0x7c);
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    if (plVar11 != (long *)0x0) {
      lVar13 = plVar11[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    *param_1 = 2;
    if (((((char)param_1[0x80] != '\0') || (*(long *)(param_1 + 0x78) == 0)) ||
        (*(int *)(*(long *)(param_1 + 0x78) + 0xc) == 0)) || ((bool)(bVar6 ^ 1))) {
      FUN_01b91d38(param_1);
      return 0;
    }
    if (*param_1 != 2) {
      return 0;
    }
    param_1[0x7f] = param_1[0x7e];
    iVar7 = 3;
    goto LAB_01b8de4c;
  }
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 10;
  local_204 = 0;
  local_1fc = 0;
  bVar6 = true;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0x3f80000000000001;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c8 = 0;
  local_80 = local_80 & 0xffffffffffffff00;
  local_68 = 1;
  local_1b8 = &DAT_cbf29ce484222645;
  local_1b0 = &DAT_03996322;
  local_198 = &DAT_cbf29ce484222645;
  local_190 = &DAT_03996322;
  local_178 = &DAT_cbf29ce484222645;
  local_170 = &DAT_03996322;
  local_158 = &DAT_cbf29ce484222645;
  local_150 = &DAT_03996322;
  local_138 = &DAT_cbf29ce484222645;
  local_130 = &DAT_03996322;
  local_118 = &DAT_cbf29ce484222645;
  local_110 = &DAT_03996322;
  uStack_a4 = 0x3f800000;
  local_240 = (undefined8 *)0x0;
  uStack_238 = 0;
  local_1a8 = 0;
  local_1a0 = (long *)0x0;
  local_188 = 0;
  local_180 = (long *)0x0;
  local_168 = 0;
  local_160 = (long *)0x0;
  local_148 = 0;
  local_140 = (long *)0x0;
  local_128 = 0;
  local_120 = (long *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_100 = (long *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_248 = param_2;
  FUN_00b64344(&local_240,param_3);
  FUN_01dd88e4(&local_58,&local_248,param_4);
  plVar11 = local_58;
  if (local_58 != (long *)0x0) {
    lVar13 = local_58[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01b8e7b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
    }
    puVar12 = (undefined8 *)((ulong)&local_220 | 8);
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9 = *(long **)(param_1 + 0x7c);
    *(long **)(param_1 + 0x7c) = plVar11;
    if (plVar9 != (long *)0x0) {
      lVar13 = plVar9[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
    sVar3 = *param_4;
    local_220 = (undefined8 *)CONCAT62(local_220._2_6_,sVar3);
    local_80 = *(ulong *)(param_4 + 0xd0);
    local_78 = *(long *)(param_4 + 0xd4);
    local_70 = *(long *)(param_4 + 0xd8);
    if ((char)param_1[4] == '\0') {
      *(short *)(param_1 + 8) = sVar3;
      uVar8 = *puVar12;
      uVar2 = puVar12[1];
      uVar10 = puVar12[3];
      *(undefined8 *)(param_1 + 0xe) = puVar12[2];
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      *(undefined8 *)(param_1 + 10) = uVar8;
      *(undefined8 *)(param_1 + 0xc) = uVar2;
      uVar8 = puVar12[4];
      uVar2 = puVar12[5];
      uVar10 = puVar12[7];
      *(undefined8 *)(param_1 + 0x16) = puVar12[6];
      *(undefined8 *)(param_1 + 0x18) = uVar10;
      *(undefined8 *)(param_1 + 0x12) = uVar8;
      *(undefined8 *)(param_1 + 0x14) = uVar2;
      uVar10 = puVar12[10];
      uVar8 = puVar12[8];
      uVar2 = puVar12[9];
      param_1[0x20] = *(int *)(puVar12 + 0xb);
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
      *(undefined8 *)(param_1 + 0x1e) = uVar10;
      *(undefined8 *)(param_1 + 0x1a) = uVar8;
      *(undefined1 **)(param_1 + 0x22) = local_1b8;
      *(undefined1 **)(param_1 + 0x24) = local_1b0;
      *(undefined8 *)(param_1 + 0x26) = local_1a8;
      *(long **)(param_1 + 0x28) = local_1a0;
      if (local_1a0 != (long *)0x0) {
        (**(code **)(*local_1a0 + 0x18))();
      }
      *(undefined1 **)(param_1 + 0x2a) = local_198;
      *(undefined1 **)(param_1 + 0x2c) = local_190;
      *(undefined8 *)(param_1 + 0x2e) = local_188;
      *(long **)(param_1 + 0x30) = local_180;
      if (local_180 != (long *)0x0) {
        (**(code **)(*local_180 + 0x18))();
      }
      *(undefined1 **)(param_1 + 0x32) = local_178;
      *(undefined1 **)(param_1 + 0x34) = local_170;
      *(undefined8 *)(param_1 + 0x36) = local_168;
      *(long **)(param_1 + 0x38) = local_160;
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x18))();
      }
      *(undefined1 **)(param_1 + 0x3a) = local_158;
      *(undefined1 **)(param_1 + 0x3c) = local_150;
      *(undefined8 *)(param_1 + 0x3e) = local_148;
      *(long **)(param_1 + 0x40) = local_140;
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x18))();
      }
      *(undefined1 **)(param_1 + 0x42) = local_138;
      *(undefined1 **)(param_1 + 0x44) = local_130;
      *(undefined8 *)(param_1 + 0x46) = local_128;
      *(long **)(param_1 + 0x48) = local_120;
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x18))();
      }
      *(undefined1 **)(param_1 + 0x4a) = local_118;
      *(undefined1 **)(param_1 + 0x4c) = local_110;
      *(undefined8 *)(param_1 + 0x4e) = local_108;
      *(long **)(param_1 + 0x50) = local_100;
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x52) = local_f8;
      *(undefined8 *)(param_1 + 0x54) = local_f0;
      *(undefined8 *)(param_1 + 0x56) = local_e8;
      *(undefined8 *)(param_1 + 0x58) = local_e0;
      *(undefined8 *)(param_1 + 0x5a) = local_d8;
      *(undefined8 *)(param_1 + 0x5c) = local_d0;
      *(ulong *)(param_1 + 0x5e) = CONCAT44(uStack_c4,local_c8);
      *(undefined8 *)(param_1 + 0x60) = local_c0;
      *(ulong *)(param_1 + 0x62) = CONCAT44(uStack_b4,local_b8);
      *(undefined8 *)(param_1 + 100) = local_b0;
      *(ulong *)(param_1 + 0x66) = CONCAT44(uStack_a4,local_a8);
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      FUN_008c4b3c(param_1 + 0x68,&local_a0);
      *(ulong *)(param_1 + 0x70) = local_80;
      *(long *)(param_1 + 0x72) = local_78;
      *(undefined8 *)(param_1 + 0x6e) = local_88;
      *(undefined8 *)(param_1 + 0x6c) = local_90;
      *(undefined1 *)(param_1 + 0x76) = local_68;
      *(long *)(param_1 + 0x74) = local_70;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(short *)(param_1 + 8) = sVar3;
      uVar8 = *puVar12;
      uVar2 = puVar12[1];
      uVar10 = puVar12[3];
      *(undefined8 *)(param_1 + 0xe) = puVar12[2];
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      *(undefined8 *)(param_1 + 10) = uVar8;
      *(undefined8 *)(param_1 + 0xc) = uVar2;
      uVar8 = puVar12[4];
      uVar2 = puVar12[5];
      uVar10 = puVar12[7];
      *(undefined8 *)(param_1 + 0x16) = puVar12[6];
      *(undefined8 *)(param_1 + 0x18) = uVar10;
      *(undefined8 *)(param_1 + 0x12) = uVar8;
      *(undefined8 *)(param_1 + 0x14) = uVar2;
      uVar10 = puVar12[10];
      uVar8 = puVar12[8];
      uVar2 = puVar12[9];
      param_1[0x20] = *(int *)(puVar12 + 0xb);
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
      *(undefined8 *)(param_1 + 0x1e) = uVar10;
      *(undefined8 *)(param_1 + 0x1a) = uVar8;
      FUN_01923d8c(param_1 + 0x22,&local_1b8);
      *(undefined8 *)(param_1 + 0x54) = local_f0;
      *(undefined8 *)(param_1 + 0x56) = local_e8;
      *(undefined8 *)(param_1 + 0x5c) = local_d0;
      *(ulong *)(param_1 + 0x5e) = CONCAT44(uStack_c4,local_c8);
      *(undefined8 *)(param_1 + 0x58) = local_e0;
      *(undefined8 *)(param_1 + 0x5a) = local_d8;
      *(undefined8 *)(param_1 + 100) = local_b0;
      *(ulong *)(param_1 + 0x66) = CONCAT44(uStack_a4,local_a8);
      *(undefined8 *)(param_1 + 0x60) = local_c0;
      *(ulong *)(param_1 + 0x62) = CONCAT44(uStack_b4,local_b8);
      FUN_008c4b3c(param_1 + 0x68,&local_a0);
      *(ulong *)(param_1 + 0x70) = local_80;
      *(long *)(param_1 + 0x72) = local_78;
      *(undefined8 *)(param_1 + 0x6e) = local_88;
      *(undefined8 *)(param_1 + 0x6c) = local_90;
      *(undefined1 *)(param_1 + 0x76) = local_68;
      *(long *)(param_1 + 0x74) = local_70;
    }
    param_1[0x7e] = 0xc;
    param_1[0x7f] = 0;
    *param_1 = 1;
    if (local_58 != (long *)0x0) {
      lVar13 = local_58[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 1) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    bVar6 = false;
  }
  puVar12 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = (long *)*puVar12;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
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
  puVar12 = local_240;
  if (local_240 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_240 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_240[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_220 = (undefined8 *)*puVar12;
      FUN_02a44274(lVar13 + 0xd8,&local_220);
    }
  }
  if (bVar6) {
    return 0;
  }
  return 1;
}


