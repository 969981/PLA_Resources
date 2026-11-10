/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024ad0a0; name: FUN_024ad0a0
 */


undefined8 FUN_024ad0a0(long param_1,long param_2)

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
  undefined1 *local_b40;
  undefined8 uStack_b38;
  long local_b30;
  long lStack_b28;
  undefined8 local_b20;
  undefined *puStack_b18;
  undefined4 local_b10 [2];
  long local_b08;
  undefined4 local_b00;
  long local_af8;
  undefined4 local_af0 [2];
  string asStack_ae8 [880];
  undefined8 auStack_778 [2];
  string local_768;
  undefined1 auStack_767 [7];
  size_t local_760;
  undefined1 *local_758;
  char *apcStack_3f8 [2];
  char *local_3e8 [2];
  long local_3d8;
  
  if (((DAT_043e71e8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e71e8), iVar11 != 0)) {
    local_3d8 = 0;
    local_3e8[1] = (undefined1 *)0x0;
    local_3e8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e70b8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e70b8), iVar11 != 0)) {
      FUN_024b0bd0();
      FUN_00100250(PTR__string_04379718,&DAT_043e70a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e70b8);
    }
    puVar4 = DAT_043e70b0;
    if ((DAT_043e70a0 & 1) == 0) {
      puVar4 = &DAT_043e70a1;
    }
    pcVar27 = (char *)std::string::append((char *)local_3e8,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e71d0,psVar18);
    lVar15 = local_3d8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_3e8[0] & 1) != 0) && (local_3d8 != 0)) {
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
          goto LAB_024ae018;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_024ae018:
    FUN_00100250(PTR__string_04379718,&DAT_043e71d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e71e8);
  }
  std::string::string(&local_768,(string *)&DAT_043e71d0);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e71c8);
  sVar2 = (ulong)((byte)local_768 >> 1);
  if (((byte)local_768 & 1) != 0) {
    sVar2 = local_760;
  }
  std::string::append((ulong)&local_768,(char)iVar11);
  if (((byte)local_768 & 1) == 0) {
    puVar28 = auStack_767;
    local_760 = (size_t)((byte)local_768 >> 1);
  }
  else {
    puVar28 = local_758;
  }
  snprintf(puVar28 + (sVar2 - 1),local_760,"%d",(ulong)DAT_043e71c8);
  DAT_043e71c8 = DAT_043e71c8 + 1;
  if (((DAT_043e7208 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7208), iVar11 != 0)) {
    local_3d8 = 0;
    local_3e8[1] = (undefined1 *)0x0;
    local_3e8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e70b8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e70b8), iVar11 != 0)) {
      FUN_024b0bd0();
      FUN_00100250(PTR__string_04379718,&DAT_043e70a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e70b8);
    }
    puVar4 = DAT_043e70b0;
    if ((DAT_043e70a0 & 1) == 0) {
      puVar4 = &DAT_043e70a1;
    }
    pcVar27 = (char *)std::string::append((char *)local_3e8,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e71f0,psVar18);
    lVar15 = local_3d8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_3e8[0] & 1) != 0) && (local_3d8 != 0)) {
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
          goto LAB_024ae188;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_024ae188:
    FUN_00100250(PTR__string_04379718,&DAT_043e71f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7208);
  }
  puVar4 = DAT_043e7200;
  if ((DAT_043e71f0 & 1) == 0) {
    puVar4 = &DAT_043e71f1;
  }
  if (((byte)local_768 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_768 | 1);
  }
  else {
    puVar28 = local_758;
  }
  if (((DAT_043e7218 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7218), iVar11 != 0)) {
    DAT_043e7210 = 0x220;
    __cxa_guard_release(&DAT_043e7218);
  }
  if (((DAT_043e7228 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7228), iVar11 != 0)) {
    DAT_043e7220 = 0x227;
    __cxa_guard_release(&DAT_043e7228);
  }
  uVar23 = DAT_043e7210;
  lVar15 = FUN_00153520(param_2,DAT_043e7210);
  if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0x220)) ||
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043e7220;
    lVar15 = FUN_00153520(param_2,DAT_043e7220);
    if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0x220)) ||
       (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024b3820();
      puVar5 = DAT_043e7240;
      if ((DAT_043e7230 & 1) == 0) {
        puVar5 = &DAT_043e7231;
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
  *puVar19 = &PTR_FUN_0425c200;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x1c0);
  iVar11 = FUN_00154450(param_2,puVar28);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_024b37e0,0);
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
  if ((((byte)local_768 & 1) != 0) && (local_758 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_758,0,8);
        goto LAB_024ad40c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_758,0,8);
  }
LAB_024ad40c:
  memset(local_3e8,0,0x380);
  pcVar27 = *(char **)(lVar15 + 0x1c0);
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
  puVar28 = &LAB_024b350c;
  if (uVar13 != 0) {
    puVar28 = &LAB_024b1c54;
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
            *(undefined1 **)(lVar15 + 0x1d0) = puVar28;
            goto LAB_024ad52c;
          }
          *(ulong *)(lVar15 + 0x218) = *(ulong *)(lVar15 + 0x218) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x218) = *(ulong *)(lVar15 + 0x218) | 1L << (uVar23 & 0x3f);
      goto LAB_024ad52c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3e8[0] = pcVar27;
  local_3e8[1] = puVar28;
LAB_024ad52c:
  pcVar27 = *(char **)(lVar15 + 0x1c8);
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
  pcVar1 = FUN_024b372c;
  if (uVar13 != 0) {
    pcVar1 = FUN_024b36e4;
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
LAB_024adc8c:
      local_3e8[uVar25 * 2] = pcVar27;
      local_3e8[uVar25 * 2 + 1] = (char *)pcVar1;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0x218);
      uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x024ad610:
      if ((uVar13 >> 0x11 & 1) == 0) {
LAB_024ad614:
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x218);
      }
LAB_024ad61c:
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x218);
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x181);
        if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 400);
        }
        local_3e8[uVar25 * 2] = pcVar27;
        local_3e8[uVar25 * 2 + 1] = &LAB_024b2300;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x218);
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
        local_3e8[uVar25 * 2] = pcVar27;
        local_3e8[uVar25 * 2 + 1] = &LAB_024b22f8;
      }
      uVar25 = uVar23;
      if (*(long *)(lVar15 + 0x1d0) != 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x1c9);
        if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x1d8);
        }
        pcVar21 = *(char **)(lVar15 + 0x1d0);
        uVar25 = (ulong)((int)uVar23 + 1);
        local_3e8[uVar23 * 2] = pcVar27;
        local_3e8[uVar23 * 2 + 1] = pcVar21;
      }
      local_3e8[uVar25 * 2] = (char *)0x0;
      local_3e8[uVar25 * 2 + 1] = (char *)0x0;
      memcpy(&local_768,local_3e8,0x380);
      memcpy(asStack_ae8,local_3e8,0x380);
      lVar29 = FUN_008cca50();
      lVar17 = uVar25 - 1;
      pcVar27 = local_3e8[lVar17 * 2];
      sVar16 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar16 == sVar2) &&
         (iVar11 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar11 == 0)) {
        auStack_778[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_767 + lVar17 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_ae8 + lVar17 * 0x10) = local_3e8[lVar17 * 2];
      *(undefined1 **)(asStack_ae8 + (lVar17 * 2 + 1) * 8) = &LAB_024b3780;
      FUN_00151fe0(param_2,0,2);
      local_af0[0] = FUN_0014feb0(param_2,0xffffffff);
      local_af8 = param_2;
      if (((DAT_043e70b8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e70b8), iVar11 != 0)) {
        FUN_024b0bd0();
        FUN_00100250(PTR__string_04379718,&DAT_043e70a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e70b8);
      }
      uVar12 = local_af0[0];
      if ((DAT_043e70a0 & 1) == 0) {
        uVar23 = (ulong)(DAT_043e70a0 >> 1);
        puVar4 = &DAT_043e70a1;
      }
      else {
        uVar23 = DAT_043e70a8;
        puVar4 = DAT_043e70b0;
      }
      FUN_001514f0(param_2,puVar4,uVar23);
      FUN_00152550(param_2,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_024b2210,0);
      FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar18 = asStack_ae8;
          FUN_024af440();
          pbVar22 = &DAT_043e7008;
        }
        else if (lVar29 == 0) {
          psVar18 = &local_768;
          FUN_024af24c();
          pbVar22 = &DAT_043e6f90;
        }
        else {
          psVar18 = (string *)local_3e8;
          FUN_024af634();
          pbVar22 = &DAT_043e7080;
        }
        pbVar3 = pbVar22 + 1;
        if ((*pbVar22 & 1) != 0) {
          pbVar3 = *(byte **)(pbVar22 + 0x10);
        }
        FUN_00154450(param_2,pbVar3);
        local_b00 = FUN_0014feb0(param_2,0xffffffff);
        local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
        local_b08 = param_2;
        FUN_008fe304(local_b10,param_2,&local_b40,&local_af8,local_b00);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00155a20(param_2,psVar18,2);
        uVar12 = local_b00;
        if (*(long *)(lVar15 + 0x200) == 0) {
          lVar17 = *(long *)(lVar15 + 0x208);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_check");
          lVar17 = *(long *)(lVar15 + 0x208);
          uVar12 = local_b00;
        }
        local_b00 = uVar12;
        if (lVar17 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_cast");
        }
        uVar12 = local_b00;
        uVar20 = *(undefined8 *)(lVar15 + 0x1e0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_03955ac7);
        uVar12 = local_b00;
        uVar20 = *(undefined8 *)(lVar15 + 0x1e8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,1);
          FUN_008fe304(local_b10,param_2,&local_b40,&local_b08,local_b00);
        }
        else {
          local_b10[0] = 1;
          local_b40 = &LAB_024b37d0;
          uStack_b38 = 0;
          local_b30 = lVar15;
          lStack_b28 = lVar24;
          FUN_024b4050(param_2,local_b10,&local_b40,local_b00);
          local_b10[0] = 2;
          local_b40 = &LAB_024b37d4;
          uStack_b38 = 0;
          local_b30 = lVar15;
          lStack_b28 = lVar24;
          FUN_024b4050(param_2,local_b10,&local_b40,local_b00);
        }
        FUN_00151fe0(param_2,0,3);
        uVar12 = FUN_0014feb0(param_2,0xffffffff);
        local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
        FUN_008fe304(local_b10,param_2,&local_b40,&local_af8,uVar12);
        if (*(undefined1 **)(lVar15 + 0x1d8) == (undefined1 *)0x0) {
          cVar7 = *(char *)(lVar15 + 0x210);
        }
        else {
          local_b10[0] = 4;
          uStack_b38 = 0;
          local_b40 = *(undefined1 **)(lVar15 + 0x1d8);
          local_b30 = lVar15;
          lStack_b28 = lVar24;
          FUN_024b4050(param_2,local_b10,&local_b40,uVar12);
          cVar7 = *(char *)(lVar15 + 0x210);
        }
        if (cVar7 != '\0') {
          local_b10[0] = 1;
          local_b40 = &LAB_024b37d0;
          uStack_b38 = 0;
          local_b30 = lVar15;
          lStack_b28 = lVar24;
          FUN_024b4050(param_2,local_b10,&local_b40,uVar12);
          local_b10[0] = 2;
          local_b40 = &LAB_024b37d4;
          uStack_b38 = 0;
          local_b30 = lVar15;
          lStack_b28 = lVar24;
          FUN_024b4050(param_2,local_b10,&local_b40,uVar12);
        }
        uVar14 = local_b00;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar12);
        }
        FUN_00152ae0(param_2,uVar14);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_b08,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_024af874();
      puVar4 = DAT_043e7108;
      if ((DAT_043e70f8 & 1) == 0) {
        puVar4 = &DAT_043e70f9;
      }
      FUN_00154450(param_2,puVar4);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_b40._0_4_ = 0x1e;
      FUN_008fe304(&local_b08,param_2,&local_b40,&local_af8,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_3e8,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
      FUN_008fe304(&local_b08,param_2,&local_b40,&local_af8,uVar14);
      local_b40 = *(undefined1 **)(lVar15 + 0x1d8);
      if (local_b40 != (undefined1 *)0x0) {
        local_b08 = CONCAT44(local_b08._4_4_,4);
        uStack_b38 = 0;
        local_b30 = lVar15;
        lStack_b28 = lVar24;
        FUN_024b4050(param_2,&local_b08,&local_b40,uVar14);
      }
      local_b08._0_4_ = 1;
      local_b40 = &LAB_024b37d8;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d5b0;
      local_b30 = lVar15;
      lStack_b28 = lVar24;
      FUN_024b4704(param_2,&local_b08,&local_b40,uVar14);
      local_b08 = CONCAT44(local_b08._4_4_,2);
      local_b40 = &LAB_024b37dc;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d5b0;
      local_b30 = lVar15;
      lStack_b28 = lVar24;
      FUN_024b4704(param_2,&local_b08,&local_b40,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_af0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar11 = (int)uVar23;
  if (iVar11 == 0x13) {
    *(code **)(lVar15 + 0x1d0) = pcVar1;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0x218);
    goto joined_r0x024ad610;
  }
  if (iVar11 == 1) {
    *(code **)(lVar15 + 0x30) = pcVar1;
  }
  else {
    if (iVar11 != 2) {
      *(ulong *)(lVar15 + 0x218) = *(ulong *)(lVar15 + 0x218) | 1L << (uVar23 & 0x3f);
      goto LAB_024adc8c;
    }
    *(code **)(lVar15 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0x218) = *(ulong *)(lVar15 + 0x218) | 1L << (uVar23 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0x218);
  if ((uVar13 >> 0x11 & 1) != 0) goto LAB_024ad61c;
  goto LAB_024ad614;
}


