/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc4960; name: FUN_02dc4960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dc4960(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  char *pcVar1;
  long *plVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  short sVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ushort uVar23;
  ushort *puVar24;
  ulong uVar25;
  byte *pbVar26;
  int *piVar27;
  undefined1 *puVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  long *local_1d8;
  long *local_1d0;
  size_t local_1c8;
  long *local_1c0;
  undefined8 *local_1b8;
  long *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  long *local_190;
  size_t local_188;
  long *local_180;
  undefined8 *local_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [16];
  undefined1 *local_120;
  char *pcStack_118;
  size_t local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  size_t local_f0;
  long *local_e8;
  undefined8 *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  size_t local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((*(long *)(param_3 + 8) == 0) || (*(char *)(*(long *)(param_3 + 8) + 0x1e1) == '\0')) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_02dc6460(&local_a0);
  lVar18 = *(long *)(param_3 + 8);
  if ((lVar18 == 0) || (*(char *)(lVar18 + 0x1e1) == '\0')) {
    piVar27 = (int *)0x0;
  }
  else {
    piVar27 = (int *)((long)*(uint **)(lVar18 + 0x250) + (ulong)**(uint **)(lVar18 + 0x250));
  }
  puVar24 = (ushort *)((long)piVar27 - (long)*piVar27);
  uVar23 = *puVar24;
  if (uVar23 < 5) goto LAB_02dc61f8;
  uVar25 = (ulong)puVar24[2];
  lVar19 = -(long)*piVar27;
  lVar18 = tpidr_el0;
  if ((uVar25 != 0) &&
     (puVar3 = (uint *)((long)piVar27 + uVar25), piVar4 = (int *)((long)puVar3 + (ulong)*puVar3),
     piVar4 != (int *)0x0)) {
    FUN_02dc896c(&local_c0,param_2);
    plVar13 = local_c0;
    uVar31 = 0;
    if ((8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar25 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar25 != 0)) {
      uVar31 = *(undefined4 *)((long)piVar4 + uVar25);
    }
    (**(code **)(*local_c0 + 0x20))(uVar31,local_c0);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar25 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar25 == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = *(char *)((long)piVar4 + uVar25) != '\0';
    }
    (**(code **)(*local_c0 + 0x10))(local_c0,bVar14);
    plVar22 = local_a0;
    local_c0 = (long *)0x0;
    local_f0 = local_b0;
    local_e8 = local_a8;
    local_100 = plVar13;
    local_f8 = local_b8;
    (**(code **)(*local_a0 + 0x58))(&local_e0,local_a0,&local_100);
    puVar30 = local_e0;
    local_e0 = (undefined8 *)0x0;
    if (puVar30 != (undefined8 *)0x0) {
      FUN_02bcbe58(&local_120,0);
      (**(code **)*puVar30)(puVar30);
      uVar25 = (**(code **)(*local_d8 + 0xc0))(local_d8);
      if ((uVar25 & 1) == 0) {
LAB_02dc4b44:
        (**(code **)(*local_d8 + 0x18))(local_d8,puVar30,uStack_d0,local_c8);
      }
      else {
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02dc4b44;
        FUN_02bcc824(local_d8,puVar30,uStack_d0,local_c8);
      }
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar29 = *(int *)(lVar18 + 0x38d480) + -1;
      *(int *)(lVar18 + 0x38d480) = iVar29;
      if (iVar29 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar18 + 0x38d484) = 0;
      }
    }
    plVar13 = local_100;
    local_100 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_02bcbe58(&local_120,0);
      (**(code **)*plVar13)(plVar13);
      plVar2 = local_e8;
      sVar10 = local_f0;
      plVar16 = local_f8;
      uVar25 = (**(code **)(*local_f8 + 0xc0))(local_f8);
      if ((uVar25 & 1) == 0) {
LAB_02dc4c64:
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar13,sVar10,plVar2);
      }
      else {
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02dc4c64;
        FUN_02bcc824(plVar16,plVar13,sVar10,plVar2);
      }
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar29 = *(int *)(lVar18 + 0x38d480) + -1;
      *(int *)(lVar18 + 0x38d480) = iVar29;
      if (iVar29 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar18 + 0x38d484) = 0;
      }
    }
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar25 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar25 == 0)) {
      lVar19 = 0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar25);
      lVar19 = (long)puVar3 + (ulong)*puVar3;
    }
    puVar28 = &DAT_cbf29ce484222645;
    local_110 = strlen((char *)(lVar19 + 4));
    bVar7 = *(byte *)(lVar19 + 4);
    if (bVar7 != 0) {
      pbVar26 = (byte *)(lVar19 + 5);
      do {
        puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar26;
        pbVar26 = pbVar26 + 1;
      } while (bVar7 != 0);
    }
    iVar29 = -1;
    local_108 = (long *)0x0;
    puVar6 = *(undefined8 **)(param_4 + 0x60);
    pcStack_118 = (char *)(lVar19 + 4);
    local_120 = puVar28;
    for (puVar30 = *(undefined8 **)(param_4 + 0x58); puVar30 != puVar6; puVar30 = puVar30 + 2) {
      sVar15 = FUN_02b6f370(*puVar30,&local_120);
      if (-1 < sVar15) {
        iVar29 = (int)(short)(*(short *)((long)puVar30 + 10) + sVar15);
        break;
      }
    }
    (**(code **)(*plVar22 + 0x70))(plVar22,iVar29);
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    lVar19 = -(long)*piVar27;
    uVar23 = *(ushort *)((long)piVar27 - (long)*piVar27);
  }
  plVar13 = local_a0;
  pcVar9 = DAT_0388a148;
  puVar8 = DAT_0388a140;
  uVar25 = _UNK_03889a88;
  puVar28 = _DAT_03889a80;
  if ((((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar19 + 6), uVar20 != 0)) &&
      (puVar3 = (uint *)((long)piVar27 + uVar20), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
      puVar3 != (uint *)0x0)) && (*puVar3 != 0)) {
    uVar20 = 0;
    do {
      plVar22 = (long *)&DAT_cbf29ce484222645;
      piVar27 = (int *)((long)(puVar3 + uVar20 + 1) + (ulong)puVar3[uVar20 + 1]);
      if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 5) ||
         (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2], uVar21 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar27 + uVar21);
        lVar19 = (long)puVar5 + (ulong)*puVar5;
      }
      local_b0 = strlen((char *)(lVar19 + 4));
      bVar7 = *(byte *)(lVar19 + 4);
      local_c0 = plVar22;
      if (bVar7 != 0) {
        pbVar26 = (byte *)(lVar19 + 5);
        do {
          local_c0 = (long *)(((ulong)local_c0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (bVar7 != 0);
      }
      local_a8 = (long *)0x0;
      local_b8 = (long *)(lVar19 + 4);
      plVar16 = (long *)(**(code **)(*plVar13 + 0x20))(plVar13,&local_c0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_130 = (**(code **)(*plVar16 + 0x48))(plVar16);
      if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 0xb) ||
         (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[5], uVar21 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar27 + uVar21);
        lVar19 = (long)puVar5 + (ulong)*puVar5;
      }
      pcVar1 = (char *)(lVar19 + 4);
      local_b0 = strlen(pcVar1);
      bVar7 = *(byte *)(lVar19 + 4);
      local_c0 = plVar22;
      if (bVar7 != 0) {
        pbVar26 = (byte *)(lVar19 + 5);
        do {
          local_c0 = (long *)(((ulong)local_c0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (bVar7 != 0);
      }
      local_a8 = (long *)0x0;
      puVar30 = *(undefined8 **)(param_4 + 0x58);
      puVar6 = *(undefined8 **)(param_4 + 0x60);
      local_b8 = (long *)pcVar1;
      if (puVar30 == puVar6) {
        local_130._0_4_ = 0xffffffff;
      }
      else {
        do {
          sVar15 = FUN_02b6f370(*puVar30,&local_c0);
          if (-1 < sVar15) {
            sVar15 = *(short *)((long)puVar30 + 10) + sVar15;
            goto LAB_02dc5004;
          }
          puVar30 = puVar30 + 2;
        } while (puVar6 != puVar30);
        sVar15 = -1;
LAB_02dc5004:
        local_130._0_4_ = (int)sVar15;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 0xd) ||
         (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[6], uVar21 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar27 + uVar21);
        lVar19 = (long)puVar5 + (ulong)*puVar5;
      }
      pcVar1 = (char *)(lVar19 + 4);
      local_b0 = strlen(pcVar1);
      bVar7 = *(byte *)(lVar19 + 4);
      local_c0 = plVar22;
      if (bVar7 != 0) {
        pbVar26 = (byte *)(lVar19 + 5);
        do {
          local_c0 = (long *)(((ulong)local_c0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (bVar7 != 0);
      }
      local_a8 = (long *)0x0;
      puVar30 = *(undefined8 **)(param_4 + 0x58);
      puVar6 = *(undefined8 **)(param_4 + 0x60);
      local_b8 = (long *)pcVar1;
      if (puVar30 == puVar6) {
        local_130._4_4_ = 0xffffffff;
      }
      else {
        do {
          sVar15 = FUN_02b6f370(*puVar30,&local_c0);
          if (-1 < sVar15) {
            sVar15 = *(short *)((long)puVar30 + 10) + sVar15;
            goto LAB_02dc50cc;
          }
          puVar30 = puVar30 + 2;
        } while (puVar6 != puVar30);
        sVar15 = -1;
LAB_02dc50cc:
        local_130._4_4_ = (int)sVar15;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 0xf) ||
         (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[7], uVar21 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar27 + uVar21);
        lVar19 = (long)puVar5 + (ulong)*puVar5;
      }
      pcVar1 = (char *)(lVar19 + 4);
      local_b0 = strlen(pcVar1);
      bVar7 = *(byte *)(lVar19 + 4);
      local_c0 = plVar22;
      if (bVar7 != 0) {
        pbVar26 = (byte *)(lVar19 + 5);
        do {
          local_c0 = (long *)(((ulong)local_c0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (bVar7 != 0);
      }
      local_a8 = (long *)0x0;
      puVar30 = *(undefined8 **)(param_4 + 0x58);
      puVar6 = *(undefined8 **)(param_4 + 0x60);
      local_b8 = (long *)pcVar1;
      if (puVar30 == puVar6) {
        local_130._8_4_ = 0xffffffff;
      }
      else {
        do {
          sVar15 = FUN_02b6f370(*puVar30,&local_c0);
          if (-1 < sVar15) {
            sVar15 = *(short *)((long)puVar30 + 10) + sVar15;
            goto LAB_02dc5194;
          }
          puVar30 = puVar30 + 2;
        } while (puVar6 != puVar30);
        sVar15 = -1;
LAB_02dc5194:
        local_130._8_4_ = (int)sVar15;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 0x11) ||
         (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[8], uVar21 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar27 + uVar21);
        lVar19 = (long)puVar5 + (ulong)*puVar5;
      }
      plVar2 = (long *)(lVar19 + 4);
      local_b0 = strlen((char *)plVar2);
      bVar7 = *(byte *)(lVar19 + 4);
      if (bVar7 != 0) {
        pbVar26 = (byte *)(lVar19 + 5);
        do {
          plVar22 = (long *)(((ulong)plVar22 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (bVar7 != 0);
      }
      local_a8 = (long *)0x0;
      puVar30 = *(undefined8 **)(param_4 + 0x58);
      puVar6 = *(undefined8 **)(param_4 + 0x60);
      local_c0 = plVar22;
      local_b8 = plVar2;
      if (puVar30 == puVar6) {
        local_130._12_4_ = 0xffffffff;
      }
      else {
        do {
          sVar15 = FUN_02b6f370(*puVar30,&local_c0);
          if (-1 < sVar15) {
            sVar15 = *(short *)((long)puVar30 + 10) + sVar15;
            goto LAB_02dc525c;
          }
          puVar30 = puVar30 + 2;
        } while (puVar6 != puVar30);
        sVar15 = -1;
LAB_02dc525c:
        local_130._12_4_ = (int)sVar15;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      (**(code **)(*plVar16 + 0x40))(plVar16,local_130);
      puVar24 = (ushort *)((long)piVar27 - (long)*piVar27);
      lVar19 = -(long)*piVar27;
      uVar23 = *puVar24;
      if (uVar23 < 0x15) {
LAB_02dc5874:
        if (0x12 < uVar23) goto LAB_02dc587c;
      }
      else {
        uVar21 = (ulong)puVar24[10];
        if ((uVar21 != 0) &&
           (puVar5 = (uint *)((long)piVar27 + uVar21),
           piVar4 = (int *)((long)puVar5 + (ulong)*puVar5), piVar4 != (int *)0x0)) {
          FUN_02dc8a84(&local_c0,param_2);
          plVar22 = local_c0;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
             (uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar21 == 0)) {
            bVar14 = false;
          }
          else {
            bVar14 = *(char *)((long)piVar4 + uVar21) != '\0';
          }
          (**(code **)(*local_c0 + 0x10))(local_c0,bVar14);
          uVar31 = 0;
          if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
            uVar31 = 0;
            if (uVar21 != 0) {
              uVar31 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          (**(code **)(*plVar22 + 0x20))(uVar31,plVar22);
          uVar31 = 0;
          if (0x1c < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xe];
            uVar31 = 0;
            if (uVar21 != 0) {
              uVar31 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          (**(code **)(*plVar22 + 0x58))(uVar31,plVar22);
          pcStack_118 = (char *)0x0;
          local_120 = (undefined1 *)0x0;
          if (0x1a < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xd];
            pcStack_118 = (char *)0x0;
            local_120 = (undefined1 *)0x0;
            if (uVar21 != 0) {
              puVar30 = (undefined8 *)((long)piVar4 + uVar21);
              local_120 = (undefined1 *)*puVar30;
              pcStack_118 = (char *)(ulong)*(uint *)(puVar30 + 1);
            }
          }
          (**(code **)(*plVar22 + 0x48))(plVar22,&local_120);
          uVar17 = (**(code **)(*plVar22 + 0x70))(plVar22);
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x15) {
            bVar14 = false;
          }
          else {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10];
            bVar14 = false;
            if (uVar21 != 0) {
              bVar14 = *(char *)((long)piVar4 + uVar21) != '\0';
            }
          }
          local_140 = CONCAT71((int7)((ulong)uVar17 >> 8),bVar14);
          uVar31 = 0;
          if (0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb];
            uVar31 = 0;
            if (uVar21 != 0) {
              uVar31 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          local_140 = CONCAT44(uVar31,(undefined4)local_140);
          local_138 = 0;
          if (0x18 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc];
            local_138 = 0;
            if (uVar21 != 0) {
              local_138 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          (**(code **)(*plVar22 + 0x68))(plVar22,&local_140);
          (**(code **)(*plVar22 + 0x80))(local_158,plVar22);
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 9) {
            local_158[0] = false;
          }
          else {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
            local_158[0] = false;
            if (uVar21 != 0) {
              local_158[0] = *(char *)((long)piVar4 + uVar21) != '\0';
            }
          }
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) {
            local_144 = 0;
          }
          else {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9];
            local_144 = 0;
            if (uVar21 != 0) {
              local_144 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          local_14c = 0;
          if (10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
            local_14c = 0;
            if (uVar21 != 0) {
              local_14c = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          local_148 = 0;
          if (0xc < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6];
            local_148 = 0;
            if (uVar21 != 0) {
              local_148 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          local_154 = 0;
          if (0xe < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7];
            local_154 = 0;
            if (uVar21 != 0) {
              local_154 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          local_150 = 0;
          if (0x10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar21 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8];
            local_150 = 0;
            if (uVar21 != 0) {
              local_150 = *(undefined4 *)((long)piVar4 + uVar21);
            }
          }
          (**(code **)(*plVar22 + 0x78))(plVar22,local_158);
          local_c0 = (long *)0x0;
          local_188 = local_b0;
          local_180 = local_a8;
          local_198 = plVar22;
          local_190 = local_b8;
          (**(code **)(*plVar16 + 0x20))(&local_178,plVar16,&local_198);
          puVar30 = local_178;
          local_178 = (undefined8 *)0x0;
          if (puVar30 != (undefined8 *)0x0) {
            FUN_02bcbe58(&local_120,0);
            (**(code **)*puVar30)(puVar30);
            uVar11 = local_160;
            uVar17 = uStack_168;
            plVar22 = local_170;
            uVar21 = (**(code **)(*local_170 + 0xc0))(local_170);
            if ((uVar21 & 1) == 0) {
LAB_02dc5668:
              (**(code **)(*plVar22 + 0x18))(plVar22,puVar30,uVar17,uVar11);
            }
            else {
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02dc5668;
              FUN_02bcc824(plVar22,puVar30,uVar17,uVar11);
            }
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar29 = *(int *)(lVar18 + 0x38d480) + -1;
            *(int *)(lVar18 + 0x38d480) = iVar29;
            if (iVar29 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar18 + 0x38d484) = 0;
            }
          }
          plVar22 = local_198;
          local_198 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            FUN_02bcbe58(&local_120,0);
            (**(code **)*plVar22)(plVar22);
            plVar12 = local_180;
            sVar10 = local_188;
            plVar2 = local_190;
            uVar21 = (**(code **)(*local_190 + 0xc0))(local_190);
            if ((uVar21 & 1) == 0) {
LAB_02dc57ac:
              (**(code **)(*plVar2 + 0x18))(plVar2,plVar22,sVar10,plVar12);
            }
            else {
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02dc57ac;
              FUN_02bcc824(plVar2,plVar22,sVar10,plVar12);
            }
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar29 = *(int *)(lVar18 + 0x38d480) + -1;
            *(int *)(lVar18 + 0x38d480) = iVar29;
            if (iVar29 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar18 + 0x38d484) = 0;
            }
          }
          lVar19 = -(long)*piVar27;
          uVar23 = *(ushort *)((long)piVar27 - (long)*piVar27);
          goto LAB_02dc5874;
        }
LAB_02dc587c:
        uVar21 = (ulong)*(ushort *)((long)piVar27 + lVar19 + 0x12);
        if ((uVar21 != 0) &&
           (puVar5 = (uint *)((long)piVar27 + uVar21),
           piVar27 = (int *)((long)puVar5 + (ulong)*puVar5), piVar27 != (int *)0x0)) {
          FUN_02dc8bd4(&local_c0,param_2);
          plVar22 = local_c0;
          if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 5) ||
             (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2], uVar21 == 0)) {
            bVar14 = false;
          }
          else {
            bVar14 = *(char *)((long)piVar27 + uVar21) != '\0';
          }
          (**(code **)(*local_c0 + 0x10))(local_c0,bVar14);
          uVar31 = 0;
          if (6 < *(ushort *)((long)piVar27 - (long)*piVar27)) {
            uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[3];
            uVar31 = 0;
            if (uVar21 != 0) {
              uVar31 = *(undefined4 *)((long)piVar27 + uVar21);
            }
          }
          (**(code **)(*plVar22 + 0x20))(uVar31,plVar22);
          local_120 = puVar28;
          pcStack_118 = (char *)uVar25;
          if ((10 < *(ushort *)((long)piVar27 - (long)*piVar27)) &&
             (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[5], uVar21 != 0)) {
            puVar30 = (undefined8 *)((long)piVar27 + uVar21);
            local_120 = (undefined1 *)*puVar30;
            pcStack_118 = (char *)(ulong)*(uint *)(puVar30 + 1);
          }
          (**(code **)(*plVar22 + 0x58))(plVar22,&local_120);
          local_120 = puVar8;
          pcStack_118 = pcVar9;
          if ((0xc < *(ushort *)((long)piVar27 - (long)*piVar27)) &&
             (uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[6], uVar21 != 0)) {
            puVar30 = (undefined8 *)((long)piVar27 + uVar21);
            local_120 = (undefined1 *)*puVar30;
            pcStack_118 = (char *)(ulong)*(uint *)(puVar30 + 1);
          }
          (**(code **)(*plVar22 + 0x48))(plVar22,&local_120);
          (**(code **)(*plVar22 + 0x70))(local_158,plVar22);
          if (*(ushort *)((long)piVar27 - (long)*piVar27) < 9) {
            local_158[0] = false;
          }
          else {
            uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[4];
            local_158[0] = false;
            if (uVar21 != 0) {
              local_158[0] = *(char *)((long)piVar27 + uVar21) != '\0';
            }
          }
          local_154 = 0;
          if (0x12 < *(ushort *)((long)piVar27 - (long)*piVar27)) {
            uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[9];
            local_154 = 0;
            if (uVar21 != 0) {
              local_154 = *(undefined4 *)((long)piVar27 + uVar21);
            }
          }
          local_150 = 0;
          if (0x14 < *(ushort *)((long)piVar27 - (long)*piVar27)) {
            uVar21 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[10];
            local_150 = 0;
            if (uVar21 != 0) {
              local_150 = *(undefined4 *)((long)piVar27 + uVar21);
            }
          }
          (**(code **)(*plVar22 + 0x68))(plVar22,local_158);
          local_c0 = (long *)0x0;
          local_1c8 = local_b0;
          local_1c0 = local_a8;
          local_1d8 = plVar22;
          local_1d0 = local_b8;
          (**(code **)(*plVar16 + 0x30))(&local_1b8,plVar16,&local_1d8);
          puVar30 = local_1b8;
          local_1b8 = (undefined8 *)0x0;
          if (puVar30 != (undefined8 *)0x0) {
            FUN_02bcbe58(&local_120,0);
            (**(code **)*puVar30)(puVar30);
            uVar11 = local_1a0;
            uVar17 = uStack_1a8;
            plVar22 = local_1b0;
            uVar21 = (**(code **)(*local_1b0 + 0xc0))(local_1b0);
            if ((uVar21 & 1) == 0) {
LAB_02dc5b8c:
              (**(code **)(*plVar22 + 0x18))(plVar22,puVar30,uVar17,uVar11);
            }
            else {
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02dc5b8c;
              FUN_02bcc824(plVar22,puVar30,uVar17,uVar11);
            }
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar29 = *(int *)(lVar18 + 0x38d480) + -1;
            *(int *)(lVar18 + 0x38d480) = iVar29;
            if (iVar29 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar18 + 0x38d484) = 0;
            }
          }
          plVar22 = local_1d8;
          local_1d8 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            FUN_02bcbe58(&local_120,0);
            (**(code **)*plVar22)(plVar22);
            plVar2 = local_1c0;
            sVar10 = local_1c8;
            plVar16 = local_1d0;
            uVar21 = (**(code **)(*local_1d0 + 0xc0))(local_1d0);
            if ((uVar21 & 1) == 0) {
LAB_02dc5ccc:
              (**(code **)(*plVar16 + 0x18))(plVar16,plVar22,sVar10,plVar2);
            }
            else {
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02dc5ccc;
              FUN_02bcc824(plVar16,plVar22,sVar10,plVar2);
            }
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar29 = *(int *)(lVar18 + 0x38d480) + -1;
            *(int *)(lVar18 + 0x38d480) = iVar29;
            if (iVar29 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar18 + 0x38d484) = 0;
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *puVar3);
  }
LAB_02dc61f8:
  *param_1 = local_a0;
  param_1[1] = uStack_98;
  param_1[2] = local_90;
  param_1[3] = uStack_88;
  return;
}


