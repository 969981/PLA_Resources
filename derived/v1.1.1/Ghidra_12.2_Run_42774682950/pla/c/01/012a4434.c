/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012a4434; name: FUN_012a4434
 */


undefined8 FUN_012a4434(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  string *psVar16;
  undefined *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  long local_720;
  undefined4 local_718;
  long local_710;
  undefined4 local_708 [2];
  string asStack_700 [544];
  undefined8 auStack_4e0 [2];
  string local_4d0;
  undefined1 auStack_4cf [7];
  size_t local_4c8;
  undefined1 *local_4c0;
  char *apcStack_2b0 [2];
  char *local_2a0 [2];
  long local_290;
  undefined1 auStack_70 [16];
  
  if (((DAT_043c08c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c08c8), iVar9 != 0)) {
    local_290 = 0;
    local_2a0[1] = (undefined1 *)0x0;
    local_2a0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c0830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c0830), iVar9 != 0)) {
      FUN_012a8140();
      FUN_00100250(PTR__string_04379718,&DAT_043c0818,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c0830);
    }
    pcVar27 = (char *)FUN_012a7528(local_2a0,&DAT_043c0818);
    psVar16 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043c08b0,psVar16);
    lVar13 = local_290;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2a0[0] & 1) != 0) && (local_290 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
      }
      uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_012a54ec;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_012a54ec:
    FUN_00100250(PTR__string_04379718,&DAT_043c08b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c08c8);
  }
  std::string::string(&local_4d0,(string *)&DAT_043c08b0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043c08a8);
  sVar2 = (ulong)((byte)local_4d0 >> 1);
  if (((byte)local_4d0 & 1) != 0) {
    sVar2 = local_4c8;
  }
  std::string::append((ulong)&local_4d0,(char)iVar9);
  if (((byte)local_4d0 & 1) == 0) {
    puVar28 = auStack_4cf;
    local_4c8 = (size_t)((byte)local_4d0 >> 1);
  }
  else {
    puVar28 = local_4c0;
  }
  snprintf(puVar28 + (sVar2 - 1),local_4c8,"%d",(ulong)DAT_043c08a8);
  DAT_043c08a8 = DAT_043c08a8 + 1;
  if (((DAT_043c08e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c08e8), iVar9 != 0)) {
    local_290 = 0;
    local_2a0[1] = (undefined1 *)0x0;
    local_2a0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c0830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c0830), iVar9 != 0)) {
      FUN_012a8140();
      FUN_00100250(PTR__string_04379718,&DAT_043c0818,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c0830);
    }
    pcVar27 = (char *)FUN_012a7528(local_2a0,&DAT_043c0818);
    psVar16 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043c08d0,psVar16);
    lVar13 = local_290;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2a0[0] & 1) != 0) && (local_290 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
      }
      uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_012a5640;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_012a5640:
    FUN_00100250(PTR__string_04379718,&DAT_043c08d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c08e8);
  }
  puVar17 = DAT_043c08e0;
  if ((DAT_043c08d0 & 1) == 0) {
    puVar17 = &DAT_043c08d1;
  }
  if (((byte)local_4d0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_4d0 | 1);
  }
  else {
    puVar28 = local_4c0;
  }
  if (((DAT_043c08f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c08f8), iVar9 != 0)) {
    DAT_043c08f0 = 0xd8;
    __cxa_guard_release(&DAT_043c08f8);
  }
  if (((DAT_043c0908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c0908), iVar9 != 0)) {
    DAT_043c0900 = 0xdf;
    __cxa_guard_release(&DAT_043c0908);
  }
  uVar22 = DAT_043c08f0;
  lVar13 = FUN_00153520(param_2,DAT_043c08f0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043c0900;
    lVar13 = FUN_00153520(param_2,DAT_043c0900);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_012a8b00();
      puVar3 = DAT_043c0920;
      if ((DAT_043c0910 & 1) == 0) {
        puVar3 = &DAT_043c0911;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar18;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar13;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar24;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar20[2];
    uVar22 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar22 = uVar25 - 1 & uVar22;
    }
    else if (uVar25 <= uVar22) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar22 / uVar25;
      }
      uVar22 = uVar22 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar20[1] + uVar22 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar18;
  puVar20[7] = uVar23;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_042031c0;
  *(undefined1 *)(puVar20 + 0xb) = uVar5;
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  uVar18 = *(undefined8 *)(param_1 + 0x68);
  puVar20[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar20[0xd] = uVar18;
  puVar20[0xe] = uVar23;
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar23 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar20[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar20[0x12] = uVar4;
  puVar20[0xf] = uVar18;
  puVar20[0x10] = uVar23;
  uVar18 = *(undefined8 *)(param_1 + 0x98);
  uVar23 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  puVar20[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar20[0x16] = uVar4;
  puVar20[0x13] = uVar18;
  puVar20[0x14] = uVar23;
  uVar18 = *(undefined8 *)(param_1 + 0xb8);
  uVar23 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  puVar20[0x19] = *(undefined8 *)(param_1 + 200);
  puVar20[0x1a] = uVar4;
  puVar20[0x17] = uVar18;
  puVar20[0x18] = uVar23;
  iVar9 = FUN_00154450(param_2,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_012a8ac0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar10 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar10);
  }
  FUN_001522a0(param_2,puVar17);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar17);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_4d0 & 1) != 0) && (local_4c0 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
    }
    uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,local_4c0,0,8);
        goto LAB_012a47c4;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_4c0,0,8);
  }
LAB_012a47c4:
  memset(local_2a0,0,0x230);
  pcVar27 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar24 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  puVar28 = &LAB_012a8598;
  if (uVar11 != 0) {
    puVar28 = &LAB_012a8560;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar28;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar13 + 0x88) = puVar28;
            goto LAB_012a48e4;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_012a48e4;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  uVar25 = 1;
  local_2a0[0] = pcVar27;
  local_2a0[1] = puVar28;
LAB_012a48e4:
  pcVar27 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar1 = FUN_012a87b8;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_012a85d0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x88) = pcVar1;
        goto LAB_012a49c4;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_012a49c4;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  local_2a0[uVar25 * 2] = pcVar27;
  local_2a0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_012a49c4:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar1 = FUN_012a885c;
  if (uVar11 != 0) {
    pcVar1 = FUN_012a880c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x88) = pcVar1;
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
            goto joined_r0x012a4ab8;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
      goto joined_r0x012a4ab8;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  local_2a0[uVar25 * 2] = pcVar27;
  local_2a0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x012a4ab8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    local_2a0[uVar25 * 2] = pcVar27;
    local_2a0[uVar25 * 2 + 1] = &LAB_012a8f40;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
    uVar25 = (ulong)((int)uVar25 + 1);
  }
  uVar22 = uVar25;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    uVar22 = (ulong)((int)uVar25 + 1);
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    local_2a0[uVar25 * 2] = pcVar27;
    local_2a0[uVar25 * 2 + 1] = &LAB_012a8f30;
  }
  uVar25 = uVar22;
  if (*(long *)(lVar13 + 0x88) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar19 = *(char **)(lVar13 + 0x88);
    uVar25 = (ulong)((int)uVar22 + 1);
    local_2a0[uVar22 * 2] = pcVar27;
    local_2a0[uVar22 * 2 + 1] = pcVar19;
  }
  local_2a0[uVar25 * 2] = (char *)0x0;
  local_2a0[uVar25 * 2 + 1] = (char *)0x0;
  memcpy(&local_4d0,local_2a0,0x230);
  memcpy(asStack_700,local_2a0,0x230);
  lVar29 = FUN_008cca50();
  lVar15 = uVar25 - 1;
  pcVar27 = local_2a0[lVar15 * 2];
  sVar14 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_4e0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4cf + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_700 + lVar15 * 0x10) = local_2a0[lVar15 * 2];
  *(undefined1 **)(asStack_700 + (lVar15 * 2 + 1) * 8) = &LAB_012a88b0;
  FUN_00151fe0(param_2,0,2);
  local_708[0] = FUN_0014feb0(param_2,0xffffffff);
  local_710 = param_2;
  if (((DAT_043c0830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c0830), iVar9 != 0)) {
    FUN_012a8140();
    FUN_00100250(PTR__string_04379718,&DAT_043c0818,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c0830);
  }
  uVar10 = local_708[0];
  if ((DAT_043c0818 & 1) == 0) {
    uVar22 = (ulong)(DAT_043c0818 >> 1);
    puVar28 = &DAT_043c0819;
  }
  else {
    uVar22 = DAT_043c0820;
    puVar28 = DAT_043c0828;
  }
  FUN_001514f0(param_2,puVar28,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_012a8900,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar16 = asStack_700;
      FUN_012a68f8();
      pbVar21 = &DAT_043c0780;
      puVar17 = &DAT_043c0781;
      puVar20 = &DAT_043c0790;
    }
    else if (lVar29 == 0) {
      psVar16 = &local_4d0;
      FUN_012a671c();
      puVar17 = &DAT_043c0709;
      puVar20 = &DAT_043c0718;
      pbVar21 = &DAT_043c0708;
    }
    else {
      psVar16 = (string *)local_2a0;
      FUN_012a6ad4();
      puVar17 = &DAT_043c07f9;
      puVar20 = &DAT_043c0808;
      pbVar21 = &DAT_043c07f8;
    }
    if ((*pbVar21 & 1) != 0) {
      puVar17 = (undefined *)*puVar20;
    }
    FUN_00154450(param_2,puVar17);
    local_718 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_720 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,local_718);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar16,2);
    uVar10 = local_718;
    if (*(long *)(lVar13 + 0xb8) == 0) {
      lVar15 = *(long *)(lVar13 + 0xc0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xc0);
      uVar10 = local_718;
    }
    local_718 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_718;
    uVar18 = *(undefined8 *)(lVar13 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_718;
    uVar18 = *(undefined8 *)(lVar13 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_750,&local_720,local_718);
    }
    else {
      local_750 = &LAB_012a89f0;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8950(param_2,1,&local_750,local_718);
      local_750 = &LAB_012a89f4;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8950(param_2,2,&local_750,local_718);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,uVar10);
    if (*(undefined1 **)(lVar13 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 200) == '\0') goto LAB_012a5048;
LAB_012a52f4:
      local_750 = &LAB_012a89f0;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8950(param_2,1,&local_750,uVar10);
      local_750 = &LAB_012a89f4;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8950(param_2,2,&local_750,uVar10);
      if (param_2 == 0) goto LAB_012a5344;
LAB_012a5050:
      uVar12 = local_718;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar13 + 0x90);
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8950(param_2,4,&local_750,uVar10);
      if (*(char *)(lVar13 + 200) != '\0') goto LAB_012a52f4;
LAB_012a5048:
      if (param_2 != 0) goto LAB_012a5050;
LAB_012a5344:
      uVar12 = local_718;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_720,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_012a6cfc();
      puVar17 = DAT_043c0880;
      if ((DAT_043c0870 & 1) == 0) {
        puVar17 = &DAT_043c0871;
      }
      FUN_00154450(param_2,puVar17);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_2a0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar12);
      local_750 = *(undefined1 **)(lVar13 + 0x90);
      if (local_750 != (undefined1 *)0x0) {
        uStack_748 = 0;
        local_740 = lVar13;
        lStack_738 = lVar24;
        FUN_012a8950(param_2,4,&local_750,uVar12);
      }
      local_750 = &LAB_012a8ab8;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7a750;
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8a00(param_2,1,&local_750,uVar12);
      local_750 = &LAB_012a8abc;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7a750;
      local_740 = lVar13;
      lStack_738 = lVar24;
      FUN_012a8a00(param_2,2,&local_750,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_708[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


