/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0090b880; name: FUN_0090b880
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0090b880(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined4 local_167;
  undefined1 local_163;
  undefined2 local_162;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [6];
  char acStack_109 [2];
  char acStack_107 [6];
  undefined1 local_101;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
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
  param_1[3] = 0;
  param_1[4] = 0;
  puVar7 = param_1 + 1;
  *puVar7 = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = FUN_0090c2f0;
  param_1[7] = FUN_0090c390;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_041b7300;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = "combatPokeID";
  param_1[0xd] = *param_2;
  param_1[0xe] = "benchPokeID";
  param_1[0xf] = *param_3;
  param_1[0x10] = "opponentPokeID";
  uVar6 = *param_4;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x11] = uVar6;
  param_1[0x12] = &DAT_038ca815;
  param_1[0x13] = &DAT_0392da3c;
  param_1[0x14] = 0;
  param_1[0x17] = &LAB_0090c7e0;
  param_1[0x18] = &LAB_009014b0;
  param_1[0x19] = &LAB_009014c0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x15] = 0;
  param_1[0x16] = FUN_0090c520;
  local_170 = 0x18;
  local_167 = 0x4449656b;
  local_13f = s_benchPokeID_03899676._0_7_;
  local_16f[0] = s_combatPokeID_03899669[0];
  local_16f[1] = s_combatPokeID_03899669[1];
  local_16f[2] = s_combatPokeID_03899669[2];
  local_16f[3] = s_combatPokeID_03899669[3];
  local_16f[4] = s_combatPokeID_03899669[4];
  local_16f[5] = s_combatPokeID_03899669[5];
  local_16f[6] = s_combatPokeID_03899669[6];
  local_16f[7] = s_combatPokeID_03899669[7];
  local_150 = &LAB_0090cabc;
  local_163 = 0;
  local_162 = 0;
  local_140 = 0x16;
  local_101 = 0;
  uStack_138 = 0x6b;
  uStack_137 = 0x444965;
  local_130 = 0;
  local_128 = &LAB_0090cad8;
  puStack_120 = &LAB_0090caf4;
  local_110 = 0x1c;
  local_10f[0] = s_opponentPokeID_038b5ff7[0];
  local_10f[1] = s_opponentPokeID_038b5ff7[1];
  local_10f[2] = s_opponentPokeID_038b5ff7[2];
  local_10f[3] = s_opponentPokeID_038b5ff7[3];
  local_10f[4] = s_opponentPokeID_038b5ff7[4];
  local_10f[5] = s_opponentPokeID_038b5ff7[5];
  acStack_109[0] = s_opponentPokeID_038b5ff7[6];
  acStack_109[1] = s_opponentPokeID_038b5ff7[7];
  acStack_107[0] = s_opponentPokeID_038b5ff7[8];
  acStack_107[1] = s_opponentPokeID_038b5ff7[9];
  acStack_107[2] = s_opponentPokeID_038b5ff7[10];
  acStack_107[3] = s_opponentPokeID_038b5ff7[0xb];
  acStack_107[4] = s_opponentPokeID_038b5ff7[0xc];
  acStack_107[5] = s_opponentPokeID_038b5ff7[0xd];
  local_f0 = &LAB_0090cb2c;
  local_100 = 0;
  puStack_f8 = &LAB_0090cb10;
  local_e0 = 6;
  local_dd = 0x77;
  local_160 = 0;
  puStack_158 = &LAB_0090caa0;
  local_148 = 0xffffffff;
  local_118 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_0090cb90;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_0090cb48;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0090cc20;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0090cbd8;
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
              goto LAB_0090bb28;
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,0,8);
        }
LAB_0090bb28:
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
            goto LAB_0090bae0;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,0,8);
      }
    }
LAB_0090bae0:
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
        goto joined_r0x0090bc60;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,0,8);
    plVar2 = DAT_043f1798;
    lVar9 = local_d0;
  }
joined_r0x0090bc60:
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
        goto joined_r0x0090c03c;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,0,8);
    plVar2 = DAT_043f1798;
    lVar3 = local_100;
  }
joined_r0x0090c03c:
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
        goto joined_r0x0090bdc0;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar3,0,8);
    plVar2 = DAT_043f1798;
    lVar9 = local_130;
  }
joined_r0x0090bdc0:
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
        goto joined_r0x0090c07c;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,0,8);
    plVar2 = DAT_043f1798;
    lVar3 = local_160;
  }
joined_r0x0090c07c:
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


