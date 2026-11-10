/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0252dcf0; name: FUN_0252dcf0
 */


undefined8 FUN_0252dcf0(long param_1,long param_2)

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
  undefined1 *local_840;
  undefined8 uStack_838;
  long local_830;
  long lStack_828;
  undefined8 local_820;
  undefined *puStack_818;
  undefined4 local_810 [2];
  long local_808;
  undefined4 local_800;
  long local_7f8;
  undefined4 local_7f0 [2];
  string asStack_7e8 [624];
  undefined8 auStack_578 [2];
  string local_568;
  undefined1 auStack_567 [7];
  size_t local_560;
  undefined1 *local_558;
  char *apcStack_2f8 [2];
  char *local_2e8 [2];
  long local_2d8;
  
  if (((DAT_043e8fc0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e8fc0), iVar11 != 0)) {
    local_2d8 = 0;
    local_2e8[1] = (undefined1 *)0x0;
    local_2e8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387940 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04387940);
      puVar4 = PTR_DAT_04387948;
      if (iVar11 != 0) {
        FUN_02520c60(PTR_DAT_04387948);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387940);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_04387948 + 0x10);
    if ((*PTR_DAT_04387948 & 1) == 0) {
      puVar4 = PTR_DAT_04387948 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_2e8,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e8fa8,psVar18);
    lVar15 = local_2d8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2e8[0] & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_0252ec6c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_0252ec6c:
    FUN_00100250(PTR__string_04379718,&DAT_043e8fa8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8fc0);
  }
  std::string::string(&local_568,(string *)&DAT_043e8fa8);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e8fa0);
  sVar2 = (ulong)((byte)local_568 >> 1);
  if (((byte)local_568 & 1) != 0) {
    sVar2 = local_560;
  }
  std::string::append((ulong)&local_568,(char)iVar11);
  if (((byte)local_568 & 1) == 0) {
    puVar28 = auStack_567;
    local_560 = (size_t)((byte)local_568 >> 1);
  }
  else {
    puVar28 = local_558;
  }
  snprintf(puVar28 + (sVar2 - 1),local_560,"%d",(ulong)DAT_043e8fa0);
  DAT_043e8fa0 = DAT_043e8fa0 + 1;
  if (((DAT_043e8fe0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e8fe0), iVar11 != 0)) {
    local_2d8 = 0;
    local_2e8[1] = (undefined1 *)0x0;
    local_2e8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387940 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04387940);
      puVar4 = PTR_DAT_04387948;
      if (iVar11 != 0) {
        FUN_02520c60(PTR_DAT_04387948);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387940);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_04387948 + 0x10);
    if ((*PTR_DAT_04387948 & 1) == 0) {
      puVar4 = PTR_DAT_04387948 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_2e8,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e8fc8,psVar18);
    lVar15 = local_2d8;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_2e8[0] & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_0252eddc;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar15,0,8);
    }
LAB_0252eddc:
    FUN_00100250(PTR__string_04379718,&DAT_043e8fc8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8fe0);
  }
  puVar4 = DAT_043e8fd8;
  if ((DAT_043e8fc8 & 1) == 0) {
    puVar4 = &DAT_043e8fc9;
  }
  if (((byte)local_568 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_568 | 1);
  }
  else {
    puVar28 = local_558;
  }
  if (((DAT_043e8ff0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e8ff0), iVar11 != 0)) {
    DAT_043e8fe8 = 0x120;
    __cxa_guard_release(&DAT_043e8ff0);
  }
  if (((DAT_043e9000 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e9000), iVar11 != 0)) {
    DAT_043e8ff8 = 0x127;
    __cxa_guard_release(&DAT_043e9000);
  }
  uVar23 = DAT_043e8fe8;
  lVar15 = FUN_00153520(param_2,DAT_043e8fe8);
  if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0x120)) ||
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043e8ff8;
    lVar15 = FUN_00153520(param_2,DAT_043e8ff8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0x120)) ||
       (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02532dc0();
      puVar5 = DAT_043e9018;
      if ((DAT_043e9008 & 1) == 0) {
        puVar5 = &DAT_043e9009;
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
  *puVar19 = &PTR_FUN_0425c4c8;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xc0);
  iVar11 = FUN_00154450(param_2,puVar28);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_02532d80,0);
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
  if ((((byte)local_568 & 1) != 0) && (local_558 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_558,0,8);
        goto LAB_0252e05c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_558,0,8);
  }
LAB_0252e05c:
  memset(local_2e8,0,0x280);
  pcVar27 = *(char **)(lVar15 + 0xc0);
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
  puVar28 = &LAB_02532ae0;
  if (uVar13 != 0) {
    puVar28 = &LAB_025315f4;
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
            *(undefined1 **)(lVar15 + 0xd0) = puVar28;
            goto LAB_0252e17c;
          }
          *(ulong *)(lVar15 + 0x118) = *(ulong *)(lVar15 + 0x118) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x118) = *(ulong *)(lVar15 + 0x118) | 1L << (uVar23 & 0x3f);
      goto LAB_0252e17c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2e8[0] = pcVar27;
  local_2e8[1] = puVar28;
LAB_0252e17c:
  pcVar27 = *(char **)(lVar15 + 200);
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
  pcVar1 = FUN_02532cd0;
  if (uVar13 != 0) {
    pcVar1 = FUN_02532c88;
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
LAB_0252e8e0:
      local_2e8[uVar25 * 2] = pcVar27;
      local_2e8[uVar25 * 2 + 1] = (char *)pcVar1;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0x118);
      uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x0252e260:
      if ((uVar13 >> 0x11 & 1) == 0) {
LAB_0252e264:
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x118);
      }
LAB_0252e26c:
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x118);
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x181);
        if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 400);
        }
        local_2e8[uVar25 * 2] = pcVar27;
        local_2e8[uVar25 * 2 + 1] = &LAB_02531cc0;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x118);
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
        local_2e8[uVar25 * 2] = pcVar27;
        local_2e8[uVar25 * 2 + 1] = &LAB_02531cb8;
      }
      uVar25 = uVar23;
      if (*(long *)(lVar15 + 0xd0) != 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x1c9);
        if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x1d8);
        }
        pcVar21 = *(char **)(lVar15 + 0xd0);
        uVar25 = (ulong)((int)uVar23 + 1);
        local_2e8[uVar23 * 2] = pcVar27;
        local_2e8[uVar23 * 2 + 1] = pcVar21;
      }
      local_2e8[uVar25 * 2] = (char *)0x0;
      local_2e8[uVar25 * 2 + 1] = (char *)0x0;
      memcpy(&local_568,local_2e8,0x280);
      memcpy(asStack_7e8,local_2e8,0x280);
      lVar29 = FUN_008cca50();
      lVar17 = uVar25 - 1;
      pcVar27 = local_2e8[lVar17 * 2];
      sVar16 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar16 == sVar2) &&
         (iVar11 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar11 == 0)) {
        auStack_578[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_567 + lVar17 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_7e8 + lVar17 * 0x10) = local_2e8[lVar17 * 2];
      *(undefined1 **)(asStack_7e8 + (lVar17 * 2 + 1) * 8) = &LAB_02532d20;
      FUN_00151fe0(param_2,0,2);
      local_7f0[0] = FUN_0014feb0(param_2,0xffffffff);
      local_7f8 = param_2;
      if ((*PTR_DAT_04387940 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04387940);
        puVar4 = PTR_DAT_04387948;
        if (iVar11 != 0) {
          FUN_02520c60(PTR_DAT_04387948);
          FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04387940);
        }
      }
      uVar12 = local_7f0[0];
      uVar23 = *(ulong *)(PTR_DAT_04387948 + 8);
      puVar4 = *(undefined **)(PTR_DAT_04387948 + 0x10);
      if ((*PTR_DAT_04387948 & 1) == 0) {
        puVar4 = PTR_DAT_04387948 + 1;
        uVar23 = (ulong)((byte)*PTR_DAT_04387948 >> 1);
      }
      FUN_001514f0(param_2,puVar4,uVar23);
      FUN_00152550(param_2,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02531bd0,0);
      FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar18 = asStack_7e8;
          FUN_025300ac();
          pbVar22 = &DAT_043e8e50;
        }
        else if (lVar29 == 0) {
          psVar18 = &local_568;
          FUN_0252feb8();
          pbVar22 = &DAT_043e8dd8;
        }
        else {
          psVar18 = (string *)local_2e8;
          FUN_025302a0();
          pbVar22 = &DAT_043e8ec8;
        }
        pbVar3 = pbVar22 + 1;
        if ((*pbVar22 & 1) != 0) {
          pbVar3 = *(byte **)(pbVar22 + 0x10);
        }
        FUN_00154450(param_2,pbVar3);
        local_800 = FUN_0014feb0(param_2,0xffffffff);
        local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
        local_808 = param_2;
        FUN_008fe304(local_810,param_2,&local_840,&local_7f8,local_800);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00155a20(param_2,psVar18,2);
        uVar12 = local_800;
        if (*(long *)(lVar15 + 0x100) == 0) {
          lVar17 = *(long *)(lVar15 + 0x108);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_check");
          lVar17 = *(long *)(lVar15 + 0x108);
          uVar12 = local_800;
        }
        local_800 = uVar12;
        if (lVar17 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_cast");
        }
        uVar12 = local_800;
        uVar20 = *(undefined8 *)(lVar15 + 0xe0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_03955ac7);
        uVar12 = local_800;
        uVar20 = *(undefined8 *)(lVar15 + 0xe8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
          FUN_008fe304(local_810,param_2,&local_840,&local_808,local_800);
        }
        else {
          local_810[0] = 1;
          local_840 = &LAB_02532d70;
          uStack_838 = 0;
          local_830 = lVar15;
          lStack_828 = lVar24;
          FUN_025331fc(param_2,local_810,&local_840,local_800);
          local_810[0] = 2;
          local_840 = &LAB_02532d74;
          uStack_838 = 0;
          local_830 = lVar15;
          lStack_828 = lVar24;
          FUN_025331fc(param_2,local_810,&local_840,local_800);
        }
        FUN_00151fe0(param_2,0,3);
        uVar12 = FUN_0014feb0(param_2,0xffffffff);
        local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
        FUN_008fe304(local_810,param_2,&local_840,&local_7f8,uVar12);
        if (*(undefined1 **)(lVar15 + 0xd8) == (undefined1 *)0x0) {
          cVar7 = *(char *)(lVar15 + 0x110);
        }
        else {
          local_810[0] = 4;
          uStack_838 = 0;
          local_840 = *(undefined1 **)(lVar15 + 0xd8);
          local_830 = lVar15;
          lStack_828 = lVar24;
          FUN_025331fc(param_2,local_810,&local_840,uVar12);
          cVar7 = *(char *)(lVar15 + 0x110);
        }
        if (cVar7 != '\0') {
          local_810[0] = 1;
          local_840 = &LAB_02532d70;
          uStack_838 = 0;
          local_830 = lVar15;
          lStack_828 = lVar24;
          FUN_025331fc(param_2,local_810,&local_840,uVar12);
          local_810[0] = 2;
          local_840 = &LAB_02532d74;
          uStack_838 = 0;
          local_830 = lVar15;
          lStack_828 = lVar24;
          FUN_025331fc(param_2,local_810,&local_840,uVar12);
        }
        uVar14 = local_800;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar12);
        }
        FUN_00152ae0(param_2,uVar14);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_808,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_025304e8();
      puVar4 = DAT_043e8ef8;
      if ((DAT_043e8ee8 & 1) == 0) {
        puVar4 = &DAT_043e8ee9;
      }
      FUN_00154450(param_2,puVar4);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_2e8,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar14);
      local_840 = *(undefined1 **)(lVar15 + 0xd8);
      if (local_840 != (undefined1 *)0x0) {
        local_808 = CONCAT44(local_808._4_4_,4);
        uStack_838 = 0;
        local_830 = lVar15;
        lStack_828 = lVar24;
        FUN_025331fc(param_2,&local_808,&local_840,uVar14);
      }
      local_808._0_4_ = 1;
      local_840 = &LAB_02532d78;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d5e8;
      local_830 = lVar15;
      lStack_828 = lVar24;
      FUN_025338b0(param_2,&local_808,&local_840,uVar14);
      local_808 = CONCAT44(local_808._4_4_,2);
      local_840 = &LAB_02532d7c;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d5e8;
      local_830 = lVar15;
      lStack_828 = lVar24;
      FUN_025338b0(param_2,&local_808,&local_840,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar11 = (int)uVar23;
  if (iVar11 == 0x13) {
    *(code **)(lVar15 + 0xd0) = pcVar1;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0x118);
    goto joined_r0x0252e260;
  }
  if (iVar11 == 1) {
    *(code **)(lVar15 + 0x30) = pcVar1;
  }
  else {
    if (iVar11 != 2) {
      *(ulong *)(lVar15 + 0x118) = *(ulong *)(lVar15 + 0x118) | 1L << (uVar23 & 0x3f);
      goto LAB_0252e8e0;
    }
    *(code **)(lVar15 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0x118) = *(ulong *)(lVar15 + 0x118) | 1L << (uVar23 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0x118);
  if ((uVar13 >> 0x11 & 1) == 0) goto LAB_0252e264;
  goto LAB_0252e26c;
}


