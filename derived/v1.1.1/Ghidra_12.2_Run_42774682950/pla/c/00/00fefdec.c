/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fefdec; name: FUN_00fefdec
 */


undefined8 FUN_00fefdec(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  byte *pbVar16;
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
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
  long local_750;
  undefined4 local_748;
  long local_740;
  undefined4 local_738 [2];
  string asStack_730 [560];
  undefined8 auStack_500 [2];
  string local_4f0;
  undefined1 auStack_4ef [7];
  size_t local_4e8;
  undefined1 *local_4e0;
  char *apcStack_2c0 [2];
  char *local_2b0;
  code *local_2a8;
  long local_2a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b85b0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b85b0), iVar9 != 0)) {
    local_2a0 = 0;
    local_2a8 = (code *)0x0;
    local_2b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437df38 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437df38);
      puVar2 = PTR_DAT_0437df40;
      if (iVar9 != 0) {
        FUN_00ff3a90(PTR_DAT_0437df40);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437df38);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437df40 + 0x10);
    if ((*PTR_DAT_0437df40 & 1) == 0) {
      puVar2 = PTR_DAT_0437df40 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2b0,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b8598,psVar17);
    lVar13 = local_2a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b0 & 1) != 0) && (local_2a0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_00ff0eb8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00ff0eb8:
    FUN_00100250(PTR__string_04379718,&DAT_043b8598,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b85b0);
  }
  std::string::string(&local_4f0,(string *)&DAT_043b8598);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b8590);
  sVar1 = (ulong)((byte)local_4f0 >> 1);
  if (((byte)local_4f0 & 1) != 0) {
    sVar1 = local_4e8;
  }
  std::string::append((ulong)&local_4f0,(char)iVar9);
  if (((byte)local_4f0 & 1) == 0) {
    puVar27 = auStack_4ef;
    local_4e8 = (size_t)((byte)local_4f0 >> 1);
  }
  else {
    puVar27 = local_4e0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_4e8,"%d",(ulong)DAT_043b8590);
  DAT_043b8590 = DAT_043b8590 + 1;
  if (((DAT_043b85d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b85d0), iVar9 != 0)) {
    local_2a0 = 0;
    local_2a8 = (code *)0x0;
    local_2b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437df38 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437df38);
      puVar2 = PTR_DAT_0437df40;
      if (iVar9 != 0) {
        FUN_00ff3a90(PTR_DAT_0437df40);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437df38);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437df40 + 0x10);
    if ((*PTR_DAT_0437df40 & 1) == 0) {
      puVar2 = PTR_DAT_0437df40 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2b0,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b85b8,psVar17);
    lVar13 = local_2a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b0 & 1) != 0) && (local_2a0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_00ff1028;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00ff1028:
    FUN_00100250(PTR__string_04379718,&DAT_043b85b8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b85d0);
  }
  puVar2 = DAT_043b85c8;
  if ((DAT_043b85b8 & 1) == 0) {
    puVar2 = &DAT_043b85b9;
  }
  if (((byte)local_4f0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4f0 | 1);
  }
  else {
    puVar27 = local_4e0;
  }
  if (((DAT_043b85e0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b85e0), iVar9 != 0)) {
    DAT_043b85d8 = 200;
    __cxa_guard_release(&DAT_043b85e0);
  }
  if (((DAT_043b85f0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b85f0), iVar9 != 0)) {
    DAT_043b85e8 = 0xcf;
    __cxa_guard_release(&DAT_043b85f0);
  }
  uVar22 = DAT_043b85d8;
  lVar13 = FUN_00153520(param_2,DAT_043b85d8);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 200)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b85e8;
    lVar13 = FUN_00153520(param_2,DAT_043b85e8);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 200)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00ff8e70();
      puVar3 = DAT_043b8608;
      if ((DAT_043b85f8 & 1) == 0) {
        puVar3 = &DAT_043b85f9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar13 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar29 = 0;
      if (uVar24 != 0) {
        uVar29 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar29 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar4;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar18 = &PTR_FUN_041ef138;
  *(undefined1 *)(puVar18 + 0xb) = uVar6;
  puVar18[0xc] = *(undefined8 *)(param_1 + 0x60);
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  puVar18[0xf] = *(undefined8 *)(param_1 + 0x78);
  puVar18[0x10] = uVar5;
  puVar18[0xd] = uVar19;
  puVar18[0xe] = uVar4;
  uVar19 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  puVar18[0x13] = *(undefined8 *)(param_1 + 0x98);
  puVar18[0x14] = uVar5;
  puVar18[0x11] = uVar19;
  puVar18[0x12] = uVar4;
  uVar19 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  puVar18[0x17] = *(undefined8 *)(param_1 + 0xb8);
  puVar18[0x18] = uVar5;
  puVar18[0x15] = uVar19;
  puVar18[0x16] = uVar4;
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00ff8e30,0);
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
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_4f0 & 1) != 0) && (local_4e0 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar7;
    }
    uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar25,local_4e0,0,8);
        goto LAB_00ff0174;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4e0,0,8);
  }
LAB_00ff0174:
  memset(&local_2b0,0,0x240);
  *(undefined1 *)(lVar13 + 0x58) = 1;
  DAT_043b8088 = 1;
  pcVar26 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0xa8) = &LAB_00ff96a0;
  *(undefined1 **)(lVar13 + 0xb0) = &LAB_00ff975c;
  *(undefined1 **)(lVar13 + 0x98) = &LAB_00ff98b0;
  *(undefined1 **)(lVar13 + 0xa0) = &LAB_00ff99f0;
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar23 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_00ff44f4;
  if (uVar11 != 0) {
    pcVar20 = FUN_00ff4298;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x78) = pcVar20;
            goto LAB_00ff03b4;
          }
          *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
      goto LAB_00ff03b4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2b0 = pcVar26;
  local_2a8 = pcVar20;
LAB_00ff03b4:
  pcVar26 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_00ff7db4;
  if (uVar11 != 0) {
    pcVar20 = FUN_00ff454c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x78) = pcVar20;
            goto LAB_00ff04f4;
          }
          *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
      goto LAB_00ff04f4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2b0)[uVar24 * 2] = pcVar26;
  (&local_2a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00ff04f4:
  pcVar26 = *(char **)(lVar13 + 0x70);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_00ff88e4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00ff7e0c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      uVar29 = uVar24;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x78) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
        goto joined_r0x00ff0cfc;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
      goto joined_r0x00ff0cfc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar29 = (ulong)((int)uVar24 + 1);
  (&local_2b0)[uVar24 * 2] = pcVar26;
  (&local_2a8)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
joined_r0x00ff0cfc:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
  }
  uVar22 = uVar29;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar29 + 1);
    (&local_2b0)[uVar29 * 2] = pcVar26;
    (&local_2a8)[uVar29 * 2] = (code *)PTR_LAB_0437df28;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2b0)[uVar22 * 2] = pcVar26;
    (&local_2a8)[uVar22 * 2] = (code *)PTR_LAB_0437df30;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x78) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x78);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2b0)[uVar24 * 2] = pcVar26;
    (&local_2a8)[uVar24 * 2] = pcVar20;
  }
  (&local_2b0)[uVar22 * 2] = (char *)0x0;
  (&local_2a8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_4f0,&local_2b0,0x240);
  memcpy(asStack_730,&local_2b0,0x240);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_2b0)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_500[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4ef + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_730 + lVar15 * 0x10) = (&local_2b0)[lVar15 * 2];
  *(undefined1 **)(asStack_730 + (lVar15 * 2 + 1) * 8) = &LAB_00ff8920;
  FUN_00151fe0(param_2,0,2);
  local_738[0] = FUN_0014feb0(param_2,0xffffffff);
  local_740 = param_2;
  if ((*PTR_DAT_0437df38 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437df38);
    puVar2 = PTR_DAT_0437df40;
    if (iVar9 != 0) {
      FUN_00ff3a90(PTR_DAT_0437df40);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437df38);
    }
  }
  uVar10 = local_738[0];
  uVar22 = *(ulong *)(PTR_DAT_0437df40 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437df40 + 0x10);
  if ((*PTR_DAT_0437df40 & 1) == 0) {
    puVar2 = PTR_DAT_0437df40 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437df40 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00ff8970,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_730;
      pbVar16 = (byte *)FUN_00ff2310();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_4f0;
      pbVar16 = (byte *)FUN_00ff211c();
    }
    else {
      psVar17 = (string *)&local_2b0;
      pbVar16 = (byte *)FUN_00ff2504();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_748 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_750 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_748;
    if (*(long *)(lVar13 + 0xa8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
    }
    uVar10 = local_748;
    if (*(long *)(lVar13 + 0xb0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_748;
    uVar19 = *(undefined8 *)(lVar13 + 0x88);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_748;
    uVar19 = *(undefined8 *)(lVar13 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
    }
    else {
      local_780 = &LAB_00ff8a60;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff89c0(param_2,1,&local_780,local_748);
      local_780 = &LAB_00ff8d6c;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff89c0(param_2,2,&local_780,local_748);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar10);
    if (*(undefined1 **)(lVar13 + 0x80) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0xb8) == '\0') goto LAB_00ff09e0;
LAB_00ff0c58:
      local_780 = &LAB_00ff8a60;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff89c0(param_2,1,&local_780,uVar10);
      local_780 = &LAB_00ff8d6c;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff89c0(param_2,2,&local_780,uVar10);
      if (param_2 == 0) goto LAB_00ff0ca8;
LAB_00ff09e8:
      uVar12 = local_748;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar13 + 0x80);
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff89c0(param_2,4,&local_780,uVar10);
      if (*(char *)(lVar13 + 0xb8) != '\0') goto LAB_00ff0c58;
LAB_00ff09e0:
      if (param_2 != 0) goto LAB_00ff09e8;
LAB_00ff0ca8:
      uVar12 = local_748;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_750,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00ff2754();
      puVar2 = DAT_043b8350;
      if ((DAT_043b8340 & 1) == 0) {
        puVar2 = &DAT_043b8341;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar12);
      local_780 = *(undefined1 **)(lVar13 + 0x80);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar13;
        lStack_768 = lVar23;
        FUN_00ff89c0(param_2,4,&local_780,uVar12);
      }
      local_780 = &LAB_00ff8e28;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788d8;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff8d70(param_2,1,&local_780,uVar12);
      local_780 = &LAB_00ff8e2c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788d8;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_00ff8d70(param_2,2,&local_780,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


