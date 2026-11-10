/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0231de6c; name: FUN_0231de6c
 */


undefined8 FUN_0231de6c(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
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
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  undefined4 local_780 [2];
  long local_778;
  undefined4 local_770;
  long local_768;
  undefined4 local_760 [2];
  string asStack_758 [576];
  undefined8 auStack_518 [2];
  string local_508;
  undefined1 auStack_507 [7];
  size_t local_500;
  undefined1 *local_4f8;
  char *apcStack_2c8 [2];
  char *local_2b8;
  code *local_2b0;
  long local_2a8;
  
  if (((DAT_043e1b70 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1b70), iVar8 != 0)) {
    local_2a8 = 0;
    local_2b0 = (code *)0x0;
    local_2b8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385918 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04385918);
      puVar2 = PTR_DAT_04385920;
      if (iVar8 != 0) {
        FUN_021caf80(PTR_DAT_04385920);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385918);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_04385920 + 0x10);
    if ((*PTR_DAT_04385920 & 1) == 0) {
      puVar2 = PTR_DAT_04385920 + 1;
    }
    pcVar25 = (char *)std::string::append((char *)&local_2b8,(ulong)puVar2);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e1b58,psVar16);
    lVar12 = local_2a8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2b8 & 1) != 0) && (local_2a8 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_0231f198;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_0231f198:
    FUN_00100250(PTR__string_04379718,&DAT_043e1b58,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1b70);
  }
  std::string::string(&local_508,(string *)&DAT_043e1b58);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1b50);
  sVar1 = (ulong)((byte)local_508 >> 1);
  if (((byte)local_508 & 1) != 0) {
    sVar1 = local_500;
  }
  std::string::append((ulong)&local_508,(char)iVar8);
  if (((byte)local_508 & 1) == 0) {
    puVar26 = auStack_507;
    local_500 = (size_t)((byte)local_508 >> 1);
  }
  else {
    puVar26 = local_4f8;
  }
  snprintf(puVar26 + (sVar1 - 1),local_500,"%d",(ulong)DAT_043e1b50);
  DAT_043e1b50 = DAT_043e1b50 + 1;
  if (((DAT_043e1b90 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1b90), iVar8 != 0)) {
    local_2a8 = 0;
    local_2b0 = (code *)0x0;
    local_2b8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385918 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04385918);
      puVar2 = PTR_DAT_04385920;
      if (iVar8 != 0) {
        FUN_021caf80(PTR_DAT_04385920);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385918);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_04385920 + 0x10);
    if ((*PTR_DAT_04385920 & 1) == 0) {
      puVar2 = PTR_DAT_04385920 + 1;
    }
    pcVar25 = (char *)std::string::append((char *)&local_2b8,(ulong)puVar2);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e1b78,psVar16);
    lVar12 = local_2a8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2b8 & 1) != 0) && (local_2a8 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_0231f308;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_0231f308:
    FUN_00100250(PTR__string_04379718,&DAT_043e1b78,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1b90);
  }
  puVar2 = DAT_043e1b88;
  if ((DAT_043e1b78 & 1) == 0) {
    puVar2 = &DAT_043e1b79;
  }
  if (((byte)local_508 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_508 | 1);
  }
  else {
    puVar26 = local_4f8;
  }
  if (((DAT_043e1ba0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1ba0), iVar8 != 0)) {
    DAT_043e1b98 = 0x118;
    __cxa_guard_release(&DAT_043e1ba0);
  }
  if (((DAT_043e1bb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1bb0), iVar8 != 0)) {
    DAT_043e1ba8 = 0x11f;
    __cxa_guard_release(&DAT_043e1bb0);
  }
  uVar21 = DAT_043e1b98;
  lVar12 = FUN_00153520(param_2,DAT_043e1b98);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x118)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043e1ba8;
    lVar12 = FUN_00153520(param_2,DAT_043e1ba8);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x118)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02321110();
      puVar3 = DAT_043e1bc8;
      if ((DAT_043e1bb8 & 1) == 0) {
        puVar3 = &DAT_043e1bb9;
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
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar5 = 0;
      if (uVar23 != 0) {
        uVar5 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar5 * uVar23;
    }
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar4;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425bbc8;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0xb8);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_023210d0,0);
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
  if ((((byte)local_508 & 1) != 0) && (local_4f8 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar6;
    }
    uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar24,local_4f8,0,8);
        goto LAB_0231e1d8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_4f8,0,8);
  }
LAB_0231e1d8:
  memset(&local_2b8,0,0x250);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_023207e0;
  if (uVar10 != 0) {
    pcVar19 = FUN_023206e8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar12 + 200) = pcVar19;
            goto LAB_0231e3d4;
          }
          *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
      goto LAB_0231e3d4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2b8 = pcVar25;
  local_2b0 = pcVar19;
LAB_0231e3d4:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02320bb4;
  if (uVar10 != 0) {
    pcVar19 = FUN_0232087c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 200) = pcVar19;
            goto LAB_0231e514;
          }
          *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
      goto LAB_0231e514;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2b8)[uVar23 * 2] = pcVar25;
  (&local_2b0)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0231e514:
  pcVar25 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02320d2c;
  if (uVar10 != 0) {
    pcVar19 = FUN_02320c44;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 200) = pcVar19;
            goto LAB_0231e654;
          }
          *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
      goto LAB_0231e654;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2b8)[uVar23 * 2] = pcVar25;
  (&local_2b0)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0231e654:
  pcVar25 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02320e88;
  if (uVar10 != 0) {
    pcVar19 = FUN_02320dbc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 200) = pcVar19;
            goto LAB_0231e794;
          }
          *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
      goto LAB_0231e794;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2b8)[uVar23 * 2] = pcVar25;
  (&local_2b0)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0231e794:
  pcVar25 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02320fb4;
  if (uVar10 != 0) {
    pcVar19 = FUN_02320f54;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 200) = pcVar19;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x110);
        goto joined_r0x0231e878;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x110) = *(ulong *)(lVar12 + 0x110) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x110);
      goto joined_r0x0231e878;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2b8)[uVar23 * 2] = pcVar25;
  (&local_2b0)[uVar23 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x110);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x0231e878:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x110);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x110);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2b8)[uVar23 * 2] = pcVar25;
    (&local_2b0)[uVar23 * 2] = (code *)PTR_LAB_043858f0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x110);
  }
  uVar23 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_2b8)[uVar21 * 2] = pcVar25;
    (&local_2b0)[uVar21 * 2] = (code *)PTR_LAB_043858f8;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar12 + 200) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 200);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2b8)[uVar23 * 2] = pcVar25;
    (&local_2b0)[uVar23 * 2] = pcVar19;
  }
  (&local_2b8)[uVar21 * 2] = (char *)0x0;
  (&local_2b0)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_508,&local_2b8,0x250);
  memcpy(asStack_758,&local_2b8,0x250);
  lVar27 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (&local_2b8)[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_518[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_507 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_758 + lVar14 * 0x10) = (&local_2b8)[lVar14 * 2];
  *(undefined1 **)(asStack_758 + (lVar14 * 2 + 1) * 8) = &LAB_02321020;
  FUN_00151fe0(param_2,0,2);
  local_760[0] = FUN_0014feb0(param_2,0xffffffff);
  local_768 = param_2;
  if ((*PTR_DAT_04385918 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04385918);
    puVar2 = PTR_DAT_04385920;
    if (iVar8 != 0) {
      FUN_021caf80(PTR_DAT_04385920);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385918);
    }
  }
  uVar9 = local_760[0];
  uVar21 = *(ulong *)(PTR_DAT_04385920 + 8);
  puVar2 = *(undefined **)(PTR_DAT_04385920 + 0x10);
  if ((*PTR_DAT_04385920 & 1) == 0) {
    puVar2 = PTR_DAT_04385920 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_04385920 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02321070,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar16 = asStack_758;
      pbVar15 = (byte *)FUN_021cb5bc();
    }
    else if (lVar27 == 0) {
      psVar16 = &local_508;
      pbVar15 = (byte *)FUN_021c9b04();
    }
    else {
      psVar16 = (string *)&local_2b8;
      pbVar15 = (byte *)FUN_021cad24();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_770 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_778 = param_2;
    FUN_008fe304(local_780,param_2,&local_7b0,&local_768,local_770);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_770;
    if (*(long *)(lVar12 + 0xf8) == 0) {
      lVar14 = *(long *)(lVar12 + 0x100);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x100);
      uVar9 = local_770;
    }
    local_770 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_770;
    uVar18 = *(undefined8 *)(lVar12 + 0xd8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_770;
    uVar18 = *(undefined8 *)(lVar12 + 0xe0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(local_780,param_2,&local_7b0,&local_778,local_770);
    }
    else {
      local_780[0] = 1;
      local_7b0 = &LAB_023210c0;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321598(param_2,local_780,&local_7b0,local_770);
      local_780[0] = 2;
      local_7b0 = &LAB_023210c4;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321598(param_2,local_780,&local_7b0,local_770);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(local_780,param_2,&local_7b0,&local_768,uVar9);
    if (*(undefined1 **)(lVar12 + 0xd0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x108) != '\0') goto LAB_0231ef24;
LAB_0231ec14:
      if (param_2 == 0) goto LAB_0231ef80;
LAB_0231ec1c:
      uVar11 = local_770;
      FUN_00150260(param_2,uVar9);
    }
    else {
      local_780[0] = 4;
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar12 + 0xd0);
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321598(param_2,local_780,&local_7b0,uVar9);
      if (*(char *)(lVar12 + 0x108) == '\0') goto LAB_0231ec14;
LAB_0231ef24:
      local_780[0] = 1;
      local_7b0 = &LAB_023210c0;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321598(param_2,local_780,&local_7b0,uVar9);
      local_780[0] = 2;
      local_7b0 = &LAB_023210c4;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321598(param_2,local_780,&local_7b0,uVar9);
      if (param_2 != 0) goto LAB_0231ec1c;
LAB_0231ef80:
      uVar11 = local_770;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_778,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_0232042c();
      puVar2 = DAT_043e1b40;
      if ((DAT_043e1b30 & 1) == 0) {
        puVar2 = &DAT_043e1b31;
      }
      FUN_00154450(param_2,puVar2);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2b8,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar11);
      local_7b0 = *(undefined1 **)(lVar12 + 0xd0);
      if (local_7b0 != (undefined1 *)0x0) {
        local_778 = CONCAT44(local_778._4_4_,4);
        uStack_7a8 = 0;
        local_7a0 = lVar12;
        lStack_798 = lVar22;
        FUN_02321598(param_2,&local_778,&local_7b0,uVar11);
      }
      local_778._0_4_ = 1;
      local_7b0 = &LAB_023210c8;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d498;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321c4c(param_2,&local_778,&local_7b0,uVar11);
      local_778 = CONCAT44(local_778._4_4_,2);
      local_7b0 = &LAB_023210cc;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d498;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_02321c4c(param_2,&local_778,&local_7b0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_760[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


