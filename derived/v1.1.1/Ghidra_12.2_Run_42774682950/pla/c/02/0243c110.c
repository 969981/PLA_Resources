/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0243c110; name: FUN_0243c110
 */


undefined8 FUN_0243c110(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char cVar6;
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
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
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
  
  if (((DAT_043e5938 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5938), iVar10 != 0)) {
    local_2a8 = 0;
    local_2b8[1] = (undefined1 *)0x0;
    local_2b8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e5808 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5808), iVar10 != 0)) {
      FUN_0243f490();
      FUN_00100250(PTR__string_04379718,&DAT_043e57f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e5808);
    }
    puVar27 = DAT_043e5800;
    if ((DAT_043e57f0 & 1) == 0) {
      puVar27 = &DAT_043e57f1;
    }
    pcVar26 = (char *)std::string::append((char *)local_2b8,(ulong)puVar27);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5920,psVar17);
    lVar14 = local_2a8;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2b8[0] & 1) != 0) && (local_2a8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar8;
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
          FUN_02bcc824(plVar25,lVar14,0,8);
          goto LAB_0243d08c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar14,0,8);
    }
LAB_0243d08c:
    FUN_00100250(PTR__string_04379718,&DAT_043e5920,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5938);
  }
  std::string::string(&local_508,(string *)&DAT_043e5920);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e5918);
  sVar1 = (ulong)((byte)local_508 >> 1);
  if (((byte)local_508 & 1) != 0) {
    sVar1 = local_500;
  }
  std::string::append((ulong)&local_508,(char)iVar10);
  if (((byte)local_508 & 1) == 0) {
    puVar27 = auStack_507;
    local_500 = (size_t)((byte)local_508 >> 1);
  }
  else {
    puVar27 = local_4f8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_500,"%d",(ulong)DAT_043e5918);
  DAT_043e5918 = DAT_043e5918 + 1;
  if (((DAT_043e5958 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5958), iVar10 != 0)) {
    local_2a8 = 0;
    local_2b8[1] = (undefined1 *)0x0;
    local_2b8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e5808 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5808), iVar10 != 0)) {
      FUN_0243f490();
      FUN_00100250(PTR__string_04379718,&DAT_043e57f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e5808);
    }
    puVar27 = DAT_043e5800;
    if ((DAT_043e57f0 & 1) == 0) {
      puVar27 = &DAT_043e57f1;
    }
    pcVar26 = (char *)std::string::append((char *)local_2b8,(ulong)puVar27);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5940,psVar17);
    lVar14 = local_2a8;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2b8[0] & 1) != 0) && (local_2a8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar8;
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
          FUN_02bcc824(plVar25,lVar14,0,8);
          goto LAB_0243d1fc;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar14,0,8);
    }
LAB_0243d1fc:
    FUN_00100250(PTR__string_04379718,&DAT_043e5940,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5958);
  }
  puVar3 = DAT_043e5950;
  if ((DAT_043e5940 & 1) == 0) {
    puVar3 = &DAT_043e5941;
  }
  if (((byte)local_508 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_508 | 1);
  }
  else {
    puVar27 = local_4f8;
  }
  if (((DAT_043e5968 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5968), iVar10 != 0)) {
    DAT_043e5960 = 0xf0;
    __cxa_guard_release(&DAT_043e5968);
  }
  if (((DAT_043e5978 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5978), iVar10 != 0)) {
    DAT_043e5970 = 0xf7;
    __cxa_guard_release(&DAT_043e5978);
  }
  uVar22 = DAT_043e5960;
  lVar14 = FUN_00153520(param_2,DAT_043e5960);
  if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xf0)) ||
     (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e5970;
    lVar14 = FUN_00153520(param_2,DAT_043e5970);
    if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xf0)) ||
       (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024417b0();
      puVar4 = DAT_043e5990;
      if ((DAT_043e5980 & 1) == 0) {
        puVar4 = &DAT_043e5981;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar14;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar14 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar7 = 0;
      if (uVar24 != 0) {
        uVar7 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar7 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425bfb0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar10 = FUN_00154450(param_2,puVar27);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_02441770,0);
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
  if ((((byte)local_508 & 1) != 0) && (local_4f8 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar8;
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
        FUN_02bcc824(plVar25,local_4f8,0,8);
        goto LAB_0243c47c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4f8,0,8);
  }
LAB_0243c47c:
  memset(local_2b8,0,0x250);
  pcVar26 = *(char **)(lVar14 + 0x90);
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar23 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  puVar27 = &LAB_024411ac;
  if (uVar12 != 0) {
    puVar27 = &LAB_0243fcbc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar21 = (byte *)(lVar16 + lVar28);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar10 == 0)) {
      iVar10 = (int)uVar22;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar27;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar14 + 0xa0) = puVar27;
            goto LAB_0243c59c;
          }
          *(ulong *)(lVar14 + 0xe8) = *(ulong *)(lVar14 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xe8) = *(ulong *)(lVar14 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_0243c59c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2b8[0] = pcVar26;
  local_2b8[1] = puVar27;
LAB_0243c59c:
  pcVar26 = *(char **)(lVar14 + 0x98);
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = &LAB_024413b4;
  if (uVar12 != 0) {
    pcVar20 = &LAB_0244137c;
  }
  while( true ) {
    lVar16 = FUN_008cca50();
    pbVar21 = (byte *)(lVar16 + lVar28);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar10 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_0243cd00:
      local_2b8[uVar24 * 2] = pcVar26;
      local_2b8[uVar24 * 2 + 1] = pcVar20;
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0xe8);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0243c680:
      if ((uVar12 >> 0x11 & 1) == 0) {
LAB_0243c684:
        FUN_008cca50();
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xe8);
      }
LAB_0243c68c:
      if ((uVar12 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xe8);
      }
      if ((uVar12 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        local_2b8[uVar24 * 2] = pcVar26;
        local_2b8[uVar24 * 2 + 1] = &LAB_02440320;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xe8);
        uVar24 = (ulong)((int)uVar24 + 1);
      }
      uVar22 = uVar24;
      if ((uVar12 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        uVar22 = (ulong)((int)uVar24 + 1);
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        local_2b8[uVar24 * 2] = pcVar26;
        local_2b8[uVar24 * 2 + 1] = "\x19\x03";
      }
      uVar24 = uVar22;
      if (*(long *)(lVar14 + 0xa0) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(char **)(lVar14 + 0xa0);
        uVar24 = (ulong)((int)uVar22 + 1);
        local_2b8[uVar22 * 2] = pcVar26;
        local_2b8[uVar22 * 2 + 1] = pcVar20;
      }
      local_2b8[uVar24 * 2] = (char *)0x0;
      local_2b8[uVar24 * 2 + 1] = (char *)0x0;
      memcpy(&local_508,local_2b8,0x250);
      memcpy(asStack_758,local_2b8,0x250);
      lVar28 = FUN_008cca50();
      lVar16 = uVar24 - 1;
      pcVar26 = local_2b8[lVar16 * 2];
      sVar15 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar15 == sVar1) &&
         (iVar10 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar10 == 0)) {
        auStack_518[lVar16 * 2 + 2] = 0;
        *(undefined8 *)(auStack_507 + lVar16 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_758 + lVar16 * 0x10) = local_2b8[lVar16 * 2];
      *(undefined1 **)(asStack_758 + (lVar16 * 2 + 1) * 8) = &LAB_02441400;
      FUN_00151fe0(param_2,0,2);
      local_760[0] = FUN_0014feb0(param_2,0xffffffff);
      local_768 = param_2;
      if (((DAT_043e5808 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5808), iVar10 != 0)) {
        FUN_0243f490();
        FUN_00100250(PTR__string_04379718,&DAT_043e57f0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e5808);
      }
      uVar11 = local_760[0];
      if ((DAT_043e57f0 & 1) == 0) {
        uVar22 = (ulong)(DAT_043e57f0 >> 1);
        puVar27 = &DAT_043e57f1;
      }
      else {
        uVar22 = DAT_043e57f8;
        puVar27 = DAT_043e5800;
      }
      FUN_001514f0(param_2,puVar27,uVar22);
      FUN_00152550(param_2,uVar11,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02440230,0);
      FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_758;
          FUN_0243e4b4();
          pbVar21 = &DAT_043e5758;
        }
        else if (lVar28 == 0) {
          psVar17 = &local_508;
          FUN_0243e2c0();
          pbVar21 = &DAT_043e56e0;
        }
        else {
          psVar17 = (string *)local_2b8;
          FUN_0243e6a8();
          pbVar21 = &DAT_043e57d0;
        }
        pbVar2 = pbVar21 + 1;
        if ((*pbVar21 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar21 + 0x10);
        }
        FUN_00154450(param_2,pbVar2);
        local_770 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        local_778 = param_2;
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,local_770);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00155a20(param_2,psVar17,2);
        uVar11 = local_770;
        if (*(long *)(lVar14 + 0xd0) == 0) {
          lVar16 = *(long *)(lVar14 + 0xd8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar11,"class_check");
          lVar16 = *(long *)(lVar14 + 0xd8);
          uVar11 = local_770;
        }
        local_770 = uVar11;
        if (lVar16 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar11,"class_cast");
        }
        uVar11 = local_770;
        uVar19 = *(undefined8 *)(lVar14 + 0xb0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar11,&DAT_03955ac7);
        uVar11 = local_770;
        uVar19 = *(undefined8 *)(lVar14 + 0xb8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar11,&DAT_0397c077);
        if (*(char *)(lVar14 + 0x58) == '\0') {
          local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
          FUN_008fe304(local_780,param_2,&local_7b0,&local_778,local_770);
        }
        else {
          local_780[0] = 1;
          local_7b0 = &LAB_02441450;
          uStack_7a8 = 0;
          local_7a0 = lVar14;
          lStack_798 = lVar23;
          FUN_02441bec(param_2,local_780,&local_7b0,local_770);
          local_780[0] = 2;
          local_7b0 = &LAB_0244175c;
          uStack_7a8 = 0;
          local_7a0 = lVar14;
          lStack_798 = lVar23;
          FUN_02441bec(param_2,local_780,&local_7b0,local_770);
        }
        FUN_00151fe0(param_2,0,3);
        uVar11 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,uVar11);
        if (*(undefined1 **)(lVar14 + 0xa8) == (undefined1 *)0x0) {
          cVar6 = *(char *)(lVar14 + 0xe0);
        }
        else {
          local_780[0] = 4;
          uStack_7a8 = 0;
          local_7b0 = *(undefined1 **)(lVar14 + 0xa8);
          local_7a0 = lVar14;
          lStack_798 = lVar23;
          FUN_02441bec(param_2,local_780,&local_7b0,uVar11);
          cVar6 = *(char *)(lVar14 + 0xe0);
        }
        if (cVar6 != '\0') {
          local_780[0] = 1;
          local_7b0 = &LAB_02441450;
          uStack_7a8 = 0;
          local_7a0 = lVar14;
          lStack_798 = lVar23;
          FUN_02441bec(param_2,local_780,&local_7b0,uVar11);
          local_780[0] = 2;
          local_7b0 = &LAB_0244175c;
          uStack_7a8 = 0;
          local_7a0 = lVar14;
          lStack_798 = lVar23;
          FUN_02441bec(param_2,local_780,&local_7b0,uVar11);
        }
        uVar13 = local_770;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar11);
        }
        FUN_00152ae0(param_2,uVar13);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_778,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_0243e8e8();
      puVar3 = DAT_043e5858;
      if ((DAT_043e5848 & 1) == 0) {
        puVar3 = &DAT_043e5849;
      }
      FUN_00154450(param_2,puVar3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_2b8,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar13);
      local_7b0 = *(undefined1 **)(lVar14 + 0xa8);
      if (local_7b0 != (undefined1 *)0x0) {
        local_778 = CONCAT44(local_778._4_4_,4);
        uStack_7a8 = 0;
        local_7a0 = lVar14;
        lStack_798 = lVar23;
        FUN_02441bec(param_2,&local_778,&local_7b0,uVar13);
      }
      local_778._0_4_ = 1;
      local_7b0 = &LAB_02441760;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d560;
      local_7a0 = lVar14;
      lStack_798 = lVar23;
      FUN_02441f94(param_2,&local_778,&local_7b0,uVar13);
      local_778 = CONCAT44(local_778._4_4_,2);
      local_7b0 = &LAB_02441764;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d560;
      local_7a0 = lVar14;
      lStack_798 = lVar23;
      FUN_02441f94(param_2,&local_778,&local_7b0,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_760[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar10 = (int)uVar22;
  if (iVar10 == 0x13) {
    *(char **)(lVar14 + 0xa0) = pcVar20;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xe8);
    goto joined_r0x0243c680;
  }
  if (iVar10 == 1) {
    *(char **)(lVar14 + 0x30) = pcVar20;
  }
  else {
    if (iVar10 != 2) {
      *(ulong *)(lVar14 + 0xe8) = *(ulong *)(lVar14 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_0243cd00;
    }
    *(char **)(lVar14 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *(ulong *)(lVar14 + 0xe8) = *(ulong *)(lVar14 + 0xe8) | 1L << (uVar22 & 0x3f);
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0xe8);
  if ((uVar12 >> 0x11 & 1) != 0) goto LAB_0243c68c;
  goto LAB_0243c684;
}


