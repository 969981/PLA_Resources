/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016d0330; name: FUN_016d0330
 */


undefined8 FUN_016d0330(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  ulong uVar10;
  long *plVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  size_t sVar18;
  long lVar19;
  string *psVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  char *pcVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  char *pcVar29;
  undefined1 *puVar30;
  long lVar31;
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
  char *local_2a8 [2];
  long local_298;
  
  if (((DAT_043ccd68 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccd68), iVar13 != 0)) {
    local_298 = 0;
    local_2a8[1] = (undefined1 *)0x0;
    local_2a8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043ccc38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccc38), iVar13 != 0)) {
      FUN_016d3af0();
      FUN_00100250(PTR__string_04379718,&DAT_043ccc20,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ccc38);
    }
    puVar30 = DAT_043ccc30;
    if ((DAT_043ccc20 & 1) == 0) {
      puVar30 = &DAT_043ccc21;
    }
    pcVar29 = (char *)std::string::append((char *)local_2a8,(ulong)puVar30);
    psVar20 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043ccd50,psVar20);
    lVar17 = local_298;
    plVar11 = DAT_043f1798;
    if ((((ulong)local_2a8[0] & 1) != 0) && (local_298 != 0)) {
      lVar26 = tpidr_el0;
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar28 = plVar11;
      }
      uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar28,lVar17,0,8);
          goto LAB_016d12dc;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,lVar17,0,8);
    }
LAB_016d12dc:
    FUN_00100250(PTR__string_04379718,&DAT_043ccd50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ccd68);
  }
  std::string::string(&local_4e8,(string *)&DAT_043ccd50);
  iVar13 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ccd48);
  sVar2 = (ulong)((byte)local_4e8 >> 1);
  if (((byte)local_4e8 & 1) != 0) {
    sVar2 = local_4e0;
  }
  std::string::append((ulong)&local_4e8,(char)iVar13);
  if (((byte)local_4e8 & 1) == 0) {
    puVar30 = auStack_4e7;
    local_4e0 = (size_t)((byte)local_4e8 >> 1);
  }
  else {
    puVar30 = local_4d8;
  }
  snprintf(puVar30 + (sVar2 - 1),local_4e0,"%d",(ulong)DAT_043ccd48);
  DAT_043ccd48 = DAT_043ccd48 + 1;
  if (((DAT_043ccd88 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccd88), iVar13 != 0)) {
    local_298 = 0;
    local_2a8[1] = (undefined1 *)0x0;
    local_2a8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043ccc38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccc38), iVar13 != 0)) {
      FUN_016d3af0();
      FUN_00100250(PTR__string_04379718,&DAT_043ccc20,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ccc38);
    }
    puVar30 = DAT_043ccc30;
    if ((DAT_043ccc20 & 1) == 0) {
      puVar30 = &DAT_043ccc21;
    }
    pcVar29 = (char *)std::string::append((char *)local_2a8,(ulong)puVar30);
    psVar20 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043ccd70,psVar20);
    lVar17 = local_298;
    plVar11 = DAT_043f1798;
    if ((((ulong)local_2a8[0] & 1) != 0) && (local_298 != 0)) {
      lVar26 = tpidr_el0;
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar28 = plVar11;
      }
      uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar28,lVar17,0,8);
          goto LAB_016d144c;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,lVar17,0,8);
    }
LAB_016d144c:
    FUN_00100250(PTR__string_04379718,&DAT_043ccd70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ccd88);
  }
  puVar4 = DAT_043ccd80;
  if ((DAT_043ccd70 & 1) == 0) {
    puVar4 = &DAT_043ccd71;
  }
  if (((byte)local_4e8 & 1) == 0) {
    puVar30 = (undefined1 *)((ulong)&local_4e8 | 1);
  }
  else {
    puVar30 = local_4d8;
  }
  if (((DAT_043ccd98 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccd98), iVar13 != 0)) {
    DAT_043ccd90 = 0xe0;
    __cxa_guard_release(&DAT_043ccd98);
  }
  if (((DAT_043ccda8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccda8), iVar13 != 0)) {
    DAT_043ccda0 = 0xe7;
    __cxa_guard_release(&DAT_043ccda8);
  }
  uVar25 = DAT_043ccd90;
  lVar17 = FUN_00153520(param_2,DAT_043ccd90);
  if ((uVar25 < ((ulong)(uint)-(int)lVar17 & 7 | 0xe0)) ||
     (puVar21 = (undefined8 *)(lVar17 + ((ulong)(uint)-(int)lVar17 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar25 = DAT_043ccda0;
    lVar17 = FUN_00153520(param_2,DAT_043ccda0);
    if ((uVar25 < ((ulong)(uint)-(int)lVar17 & 7 | 0xe0)) ||
       (puVar21 = (undefined8 *)(lVar17 + ((ulong)(uint)-(int)lVar17 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_016d5f70();
      puVar5 = DAT_043ccdc0;
      if ((DAT_043ccdb0 & 1) == 0) {
        puVar5 = &DAT_043ccdb1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar5);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar22 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar21[1] = uVar22;
  puVar21[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar17 = *(long *)(param_1 + 0x18);
  puVar21[3] = lVar17;
  lVar26 = *(long *)(param_1 + 0x20);
  puVar21[4] = lVar26;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar26 != 0) {
    uVar27 = puVar21[2];
    uVar25 = *(ulong *)(lVar17 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar25 = uVar27 - 1 & uVar25;
    }
    else if (uVar27 <= uVar25) {
      uVar10 = 0;
      if (uVar27 != 0) {
        uVar10 = uVar25 / uVar27;
      }
      uVar25 = uVar25 - uVar10 * uVar27;
    }
    *(undefined8 **)(puVar21[1] + uVar25 * 8) = puVar21 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar22 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar22;
  puVar21[7] = uVar6;
  puVar21[8] = *(undefined8 *)(param_1 + 0x40);
  puVar21[9] = *(undefined8 *)(param_1 + 0x48);
  puVar21[10] = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar21 = &PTR_FUN_04224dd0;
  *(undefined1 *)(puVar21 + 0xb) = uVar8;
  uVar22 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  puVar21[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar21[0xf] = uVar7;
  puVar21[0xc] = uVar22;
  puVar21[0xd] = uVar6;
  uVar22 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  puVar21[0x12] = *(undefined8 *)(param_1 + 0x90);
  puVar21[0x13] = uVar7;
  puVar21[0x10] = uVar22;
  puVar21[0x11] = uVar6;
  uVar22 = *(undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  puVar21[0x16] = *(undefined8 *)(param_1 + 0xb0);
  puVar21[0x17] = uVar7;
  puVar21[0x14] = uVar22;
  puVar21[0x15] = uVar6;
  uVar22 = *(undefined8 *)(param_1 + 0xc0);
  uVar6 = *(undefined8 *)(param_1 + 200);
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  puVar21[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  puVar21[0x1b] = uVar7;
  puVar21[0x18] = uVar22;
  puVar21[0x19] = uVar6;
  iVar13 = FUN_00154450(param_2,puVar30);
  if (iVar13 != 0) {
    FUN_001516f0(param_2,&LAB_016d5f30,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar14 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar14);
  }
  FUN_001522a0(param_2,puVar4);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar4);
  lVar17 = FUN_001511d0(param_2,0xffffffff);
  lVar17 = lVar17 + ((ulong)(uint)-(int)lVar17 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar11 = DAT_043f1798;
  if ((((byte)local_4e8 & 1) != 0) && (local_4d8 != (undefined1 *)0x0)) {
    lVar26 = tpidr_el0;
    plVar28 = *(long **)(lVar26 + 0x20);
    if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
      *(long **)(lVar26 + 0x20) = DAT_043f1798;
      plVar28 = plVar11;
    }
    uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar26 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar26 + 0x38d488) = 1;
        *(undefined8 *)(lVar26 + 0x38d478) = 0;
        *(undefined8 *)(lVar26 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar26 + 0x38d480)) {
        FUN_02bcc824(plVar28,local_4d8,0,8);
        goto LAB_016d06cc;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,local_4d8,0,8);
  }
LAB_016d06cc:
  memset(local_2a8,0,0x240);
  pcVar29 = *(char **)(lVar17 + 0x80);
  sVar18 = strlen(pcVar29);
  sVar2 = 10;
  if (sVar18 < 0xb) {
    sVar2 = sVar18;
  }
  if (sVar2 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = memcmp("__newindex",pcVar29,sVar2);
  }
  bVar12 = uVar15 == 0;
  if (uVar15 == 0) {
    uVar15 = 0xffffffff;
  }
  lVar26 = lVar17 + 8;
  if (sVar18 < 0xb && bVar12) {
    uVar15 = (uint)(sVar18 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  puVar30 = &LAB_016d5c7c;
  if (uVar15 != 0) {
    puVar30 = &LAB_016d45b4;
  }
  do {
    lVar19 = FUN_008cca50();
    pbVar24 = (byte *)(lVar19 + lVar31);
    sVar18 = strlen(pcVar29);
    sVar2 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar18 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar13 == 0)) {
      iVar13 = (int)uVar25;
      if (iVar13 == 1) {
        *(undefined1 **)(lVar17 + 0x30) = puVar30;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            uVar27 = 0;
            *(undefined1 **)(lVar17 + 0x90) = puVar30;
            goto LAB_016d07ec;
          }
          *(ulong *)(lVar17 + 0xd8) = *(ulong *)(lVar17 + 0xd8) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar17 + 0x38) = puVar30;
      }
      uVar27 = 0;
      *(undefined1 *)(lVar17 + 0x58) = 1;
      *(ulong *)(lVar17 + 0xd8) = *(ulong *)(lVar17 + 0xd8) | 1L << (uVar25 & 0x3f);
      goto LAB_016d07ec;
    }
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar25 != 0x20);
  uVar27 = 1;
  local_2a8[0] = pcVar29;
  local_2a8[1] = puVar30;
LAB_016d07ec:
  pcVar29 = *(char **)(lVar17 + 0x88);
  sVar18 = strlen(pcVar29);
  sVar2 = 10;
  if (sVar18 < 0xb) {
    sVar2 = sVar18;
  }
  if (sVar2 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = memcmp("__newindex",pcVar29,sVar2);
  }
  bVar12 = uVar15 == 0;
  if (uVar15 == 0) {
    uVar15 = 0xffffffff;
  }
  if (sVar18 < 0xb && bVar12) {
    uVar15 = (uint)(sVar18 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  pcVar1 = FUN_016d5e80;
  if (uVar15 != 0) {
    pcVar1 = FUN_016d5e38;
  }
  while( true ) {
    lVar19 = FUN_008cca50();
    pbVar24 = (byte *)(lVar19 + lVar31);
    sVar18 = strlen(pcVar29);
    sVar2 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar18 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar13 == 0)) break;
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
    if (uVar25 == 0x20) {
LAB_016d0f50:
      local_2a8[uVar27 * 2] = pcVar29;
      local_2a8[uVar27 * 2 + 1] = (char *)pcVar1;
      uVar15 = (uint)*(undefined8 *)(lVar17 + 0xd8);
      uVar27 = (ulong)((int)uVar27 + 1);
joined_r0x016d08d0:
      if ((uVar15 >> 0x11 & 1) == 0) {
LAB_016d08d4:
        FUN_008cca50();
        uVar15 = (uint)*(undefined8 *)(lVar17 + 0xd8);
      }
LAB_016d08dc:
      if ((uVar15 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar15 = (uint)*(undefined8 *)(lVar17 + 0xd8);
      }
      if ((uVar15 >> 0x10 & 1) == 0) {
        lVar31 = FUN_008cca50();
        pcVar29 = (char *)(lVar31 + 0x181);
        if ((*(byte *)(lVar31 + 0x180) & 1) != 0) {
          pcVar29 = *(char **)(lVar31 + 400);
        }
        local_2a8[uVar27 * 2] = pcVar29;
        local_2a8[uVar27 * 2 + 1] = &LAB_016d4c40;
        uVar15 = (uint)*(undefined8 *)(lVar17 + 0xd8);
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      uVar25 = uVar27;
      if ((uVar15 >> 0x1b & 1) == 0) {
        lVar31 = FUN_008cca50();
        uVar25 = (ulong)((int)uVar27 + 1);
        pcVar29 = (char *)(lVar31 + 0x289);
        if ((*(byte *)(lVar31 + 0x288) & 1) != 0) {
          pcVar29 = *(char **)(lVar31 + 0x298);
        }
        local_2a8[uVar27 * 2] = pcVar29;
        local_2a8[uVar27 * 2 + 1] = &LAB_016d4c38;
      }
      uVar27 = uVar25;
      if (*(long *)(lVar17 + 0x90) != 0) {
        lVar31 = FUN_008cca50();
        pcVar29 = (char *)(lVar31 + 0x1c9);
        if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
          pcVar29 = *(char **)(lVar31 + 0x1d8);
        }
        pcVar23 = *(char **)(lVar17 + 0x90);
        uVar27 = (ulong)((int)uVar25 + 1);
        local_2a8[uVar25 * 2] = pcVar29;
        local_2a8[uVar25 * 2 + 1] = pcVar23;
      }
      local_2a8[uVar27 * 2] = (char *)0x0;
      local_2a8[uVar27 * 2 + 1] = (char *)0x0;
      memcpy(&local_4e8,local_2a8,0x240);
      memcpy(asStack_728,local_2a8,0x240);
      lVar31 = FUN_008cca50();
      lVar19 = uVar27 - 1;
      pcVar29 = local_2a8[lVar19 * 2];
      sVar18 = strlen(pcVar29);
      sVar2 = (ulong)(*(byte *)(lVar31 + 0x1c8) >> 1);
      if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar31 + 0x1d0);
      }
      if ((sVar18 == sVar2) &&
         (iVar13 = std::string::compare(lVar31 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
         iVar13 == 0)) {
        auStack_4f8[lVar19 * 2 + 2] = 0;
        *(undefined8 *)(auStack_4e7 + lVar19 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_728 + lVar19 * 0x10) = local_2a8[lVar19 * 2];
      *(undefined1 **)(asStack_728 + (lVar19 * 2 + 1) * 8) = &LAB_016d5ed0;
      FUN_00151fe0(param_2,0,2);
      local_730[0] = FUN_0014feb0(param_2,0xffffffff);
      local_738 = param_2;
      if (((DAT_043ccc38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_043ccc38), iVar13 != 0)) {
        FUN_016d3af0();
        FUN_00100250(PTR__string_04379718,&DAT_043ccc20,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043ccc38);
      }
      uVar14 = local_730[0];
      if ((DAT_043ccc20 & 1) == 0) {
        uVar25 = (ulong)(DAT_043ccc20 >> 1);
        puVar30 = &DAT_043ccc21;
      }
      else {
        uVar25 = DAT_043ccc28;
        puVar30 = DAT_043ccc30;
      }
      FUN_001514f0(param_2,puVar30,uVar25);
      FUN_00152550(param_2,uVar14,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_016d4b50,0);
      FUN_00152550(param_2,uVar14,&DAT_0397bfcb);
      lVar31 = 0;
      do {
        if (lVar31 == 1) {
          psVar20 = asStack_728;
          FUN_016d2704();
          pbVar24 = &DAT_043ccb88;
        }
        else if (lVar31 == 0) {
          psVar20 = &local_4e8;
          FUN_016d2510();
          pbVar24 = &DAT_043ccb10;
        }
        else {
          psVar20 = (string *)local_2a8;
          FUN_016d28f8();
          pbVar24 = &DAT_043ccc00;
        }
        pbVar3 = pbVar24 + 1;
        if ((*pbVar24 & 1) != 0) {
          pbVar3 = *(byte **)(pbVar24 + 0x10);
        }
        FUN_00154450(param_2,pbVar3);
        local_740 = FUN_0014feb0(param_2,0xffffffff);
        local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
        local_748 = param_2;
        FUN_008fe304(local_750,param_2,&local_780,&local_738,local_740);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar17);
        FUN_00155a20(param_2,psVar20,2);
        uVar14 = local_740;
        if (*(long *)(lVar17 + 0xc0) == 0) {
          lVar19 = *(long *)(lVar17 + 200);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar14,"class_check");
          lVar19 = *(long *)(lVar17 + 200);
          uVar14 = local_740;
        }
        local_740 = uVar14;
        if (lVar19 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar14,"class_cast");
        }
        uVar14 = local_740;
        uVar22 = *(undefined8 *)(lVar17 + 0xa0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar17);
        FUN_00151810(param_2,lVar26);
        FUN_001516f0(param_2,uVar22,3);
        FUN_00152550(param_2,uVar14,&DAT_03955ac7);
        uVar14 = local_740;
        uVar22 = *(undefined8 *)(lVar17 + 0xa8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar17);
        FUN_00151810(param_2,lVar26);
        FUN_001516f0(param_2,uVar22,3);
        FUN_00152550(param_2,uVar14,&DAT_0397c077);
        if (*(char *)(lVar17 + 0x58) == '\0') {
          local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
          FUN_008fe304(local_750,param_2,&local_780,&local_748,local_740);
        }
        else {
          local_750[0] = 1;
          local_780 = &LAB_016d5f20;
          uStack_778 = 0;
          local_770 = lVar17;
          lStack_768 = lVar26;
          FUN_016d65c8(param_2,local_750,&local_780,local_740);
          local_750[0] = 2;
          local_780 = &LAB_016d5f24;
          uStack_778 = 0;
          local_770 = lVar17;
          lStack_768 = lVar26;
          FUN_016d65c8(param_2,local_750,&local_780,local_740);
        }
        FUN_00151fe0(param_2,0,3);
        uVar14 = FUN_0014feb0(param_2,0xffffffff);
        local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
        FUN_008fe304(local_750,param_2,&local_780,&local_738,uVar14);
        if (*(undefined1 **)(lVar17 + 0x98) == (undefined1 *)0x0) {
          cVar9 = *(char *)(lVar17 + 0xd0);
        }
        else {
          local_750[0] = 4;
          uStack_778 = 0;
          local_780 = *(undefined1 **)(lVar17 + 0x98);
          local_770 = lVar17;
          lStack_768 = lVar26;
          FUN_016d65c8(param_2,local_750,&local_780,uVar14);
          cVar9 = *(char *)(lVar17 + 0xd0);
        }
        if (cVar9 != '\0') {
          local_750[0] = 1;
          local_780 = &LAB_016d5f20;
          uStack_778 = 0;
          local_770 = lVar17;
          lStack_768 = lVar26;
          FUN_016d65c8(param_2,local_750,&local_780,uVar14);
          local_750[0] = 2;
          local_780 = &LAB_016d5f24;
          uStack_778 = 0;
          local_770 = lVar17;
          lStack_768 = lVar26;
          FUN_016d65c8(param_2,local_750,&local_780,uVar14);
        }
        uVar16 = local_740;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar14);
        }
        FUN_00152ae0(param_2,uVar16);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_748,0xfffffffe);
        lVar31 = lVar31 + 1;
      } while (lVar31 != 3);
      FUN_016d2b38();
      puVar4 = DAT_043ccc88;
      if ((DAT_043ccc78 & 1) == 0) {
        puVar4 = &DAT_043ccc79;
      }
      FUN_00154450(param_2,puVar4);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar14);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar17);
      FUN_00155a20(param_2,local_2a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar16 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar16);
      local_780 = *(undefined1 **)(lVar17 + 0x98);
      if (local_780 != (undefined1 *)0x0) {
        local_748 = CONCAT44(local_748._4_4_,4);
        uStack_778 = 0;
        local_770 = lVar17;
        lStack_768 = lVar26;
        FUN_016d65c8(param_2,&local_748,&local_780,uVar16);
      }
      local_748._0_4_ = 1;
      local_780 = &LAB_016d5f28;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7c510;
      local_770 = lVar17;
      lStack_768 = lVar26;
      FUN_016d6c7c(param_2,&local_748,&local_780,uVar16);
      local_748 = CONCAT44(local_748._4_4_,2);
      local_780 = &LAB_016d5f2c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7c510;
      local_770 = lVar17;
      lStack_768 = lVar26;
      FUN_016d6c7c(param_2,&local_748,&local_780,uVar16);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar16);
      }
      FUN_00152ae0(param_2,uVar14);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_730[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar13 = (int)uVar25;
  if (iVar13 == 0x13) {
    *(code **)(lVar17 + 0x90) = pcVar1;
    uVar15 = (uint)*(undefined8 *)(lVar17 + 0xd8);
    goto joined_r0x016d08d0;
  }
  if (iVar13 == 1) {
    *(code **)(lVar17 + 0x30) = pcVar1;
  }
  else {
    if (iVar13 != 2) {
      *(ulong *)(lVar17 + 0xd8) = *(ulong *)(lVar17 + 0xd8) | 1L << (uVar25 & 0x3f);
      goto LAB_016d0f50;
    }
    *(code **)(lVar17 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar17 + 0x58) = 1;
  *(ulong *)(lVar17 + 0xd8) = *(ulong *)(lVar17 + 0xd8) | 1L << (uVar25 & 0x3f);
  uVar15 = (uint)*(undefined8 *)(lVar17 + 0xd8);
  if ((uVar15 >> 0x11 & 1) != 0) goto LAB_016d08dc;
  goto LAB_016d08d4;
}


