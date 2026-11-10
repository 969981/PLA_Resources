/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f334cc; name: FUN_00f334cc
 */


undefined8 FUN_00f334cc(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  char cVar7;
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
  char *local_2b8 [2];
  long local_2a8;
  
  if (((DAT_043b4d08 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4d08), iVar11 != 0)) {
    local_2a8 = 0;
    local_2b8[1] = (undefined1 *)0x0;
    local_2b8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b4bb8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4bb8), iVar11 != 0)) {
      FUN_00f37440();
      FUN_00100250(PTR__string_04379718,&DAT_043b4ba0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4bb8);
    }
    puVar28 = DAT_043b4bb0;
    if ((DAT_043b4ba0 & 1) == 0) {
      puVar28 = &DAT_043b4ba1;
    }
    pcVar27 = (char *)std::string::append((char *)local_2b8,(ulong)puVar28);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b4cf0,psVar18);
    lVar15 = local_2a8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2b8[0] & 1) != 0) && (local_2a8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar9;
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
          FUN_02bcc824(plVar26,lVar15,0,8);
          goto LAB_00f34448;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_00f34448:
    FUN_00100250(PTR__string_04379718,&DAT_043b4cf0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4d08);
  }
  std::string::string(&local_508,(string *)&DAT_043b4cf0);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b4ce8);
  sVar2 = (ulong)((byte)local_508 >> 1);
  if (((byte)local_508 & 1) != 0) {
    sVar2 = local_500;
  }
  std::string::append((ulong)&local_508,(char)iVar11);
  if (((byte)local_508 & 1) == 0) {
    puVar28 = auStack_507;
    local_500 = (size_t)((byte)local_508 >> 1);
  }
  else {
    puVar28 = local_4f8;
  }
  snprintf(puVar28 + (sVar2 - 1),local_500,"%d",(ulong)DAT_043b4ce8);
  DAT_043b4ce8 = DAT_043b4ce8 + 1;
  if (((DAT_043b4d28 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4d28), iVar11 != 0)) {
    local_2a8 = 0;
    local_2b8[1] = (undefined1 *)0x0;
    local_2b8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b4bb8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4bb8), iVar11 != 0)) {
      FUN_00f37440();
      FUN_00100250(PTR__string_04379718,&DAT_043b4ba0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4bb8);
    }
    puVar28 = DAT_043b4bb0;
    if ((DAT_043b4ba0 & 1) == 0) {
      puVar28 = &DAT_043b4ba1;
    }
    pcVar27 = (char *)std::string::append((char *)local_2b8,(ulong)puVar28);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b4d10,psVar18);
    lVar15 = local_2a8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2b8[0] & 1) != 0) && (local_2a8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar9;
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
          FUN_02bcc824(plVar26,lVar15,0,8);
          goto LAB_00f345b8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_00f345b8:
    FUN_00100250(PTR__string_04379718,&DAT_043b4d10,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4d28);
  }
  puVar4 = DAT_043b4d20;
  if ((DAT_043b4d10 & 1) == 0) {
    puVar4 = &DAT_043b4d11;
  }
  if (((byte)local_508 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_508 | 1);
  }
  else {
    puVar28 = local_4f8;
  }
  if (((DAT_043b4d38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4d38), iVar11 != 0)) {
    DAT_043b4d30 = 0xf0;
    __cxa_guard_release(&DAT_043b4d38);
  }
  if (((DAT_043b4d48 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4d48), iVar11 != 0)) {
    DAT_043b4d40 = 0xf7;
    __cxa_guard_release(&DAT_043b4d48);
  }
  uVar23 = DAT_043b4d30;
  lVar15 = FUN_00153520(param_2,DAT_043b4d30);
  if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0xf0)) ||
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043b4d40;
    lVar15 = FUN_00153520(param_2,DAT_043b4d40);
    if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0xf0)) ||
       (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00f39fb0();
      puVar5 = DAT_043b4d60;
      if ((DAT_043b4d50 & 1) == 0) {
        puVar5 = &DAT_043b4d51;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar5);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar15 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar15;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar15 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar8 = 0;
      if (uVar25 != 0) {
        uVar8 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar8 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar6;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_041eeb38;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar11 = FUN_00154450(param_2,puVar28);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_00f39f70,0);
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
  FUN_001522a0(param_2,puVar4);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar4);
  lVar15 = FUN_001511d0(param_2,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_508 & 1) != 0) && (local_4f8 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar9;
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
        FUN_02bcc824(plVar26,local_4f8,0,8);
        goto LAB_00f3382c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_4f8,0,8);
  }
LAB_00f3382c:
  memset(local_2b8,0,0x250);
  pcVar27 = *(char **)(lVar15 + 0x90);
  sVar16 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar24 = lVar15 + 8;
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_00f399ac;
  if (uVar13 != 0) {
    puVar28 = &LAB_00f38268;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar22 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar11 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(undefined1 **)(lVar15 + 0x30) = puVar28;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar15 + 0xa0) = puVar28;
            goto LAB_00f3394c;
          }
          *(ulong *)(lVar15 + 0xe8) = *(ulong *)(lVar15 + 0xe8) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0xe8) = *(ulong *)(lVar15 + 0xe8) | 1L << (uVar23 & 0x3f);
      goto LAB_00f3394c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2b8[0] = pcVar27;
  local_2b8[1] = puVar28;
LAB_00f3394c:
  pcVar27 = *(char **)(lVar15 + 0x98);
  sVar16 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00f39bb0;
  if (uVar13 != 0) {
    pcVar1 = FUN_00f39b68;
  }
  while( true ) {
    lVar17 = FUN_008cca50();
    pbVar22 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar11 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) break;
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar23 == 0x20) {
LAB_00f340bc:
      local_2b8[uVar25 * 2] = pcVar27;
      local_2b8[uVar25 * 2 + 1] = (char *)pcVar1;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0xe8);
      uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x00f33a30:
      if ((uVar13 >> 0x11 & 1) == 0) {
LAB_00f33a34:
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xe8);
      }
LAB_00f33a3c:
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xe8);
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x181);
        if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 400);
        }
        local_2b8[uVar25 * 2] = pcVar27;
        local_2b8[uVar25 * 2 + 1] = &LAB_00f38900;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xe8);
        uVar25 = (ulong)((int)uVar25 + 1);
      }
      uVar23 = uVar25;
      if ((uVar13 >> 0x1b & 1) == 0) {
        lVar29 = FUN_008cca50();
        uVar23 = (ulong)((int)uVar25 + 1);
        pcVar27 = (char *)(lVar29 + 0x289);
        if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x298);
        }
        local_2b8[uVar25 * 2] = pcVar27;
        local_2b8[uVar25 * 2 + 1] = &LAB_00f388f8;
      }
      uVar25 = uVar23;
      if (*(long *)(lVar15 + 0xa0) != 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x1c9);
        if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x1d8);
        }
        pcVar21 = *(char **)(lVar15 + 0xa0);
        uVar25 = (ulong)((int)uVar23 + 1);
        local_2b8[uVar23 * 2] = pcVar27;
        local_2b8[uVar23 * 2 + 1] = pcVar21;
      }
      local_2b8[uVar25 * 2] = (char *)0x0;
      local_2b8[uVar25 * 2 + 1] = (char *)0x0;
      memcpy(&local_508,local_2b8,0x250);
      memcpy(asStack_758,local_2b8,0x250);
      lVar29 = FUN_008cca50();
      lVar17 = uVar25 - 1;
      pcVar27 = local_2b8[lVar17 * 2];
      sVar16 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar16 == sVar2) &&
         (iVar11 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar11 == 0)) {
        auStack_518[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_507 + lVar17 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_758 + lVar17 * 0x10) = local_2b8[lVar17 * 2];
      *(undefined1 **)(asStack_758 + (lVar17 * 2 + 1) * 8) = &LAB_00f39c00;
      FUN_00151fe0(param_2,0,2);
      local_760[0] = FUN_0014feb0(param_2,0xffffffff);
      local_768 = param_2;
      if (((DAT_043b4bb8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b4bb8), iVar11 != 0)) {
        FUN_00f37440();
        FUN_00100250(PTR__string_04379718,&DAT_043b4ba0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b4bb8);
      }
      uVar12 = local_760[0];
      if ((DAT_043b4ba0 & 1) == 0) {
        uVar23 = (ulong)(DAT_043b4ba0 >> 1);
        puVar28 = &DAT_043b4ba1;
      }
      else {
        uVar23 = DAT_043b4ba8;
        puVar28 = DAT_043b4bb0;
      }
      FUN_001514f0(param_2,puVar28,uVar23);
      FUN_00152550(param_2,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_00f38810,0);
      FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar18 = asStack_758;
          FUN_00f35870();
          pbVar22 = &DAT_043b4b08;
        }
        else if (lVar29 == 0) {
          psVar18 = &local_508;
          FUN_00f3567c();
          pbVar22 = &DAT_043b4a90;
        }
        else {
          psVar18 = (string *)local_2b8;
          FUN_00f35a64();
          pbVar22 = &DAT_043b4b80;
        }
        pbVar3 = pbVar22 + 1;
        if ((*pbVar22 & 1) != 0) {
          pbVar3 = *(byte **)(pbVar22 + 0x10);
        }
        FUN_00154450(param_2,pbVar3);
        local_770 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        local_778 = param_2;
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,local_770);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00155a20(param_2,psVar18,2);
        uVar12 = local_770;
        if (*(long *)(lVar15 + 0xd0) == 0) {
          lVar17 = *(long *)(lVar15 + 0xd8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_check");
          lVar17 = *(long *)(lVar15 + 0xd8);
          uVar12 = local_770;
        }
        local_770 = uVar12;
        if (lVar17 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_cast");
        }
        uVar12 = local_770;
        uVar20 = *(undefined8 *)(lVar15 + 0xb0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_03955ac7);
        uVar12 = local_770;
        uVar20 = *(undefined8 *)(lVar15 + 0xb8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
          FUN_008fe304(local_780,param_2,&local_7b0,&local_778,local_770);
        }
        else {
          local_780[0] = 1;
          local_7b0 = &LAB_00f39c50;
          uStack_7a8 = 0;
          local_7a0 = lVar15;
          lStack_798 = lVar24;
          FUN_00f3a608(param_2,local_780,&local_7b0,local_770);
          local_780[0] = 2;
          local_7b0 = &LAB_00f39c54;
          uStack_7a8 = 0;
          local_7a0 = lVar15;
          lStack_798 = lVar24;
          FUN_00f3a608(param_2,local_780,&local_7b0,local_770);
        }
        FUN_00151fe0(param_2,0,3);
        uVar12 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,uVar12);
        if (*(undefined1 **)(lVar15 + 0xa8) == (undefined1 *)0x0) {
          cVar7 = *(char *)(lVar15 + 0xe0);
        }
        else {
          local_780[0] = 4;
          uStack_7a8 = 0;
          local_7b0 = *(undefined1 **)(lVar15 + 0xa8);
          local_7a0 = lVar15;
          lStack_798 = lVar24;
          FUN_00f3a608(param_2,local_780,&local_7b0,uVar12);
          cVar7 = *(char *)(lVar15 + 0xe0);
        }
        if (cVar7 != '\0') {
          local_780[0] = 1;
          local_7b0 = &LAB_00f39c50;
          uStack_7a8 = 0;
          local_7a0 = lVar15;
          lStack_798 = lVar24;
          FUN_00f3a608(param_2,local_780,&local_7b0,uVar12);
          local_780[0] = 2;
          local_7b0 = &LAB_00f39c54;
          uStack_7a8 = 0;
          local_7a0 = lVar15;
          lStack_798 = lVar24;
          FUN_00f3a608(param_2,local_780,&local_7b0,uVar12);
        }
        uVar14 = local_770;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar12);
        }
        FUN_00152ae0(param_2,uVar14);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_778,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_00f35ca4();
      puVar4 = DAT_043b4c08;
      if ((DAT_043b4bf8 & 1) == 0) {
        puVar4 = &DAT_043b4bf9;
      }
      FUN_00154450(param_2,puVar4);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_2b8,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar14);
      local_7b0 = *(undefined1 **)(lVar15 + 0xa8);
      if (local_7b0 != (undefined1 *)0x0) {
        local_778 = CONCAT44(local_778._4_4_,4);
        uStack_7a8 = 0;
        local_7a0 = lVar15;
        lStack_798 = lVar24;
        FUN_00f3a608(param_2,&local_778,&local_7b0,uVar14);
      }
      local_778._0_4_ = 1;
      local_7b0 = &LAB_00f39f60;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a788a0;
      local_7a0 = lVar15;
      lStack_798 = lVar24;
      FUN_00f3a9b0(param_2,&local_778,&local_7b0,uVar14);
      local_778 = CONCAT44(local_778._4_4_,2);
      local_7b0 = &LAB_00f39f64;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a788a0;
      local_7a0 = lVar15;
      lStack_798 = lVar24;
      FUN_00f3a9b0(param_2,&local_778,&local_7b0,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_760[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar11 = (int)uVar23;
  if (iVar11 == 0x13) {
    *(code **)(lVar15 + 0xa0) = pcVar1;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xe8);
    goto joined_r0x00f33a30;
  }
  if (iVar11 == 1) {
    *(code **)(lVar15 + 0x30) = pcVar1;
  }
  else {
    if (iVar11 != 2) {
      *(ulong *)(lVar15 + 0xe8) = *(ulong *)(lVar15 + 0xe8) | 1L << (uVar23 & 0x3f);
      goto LAB_00f340bc;
    }
    *(code **)(lVar15 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0xe8) = *(ulong *)(lVar15 + 0xe8) | 1L << (uVar23 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0xe8);
  if ((uVar13 >> 0x11 & 1) != 0) goto LAB_00f33a3c;
  goto LAB_00f33a34;
}


