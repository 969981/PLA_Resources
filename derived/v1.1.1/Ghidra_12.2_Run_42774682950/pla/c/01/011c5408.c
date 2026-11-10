/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c5408; name: FUN_011c5408
 */


void FUN_011c5408(long param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  char *local_90;
  undefined8 local_88;
  undefined6 local_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined4 local_70;
  
  local_98 = (undefined1 *)0xe2a06d3a0634e918;
  local_90 = "grid_panel";
  local_88 = 10;
  local_80 = 0;
  uStack_7a = 0;
  lVar9 = FUN_00d2ec48(param_1 + 0x180,&local_98);
  if ((long *)CONCAT26(uStack_7a,local_80) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT26(uStack_7a,local_80) + 0x20))();
  }
  FUN_011bffc4(param_1 + 0x660,0);
  local_c8 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x4e037850425419da;
  local_90 = "button_00";
  local_88 = 9;
  local_80 = 0;
  uStack_7a = 0;
  FUN_0280e56c(lVar9,&local_98,&local_c8,&local_f8);
  if (0 < local_f8._4_4_) {
    iVar11 = local_c8._4_4_;
    do {
      if (0 < (int)local_f8) {
        lVar15 = *(long *)(lVar9 + 0x468);
        iVar17 = (int)local_c8;
        iVar1 = iVar11;
        piVar12 = (int *)(lVar15 + 0xc);
        if (*(int *)(lVar15 + 0x1c) != 0) {
          iVar17 = iVar11;
          iVar1 = (int)local_c8;
          piVar12 = (int *)(lVar15 + 0x10);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                 (ulong)(uint)(iVar17 + *piVar12 * iVar1) * 0x28;
        *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        iVar17 = (int)local_c8;
        while (iVar17 = iVar17 + 1, iVar17 < (int)local_f8 + (int)local_c8) {
          lVar15 = *(long *)(lVar9 + 0x468);
          iVar1 = iVar17;
          iVar7 = iVar11;
          piVar12 = (int *)(lVar15 + 0xc);
          if (*(int *)(lVar15 + 0x1c) != 0) {
            iVar1 = iVar11;
            iVar7 = iVar17;
            piVar12 = (int *)(lVar15 + 0x10);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                   (ulong)(uint)(iVar1 + *piVar12 * iVar7) * 0x28;
          *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_c8._4_4_ + local_f8._4_4_);
  }
  if ((long *)CONCAT26(uStack_7a,local_80) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT26(uStack_7a,local_80) + 0x20))();
  }
  FUN_011bffc4(param_1 + 0x6b0,0);
  local_c8 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x4e03795042541b8d;
  local_90 = "button_01";
  local_88 = 9;
  local_80 = 0;
  uStack_7a = 0;
  FUN_0280e56c(lVar9,&local_98,&local_c8,&local_f8);
  if (0 < local_f8._4_4_) {
    iVar11 = local_c8._4_4_;
    do {
      if (0 < (int)local_f8) {
        lVar15 = *(long *)(lVar9 + 0x468);
        iVar17 = (int)local_c8;
        iVar1 = iVar11;
        piVar12 = (int *)(lVar15 + 0xc);
        if (*(int *)(lVar15 + 0x1c) != 0) {
          iVar17 = iVar11;
          iVar1 = (int)local_c8;
          piVar12 = (int *)(lVar15 + 0x10);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                 (ulong)(uint)(iVar17 + *piVar12 * iVar1) * 0x28;
        *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        iVar17 = (int)local_c8;
        while (iVar17 = iVar17 + 1, iVar17 < (int)local_f8 + (int)local_c8) {
          lVar15 = *(long *)(lVar9 + 0x468);
          iVar1 = iVar17;
          iVar7 = iVar11;
          piVar12 = (int *)(lVar15 + 0xc);
          if (*(int *)(lVar15 + 0x1c) != 0) {
            iVar1 = iVar11;
            iVar7 = iVar17;
            piVar12 = (int *)(lVar15 + 0x10);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                   (ulong)(uint)(iVar1 + *piVar12 * iVar7) * 0x28;
          *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_c8._4_4_ + local_f8._4_4_);
  }
  if ((long *)CONCAT26(uStack_7a,local_80) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT26(uStack_7a,local_80) + 0x20))();
  }
  FUN_011bffc4(param_1 + 0x700,0);
  local_c8 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x4e03765042541674;
  local_90 = "button_02";
  local_88 = 9;
  local_80 = 0;
  uStack_7a = 0;
  FUN_0280e56c(lVar9,&local_98,&local_c8,&local_f8);
  if (0 < local_f8._4_4_) {
    iVar11 = local_c8._4_4_;
    do {
      if (0 < (int)local_f8) {
        lVar15 = *(long *)(lVar9 + 0x468);
        iVar17 = (int)local_c8;
        iVar1 = iVar11;
        piVar12 = (int *)(lVar15 + 0xc);
        if (*(int *)(lVar15 + 0x1c) != 0) {
          iVar17 = iVar11;
          iVar1 = (int)local_c8;
          piVar12 = (int *)(lVar15 + 0x10);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                 (ulong)(uint)(iVar17 + *piVar12 * iVar1) * 0x28;
        *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        iVar17 = (int)local_c8;
        while (iVar17 = iVar17 + 1, iVar17 < (int)local_f8 + (int)local_c8) {
          lVar15 = *(long *)(lVar9 + 0x468);
          iVar1 = iVar17;
          iVar7 = iVar11;
          piVar12 = (int *)(lVar15 + 0xc);
          if (*(int *)(lVar15 + 0x1c) != 0) {
            iVar1 = iVar11;
            iVar7 = iVar17;
            piVar12 = (int *)(lVar15 + 0x10);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                   (ulong)(uint)(iVar1 + *piVar12 * iVar7) * 0x28;
          *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_c8._4_4_ + local_f8._4_4_);
  }
  if ((long *)CONCAT26(uStack_7a,local_80) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT26(uStack_7a,local_80) + 0x20))();
  }
  FUN_011bffc4(param_1 + 0x750,0);
  local_c8 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  local_98 = &DAT_4e03775042541827;
  local_90 = "button_03";
  local_88 = 9;
  local_80 = 0;
  uStack_7a = 0;
  FUN_0280e56c(lVar9,&local_98,&local_c8,&local_f8);
  if (0 < local_f8._4_4_) {
    iVar11 = local_c8._4_4_;
    do {
      if (0 < (int)local_f8) {
        lVar15 = *(long *)(lVar9 + 0x468);
        iVar17 = (int)local_c8;
        iVar1 = iVar11;
        piVar12 = (int *)(lVar15 + 0xc);
        if (*(int *)(lVar15 + 0x1c) != 0) {
          iVar17 = iVar11;
          iVar1 = (int)local_c8;
          piVar12 = (int *)(lVar15 + 0x10);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                 (ulong)(uint)(iVar17 + *piVar12 * iVar1) * 0x28;
        *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        iVar17 = (int)local_c8;
        while (iVar17 = iVar17 + 1, iVar17 < (int)local_f8 + (int)local_c8) {
          lVar15 = *(long *)(lVar9 + 0x468);
          iVar1 = iVar17;
          iVar7 = iVar11;
          piVar12 = (int *)(lVar15 + 0xc);
          if (*(int *)(lVar15 + 0x1c) != 0) {
            iVar1 = iVar11;
            iVar7 = iVar17;
            piVar12 = (int *)(lVar15 + 0x10);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20) +
                   (ulong)(uint)(iVar1 + *piVar12 * iVar7) * 0x28;
          *(ulong *)(lVar15 + 0x20) = *(ulong *)(lVar15 + 0x20) & 0xfffffffffffffffe;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_c8._4_4_ + local_f8._4_4_);
  }
  if ((long *)CONCAT26(uStack_7a,local_80) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT26(uStack_7a,local_80) + 0x20))();
  }
  lVar15 = 0;
  do {
    piVar12 = (int *)(param_2 + lVar15 * 0x2c);
    local_88 = *(undefined8 *)((long)piVar12 + 0x16);
    uVar18 = *(undefined8 *)((long)piVar12 + 0x1e);
    local_90 = *(char **)((long)piVar12 + 0xe);
    iVar11 = piVar12[1];
    cVar5 = *(char *)((long)piVar12 + 5);
    uStack_78 = (undefined6)((ulong)*(undefined8 *)(piVar12 + 9) >> 0x10);
    local_80 = (undefined6)uVar18;
    uStack_7a = (undefined2)((ulong)uVar18 >> 0x30);
    local_98 = *(undefined1 **)((long)piVar12 + 6);
    if (*piVar12 != 0) {
      lVar13 = param_1 + lVar15 * 0x2c;
      *(int *)(lVar13 + 0x5ac) = *piVar12;
      *(char *)(lVar13 + 0x5b0) = (char)iVar11;
      *(char *)(lVar13 + 0x5b1) = cVar5;
      *(undefined8 *)(lVar13 + 0x5ca) = uVar18;
      *(undefined8 *)(lVar13 + 0x5c2) = local_88;
      *(ulong *)(lVar13 + 0x5d0) = CONCAT62(uStack_78,uStack_7a);
      *(char **)(lVar13 + 0x5ba) = local_90;
      lVar20 = param_1 + lVar15 * 0x50;
      uVar19 = *(undefined8 *)(lVar13 + 0x5bc);
      lVar14 = lVar20 + 0x660;
      *(undefined1 **)(lVar13 + 0x5b2) = local_98;
      uVar18 = *(undefined8 *)(lVar13 + 0x5c4);
      uVar21 = *(undefined8 *)(lVar13 + 0x5cc);
      *(undefined4 *)(lVar20 + 0x6ac) = *(undefined4 *)(lVar13 + 0x5d4);
      *(undefined8 *)(lVar20 + 0x6a4) = uVar21;
      *(undefined8 *)(lVar20 + 0x694) = uVar19;
      *(undefined8 *)(lVar20 + 0x69c) = uVar18;
      uVar18 = *(undefined8 *)(lVar13 + 0x5ac);
      *(undefined8 *)(lVar20 + 0x68c) = *(undefined8 *)(lVar13 + 0x5b4);
      *(undefined8 *)(lVar20 + 0x684) = uVar18;
      if ((int)uVar18 == 0) {
        bVar8 = false;
      }
      else {
        FUN_011bf5e4(lVar14);
        FUN_011bf880(lVar14);
        FUN_011bfd1c(lVar14);
        FUN_011bfdf8(lVar14);
        bVar8 = *(int *)(lVar20 + 0x684) != 0;
      }
      FUN_011bffc4(lVar14,bVar8);
      uVar18 = (&DAT_041f72c0)[lVar15 * 3];
      puVar3 = (&PTR_s_button_00_041f72c8)[lVar15 * 3];
      uVar21 = (&DAT_041f72d0)[lVar15 * 3];
      local_f8 = (undefined1 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_b0 = (long *)0x0;
      local_c8 = (undefined1 *)uVar18;
      local_c0 = puVar3;
      local_b8 = uVar21;
      FUN_0280e56c(lVar9,&local_c8,&local_f8,&local_128);
      if (0 < local_128._4_4_) {
        iVar11 = local_f8._4_4_;
        do {
          if (0 < (int)local_128) {
            lVar14 = *(long *)(lVar9 + 0x468);
            iVar17 = (int)local_f8;
            iVar1 = iVar11;
            piVar12 = (int *)(lVar14 + 0xc);
            if (*(int *)(lVar14 + 0x1c) != 0) {
              iVar17 = iVar11;
              iVar1 = (int)local_f8;
              piVar12 = (int *)(lVar14 + 0x10);
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0x40) + 0x20) +
                     (ulong)(uint)(iVar17 + *piVar12 * iVar1) * 0x28;
            *(ulong *)(lVar14 + 0x20) = *(ulong *)(lVar14 + 0x20) | 1;
            iVar17 = (int)local_f8;
            while (iVar17 = iVar17 + 1, iVar17 < (int)local_128 + (int)local_f8) {
              lVar14 = *(long *)(lVar9 + 0x468);
              iVar1 = iVar17;
              iVar7 = iVar11;
              piVar12 = (int *)(lVar14 + 0xc);
              if (*(int *)(lVar14 + 0x1c) != 0) {
                iVar1 = iVar11;
                iVar7 = iVar17;
                piVar12 = (int *)(lVar14 + 0x10);
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0x40) + 0x20) +
                       (ulong)(uint)(iVar1 + *piVar12 * iVar7) * 0x28;
              *(ulong *)(lVar14 + 0x20) = *(ulong *)(lVar14 + 0x20) | 1;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_f8._4_4_ + local_128._4_4_);
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      local_b0 = (long *)0x0;
      local_c8 = (undefined1 *)uVar18;
      local_c0 = puVar3;
      local_b8 = uVar21;
      lVar14 = FUN_00d2e944(param_1 + 0x180,&local_c8);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (lVar14 != 0) {
        if (cVar5 == '\0') {
          *(undefined8 *)(lVar14 + 0x268) = 0x9361c9d60afa3753;
          *(char **)(lVar14 + 0x270) = "PLAY_UI_COMMON_BEEP";
          uVar18 = 0x13;
        }
        else {
          *(char **)(lVar14 + 0x270) = "PLAY_UI_COMMON_DECIDE";
          *(undefined8 *)(lVar14 + 0x268) = 0xc1a949029450238f;
          uVar18 = 0x15;
        }
        plVar10 = *(long **)(lVar14 + 0x280);
        *(undefined8 *)(lVar14 + 0x278) = uVar18;
        *(undefined8 *)(lVar14 + 0x280) = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  lVar9 = param_1 + (ulong)*(byte *)(param_1 + 0x820) * 0x2c;
  puVar2 = *(undefined1 **)(lVar9 + 0x5ac);
  uVar21 = *(undefined8 *)(lVar9 + 0x5b4);
  uVar16 = *(undefined8 *)(lVar9 + 0x5cc);
  uVar18 = *(undefined8 *)(lVar9 + 0x5bc);
  uVar19 = *(undefined8 *)(lVar9 + 0x5c4);
  uVar4 = *(undefined4 *)(lVar9 + 0x5d4);
  uVar6 = *(undefined1 *)(param_1 + 0x821);
  param_1 = param_1 + 0x7a0;
  local_80 = (undefined6)uVar19;
  uStack_7a = (undefined2)((ulong)uVar19 >> 0x30);
  uStack_78 = (undefined6)uVar16;
  uStack_72 = (undefined2)((ulong)uVar16 >> 0x30);
  local_98 = puVar2;
  local_90 = (char *)uVar21;
  local_88 = uVar18;
  local_70 = uVar4;
  FUN_011c0488(param_1,&local_98,uVar6);
  local_c8 = puVar2;
  local_c0 = (undefined *)uVar21;
  local_b8 = uVar18;
  local_b0 = (long *)uVar19;
  uStack_a8 = uVar16;
  local_a0 = uVar4;
  FUN_011c08cc(param_1,&local_c8,uVar6);
  local_f8 = puVar2;
  local_f0 = uVar21;
  uStack_e8 = uVar18;
  local_e0 = uVar19;
  uStack_d8 = uVar16;
  local_d0 = uVar4;
  FUN_011c0c44(param_1,&local_f8);
  local_128 = puVar2;
  local_120 = uVar21;
  uStack_118 = uVar18;
  local_110 = uVar19;
  uStack_108 = uVar16;
  local_100 = uVar4;
  FUN_011c0dbc(param_1,&local_128);
  local_158 = puVar2;
  local_150 = uVar21;
  uStack_148 = uVar18;
  local_140 = uVar19;
  uStack_138 = uVar16;
  local_130 = uVar4;
  FUN_011c0f00(param_1,&local_158);
  return;
}


