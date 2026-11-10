/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dffe84; name: FUN_00dffe84
 */


undefined8 FUN_00dffe84(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  byte *pbVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  char *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_810;
  undefined8 uStack_808;
  long local_800;
  long lStack_7f8;
  undefined8 local_7f0;
  undefined *puStack_7e8;
  long local_7e0;
  undefined4 local_7d8;
  long local_7d0;
  undefined4 local_7c8 [2];
  string asStack_7c0 [608];
  undefined8 auStack_560 [2];
  string local_550;
  undefined1 auStack_54f [7];
  size_t local_548;
  undefined1 *local_540;
  char *apcStack_2f0 [2];
  char *local_2e0 [2];
  long local_2d0;
  undefined1 auStack_70 [16];
  
  puVar6 = PTR_DAT_0437bec8;
  if (((DAT_043ae9a0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ae9a0), iVar10 != 0)) {
    local_2d0 = 0;
    local_2e0[1] = (undefined1 *)0x0;
    local_2e0[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437bec8);
      puVar3 = PTR_DAT_0437bee0;
      if (iVar10 != 0) {
        FUN_00e040e0(PTR_DAT_0437bee0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bec8);
      }
    }
    pcVar27 = (char *)FUN_00e034b4(local_2e0,PTR_DAT_0437bee0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043ae988,psVar18);
    lVar14 = local_2d0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2e0[0] & 1) != 0) && (local_2d0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_00e013ec;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_00e013ec:
    FUN_00100250(PTR__string_04379718,&DAT_043ae988,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ae9a0);
  }
  std::string::string(&local_550,(string *)&DAT_043ae988);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ae980);
  sVar2 = (ulong)((byte)local_550 >> 1);
  if (((byte)local_550 & 1) != 0) {
    sVar2 = local_548;
  }
  std::string::append((ulong)&local_550,(char)iVar10);
  if (((byte)local_550 & 1) == 0) {
    puVar28 = auStack_54f;
    local_548 = (size_t)((byte)local_550 >> 1);
  }
  else {
    puVar28 = local_540;
  }
  snprintf(puVar28 + (sVar2 - 1),local_548,"%d",(ulong)DAT_043ae980);
  DAT_043ae980 = DAT_043ae980 + 1;
  if (((DAT_043ae9c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ae9c0), iVar10 != 0)) {
    local_2d0 = 0;
    local_2e0[1] = (undefined1 *)0x0;
    local_2e0[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437bec8);
      puVar3 = PTR_DAT_0437bee0;
      if (iVar10 != 0) {
        FUN_00e040e0(PTR_DAT_0437bee0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bec8);
      }
    }
    pcVar27 = (char *)FUN_00e034b4(local_2e0,PTR_DAT_0437bee0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043ae9a8,psVar18);
    lVar14 = local_2d0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2e0[0] & 1) != 0) && (local_2d0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_00e01538;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_00e01538:
    FUN_00100250(PTR__string_04379718,&DAT_043ae9a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ae9c0);
  }
  puVar3 = DAT_043ae9b8;
  if ((DAT_043ae9a8 & 1) == 0) {
    puVar3 = &DAT_043ae9a9;
  }
  if (((byte)local_550 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_550 | 1);
  }
  else {
    puVar28 = local_540;
  }
  if (((DAT_043ae9d0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ae9d0), iVar10 != 0)) {
    DAT_043ae9c8 = 0x140;
    __cxa_guard_release(&DAT_043ae9d0);
  }
  if (((DAT_043ae9e0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ae9e0), iVar10 != 0)) {
    DAT_043ae9d8 = 0x147;
    __cxa_guard_release(&DAT_043ae9e0);
  }
  uVar23 = DAT_043ae9c8;
  lVar14 = FUN_00153520(param_2,DAT_043ae9c8);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x140)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043ae9d8;
    lVar14 = FUN_00153520(param_2,DAT_043ae9d8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x140)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00e052b0();
      puVar4 = DAT_043ae9f8;
      if ((DAT_043ae9e8 & 1) == 0) {
        puVar4 = &DAT_043ae9e9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar14;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar7 = 0;
      if (uVar25 != 0) {
        uVar7 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar7 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_041ee620;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xe0);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_00e05270,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar11 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar11);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_550 & 1) != 0) && (local_540 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar8;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,local_540,0,8);
        goto LAB_00e001f8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_540,0,8);
  }
LAB_00e001f8:
  memset(local_2e0,0,0x270);
  pcVar27 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_00e044f4;
  if (uVar12 != 0) {
    puVar28 = &LAB_00e044bc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar28;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar14 + 0xf0) = puVar28;
            goto LAB_00e0031c;
          }
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      goto LAB_00e0031c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2e0[0] = pcVar27;
  local_2e0[1] = puVar28;
LAB_00e0031c:
  pcVar27 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00e04718;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_00e0452c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0xf0) = pcVar1;
        goto LAB_00e003fc;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      goto LAB_00e003fc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e0[uVar25 * 2] = pcVar27;
  local_2e0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00e003fc:
  pcVar27 = *(char **)(lVar14 + 0x78);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00e04984;
  if (uVar12 != 0) {
    pcVar1 = FUN_00e0476c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xf0) = pcVar1;
            goto LAB_00e00694;
          }
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      goto LAB_00e00694;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e0[uVar25 * 2] = pcVar27;
  local_2e0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00e00694:
  pcVar27 = *(char **)(lVar14 + 0x90);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00e04a5c;
  if (uVar12 != 0) {
    pcVar1 = FUN_00e04a14;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xf0) = pcVar1;
            goto LAB_00e007d4;
          }
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      goto LAB_00e007d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e0[uVar25 * 2] = pcVar27;
  local_2e0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00e007d4:
  pcVar27 = *(char **)(lVar14 + 0xa8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00e04cdc;
  if (uVar12 != 0) {
    pcVar1 = FUN_00e04aa4;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xf0) = pcVar1;
            goto LAB_00e00914;
          }
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      goto LAB_00e00914;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e0[uVar25 * 2] = pcVar27;
  local_2e0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00e00914:
  pcVar27 = *(char **)(lVar14 + 0xc0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00e04e60;
  if (uVar12 != 0) {
    pcVar1 = FUN_00e04d6c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xf0) = pcVar1;
            goto LAB_00e00a54;
          }
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      goto LAB_00e00a54;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e0[uVar25 * 2] = pcVar27;
  local_2e0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00e00a54:
  pcVar27 = *(char **)(lVar14 + 0xd8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00e04fcc;
  if (uVar12 != 0) {
    pcVar1 = FUN_00e04ef0;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xf0) = pcVar1;
            uVar12 = (uint)*(undefined8 *)(lVar14 + 0x138);
            goto joined_r0x00e00b48;
          }
          *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x138) = *(ulong *)(lVar14 + 0x138) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x138);
      goto joined_r0x00e00b48;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e0[uVar25 * 2] = pcVar27;
  local_2e0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x138);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x00e00b48:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x138);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x138);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_2e0[uVar25 * 2] = pcVar27;
    local_2e0[uVar25 * 2 + 1] = PTR_LAB_0437bed0;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x138);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_2e0[uVar23 * 2] = pcVar27;
    local_2e0[uVar23 * 2 + 1] = PTR_LAB_0437bed8;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0xf0) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0xf0);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_2e0[uVar25 * 2] = pcVar27;
    local_2e0[uVar25 * 2 + 1] = pcVar21;
  }
  local_2e0[uVar23 * 2] = (char *)0x0;
  local_2e0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_550,local_2e0,0x270);
  memcpy(asStack_7c0,local_2e0,0x270);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_2e0[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_560[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_54f + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7c0 + lVar16 * 0x10) = local_2e0[lVar16 * 2];
  *(undefined1 **)(asStack_7c0 + (lVar16 * 2 + 1) * 8) = &LAB_00e05060;
  FUN_00151fe0(param_2,0,2);
  local_7c8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7d0 = param_2;
  if ((*puVar6 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437bec8);
    puVar6 = PTR_DAT_0437bee0;
    if (iVar10 != 0) {
      FUN_00e040e0(PTR_DAT_0437bee0);
      FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437bec8);
    }
  }
  uVar11 = local_7c8[0];
  uVar23 = *(ulong *)(PTR_DAT_0437bee0 + 8);
  puVar6 = *(undefined **)(PTR_DAT_0437bee0 + 0x10);
  if ((*PTR_DAT_0437bee0 & 1) == 0) {
    puVar6 = PTR_DAT_0437bee0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437bee0 >> 1);
  }
  FUN_001514f0(param_2,puVar6,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00e050b0,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_7c0;
      pbVar17 = (byte *)FUN_00e0286c();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_550;
      pbVar17 = (byte *)FUN_00e0268c();
    }
    else {
      psVar18 = (string *)local_2e0;
      pbVar17 = (byte *)FUN_00e02a4c();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_7d8 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    local_7e0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_810,&local_7d0,local_7d8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_7d8;
    if (*(long *)(lVar14 + 0x120) == 0) {
      lVar16 = *(long *)(lVar14 + 0x128);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0x128);
      uVar11 = local_7d8;
    }
    local_7d8 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_7d8;
    uVar20 = *(undefined8 *)(lVar14 + 0x100);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_7d8;
    uVar20 = *(undefined8 *)(lVar14 + 0x108);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_810,&local_7e0,local_7d8);
    }
    else {
      local_810 = &LAB_00e051a0;
      uStack_808 = 0;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e05100(param_2,1,&local_810,local_7d8);
      local_810 = &LAB_00e051a4;
      uStack_808 = 0;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e05100(param_2,2,&local_810,local_7d8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_810,&local_7d0,uVar11);
    if (*(undefined1 **)(lVar14 + 0xf8) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x130) != '\0') goto LAB_00e011f4;
LAB_00e00f3c:
      if (param_2 == 0) goto LAB_00e01248;
LAB_00e00f44:
      uVar13 = local_7d8;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_808 = 0;
      local_810 = *(undefined1 **)(lVar14 + 0xf8);
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e05100(param_2,4,&local_810,uVar11);
      if (*(char *)(lVar14 + 0x130) == '\0') goto LAB_00e00f3c;
LAB_00e011f4:
      local_810 = &LAB_00e051a0;
      uStack_808 = 0;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e05100(param_2,1,&local_810,uVar11);
      local_810 = &LAB_00e051a4;
      uStack_808 = 0;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e05100(param_2,2,&local_810,uVar11);
      if (param_2 != 0) goto LAB_00e00f44;
LAB_00e01248:
      uVar13 = local_7d8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7e0,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_00e02c84();
      puVar6 = DAT_043ae958;
      if ((DAT_043ae948 & 1) == 0) {
        puVar6 = &DAT_043ae949;
      }
      FUN_00154450(param_2,puVar6);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_810._0_4_ = 0x1e;
      FUN_008fe304(&local_7e0,param_2,&local_810,&local_7d0,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_2e0,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
      FUN_008fe304(&local_7e0,param_2,&local_810,&local_7d0,uVar13);
      local_810 = *(undefined1 **)(lVar14 + 0xf8);
      if (local_810 != (undefined1 *)0x0) {
        uStack_808 = 0;
        local_800 = lVar14;
        lStack_7f8 = lVar24;
        FUN_00e05100(param_2,4,&local_810,uVar13);
      }
      local_810 = &LAB_00e05268;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a78790;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e051b0(param_2,1,&local_810,uVar13);
      local_810 = &LAB_00e0526c;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a78790;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_00e051b0(param_2,2,&local_810,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7c8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


