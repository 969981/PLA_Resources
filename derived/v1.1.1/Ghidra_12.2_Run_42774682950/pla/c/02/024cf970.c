/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024cf970; name: FUN_024cf970
 */


undefined8 FUN_024cf970(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined1 *local_7e0;
  undefined8 uStack_7d8;
  long local_7d0;
  long lStack_7c8;
  undefined8 local_7c0;
  undefined *puStack_7b8;
  undefined4 local_7b0 [2];
  long local_7a8;
  undefined4 local_7a0;
  long local_798;
  undefined4 local_790 [2];
  string asStack_788 [592];
  undefined8 auStack_538 [2];
  string local_528;
  undefined1 auStack_527 [7];
  size_t local_520;
  undefined1 *local_518;
  char *apcStack_2d8 [2];
  char *local_2c8 [2];
  long local_2b8;
  
  if (((DAT_043e7e68 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7e68), iVar11 != 0)) {
    local_2b8 = 0;
    local_2c8[1] = (undefined1 *)0x0;
    local_2c8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e7cb8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7cb8), iVar11 != 0)) {
      FUN_024d34a0();
      FUN_00100250(PTR__string_04379718,&DAT_043e7ca0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e7cb8);
    }
    puVar4 = DAT_043e7cb0;
    if ((DAT_043e7ca0 & 1) == 0) {
      puVar4 = &DAT_043e7ca1;
    }
    pcVar27 = (char *)std::string::append((char *)local_2c8,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e7e50,psVar18);
    lVar15 = local_2b8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2c8[0] & 1) != 0) && (local_2b8 != 0)) {
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
          goto LAB_024d08ec;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_024d08ec:
    FUN_00100250(PTR__string_04379718,&DAT_043e7e50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7e68);
  }
  std::string::string(&local_528,(string *)&DAT_043e7e50);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e7e48);
  sVar2 = (ulong)((byte)local_528 >> 1);
  if (((byte)local_528 & 1) != 0) {
    sVar2 = local_520;
  }
  std::string::append((ulong)&local_528,(char)iVar11);
  if (((byte)local_528 & 1) == 0) {
    puVar28 = auStack_527;
    local_520 = (size_t)((byte)local_528 >> 1);
  }
  else {
    puVar28 = local_518;
  }
  snprintf(puVar28 + (sVar2 - 1),local_520,"%d",(ulong)DAT_043e7e48);
  DAT_043e7e48 = DAT_043e7e48 + 1;
  if (((DAT_043e7e88 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7e88), iVar11 != 0)) {
    local_2b8 = 0;
    local_2c8[1] = (undefined1 *)0x0;
    local_2c8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e7cb8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7cb8), iVar11 != 0)) {
      FUN_024d34a0();
      FUN_00100250(PTR__string_04379718,&DAT_043e7ca0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e7cb8);
    }
    puVar4 = DAT_043e7cb0;
    if ((DAT_043e7ca0 & 1) == 0) {
      puVar4 = &DAT_043e7ca1;
    }
    pcVar27 = (char *)std::string::append((char *)local_2c8,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e7e70,psVar18);
    lVar15 = local_2b8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2c8[0] & 1) != 0) && (local_2b8 != 0)) {
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
          goto LAB_024d0a5c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_024d0a5c:
    FUN_00100250(PTR__string_04379718,&DAT_043e7e70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7e88);
  }
  puVar4 = DAT_043e7e80;
  if ((DAT_043e7e70 & 1) == 0) {
    puVar4 = &DAT_043e7e71;
  }
  if (((byte)local_528 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_528 | 1);
  }
  else {
    puVar28 = local_518;
  }
  if (((DAT_043e7e98 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7e98), iVar11 != 0)) {
    DAT_043e7e90 = 0x100;
    __cxa_guard_release(&DAT_043e7e98);
  }
  if (((DAT_043e7ea8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7ea8), iVar11 != 0)) {
    DAT_043e7ea0 = 0x107;
    __cxa_guard_release(&DAT_043e7ea8);
  }
  uVar23 = DAT_043e7e90;
  lVar15 = FUN_00153520(param_2,DAT_043e7e90);
  if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0x100)) ||
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043e7ea0;
    lVar15 = FUN_00153520(param_2,DAT_043e7ea0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0x100)) ||
       (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024d6f50();
      puVar5 = DAT_043e7ec0;
      if ((DAT_043e7eb0 & 1) == 0) {
        puVar5 = &DAT_043e7eb1;
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
  *puVar19 = &PTR_FUN_0425c2a0;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xa0);
  iVar11 = FUN_00154450(param_2,puVar28);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_024d6f10,0);
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
  if ((((byte)local_528 & 1) != 0) && (local_518 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_518,0,8);
        goto LAB_024cfcdc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_518,0,8);
  }
LAB_024cfcdc:
  memset(local_2c8,0,0x260);
  pcVar27 = *(char **)(lVar15 + 0xa0);
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
  puVar28 = &LAB_024d693c;
  if (uVar13 != 0) {
    puVar28 = &LAB_024d5024;
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
            *(undefined1 **)(lVar15 + 0xb0) = puVar28;
            goto LAB_024cfdfc;
          }
          *(ulong *)(lVar15 + 0xf8) = *(ulong *)(lVar15 + 0xf8) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0xf8) = *(ulong *)(lVar15 + 0xf8) | 1L << (uVar23 & 0x3f);
      goto LAB_024cfdfc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2c8[0] = pcVar27;
  local_2c8[1] = puVar28;
LAB_024cfdfc:
  pcVar27 = *(char **)(lVar15 + 0xa8);
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
  pcVar1 = FUN_024d6b4c;
  if (uVar13 != 0) {
    pcVar1 = FUN_024d6b04;
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
LAB_024d0560:
      local_2c8[uVar25 * 2] = pcVar27;
      local_2c8[uVar25 * 2 + 1] = (char *)pcVar1;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0xf8);
      uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x024cfee0:
      if ((uVar13 >> 0x11 & 1) == 0) {
LAB_024cfee4:
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xf8);
      }
LAB_024cfeec:
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xf8);
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x181);
        if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 400);
        }
        local_2c8[uVar25 * 2] = pcVar27;
        local_2c8[uVar25 * 2 + 1] = &LAB_024d56c0;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xf8);
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
        local_2c8[uVar25 * 2] = pcVar27;
        local_2c8[uVar25 * 2 + 1] = "\x13\x04";
      }
      uVar25 = uVar23;
      if (*(long *)(lVar15 + 0xb0) != 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x1c9);
        if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x1d8);
        }
        pcVar21 = *(char **)(lVar15 + 0xb0);
        uVar25 = (ulong)((int)uVar23 + 1);
        local_2c8[uVar23 * 2] = pcVar27;
        local_2c8[uVar23 * 2 + 1] = pcVar21;
      }
      local_2c8[uVar25 * 2] = (char *)0x0;
      local_2c8[uVar25 * 2 + 1] = (char *)0x0;
      memcpy(&local_528,local_2c8,0x260);
      memcpy(asStack_788,local_2c8,0x260);
      lVar29 = FUN_008cca50();
      lVar17 = uVar25 - 1;
      pcVar27 = local_2c8[lVar17 * 2];
      sVar16 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar16 == sVar2) &&
         (iVar11 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar11 == 0)) {
        auStack_538[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_527 + lVar17 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_788 + lVar17 * 0x10) = local_2c8[lVar17 * 2];
      *(undefined1 **)(asStack_788 + (lVar17 * 2 + 1) * 8) = &LAB_024d6ba0;
      FUN_00151fe0(param_2,0,2);
      local_790[0] = FUN_0014feb0(param_2,0xffffffff);
      local_798 = param_2;
      if (((DAT_043e7cb8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7cb8), iVar11 != 0)) {
        FUN_024d34a0();
        FUN_00100250(PTR__string_04379718,&DAT_043e7ca0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e7cb8);
      }
      uVar12 = local_790[0];
      if ((DAT_043e7ca0 & 1) == 0) {
        uVar23 = (ulong)(DAT_043e7ca0 >> 1);
        puVar4 = &DAT_043e7ca1;
      }
      else {
        uVar23 = DAT_043e7ca8;
        puVar4 = DAT_043e7cb0;
      }
      FUN_001514f0(param_2,puVar4,uVar23);
      FUN_00152550(param_2,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_024d55d0,0);
      FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar18 = asStack_788;
          FUN_024d1d14();
          pbVar22 = &DAT_043e7c08;
        }
        else if (lVar29 == 0) {
          psVar18 = &local_528;
          FUN_024d1b20();
          pbVar22 = &DAT_043e7b90;
        }
        else {
          psVar18 = (string *)local_2c8;
          FUN_024d1f08();
          pbVar22 = &DAT_043e7c80;
        }
        pbVar3 = pbVar22 + 1;
        if ((*pbVar22 & 1) != 0) {
          pbVar3 = *(byte **)(pbVar22 + 0x10);
        }
        FUN_00154450(param_2,pbVar3);
        local_7a0 = FUN_0014feb0(param_2,0xffffffff);
        local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
        local_7a8 = param_2;
        FUN_008fe304(local_7b0,param_2,&local_7e0,&local_798,local_7a0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00155a20(param_2,psVar18,2);
        uVar12 = local_7a0;
        if (*(long *)(lVar15 + 0xe0) == 0) {
          lVar17 = *(long *)(lVar15 + 0xe8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_check");
          lVar17 = *(long *)(lVar15 + 0xe8);
          uVar12 = local_7a0;
        }
        local_7a0 = uVar12;
        if (lVar17 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_cast");
        }
        uVar12 = local_7a0;
        uVar20 = *(undefined8 *)(lVar15 + 0xc0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_03955ac7);
        uVar12 = local_7a0;
        uVar20 = *(undefined8 *)(lVar15 + 200);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
          FUN_008fe304(local_7b0,param_2,&local_7e0,&local_7a8,local_7a0);
        }
        else {
          local_7b0[0] = 1;
          local_7e0 = &LAB_024d6bf0;
          uStack_7d8 = 0;
          local_7d0 = lVar15;
          lStack_7c8 = lVar24;
          FUN_024d777c(param_2,local_7b0,&local_7e0,local_7a0);
          local_7b0[0] = 2;
          local_7e0 = &LAB_024d6efc;
          uStack_7d8 = 0;
          local_7d0 = lVar15;
          lStack_7c8 = lVar24;
          FUN_024d777c(param_2,local_7b0,&local_7e0,local_7a0);
        }
        FUN_00151fe0(param_2,0,3);
        uVar12 = FUN_0014feb0(param_2,0xffffffff);
        local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
        FUN_008fe304(local_7b0,param_2,&local_7e0,&local_798,uVar12);
        if (*(undefined1 **)(lVar15 + 0xb8) == (undefined1 *)0x0) {
          cVar7 = *(char *)(lVar15 + 0xf0);
        }
        else {
          local_7b0[0] = 4;
          uStack_7d8 = 0;
          local_7e0 = *(undefined1 **)(lVar15 + 0xb8);
          local_7d0 = lVar15;
          lStack_7c8 = lVar24;
          FUN_024d777c(param_2,local_7b0,&local_7e0,uVar12);
          cVar7 = *(char *)(lVar15 + 0xf0);
        }
        if (cVar7 != '\0') {
          local_7b0[0] = 1;
          local_7e0 = &LAB_024d6bf0;
          uStack_7d8 = 0;
          local_7d0 = lVar15;
          lStack_7c8 = lVar24;
          FUN_024d777c(param_2,local_7b0,&local_7e0,uVar12);
          local_7b0[0] = 2;
          local_7e0 = &LAB_024d6efc;
          uStack_7d8 = 0;
          local_7d0 = lVar15;
          lStack_7c8 = lVar24;
          FUN_024d777c(param_2,local_7b0,&local_7e0,uVar12);
        }
        uVar14 = local_7a0;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar12);
        }
        FUN_00152ae0(param_2,uVar14);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_7a8,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_024d2148();
      puVar4 = DAT_043e7d08;
      if ((DAT_043e7cf8 & 1) == 0) {
        puVar4 = &DAT_043e7cf9;
      }
      FUN_00154450(param_2,puVar4);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0._0_4_ = 0x1e;
      FUN_008fe304(&local_7a8,param_2,&local_7e0,&local_798,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_2c8,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
      FUN_008fe304(&local_7a8,param_2,&local_7e0,&local_798,uVar14);
      local_7e0 = *(undefined1 **)(lVar15 + 0xb8);
      if (local_7e0 != (undefined1 *)0x0) {
        local_7a8 = CONCAT44(local_7a8._4_4_,4);
        uStack_7d8 = 0;
        local_7d0 = lVar15;
        lStack_7c8 = lVar24;
        FUN_024d777c(param_2,&local_7a8,&local_7e0,uVar14);
      }
      local_7a8._0_4_ = 1;
      local_7e0 = &LAB_024d6f00;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a7d5b0;
      local_7d0 = lVar15;
      lStack_7c8 = lVar24;
      FUN_024d7b24(param_2,&local_7a8,&local_7e0,uVar14);
      local_7a8 = CONCAT44(local_7a8._4_4_,2);
      local_7e0 = &LAB_024d6f04;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a7d5b0;
      local_7d0 = lVar15;
      lStack_7c8 = lVar24;
      FUN_024d7b24(param_2,&local_7a8,&local_7e0,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_790[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar11 = (int)uVar23;
  if (iVar11 == 0x13) {
    *(code **)(lVar15 + 0xb0) = pcVar1;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xf8);
    goto joined_r0x024cfee0;
  }
  if (iVar11 == 1) {
    *(code **)(lVar15 + 0x30) = pcVar1;
  }
  else {
    if (iVar11 != 2) {
      *(ulong *)(lVar15 + 0xf8) = *(ulong *)(lVar15 + 0xf8) | 1L << (uVar23 & 0x3f);
      goto LAB_024d0560;
    }
    *(code **)(lVar15 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0xf8) = *(ulong *)(lVar15 + 0xf8) | 1L << (uVar23 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0xf8);
  if ((uVar13 >> 0x11 & 1) != 0) goto LAB_024cfeec;
  goto LAB_024cfee4;
}


