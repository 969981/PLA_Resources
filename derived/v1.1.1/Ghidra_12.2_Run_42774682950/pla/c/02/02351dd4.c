/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02351dd4; name: FUN_02351dd4
 */


undefined8 FUN_02351dd4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  byte *pbVar15;
  string *psVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  ulong uVar29;
  undefined1 *local_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  undefined8 local_760;
  undefined *puStack_758;
  undefined4 local_750 [2];
  long local_748;
  undefined4 local_740;
  long local_738;
  undefined4 local_730 [2];
  string asStack_728 [560];
  undefined8 auStack_4f8 [2];
  string local_4e8;
  undefined1 auStack_4e7 [7];
  size_t local_4e0;
  undefined1 *local_4d8;
  char *apcStack_2b8 [2];
  char *local_2a8;
  code *local_2a0;
  long local_298;
  
  if (((DAT_043e20d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e20d0), iVar8 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383ab8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383ab8);
      puVar2 = PTR_DAT_04383ac0;
      if (iVar8 != 0) {
        FUN_0202d960(PTR_DAT_04383ac0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383ab8);
      }
    }
    pcVar26 = (char *)FUN_02354944(&local_2a8,PTR_DAT_04383ac0);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e20b8,psVar16);
    lVar12 = local_298;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_02352ecc;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_02352ecc:
    FUN_00100250(PTR__string_04379718,&DAT_043e20b8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e20d0);
  }
  std::string::string(&local_4e8,(string *)&DAT_043e20b8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e20b0);
  sVar1 = (ulong)((byte)local_4e8 >> 1);
  if (((byte)local_4e8 & 1) != 0) {
    sVar1 = local_4e0;
  }
  std::string::append((ulong)&local_4e8,(char)iVar8);
  if (((byte)local_4e8 & 1) == 0) {
    puVar27 = auStack_4e7;
    local_4e0 = (size_t)((byte)local_4e8 >> 1);
  }
  else {
    puVar27 = local_4d8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_4e0,"%d",(ulong)DAT_043e20b0);
  DAT_043e20b0 = DAT_043e20b0 + 1;
  if (((DAT_043e20f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e20f0), iVar8 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383ab8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383ab8);
      puVar2 = PTR_DAT_04383ac0;
      if (iVar8 != 0) {
        FUN_0202d960(PTR_DAT_04383ac0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383ab8);
      }
    }
    pcVar26 = (char *)FUN_02354944(&local_2a8,PTR_DAT_04383ac0);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e20d8,psVar16);
    lVar12 = local_298;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_02353020;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_02353020:
    FUN_00100250(PTR__string_04379718,&DAT_043e20d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e20f0);
  }
  puVar2 = DAT_043e20e8;
  if ((DAT_043e20d8 & 1) == 0) {
    puVar2 = &DAT_043e20d9;
  }
  if (((byte)local_4e8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4e8 | 1);
  }
  else {
    puVar27 = local_4d8;
  }
  if (((DAT_043e2100 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2100), iVar8 != 0)) {
    DAT_043e20f8 = 0xd8;
    __cxa_guard_release(&DAT_043e2100);
  }
  if (((DAT_043e2110 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2110), iVar8 != 0)) {
    DAT_043e2108 = 0xdf;
    __cxa_guard_release(&DAT_043e2110);
  }
  uVar21 = DAT_043e20f8;
  lVar12 = FUN_00153520(param_2,DAT_043e20f8);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd8)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043e2108;
    lVar12 = FUN_00153520(param_2,DAT_043e2108);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd8)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02355840();
      puVar3 = DAT_043e2128;
      if ((DAT_043e2118 & 1) == 0) {
        puVar3 = &DAT_043e2119;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar18;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar23;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar17[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar21 = uVar24 - 1 & uVar21;
    }
    else if (uVar24 <= uVar21) {
      uVar29 = 0;
      if (uVar24 != 0) {
        uVar29 = uVar21 / uVar24;
      }
      uVar21 = uVar21 - uVar29 * uVar24;
    }
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar22;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar17 = &PTR_FUN_0425bcb8;
  *(undefined1 *)(puVar17 + 0xb) = uVar5;
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  uVar18 = *(undefined8 *)(param_1 + 0x68);
  puVar17[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar17[0xd] = uVar18;
  puVar17[0xe] = uVar22;
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar22 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar17[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar17[0x12] = uVar4;
  puVar17[0xf] = uVar18;
  puVar17[0x10] = uVar22;
  uVar18 = *(undefined8 *)(param_1 + 0x98);
  uVar22 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  puVar17[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar17[0x16] = uVar4;
  puVar17[0x13] = uVar18;
  puVar17[0x14] = uVar22;
  uVar18 = *(undefined8 *)(param_1 + 0xb8);
  uVar22 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  puVar17[0x19] = *(undefined8 *)(param_1 + 200);
  puVar17[0x1a] = uVar4;
  puVar17[0x17] = uVar18;
  puVar17[0x18] = uVar22;
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02355800,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar9 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar9);
  }
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_4e8 & 1) != 0) && (local_4d8 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
    }
    uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar25,local_4d8,0,8);
        goto LAB_02352178;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4d8,0,8);
  }
LAB_02352178:
  memset(&local_2a8,0,0x240);
  puVar2 = PTR_DAT_043866e8;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *puVar2 = 1;
  pcVar26 = *(char **)(lVar12 + 0x60);
  *(undefined1 **)(lVar12 + 0xb8) = &LAB_02355c7c;
  *(undefined1 **)(lVar12 + 0xc0) = &LAB_02355d38;
  *(undefined1 **)(lVar12 + 0xa8) = &LAB_02355da0;
  *(undefined1 **)(lVar12 + 0xb0) = &LAB_02355db0;
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02354db0;
  if (uVar10 != 0) {
    pcVar19 = FUN_02354cbc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar12 + 0x88) = pcVar19;
            goto LAB_023523c4;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_023523c4;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  uVar24 = 1;
  local_2a8 = pcVar26;
  local_2a0 = pcVar19;
LAB_023523c4:
  pcVar26 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_02355588;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_02354e40;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x88) = pcVar19;
            goto LAB_023524d4;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_023524d4;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2a8)[uVar24 * 2] = pcVar26;
  (&local_2a0)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023524d4:
  pcVar26 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_02355760;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_0235572c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      uVar29 = uVar24;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x88) = pcVar19;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
        goto joined_r0x02352d18;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
      goto joined_r0x02352d18;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  uVar29 = (ulong)((int)uVar24 + 1);
  (&local_2a8)[uVar24 * 2] = pcVar26;
  (&local_2a0)[uVar24 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
joined_r0x02352d18:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  uVar21 = uVar29;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar21 = (ulong)((int)uVar29 + 1);
    (&local_2a8)[uVar29 * 2] = pcVar26;
    (&local_2a0)[uVar29 * 2] = (code *)PTR_LAB_04383a90;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  uVar24 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar21 + 1);
    (&local_2a8)[uVar21 * 2] = pcVar26;
    (&local_2a0)[uVar21 * 2] = (code *)PTR_LAB_04383a98;
  }
  uVar21 = uVar24;
  if (*(long *)(lVar12 + 0x88) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0x88);
    uVar21 = (ulong)((int)uVar24 + 1);
    (&local_2a8)[uVar24 * 2] = pcVar26;
    (&local_2a0)[uVar24 * 2] = pcVar19;
  }
  (&local_2a8)[uVar21 * 2] = (char *)0x0;
  (&local_2a0)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_4e8,&local_2a8,0x240);
  memcpy(asStack_728,&local_2a8,0x240);
  lVar28 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar26 = (&local_2a8)[lVar14 * 2];
  sVar13 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_4f8[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4e7 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_728 + lVar14 * 0x10) = (&local_2a8)[lVar14 * 2];
  *(undefined1 **)(asStack_728 + (lVar14 * 2 + 1) * 8) = &LAB_023557a0;
  FUN_00151fe0(param_2,0,2);
  local_730[0] = FUN_0014feb0(param_2,0xffffffff);
  local_738 = param_2;
  if ((*PTR_DAT_04383ab8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04383ab8);
    puVar2 = PTR_DAT_04383ac0;
    if (iVar8 != 0) {
      FUN_0202d960(PTR_DAT_04383ac0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383ab8);
    }
  }
  uVar9 = local_730[0];
  uVar21 = *(ulong *)(PTR_DAT_04383ac0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_04383ac0 + 0x10);
  if ((*PTR_DAT_04383ac0 & 1) == 0) {
    puVar2 = PTR_DAT_04383ac0 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_04383ac0 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02355420,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar16 = asStack_728;
      pbVar15 = (byte *)FUN_0202e168();
    }
    else if (lVar28 == 0) {
      psVar16 = &local_4e8;
      pbVar15 = (byte *)FUN_0202c2e8();
    }
    else {
      psVar16 = (string *)&local_2a8;
      pbVar15 = (byte *)FUN_0202d704();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_740 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_748 = param_2;
    FUN_008fe304(local_750,param_2,&local_780,&local_738,local_740);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_740;
    if (*(long *)(lVar12 + 0xb8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
    }
    uVar9 = local_740;
    if (*(long *)(lVar12 + 0xc0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_740;
    uVar18 = *(undefined8 *)(lVar12 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_740;
    uVar18 = *(undefined8 *)(lVar12 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(local_750,param_2,&local_780,&local_748,local_740);
    }
    else {
      local_750[0] = 1;
      local_780 = &LAB_023557f0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_02356ab8(param_2,local_750,&local_780,local_740);
      local_750[0] = 2;
      local_780 = &LAB_023557f4;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_02356ab8(param_2,local_750,&local_780,local_740);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(local_750,param_2,&local_780,&local_738,uVar9);
    if (*(undefined1 **)(lVar12 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 200) == '\0') goto LAB_023529cc;
LAB_02352c5c:
      local_750[0] = 1;
      local_780 = &LAB_023557f0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_02356ab8(param_2,local_750,&local_780,uVar9);
      local_750[0] = 2;
      local_780 = &LAB_023557f4;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_02356ab8(param_2,local_750,&local_780,uVar9);
      if (param_2 == 0) goto LAB_02352cbc;
LAB_023529d4:
      uVar11 = local_740;
      FUN_00150260(param_2,uVar9);
    }
    else {
      local_750[0] = 4;
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar12 + 0x90);
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_02356ab8(param_2,local_750,&local_780,uVar9);
      if (*(char *)(lVar12 + 200) != '\0') goto LAB_02352c5c;
LAB_023529cc:
      if (param_2 != 0) goto LAB_023529d4;
LAB_02352cbc:
      uVar11 = local_740;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_748,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_02354114();
      puVar2 = DAT_043e2080;
      if ((DAT_043e2070 & 1) == 0) {
        puVar2 = &DAT_043e2071;
      }
      FUN_00154450(param_2,puVar2);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar11);
      local_780 = *(undefined1 **)(lVar12 + 0x90);
      if (local_780 != (undefined1 *)0x0) {
        local_748 = CONCAT44(local_748._4_4_,4);
        uStack_778 = 0;
        local_770 = lVar12;
        lStack_768 = lVar23;
        FUN_02356ab8(param_2,&local_748,&local_780,uVar11);
      }
      local_748._0_4_ = 1;
      local_780 = &LAB_023557f8;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d4d0;
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_0235716c(param_2,&local_748,&local_780,uVar11);
      local_748 = CONCAT44(local_748._4_4_,2);
      local_780 = &LAB_023557fc;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d4d0;
      local_770 = lVar12;
      lStack_768 = lVar23;
      FUN_0235716c(param_2,&local_748,&local_780,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_730[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


