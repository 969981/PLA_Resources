/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00900274; name: FUN_00900274
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00900274(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  byte local_170;
  char local_16f [8];
  undefined2 local_167;
  undefined1 local_165;
  undefined4 local_164;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  undefined8 local_13f;
  undefined4 local_137;
  undefined3 uStack_133;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  long local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  param_1[2] = 0;
  puVar7 = param_1 + 1;
  *puVar7 = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_041b72b0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = "attackerID";
  param_1[6] = FUN_00900d00;
  param_1[7] = FUN_00900da0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = *param_2;
  param_1[0xe] = "targetID";
  param_1[0xf] = *param_3;
  param_1[0x10] = "wazano";
  uVar6 = *param_4;
  param_1[0x1d] = 0;
  param_1[0x13] = &DAT_0392da3c;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x11] = uVar6;
  param_1[0x12] = &DAT_038ca815;
  param_1[0x15] = 0;
  param_1[0x16] = FUN_00900f30;
  param_1[0x17] = &LAB_009011f0;
  param_1[0x18] = &LAB_009014b0;
  param_1[0x19] = &LAB_009014c0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  local_150 = &LAB_009014e0;
  local_140 = 0x10;
  local_13f = 0x4449746567726174;
  local_170 = 0x14;
  local_167 = 0x4449;
  local_120 = &LAB_00901518;
  local_16f[0] = s_attackerID_0391267d[0];
  local_16f[1] = s_attackerID_0391267d[1];
  local_16f[2] = s_attackerID_0391267d[2];
  local_16f[3] = s_attackerID_0391267d[3];
  local_16f[4] = s_attackerID_0391267d[4];
  local_16f[5] = s_attackerID_0391267d[5];
  local_16f[6] = s_attackerID_0391267d[6];
  local_16f[7] = s_attackerID_0391267d[7];
  local_165 = 0;
  local_164 = 0;
  local_137 = 0;
  uStack_133 = 0;
  local_109 = 0;
  local_130 = 0;
  puStack_128 = &LAB_009014fc;
  local_110 = 0xc;
  local_10b = 0x6f6e;
  local_10f = 0x617a6177;
  local_f8 = &LAB_00901534;
  puStack_f0 = &LAB_00901550;
  local_e0 = 6;
  local_dd = 0x77;
  local_160 = 0;
  puStack_158 = &LAB_009014c4;
  local_148 = 0xffffffff;
  local_118 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_108 = 0;
  local_100 = 0;
  local_df = 0x656e;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_009015b4;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_0090156c;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_00901644;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_009015fc;
  FUN_00903680(puVar7,&local_170,local_80);
  lVar3 = FUN_008cca50();
  lVar9 = 0;
  lVar1 = tpidr_el0;
  do {
    lVar4 = FUN_008e8c90(puVar7,lVar3 + lVar9);
    if (lVar4 != 0) {
      FUN_008f2aec(local_80,puVar7,lVar4);
      lVar4 = local_80[0];
      plVar2 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar4 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar4 + 0x10) & 1) != 0)) &&
           (lVar10 = *(long *)(lVar4 + 0x20), lVar10 != 0)) {
          plVar8 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar8 = plVar2;
          }
          uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar5 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar8,lVar10,0,8);
              goto LAB_00900530;
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,0,8);
        }
LAB_00900530:
        plVar2 = DAT_043f1798;
        plVar8 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar8 = plVar2;
        }
        uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar5 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar8,lVar4,0,8);
            goto LAB_009004e8;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,0,8);
      }
    }
LAB_009004e8:
    lVar4 = local_a0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x300);
  *(undefined1 *)(param_1 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar9 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar4,0,8);
        plVar2 = DAT_043f1798;
        lVar9 = local_d0;
        goto joined_r0x00900668;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,0,8);
    plVar2 = DAT_043f1798;
    lVar9 = local_d0;
  }
joined_r0x00900668:
  lVar3 = local_100;
  local_d0 = lVar9;
  if (((local_e0 & 1) != 0) && (lVar9 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar9,0,8);
        plVar2 = DAT_043f1798;
        lVar3 = local_100;
        goto joined_r0x00900a44;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,0,8);
    plVar2 = DAT_043f1798;
    lVar3 = local_100;
  }
joined_r0x00900a44:
  lVar9 = local_130;
  local_100 = lVar3;
  if (((local_110 & 1) != 0) && (lVar3 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar3,0,8);
        plVar2 = DAT_043f1798;
        lVar9 = local_130;
        goto joined_r0x009007c8;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar3,0,8);
    plVar2 = DAT_043f1798;
    lVar9 = local_130;
  }
joined_r0x009007c8:
  lVar3 = local_160;
  local_130 = lVar9;
  if (((local_140 & 1) != 0) && (lVar9 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar9,0,8);
        plVar2 = DAT_043f1798;
        lVar3 = local_160;
        goto joined_r0x00900a84;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,0,8);
    plVar2 = DAT_043f1798;
    lVar3 = local_160;
  }
joined_r0x00900a84:
  DAT_043f1798 = plVar2;
  if (((local_170 & 1) != 0) && (lVar3 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar8 = plVar2;
    }
    local_160 = lVar3;
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar3,0,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar3,0,8);
  }
  return;
}


