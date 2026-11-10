/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fb501c; name: FUN_00fb501c
 */


undefined8 FUN_00fb501c(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  byte *pbVar18;
  string *psVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  char *pcVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  long lVar30;
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
  char *local_2b0 [2];
  long local_2a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b6dd8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b6dd8), iVar11 != 0)) {
    local_2a0 = 0;
    local_2b0[1] = (undefined1 *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437dbc0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_0437dbc0);
      puVar3 = PTR_DAT_0437dbc8;
      if (iVar11 != 0) {
        FUN_00fb8d10(PTR_DAT_0437dbc8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437dbc0);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437dbc8 + 0x10);
    if ((*PTR_DAT_0437dbc8 & 1) == 0) {
      puVar3 = PTR_DAT_0437dbc8 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_2b0,(ulong)puVar3);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b6dc0,psVar19);
    lVar15 = local_2a0;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar9;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_00fb60f4;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_00fb60f4:
    FUN_00100250(PTR__string_04379718,&DAT_043b6dc0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6dd8);
  }
  std::string::string(&local_4f0,(string *)&DAT_043b6dc0);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b6db8);
  sVar2 = (ulong)((byte)local_4f0 >> 1);
  if (((byte)local_4f0 & 1) != 0) {
    sVar2 = local_4e8;
  }
  std::string::append((ulong)&local_4f0,(char)iVar11);
  if (((byte)local_4f0 & 1) == 0) {
    puVar29 = auStack_4ef;
    local_4e8 = (size_t)((byte)local_4f0 >> 1);
  }
  else {
    puVar29 = local_4e0;
  }
  snprintf(puVar29 + (sVar2 - 1),local_4e8,"%d",(ulong)DAT_043b6db8);
  DAT_043b6db8 = DAT_043b6db8 + 1;
  if (((DAT_043b6df8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b6df8), iVar11 != 0)) {
    local_2a0 = 0;
    local_2b0[1] = (undefined1 *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437dbc0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_0437dbc0);
      puVar3 = PTR_DAT_0437dbc8;
      if (iVar11 != 0) {
        FUN_00fb8d10(PTR_DAT_0437dbc8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437dbc0);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437dbc8 + 0x10);
    if ((*PTR_DAT_0437dbc8 & 1) == 0) {
      puVar3 = PTR_DAT_0437dbc8 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_2b0,(ulong)puVar3);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b6de0,psVar19);
    lVar15 = local_2a0;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar9;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_00fb6264;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_00fb6264:
    FUN_00100250(PTR__string_04379718,&DAT_043b6de0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6df8);
  }
  puVar3 = DAT_043b6df0;
  if ((DAT_043b6de0 & 1) == 0) {
    puVar3 = &DAT_043b6de1;
  }
  if (((byte)local_4f0 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4f0 | 1);
  }
  else {
    puVar29 = local_4e0;
  }
  if (((DAT_043b6e08 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b6e08), iVar11 != 0)) {
    DAT_043b6e00 = 0xe0;
    __cxa_guard_release(&DAT_043b6e08);
  }
  if (((DAT_043b6e18 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b6e18), iVar11 != 0)) {
    DAT_043b6e10 = 0xe7;
    __cxa_guard_release(&DAT_043b6e18);
  }
  uVar24 = DAT_043b6e00;
  lVar15 = FUN_00153520(param_2,DAT_043b6e00);
  if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0xe0)) ||
     (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar24 = DAT_043b6e10;
    lVar15 = FUN_00153520(param_2,DAT_043b6e10);
    if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0xe0)) ||
       (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fb9e90();
      puVar4 = DAT_043b6e30;
      if ((DAT_043b6e20 & 1) == 0) {
        puVar4 = &DAT_043b6e21;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar21;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar15 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar15;
  lVar25 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar15 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar8 = 0;
      if (uVar26 != 0) {
        uVar8 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar8 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar5;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_041eef88;
  *(undefined1 *)(puVar20 + 0xb) = uVar7;
  uVar21 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  puVar20[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar20[0xf] = uVar6;
  puVar20[0xc] = uVar21;
  puVar20[0xd] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  puVar20[0x12] = *(undefined8 *)(param_1 + 0x90);
  puVar20[0x13] = uVar6;
  puVar20[0x10] = uVar21;
  puVar20[0x11] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  puVar20[0x16] = *(undefined8 *)(param_1 + 0xb0);
  puVar20[0x17] = uVar6;
  puVar20[0x14] = uVar21;
  puVar20[0x15] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  puVar20[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  puVar20[0x1b] = uVar6;
  puVar20[0x18] = uVar21;
  puVar20[0x19] = uVar5;
  iVar11 = FUN_00154450(param_2,puVar29);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_00fb9e50,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar12 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar12);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar15 = FUN_001511d0(param_2,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_4f0 & 1) != 0) && (local_4e0 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar9;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_4e0,0,8);
        goto LAB_00fb53b8;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_4e0,0,8);
  }
LAB_00fb53b8:
  memset(local_2b0,0,0x240);
  puVar3 = PTR_DAT_0437da50;
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *puVar3 = 1;
  pcVar28 = *(char **)(lVar15 + 0x60);
  *(undefined1 **)(lVar15 + 0xc0) = &LAB_00fba6c4;
  *(undefined1 **)(lVar15 + 200) = &LAB_00fba780;
  *(undefined1 **)(lVar15 + 0xb0) = &LAB_00fba8d0;
  *(undefined1 **)(lVar15 + 0xb8) = &LAB_00fbaa00;
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar25 = lVar15 + 8;
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  puVar29 = &LAB_00fb9550;
  if (uVar13 != 0) {
    puVar29 = &LAB_00fb9518;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(undefined1 **)(lVar15 + 0x30) = puVar29;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            uVar26 = 0;
            *(undefined1 **)(lVar15 + 0x90) = puVar29;
            goto LAB_00fb5514;
          }
          *(ulong *)(lVar15 + 0xd8) = *(ulong *)(lVar15 + 0xd8) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar29;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0xd8) = *(ulong *)(lVar15 + 0xd8) | 1L << (uVar24 & 0x3f);
      goto LAB_00fb5514;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_2b0[0] = pcVar28;
  local_2b0[1] = puVar29;
LAB_00fb5514:
  pcVar28 = *(char **)(lVar15 + 0x68);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar1 = FUN_00fb9774;
  if (uVar13 != 0) {
    pcVar1 = (code *)&LAB_00fb9588;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 0x13) {
        *(code **)(lVar15 + 0x90) = pcVar1;
        goto LAB_00fb55f4;
      }
      if (iVar11 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          *(ulong *)(lVar15 + 0xd8) = *(ulong *)(lVar15 + 0xd8) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0xd8) = *(ulong *)(lVar15 + 0xd8) | 1L << (uVar24 & 0x3f);
      goto LAB_00fb55f4;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  local_2b0[uVar26 * 2] = pcVar28;
  local_2b0[uVar26 * 2 + 1] = (char *)pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00fb55f4:
  pcVar28 = *(char **)(lVar15 + 0x78);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar1 = FUN_00fb98ac;
  if (uVar13 != 0) {
    pcVar1 = FUN_00fb97c8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar15 + 0x90) = pcVar1;
            uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd8);
            goto joined_r0x00fb56e8;
          }
          *(ulong *)(lVar15 + 0xd8) = *(ulong *)(lVar15 + 0xd8) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0xd8) = *(ulong *)(lVar15 + 0xd8) | 1L << (uVar24 & 0x3f);
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd8);
      goto joined_r0x00fb56e8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  local_2b0[uVar26 * 2] = pcVar28;
  local_2b0[uVar26 * 2 + 1] = (char *)pcVar1;
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd8);
  uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x00fb56e8:
  if ((uVar13 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd8);
  }
  if ((uVar13 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd8);
  }
  uVar24 = uVar26;
  if ((uVar13 >> 0x10 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x181);
    if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 400);
    }
    uVar24 = (ulong)((int)uVar26 + 1);
    local_2b0[uVar26 * 2] = pcVar28;
    local_2b0[uVar26 * 2 + 1] = PTR_LAB_0437dbb0;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd8);
  }
  uVar26 = uVar24;
  if ((uVar13 >> 0x1b & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x289);
    if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x298);
    }
    uVar26 = (ulong)((int)uVar24 + 1);
    local_2b0[uVar24 * 2] = pcVar28;
    local_2b0[uVar24 * 2 + 1] = PTR_LAB_0437dbb8;
  }
  uVar24 = uVar26;
  if (*(long *)(lVar15 + 0x90) != 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x1c9);
    if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x1d8);
    }
    pcVar22 = *(char **)(lVar15 + 0x90);
    uVar24 = (ulong)((int)uVar26 + 1);
    local_2b0[uVar26 * 2] = pcVar28;
    local_2b0[uVar26 * 2 + 1] = pcVar22;
  }
  local_2b0[uVar24 * 2] = (char *)0x0;
  local_2b0[uVar24 * 2 + 1] = (char *)0x0;
  memcpy(&local_4f0,local_2b0,0x240);
  memcpy(asStack_730,local_2b0,0x240);
  lVar30 = FUN_008cca50();
  lVar17 = uVar24 - 1;
  pcVar28 = local_2b0[lVar17 * 2];
  sVar16 = strlen(pcVar28);
  sVar2 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
  if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar30 + 0x1d0);
  }
  if ((sVar16 == sVar2) &&
     (iVar11 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar11 == 0)) {
    auStack_500[lVar17 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4ef + lVar17 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_730 + lVar17 * 0x10) = local_2b0[lVar17 * 2];
  *(undefined1 **)(asStack_730 + (lVar17 * 2 + 1) * 8) = &LAB_00fb9940;
  FUN_00151fe0(param_2,0,2);
  local_738[0] = FUN_0014feb0(param_2,0xffffffff);
  local_740 = param_2;
  if ((*PTR_DAT_0437dbc0 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_0437dbc0);
    puVar3 = PTR_DAT_0437dbc8;
    if (iVar11 != 0) {
      FUN_00fb8d10(PTR_DAT_0437dbc8);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437dbc0);
    }
  }
  uVar12 = local_738[0];
  uVar24 = *(ulong *)(PTR_DAT_0437dbc8 + 8);
  puVar3 = *(undefined **)(PTR_DAT_0437dbc8 + 0x10);
  if ((*PTR_DAT_0437dbc8 & 1) == 0) {
    puVar3 = PTR_DAT_0437dbc8 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_0437dbc8 >> 1);
  }
  FUN_001514f0(param_2,puVar3,uVar24);
  FUN_00152550(param_2,uVar12,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00fb9990,0);
  FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
  lVar30 = 0;
  do {
    if (lVar30 == 1) {
      psVar19 = asStack_730;
      pbVar18 = (byte *)FUN_00fb754c();
    }
    else if (lVar30 == 0) {
      psVar19 = &local_4f0;
      pbVar18 = (byte *)FUN_00fb7358();
    }
    else {
      psVar19 = (string *)local_2b0;
      pbVar18 = (byte *)FUN_00fb7740();
    }
    pbVar23 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar23 = pbVar18 + 1;
    }
    FUN_00154450(param_2,pbVar23);
    local_748 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_750 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00155a20(param_2,psVar19,2);
    uVar12 = local_748;
    if (*(long *)(lVar15 + 0xc0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar12,"class_check");
    }
    uVar12 = local_748;
    if (*(long *)(lVar15 + 200) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar12,"class_cast");
    }
    uVar12 = local_748;
    uVar21 = *(undefined8 *)(lVar15 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00151810(param_2,lVar25);
    FUN_001516f0(param_2,uVar21,3);
    FUN_00152550(param_2,uVar12,&DAT_03955ac7);
    uVar12 = local_748;
    uVar21 = *(undefined8 *)(lVar15 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00151810(param_2,lVar25);
    FUN_001516f0(param_2,uVar21,3);
    FUN_00152550(param_2,uVar12,&DAT_0397c077);
    if (*(char *)(lVar15 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
    }
    else {
      local_780 = &LAB_00fb9a80;
      uStack_778 = 0;
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb99e0(param_2,1,&local_780,local_748);
      local_780 = &LAB_00fb9d8c;
      uStack_778 = 0;
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb99e0(param_2,2,&local_780,local_748);
    }
    FUN_00151fe0(param_2,0,3);
    uVar12 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar12);
    if (*(undefined1 **)(lVar15 + 0x98) == (undefined1 *)0x0) {
      if (*(char *)(lVar15 + 0xd0) == '\0') goto LAB_00fb5c8c;
LAB_00fb5ec4:
      local_780 = &LAB_00fb9a80;
      uStack_778 = 0;
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb99e0(param_2,1,&local_780,uVar12);
      local_780 = &LAB_00fb9d8c;
      uStack_778 = 0;
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb99e0(param_2,2,&local_780,uVar12);
      if (param_2 == 0) goto LAB_00fb5f14;
LAB_00fb5c94:
      uVar14 = local_748;
      FUN_00150260(param_2,uVar12);
    }
    else {
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar15 + 0x98);
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb99e0(param_2,4,&local_780,uVar12);
      if (*(char *)(lVar15 + 0xd0) != '\0') goto LAB_00fb5ec4;
LAB_00fb5c8c:
      if (param_2 != 0) goto LAB_00fb5c94;
LAB_00fb5f14:
      uVar14 = local_748;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar14);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_750,0xfffffffe);
    lVar30 = lVar30 + 1;
    if (lVar30 == 3) {
      FUN_00fb7990();
      puVar3 = DAT_043b6d90;
      if ((DAT_043b6d80 & 1) == 0) {
        puVar3 = &DAT_043b6d81;
      }
      FUN_00154450(param_2,puVar3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar14);
      local_780 = *(undefined1 **)(lVar15 + 0x98);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar15;
        lStack_768 = lVar25;
        FUN_00fb99e0(param_2,4,&local_780,uVar14);
      }
      local_780 = &LAB_00fb9e48;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788c8;
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb9d90(param_2,1,&local_780,uVar14);
      local_780 = &LAB_00fb9e4c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788c8;
      local_770 = lVar15;
      lStack_768 = lVar25;
      FUN_00fb9d90(param_2,2,&local_780,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


