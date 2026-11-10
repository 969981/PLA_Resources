/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4f364; name: FUN_00d4f364
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d4f364(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  byte bVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  code *pcVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 *local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  long *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined4 local_a0;
  
  if ((int)param_1[(long)param_2 * 0xc + 200] == 0) {
    return;
  }
  lVar29 = (long)param_2;
  if (*(int *)((long)param_1 + lVar29 * 0x60 + 0x644) == 0) {
    return;
  }
  iVar13 = param_2;
  if (param_2 == 2) {
    iVar13 = 0;
  }
  lVar11 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar13 * 0x28);
  local_180 = *(undefined1 **)(lVar11 + 0x710);
  pcVar30 = *(code **)(lVar11 + 0x718);
  local_170 = *(code **)(lVar11 + 0x720);
  local_168 = *(undefined1 **)(lVar11 + 0x728);
  plVar28 = *(long **)(lVar11 + 0x730);
  local_178 = pcVar30;
  local_160 = plVar28;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  local_158 = *(undefined1 **)(lVar11 + 0x738);
  local_150 = *(undefined8 *)(lVar11 + 0x740);
  local_148 = *(undefined8 *)(lVar11 + 0x748);
  local_140 = *(long **)(lVar11 + 0x750);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x18))();
  }
  local_138 = *(undefined8 *)(lVar11 + 0x758);
  local_130 = *(undefined8 *)(lVar11 + 0x760);
  local_128 = *(undefined8 *)(lVar11 + 0x768);
  local_120 = *(undefined8 *)(lVar11 + 0x770);
  local_118 = *(undefined8 *)(lVar11 + 0x778);
  local_110 = *(undefined8 *)(lVar11 + 0x780);
  local_108 = *(long **)(lVar11 + 0x788);
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x18))();
  }
  local_100 = *(long *)(lVar11 + 0x790);
  local_f8 = *(undefined8 *)(lVar11 + 0x798);
  local_f0 = *(undefined8 *)(lVar11 + 0x7a0);
  local_e8 = *(long **)(lVar11 + 0x7a8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))();
  }
  local_e0 = *(long *)(lVar11 + 0x7b0);
  local_d8 = *(undefined8 *)(lVar11 + 0x7b8);
  local_d0 = *(undefined8 *)(lVar11 + 0x7c0);
  local_c8 = *(long **)(lVar11 + 0x7c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  local_c0 = *(undefined8 *)(lVar11 + 2000);
  local_b8 = *(undefined8 *)(lVar11 + 0x7d8);
  local_b0 = *(undefined8 *)(lVar11 + 0x7e0);
  local_a8 = *(long **)(lVar11 + 0x7e8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x18))();
  }
  local_a0 = *(undefined4 *)(lVar11 + 0x7f0);
  local_138 = param_1[lVar29 * 0xc + 200];
  if ((ABS(*(float *)(param_1 + lVar29 * 0xc + 0xc9)) < 960.0) &&
     (fVar31 = *(float *)((long)param_1 + lVar29 * 0x60 + 0x64c), ABS(fVar31) < 540.0)) {
    local_130 = CONCAT44(fVar31,*(float *)(param_1 + lVar29 * 0xc + 0xc9));
  }
  if (*(float *)(param_1 + lVar29 * 0xc + 0xca) != 0.0) {
    local_128 = CONCAT44(local_128._4_4_,*(float *)(param_1 + lVar29 * 0xc + 0xca));
  }
  fVar31 = *(float *)((long)param_1 + lVar29 * 0x60 + 0x654);
  if (fVar31 != 0.0) {
    local_128 = CONCAT44(fVar31,(float)local_128);
  }
  plVar27 = (long *)param_1[0x59];
  uVar9 = local_138 >> 0x20;
  uVar26 = local_138;
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar26 = local_138 & 0xffffffff;
    plVar28 = local_160;
    pcVar30 = local_178;
  }
  fVar31 = (float)local_128;
  fVar32 = local_128._4_4_;
  plVar22 = (long *)plVar27[0x29];
  lVar21 = plVar27[0x2a];
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  if ((lVar21 != 0) && ((code *)*plVar22 != pcVar30)) {
    lVar16 = lVar21 * 0x30;
    plVar24 = plVar22 + lVar21 * 6;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) {
        plVar22 = plVar24;
        break;
      }
      plVar14 = plVar22 + 6;
      plVar22 = plVar22 + 6;
    } while ((code *)*plVar14 != pcVar30);
  }
  fVar32 = fVar32 * (float)(int)uVar9;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  plVar24 = local_140;
  puVar10 = local_158;
  if (plVar22 == (long *)(plVar27[0x29] + plVar27[0x2a] * 0x30)) {
    lVar21 = 0;
  }
  else {
    lVar21 = plVar22[4];
  }
  uVar12 = CONCAT44(fVar32,fVar31 * (float)(int)uVar26);
  *(undefined8 *)(lVar21 + 0x50) = uVar12;
  *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
  plVar22 = (long *)plVar27[0x29];
  lVar21 = plVar27[0x2a];
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x18))(local_140);
  }
  plVar14 = plVar22;
  if ((lVar21 != 0) && ((undefined1 *)*plVar22 != puVar10)) {
    lVar16 = lVar21 * 0x30;
    plVar23 = plVar22 + lVar21 * 6;
    do {
      lVar16 = lVar16 + -0x30;
      plVar14 = plVar23;
      if (lVar16 == 0) break;
      plVar1 = plVar22 + 6;
      plVar22 = plVar22 + 6;
      plVar14 = plVar22;
    } while ((undefined1 *)*plVar1 != puVar10);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (plVar14 == (long *)(plVar27[0x29] + plVar27[0x2a] * 0x30)) {
    lVar21 = 0;
  }
  else {
    lVar21 = plVar14[4];
  }
  *(undefined8 *)(lVar21 + 0x50) = uVar12;
  *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
  plVar22 = (long *)plVar27[0x29];
  lVar21 = plVar27[0x2a];
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  plVar14 = plVar22;
  if ((lVar21 != 0) && ((undefined1 *)*plVar22 != puVar10)) {
    lVar16 = lVar21 * 0x30;
    plVar23 = plVar22 + lVar21 * 6;
    do {
      lVar16 = lVar16 + -0x30;
      plVar14 = plVar23;
      if (lVar16 == 0) break;
      plVar1 = plVar22 + 6;
      plVar22 = plVar22 + 6;
      plVar14 = plVar22;
    } while ((undefined1 *)*plVar1 != puVar10);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (plVar14 == (long *)(plVar27[0x29] + plVar27[0x2a] * 0x30)) {
    lVar21 = 0;
  }
  else {
    lVar21 = plVar14[4];
  }
  *(undefined8 *)(lVar21 + 0x30) = 0;
  *(undefined4 *)(lVar21 + 0x38) = 0;
  *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
  fVar31 = (float)local_130;
  fVar34 = local_130._4_4_;
  plVar22 = (long *)plVar27[0x29];
  lVar21 = plVar27[0x2a];
  fVar33 = (float)local_128 * (float)((int)local_138 + -1);
  fVar35 = local_128._4_4_ * (float)(local_138._4_4_ + -1);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  if ((lVar21 != 0) && ((code *)*plVar22 != pcVar30)) {
    lVar16 = lVar21 * 0x30;
    plVar24 = plVar22 + lVar21 * 6;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) {
        plVar22 = plVar24;
        break;
      }
      plVar14 = plVar22 + 6;
      plVar22 = plVar22 + 6;
    } while ((code *)*plVar14 != pcVar30);
  }
  fVar31 = fVar31 + fVar33 * 0.5;
  fVar34 = fVar34 - fVar35 * 0.5;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  lVar21 = plVar22[4];
  *(float *)(lVar21 + 0x30) = fVar31;
  *(float *)(lVar21 + 0x34) = fVar34;
  *(undefined4 *)(lVar21 + 0x38) = 0;
  *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
  lVar21 = (&DAT_043ab818)[lVar29 * 0x28];
  plVar28 = (long *)(&DAT_043ab830)[lVar29 * 0x28];
  local_130 = CONCAT44(local_130._4_4_ - fVar34,(float)local_130 - fVar31);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  if (*(char *)((long)param_1 + lVar29 * 0x60 + 0x664) == '\0') {
    bVar25 = 0;
    plVar22 = (long *)plVar27[0x29];
    lVar16 = plVar27[0x2a];
    if (plVar28 == (long *)0x0) goto LAB_00d4f818;
LAB_00d503c0:
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if (lVar16 == 0) goto LAB_00d503d8;
LAB_00d4f820:
    if (*plVar22 == lVar21) goto LAB_00d503d8;
    lVar17 = lVar16 * 0x30;
    plVar24 = plVar22 + lVar16 * 6;
    do {
      lVar17 = lVar17 + -0x30;
      plVar14 = plVar24;
      if (lVar17 == 0) break;
      plVar23 = plVar22 + 6;
      plVar22 = plVar22 + 6;
      plVar14 = plVar22;
    } while (*plVar23 != lVar21);
    plVar22 = plVar14;
    if (plVar28 != (long *)0x0) goto LAB_00d4f860;
LAB_00d5042c:
    *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe | bVar25;
  }
  else {
    fVar33 = *(float *)((long)param_1 + lVar29 * 0x60 + 0x65c);
    if ((960.0 <= ABS(fVar33)) ||
       (fVar35 = *(float *)(param_1 + lVar29 * 0xc + 0xcc), 540.0 <= ABS(fVar35))) {
      fVar33 = fVar31 + (float)local_128 * (float)(int)local_138 * 0.5 + 15.0;
      fVar35 = fVar34 + 0.0;
    }
    plVar22 = (long *)plVar27[0x29];
    lVar16 = plVar27[0x2a];
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    plVar24 = plVar22;
    if ((lVar16 != 0) && (*plVar22 != lVar21)) {
      lVar17 = lVar16 * 0x30;
      plVar14 = plVar22 + lVar16 * 6;
      do {
        lVar17 = lVar17 + -0x30;
        plVar24 = plVar14;
        if (lVar17 == 0) break;
        plVar23 = plVar22 + 6;
        plVar22 = plVar22 + 6;
        plVar24 = plVar22;
      } while (*plVar23 != lVar21);
    }
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    lVar16 = plVar24[4];
    *(float *)(lVar16 + 0x30) = fVar33;
    *(float *)(lVar16 + 0x34) = fVar35;
    *(undefined4 *)(lVar16 + 0x38) = 0;
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
    lVar16 = (&DAT_043ab838)[lVar29 * 0x28];
    plVar22 = (long *)(&DAT_043ab850)[lVar29 * 0x28];
    if (plVar22 == (long *)0x0) {
      plVar24 = (long *)plVar27[0x29];
      lVar17 = plVar27[0x2a];
      plVar14 = plVar24 + lVar17 * 6;
    }
    else {
      (**(code **)(*plVar22 + 0x18))(plVar22);
      plVar24 = (long *)plVar27[0x29];
      lVar17 = plVar27[0x2a];
      plVar14 = plVar24 + lVar17 * 6;
      (**(code **)(*plVar22 + 0x18))();
    }
    if (lVar17 != 0) {
      lVar17 = *plVar24;
      while (lVar17 != lVar16) {
        plVar23 = plVar24 + 6;
        plVar24 = plVar14;
        if (plVar14 == plVar23) break;
        plVar24 = plVar23;
        lVar17 = *plVar23;
      }
    }
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))();
    }
    plVar14 = local_e8;
    lVar17 = local_100;
    uVar4 = *(undefined4 *)(plVar24[4] + 0x54);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
    plVar24 = local_c8;
    lVar20 = local_e0;
    if (local_c8 == (long *)0x0) {
      plVar23 = (long *)plVar27[0x29];
      lVar19 = plVar27[0x2a];
    }
    else {
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar23 = (long *)plVar27[0x29];
      lVar19 = plVar27[0x2a];
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar1 = plVar23;
    if ((lVar19 != 0) && (*plVar23 != lVar17)) {
      lVar18 = lVar19 * 0x30;
      plVar15 = plVar23 + lVar19 * 6;
      do {
        lVar18 = lVar18 + -0x30;
        plVar1 = plVar15;
        if (lVar18 == 0) break;
        plVar2 = plVar23 + 6;
        plVar23 = plVar23 + 6;
        plVar1 = plVar23;
      } while (*plVar2 != lVar17);
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    uVar5 = *(undefined4 *)(plVar1[4] + 0x34);
    plVar23 = (long *)plVar27[0x29];
    lVar19 = plVar27[0x2a];
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
    plVar1 = plVar23;
    if ((lVar19 != 0) && (*plVar23 != lVar20)) {
      lVar18 = lVar19 * 0x30;
      plVar15 = plVar23 + lVar19 * 6;
      do {
        lVar18 = lVar18 + -0x30;
        plVar1 = plVar15;
        if (lVar18 == 0) break;
        plVar2 = plVar23 + 6;
        plVar23 = plVar23 + 6;
        plVar1 = plVar23;
      } while (*plVar2 != lVar20);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
    uVar6 = *(undefined4 *)(plVar1[4] + 0x34);
    plVar23 = (long *)plVar27[0x29];
    lVar19 = plVar27[0x2a];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar1 = plVar23;
    if ((lVar19 != 0) && (*plVar23 != lVar17)) {
      lVar18 = lVar19 * 0x30;
      plVar15 = plVar23 + lVar19 * 6;
      do {
        lVar18 = lVar18 + -0x30;
        plVar1 = plVar15;
        if (lVar18 == 0) break;
        plVar2 = plVar23 + 6;
        plVar23 = plVar23 + 6;
        plVar1 = plVar23;
      } while (*plVar2 != lVar17);
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    lVar17 = plVar1[4];
    *(float *)(lVar17 + 0x30) = fVar32 * -0.5;
    *(undefined4 *)(lVar17 + 0x34) = uVar5;
    *(undefined4 *)(lVar17 + 0x38) = 0;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
    plVar23 = (long *)plVar27[0x29];
    lVar17 = plVar27[0x2a];
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
    plVar1 = plVar23;
    if ((lVar17 != 0) && (*plVar23 != lVar20)) {
      lVar19 = lVar17 * 0x30;
      plVar15 = plVar23 + lVar17 * 6;
      do {
        lVar19 = lVar19 + -0x30;
        plVar1 = plVar15;
        if (lVar19 == 0) break;
        plVar2 = plVar23 + 6;
        plVar23 = plVar23 + 6;
        plVar1 = plVar23;
      } while (*plVar2 != lVar20);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
    lVar17 = plVar1[4];
    *(float *)(lVar17 + 0x30) = fVar32 * 0.5;
    *(undefined4 *)(lVar17 + 0x34) = uVar6;
    *(undefined4 *)(lVar17 + 0x38) = 0;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    plVar24 = (long *)plVar27[0x29];
    lVar17 = plVar27[0x2a];
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    plVar14 = plVar24;
    if ((lVar17 != 0) && (*plVar24 != lVar16)) {
      lVar20 = lVar17 * 0x30;
      plVar23 = plVar24 + lVar17 * 6;
      do {
        lVar20 = lVar20 + -0x30;
        plVar14 = plVar23;
        if (lVar20 == 0) break;
        plVar1 = plVar24 + 6;
        plVar24 = plVar24 + 6;
        plVar14 = plVar24;
      } while (*plVar1 != lVar16);
    }
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
    if (plVar14 == (long *)(plVar27[0x29] + plVar27[0x2a] * 0x30)) {
      lVar16 = 0;
    }
    else {
      lVar16 = plVar14[4];
    }
    *(ulong *)(lVar16 + 0x50) = CONCAT44(uVar4,fVar32 * 0.5 - fVar32 * -0.5);
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
    bVar25 = *(byte *)((long)param_1 + lVar29 * 0x60 + 0x664);
    plVar22 = (long *)plVar27[0x29];
    lVar16 = plVar27[0x2a];
    if (plVar28 != (long *)0x0) goto LAB_00d503c0;
LAB_00d4f818:
    if (lVar16 != 0) goto LAB_00d4f820;
LAB_00d503d8:
    if (plVar28 == (long *)0x0) goto LAB_00d5042c;
LAB_00d4f860:
    (**(code **)(*plVar28 + 0x20))(plVar28);
    *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe | bVar25;
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  FUN_02818368(lVar11 + 0x710,&local_180);
  *(bool *)(*(long *)(lVar11 + 0x8b0) + 0x2c) = *(int *)(lVar11 + 0x714) != 0;
  *(uint *)(lVar11 + 0x910) = (uint)*(ushort *)(param_1 + lVar29 * 0xc + 0xcb);
  *(undefined1 *)(lVar11 + 0x9f5) = 0;
  *(uint *)(lVar11 + 0x914) = (uint)*(ushort *)((long)param_1 + lVar29 * 0x60 + 0x65a);
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      iVar13 = (int)*plVar28 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *(int *)plVar28 = iVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
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
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  plVar28 = (long *)param_1[lVar29 * 0xc + 199];
  if (plVar28 != (long *)0x0) {
    lVar29 = plVar28[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) {
LAB_00d50d78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar12;
    }
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = *piVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar29 = plVar28[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_00d50d78;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar12;
    }
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = *piVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar27 = *(long **)(lVar11 + 0x100);
  *(long **)(lVar11 + 0x100) = plVar28;
  if (plVar27 != (long *)0x0) {
    lVar29 = plVar27[0xb];
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      iVar13 = *piVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))();
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar29 = plVar28[0xb];
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      iVar13 = *piVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  local_160 = param_1;
  if (param_2 == 0) {
    pcVar30 = *(code **)(lVar11 + 0x298);
    local_158 = &LAB_00d52744;
    local_150 = 0;
    local_180 = &LAB_00d6282c;
    local_178 = FUN_00d62850;
    local_170 = FUN_00d62854;
    local_168 = &LAB_00d62868;
    if (pcVar30 == (code *)0x0) {
LAB_00d4fa98:
      (*local_170)(&local_160,lVar11 + 0x2b0);
      *(code **)(lVar11 + 0x298) = local_178;
      *(undefined1 **)(lVar11 + 0x2a8) = local_168;
      *(code **)(lVar11 + 0x2a0) = local_170;
      *(undefined8 *)(lVar11 + 0x290) = local_180;
    }
    else {
      *(undefined8 *)(lVar11 + 0x2a0) = 0;
      *(undefined8 *)(lVar11 + 0x2a8) = 0;
      *(undefined8 *)(lVar11 + 0x290) = 0;
      *(undefined8 *)(lVar11 + 0x298) = 0;
      (*pcVar30)(lVar11 + 0x2b0);
      if (local_170 != (code *)0x0) goto LAB_00d4fa98;
    }
    pcVar30 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (code *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar30)(&local_160);
    }
    pcVar30 = *(code **)(lVar11 + 0x118);
    local_158 = &LAB_00d52750;
    local_150 = 0;
    local_180 = &LAB_00d6282c;
    local_178 = FUN_00d62850;
    local_170 = FUN_00d62854;
    local_168 = &LAB_00d62868;
    local_160 = param_1;
    if (pcVar30 == (code *)0x0) {
LAB_00d4fb24:
      (*local_170)(&local_160,lVar11 + 0x130);
      *(code **)(lVar11 + 0x118) = local_178;
      *(undefined1 **)(lVar11 + 0x128) = local_168;
      *(code **)(lVar11 + 0x120) = local_170;
      *(undefined8 *)(lVar11 + 0x110) = local_180;
    }
    else {
      *(undefined8 *)(lVar11 + 0x120) = 0;
      *(undefined8 *)(lVar11 + 0x128) = 0;
      *(undefined8 *)(lVar11 + 0x110) = 0;
      *(undefined8 *)(lVar11 + 0x118) = 0;
      (*pcVar30)(lVar11 + 0x130);
      if (local_170 != (code *)0x0) goto LAB_00d4fb24;
    }
    pcVar30 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (code *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar30)(&local_160);
    }
    pcVar30 = *(code **)(lVar11 + 0x218);
    local_158 = &LAB_00d52764;
    local_150 = 0;
    local_180 = &LAB_00d6282c;
    local_178 = FUN_00d62850;
    local_170 = FUN_00d62854;
    local_168 = &LAB_00d62868;
    local_160 = param_1;
    if (pcVar30 == (code *)0x0) {
LAB_00d4fbac:
      (*local_170)(&local_160,lVar11 + 0x230);
      *(code **)(lVar11 + 0x218) = local_178;
      *(undefined1 **)(lVar11 + 0x228) = local_168;
      *(code **)(lVar11 + 0x220) = local_170;
      *(undefined8 *)(lVar11 + 0x210) = local_180;
    }
    else {
      *(undefined8 *)(lVar11 + 0x220) = 0;
      *(undefined8 *)(lVar11 + 0x228) = 0;
      *(undefined8 *)(lVar11 + 0x210) = 0;
      *(undefined8 *)(lVar11 + 0x218) = 0;
      (*pcVar30)(lVar11 + 0x230);
      if (local_170 != (code *)0x0) goto LAB_00d4fbac;
    }
    pcVar30 = local_178;
    *(undefined1 *)(lVar11 + 0x91a) = 1;
    if (local_178 != (code *)0x0) {
      local_170 = (code *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar30)(&local_160);
    }
    if (((int)param_1[0xd4] != 0) && (*(int *)((long)param_1 + 0x6a4) != 0)) {
      pcVar30 = *(code **)(lVar11 + 0x698);
      local_158 = &LAB_00d527d8;
      local_150 = 0;
      local_180 = &LAB_00d6287c;
      local_178 = FUN_00d6289c;
      local_170 = FUN_00d628a0;
      local_168 = &LAB_00d628b4;
      local_160 = param_1;
      if (pcVar30 == (code *)0x0) {
LAB_00d4fc70:
        (*local_170)(&local_160,lVar11 + 0x6b0);
        *(code **)(lVar11 + 0x698) = local_178;
        *(undefined1 **)(lVar11 + 0x6a8) = local_168;
        *(code **)(lVar11 + 0x6a0) = local_170;
        *(undefined8 *)(lVar11 + 0x690) = local_180;
      }
      else {
        *(undefined8 *)(lVar11 + 0x6a0) = 0;
        *(undefined8 *)(lVar11 + 0x6a8) = 0;
        *(undefined8 *)(lVar11 + 0x690) = 0;
        *(undefined8 *)(lVar11 + 0x698) = 0;
        (*pcVar30)(lVar11 + 0x6b0);
        if (local_170 != (code *)0x0) goto LAB_00d4fc70;
      }
      pcVar30 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = (code *)0x0;
        local_168 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        (*pcVar30)(&local_160);
      }
      pcVar30 = *(code **)(lVar11 + 0x618);
      local_158 = &LAB_00d52818;
      local_150 = 0;
      local_180 = &LAB_00d6287c;
      local_178 = FUN_00d6289c;
      local_170 = FUN_00d628a0;
      local_168 = &LAB_00d628b4;
      local_160 = param_1;
      if (pcVar30 == (code *)0x0) {
LAB_00d4fcf8:
        (*local_170)(&local_160,lVar11 + 0x630);
        *(code **)(lVar11 + 0x618) = local_178;
        *(undefined1 **)(lVar11 + 0x628) = local_168;
        *(code **)(lVar11 + 0x620) = local_170;
        *(undefined8 *)(lVar11 + 0x610) = local_180;
      }
      else {
        *(undefined8 *)(lVar11 + 0x620) = 0;
        *(undefined8 *)(lVar11 + 0x628) = 0;
        *(undefined8 *)(lVar11 + 0x610) = 0;
        *(undefined8 *)(lVar11 + 0x618) = 0;
        (*pcVar30)(lVar11 + 0x630);
        if (local_170 != (code *)0x0) goto LAB_00d4fcf8;
      }
      pcVar30 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = (code *)0x0;
        local_168 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        (*pcVar30)(&local_160);
      }
    }
    pcVar30 = *(code **)(lVar11 + 0x418);
    local_158 = &LAB_00d52820;
    local_150 = 0;
    local_180 = &LAB_00d628c8;
    local_178 = FUN_00d628e4;
    local_170 = FUN_00d628e8;
    local_168 = &LAB_00d628fc;
    local_160 = param_1;
    if (pcVar30 == (code *)0x0) {
LAB_00d4fda4:
      (*local_170)(&local_160,lVar11 + 0x430);
      *(code **)(lVar11 + 0x418) = local_178;
      *(undefined1 **)(lVar11 + 0x428) = local_168;
      *(code **)(lVar11 + 0x420) = local_170;
      *(undefined8 *)(lVar11 + 0x410) = local_180;
    }
    else {
      *(undefined8 *)(lVar11 + 0x420) = 0;
      *(undefined8 *)(lVar11 + 0x428) = 0;
      *(undefined8 *)(lVar11 + 0x410) = 0;
      *(undefined8 *)(lVar11 + 0x418) = 0;
      (*pcVar30)(lVar11 + 0x430);
      if (local_170 != (code *)0x0) goto LAB_00d4fda4;
    }
    pcVar30 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (code *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar30)(&local_160);
    }
    pcVar30 = *(code **)(lVar11 + 0x498);
    local_158 = &LAB_00d52830;
    local_150 = 0;
    local_180 = &LAB_00d628c8;
    local_178 = FUN_00d628e4;
    local_170 = FUN_00d628e8;
    local_168 = &LAB_00d628fc;
    local_160 = param_1;
    if (pcVar30 == (code *)0x0) {
LAB_00d4fe2c:
      (*local_170)(&local_160,lVar11 + 0x4b0);
      *(code **)(lVar11 + 0x498) = local_178;
      *(undefined1 **)(lVar11 + 0x4a8) = local_168;
      *(code **)(lVar11 + 0x4a0) = local_170;
      *(undefined8 *)(lVar11 + 0x490) = local_180;
    }
    else {
      *(undefined8 *)(lVar11 + 0x4a0) = 0;
      *(undefined8 *)(lVar11 + 0x4a8) = 0;
      *(undefined8 *)(lVar11 + 0x490) = 0;
      *(undefined8 *)(lVar11 + 0x498) = 0;
      (*pcVar30)(lVar11 + 0x4b0);
      if (local_170 != (code *)0x0) goto LAB_00d4fe2c;
    }
    pcVar30 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (code *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar30)(&local_160);
    }
    FUN_0281857c(lVar11);
    plVar28 = (long *)param_1[0x59];
    if (plVar28 != (long *)0x0) {
      plVar27 = plVar28 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *(int *)plVar27 = (int)*plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar27 = (long *)plVar28[0x29];
    lVar29 = plVar28[0x2a];
    if ((lVar29 != 0) && (*plVar27 != 0x2dc110817bf2fd6c)) {
      plVar22 = plVar27 + lVar29 * 6;
      lVar29 = lVar29 * 0x30;
      do {
        lVar29 = lVar29 + -0x30;
        if (lVar29 == 0) {
          plVar27 = plVar22;
          break;
        }
        plVar14 = plVar27 + 6;
        plVar24 = plVar27 + 6;
        plVar27 = plVar14;
      } while (*plVar24 != 0x2dc110817bf2fd6c);
    }
    *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
    if (plVar28 == (long *)0x0) {
LAB_00d4ff1c:
      plVar28 = (long *)param_1[0x59];
    }
    else {
      plVar27 = plVar28 + 10;
      do {
        iVar13 = (int)*plVar27 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *(int *)plVar27 = iVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != 0) goto LAB_00d4ff1c;
      (**(code **)(*plVar28 + 0x10))();
      plVar28 = (long *)param_1[0x59];
    }
    if (plVar28 != (long *)0x0) {
      plVar27 = plVar28 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *(int *)plVar27 = (int)*plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar27 = (long *)plVar28[0x29];
    lVar29 = plVar28[0x2a];
    if ((lVar29 != 0) && (*plVar27 != 0x62f3434c9624b485)) {
      plVar22 = plVar27 + lVar29 * 6;
      lVar29 = lVar29 * 0x30;
      do {
        lVar29 = lVar29 + -0x30;
        if (lVar29 == 0) {
          plVar27 = plVar22;
          break;
        }
        plVar14 = plVar27 + 6;
        plVar24 = plVar27 + 6;
        plVar27 = plVar14;
      } while (*plVar24 != 0x62f3434c9624b485);
    }
    *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
    if (plVar28 == (long *)0x0) {
      return;
    }
    plVar27 = plVar28 + 10;
    do {
      iVar13 = (int)*plVar27 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *(int *)plVar27 = iVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    goto LAB_00d50ccc;
  }
  pcVar30 = *(code **)(lVar11 + 0x298);
  local_158 = &LAB_00d52840;
  local_150 = 0;
  local_180 = &LAB_00d6282c;
  local_178 = FUN_00d62850;
  local_170 = FUN_00d62854;
  local_168 = &LAB_00d62868;
  if (pcVar30 == (code *)0x0) {
LAB_00d507c0:
    (*local_170)(&local_160,lVar11 + 0x2b0);
    *(code **)(lVar11 + 0x298) = local_178;
    *(undefined1 **)(lVar11 + 0x2a8) = local_168;
    *(code **)(lVar11 + 0x2a0) = local_170;
    *(undefined8 *)(lVar11 + 0x290) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x2a0) = 0;
    *(undefined8 *)(lVar11 + 0x2a8) = 0;
    *(undefined8 *)(lVar11 + 0x290) = 0;
    *(undefined8 *)(lVar11 + 0x298) = 0;
    (*pcVar30)(lVar11 + 0x2b0);
    if (local_170 != (code *)0x0) goto LAB_00d507c0;
  }
  pcVar30 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  pcVar30 = *(code **)(lVar11 + 0x118);
  local_158 = &LAB_00d5284c;
  local_150 = 0;
  local_180 = &LAB_00d6282c;
  local_178 = FUN_00d62850;
  local_170 = FUN_00d62854;
  local_168 = &LAB_00d62868;
  local_160 = param_1;
  if (pcVar30 == (code *)0x0) {
LAB_00d5084c:
    (*local_170)(&local_160,lVar11 + 0x130);
    *(code **)(lVar11 + 0x118) = local_178;
    *(undefined1 **)(lVar11 + 0x128) = local_168;
    *(code **)(lVar11 + 0x120) = local_170;
    *(undefined8 *)(lVar11 + 0x110) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x128) = 0;
    *(undefined8 *)(lVar11 + 0x110) = 0;
    *(undefined8 *)(lVar11 + 0x118) = 0;
    (*pcVar30)(lVar11 + 0x130);
    if (local_170 != (code *)0x0) goto LAB_00d5084c;
  }
  pcVar30 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  pcVar30 = *(code **)(lVar11 + 0x218);
  local_158 = &LAB_00d52860;
  local_150 = 0;
  local_180 = &LAB_00d6282c;
  local_178 = FUN_00d62850;
  local_170 = FUN_00d62854;
  local_168 = &LAB_00d62868;
  local_160 = param_1;
  if (pcVar30 == (code *)0x0) {
LAB_00d508d4:
    (*local_170)(&local_160,lVar11 + 0x230);
    *(code **)(lVar11 + 0x218) = local_178;
    *(undefined1 **)(lVar11 + 0x228) = local_168;
    *(code **)(lVar11 + 0x220) = local_170;
    *(undefined8 *)(lVar11 + 0x210) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x220) = 0;
    *(undefined8 *)(lVar11 + 0x228) = 0;
    *(undefined8 *)(lVar11 + 0x210) = 0;
    *(undefined8 *)(lVar11 + 0x218) = 0;
    (*pcVar30)(lVar11 + 0x230);
    if (local_170 != (code *)0x0) goto LAB_00d508d4;
  }
  pcVar30 = local_178;
  *(undefined1 *)(lVar11 + 0x91a) = 1;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  pcVar30 = *(code **)(lVar11 + 0x698);
  local_158 = &LAB_00d528d8;
  local_150 = 0;
  local_180 = &LAB_00d6287c;
  local_178 = FUN_00d6289c;
  local_170 = FUN_00d628a0;
  local_168 = &LAB_00d628b4;
  local_160 = param_1;
  if (pcVar30 == (code *)0x0) {
LAB_00d50988:
    (*local_170)(&local_160,lVar11 + 0x6b0);
    *(code **)(lVar11 + 0x698) = local_178;
    *(undefined1 **)(lVar11 + 0x6a8) = local_168;
    *(code **)(lVar11 + 0x6a0) = local_170;
    *(undefined8 *)(lVar11 + 0x690) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x6a0) = 0;
    *(undefined8 *)(lVar11 + 0x6a8) = 0;
    *(undefined8 *)(lVar11 + 0x690) = 0;
    *(undefined8 *)(lVar11 + 0x698) = 0;
    (*pcVar30)(lVar11 + 0x6b0);
    if (local_170 != (code *)0x0) goto LAB_00d50988;
  }
  pcVar30 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  pcVar30 = *(code **)(lVar11 + 0x618);
  local_158 = &LAB_00d52918;
  local_150 = 0;
  local_180 = &LAB_00d6287c;
  local_178 = FUN_00d6289c;
  local_170 = FUN_00d628a0;
  local_168 = &LAB_00d628b4;
  local_160 = param_1;
  if (pcVar30 == (code *)0x0) {
LAB_00d50a10:
    (*local_170)(&local_160,lVar11 + 0x630);
    *(code **)(lVar11 + 0x618) = local_178;
    *(undefined1 **)(lVar11 + 0x628) = local_168;
    *(code **)(lVar11 + 0x620) = local_170;
    *(undefined8 *)(lVar11 + 0x610) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x620) = 0;
    *(undefined8 *)(lVar11 + 0x628) = 0;
    *(undefined8 *)(lVar11 + 0x610) = 0;
    *(undefined8 *)(lVar11 + 0x618) = 0;
    (*pcVar30)(lVar11 + 0x630);
    if (local_170 != (code *)0x0) goto LAB_00d50a10;
  }
  pcVar30 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  pcVar30 = *(code **)(lVar11 + 0x418);
  local_158 = &LAB_00d52920;
  local_150 = 0;
  local_180 = &LAB_00d628c8;
  local_178 = FUN_00d628e4;
  local_170 = FUN_00d628e8;
  local_168 = &LAB_00d628fc;
  local_160 = param_1;
  if (pcVar30 == (code *)0x0) {
LAB_00d50abc:
    (*local_170)(&local_160,lVar11 + 0x430);
    *(code **)(lVar11 + 0x418) = local_178;
    *(undefined1 **)(lVar11 + 0x428) = local_168;
    *(code **)(lVar11 + 0x420) = local_170;
    *(undefined8 *)(lVar11 + 0x410) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x420) = 0;
    *(undefined8 *)(lVar11 + 0x428) = 0;
    *(undefined8 *)(lVar11 + 0x410) = 0;
    *(undefined8 *)(lVar11 + 0x418) = 0;
    (*pcVar30)(lVar11 + 0x430);
    if (local_170 != (code *)0x0) goto LAB_00d50abc;
  }
  pcVar30 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  pcVar30 = *(code **)(lVar11 + 0x498);
  local_158 = &LAB_00d52930;
  local_150 = 0;
  local_180 = &LAB_00d628c8;
  local_178 = FUN_00d628e4;
  local_170 = FUN_00d628e8;
  local_168 = &LAB_00d628fc;
  local_160 = param_1;
  if (pcVar30 == (code *)0x0) {
LAB_00d50b44:
    (*local_170)(&local_160,lVar11 + 0x4b0);
    *(code **)(lVar11 + 0x498) = local_178;
    *(undefined1 **)(lVar11 + 0x4a8) = local_168;
    *(code **)(lVar11 + 0x4a0) = local_170;
    *(undefined8 *)(lVar11 + 0x490) = local_180;
  }
  else {
    *(undefined8 *)(lVar11 + 0x4a0) = 0;
    *(undefined8 *)(lVar11 + 0x4a8) = 0;
    *(undefined8 *)(lVar11 + 0x490) = 0;
    *(undefined8 *)(lVar11 + 0x498) = 0;
    (*pcVar30)(lVar11 + 0x4b0);
    if (local_170 != (code *)0x0) goto LAB_00d50b44;
  }
  pcVar30 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar30)(&local_160);
  }
  FUN_0281857c(lVar11);
  plVar28 = (long *)param_1[0x59];
  if (plVar28 != (long *)0x0) {
    plVar27 = plVar28 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar27 = (long *)plVar28[0x29];
  lVar29 = plVar28[0x2a];
  if ((lVar29 != 0) && (*plVar27 != 0x2dc110817bf2fd6c)) {
    plVar22 = plVar27 + lVar29 * 6;
    lVar29 = lVar29 * 0x30;
    do {
      lVar29 = lVar29 + -0x30;
      if (lVar29 == 0) {
        plVar27 = plVar22;
        break;
      }
      plVar14 = plVar27 + 6;
      plVar24 = plVar27 + 6;
      plVar27 = plVar14;
    } while (*plVar24 != 0x2dc110817bf2fd6c);
  }
  *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
  if (plVar28 == (long *)0x0) {
LAB_00d50c34:
    plVar28 = (long *)param_1[0x59];
  }
  else {
    plVar27 = plVar28 + 10;
    do {
      iVar13 = (int)*plVar27 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *(int *)plVar27 = iVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 != 0) goto LAB_00d50c34;
    (**(code **)(*plVar28 + 0x10))();
    plVar28 = (long *)param_1[0x59];
  }
  if (plVar28 != (long *)0x0) {
    plVar27 = plVar28 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar27 = (long *)plVar28[0x29];
  lVar29 = plVar28[0x2a];
  if ((lVar29 != 0) && (*plVar27 != 0x62f3434c9624b485)) {
    plVar22 = plVar27 + lVar29 * 6;
    lVar29 = lVar29 * 0x30;
    do {
      lVar29 = lVar29 + -0x30;
      if (lVar29 == 0) {
        plVar27 = plVar22;
        break;
      }
      plVar14 = plVar27 + 6;
      plVar24 = plVar27 + 6;
      plVar27 = plVar14;
    } while (*plVar24 != 0x62f3434c9624b485);
  }
  *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
  if (plVar28 == (long *)0x0) {
    return;
  }
  plVar27 = plVar28 + 10;
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar8) {
      *(int *)plVar27 = iVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00d50ccc:
  if (iVar13 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
  return;
}


