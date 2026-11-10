/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022a5d14; name: FUN_022a5d14
 */


undefined8 FUN_022a5d14(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
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
  undefined1 *local_8a0;
  undefined8 uStack_898;
  long local_890;
  long lStack_888;
  undefined8 local_880;
  undefined *puStack_878;
  undefined4 local_870 [2];
  long local_868;
  undefined4 local_860;
  long local_858;
  undefined4 local_850 [2];
  string asStack_848 [656];
  undefined8 auStack_5b8 [2];
  string local_5a8;
  undefined1 auStack_5a7 [7];
  size_t local_5a0;
  undefined1 *local_598;
  char *apcStack_318 [2];
  char *local_308;
  code *local_300;
  long local_2f8;
  
  puVar5 = PTR_DAT_043864c0;
  if (((DAT_043e0888 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e0888), iVar9 != 0)) {
    local_2f8 = 0;
    local_300 = (code *)0x0;
    local_308 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043864c0);
      puVar2 = PTR_DAT_043864d8;
      if (iVar9 != 0) {
        FUN_022aa370(PTR_DAT_043864d8);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043864c0);
      }
    }
    pcVar26 = (char *)FUN_022a9784(&local_308,PTR_DAT_043864d8);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e0870,psVar17);
    lVar13 = local_2f8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_308 & 1) != 0) && (local_2f8 != 0)) {
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
          goto LAB_022a7674;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_022a7674:
    FUN_00100250(PTR__string_04379718,&DAT_043e0870,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0888);
  }
  std::string::string(&local_5a8,(string *)&DAT_043e0870);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e0868);
  sVar1 = (ulong)((byte)local_5a8 >> 1);
  if (((byte)local_5a8 & 1) != 0) {
    sVar1 = local_5a0;
  }
  std::string::append((ulong)&local_5a8,(char)iVar9);
  if (((byte)local_5a8 & 1) == 0) {
    puVar27 = auStack_5a7;
    local_5a0 = (size_t)((byte)local_5a8 >> 1);
  }
  else {
    puVar27 = local_598;
  }
  snprintf(puVar27 + (sVar1 - 1),local_5a0,"%d",(ulong)DAT_043e0868);
  DAT_043e0868 = DAT_043e0868 + 1;
  if (((DAT_043e08a8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e08a8), iVar9 != 0)) {
    local_2f8 = 0;
    local_300 = (code *)0x0;
    local_308 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043864c0);
      puVar2 = PTR_DAT_043864d8;
      if (iVar9 != 0) {
        FUN_022aa370(PTR_DAT_043864d8);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043864c0);
      }
    }
    pcVar26 = (char *)FUN_022a9784(&local_308,PTR_DAT_043864d8);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e0890,psVar17);
    lVar13 = local_2f8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_308 & 1) != 0) && (local_2f8 != 0)) {
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
          goto LAB_022a77c0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_022a77c0:
    FUN_00100250(PTR__string_04379718,&DAT_043e0890,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e08a8);
  }
  puVar2 = DAT_043e08a0;
  if ((DAT_043e0890 & 1) == 0) {
    puVar2 = &DAT_043e0891;
  }
  if (((byte)local_5a8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5a8 | 1);
  }
  else {
    puVar27 = local_598;
  }
  if (((DAT_043e08b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e08b8), iVar9 != 0)) {
    DAT_043e08b0 = 400;
    __cxa_guard_release(&DAT_043e08b8);
  }
  if (((DAT_043e08c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e08c8), iVar9 != 0)) {
    DAT_043e08c0 = 0x197;
    __cxa_guard_release(&DAT_043e08c8);
  }
  uVar22 = DAT_043e08b0;
  lVar13 = FUN_00153520(param_2,DAT_043e08b0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 400)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e08c0;
    lVar13 = FUN_00153520(param_2,DAT_043e08c0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 400)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_022ab840();
      puVar3 = DAT_043e08e0;
      if ((DAT_043e08d0 & 1) == 0) {
        puVar3 = &DAT_043e08d1;
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
      uVar6 = 0;
      if (uVar24 != 0) {
        uVar6 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar6 * uVar24;
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
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425ba10;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x130);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_022ab800,0);
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
  if ((((byte)local_5a8 & 1) != 0) && (local_598 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_598,0,8);
        goto LAB_022a6088;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_598,0,8);
  }
LAB_022a6088:
  memset(&local_308,0,0x2a0);
  pcVar26 = *(char **)(lVar13 + 0x60);
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
  pcVar20 = FUN_022aa91c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022aa75c;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a62a4;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a62a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_308 = pcVar26;
  local_300 = pcVar20;
LAB_022a62a4:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_022aab18;
  if (uVar11 != 0) {
    pcVar20 = FUN_022aaa34;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a63e4;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a63e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a63e4:
  pcVar26 = *(char **)(lVar13 + 0x90);
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
  pcVar20 = FUN_022aad28;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022aac2c;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a6524;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a6524;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a6524:
  pcVar26 = *(char **)(lVar13 + 0xa8);
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
  pcVar20 = (code *)&LAB_022aae94;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022aae5c;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a6664;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a6664;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a6664:
  pcVar26 = *(char **)(lVar13 + 0xc0);
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
  pcVar20 = (code *)&LAB_022aaf14;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022aaedc;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a67a4;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a67a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a67a4:
  pcVar26 = *(char **)(lVar13 + 0xd8);
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
  pcVar20 = (code *)&LAB_022aaf94;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022aaf5c;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a68e4;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a68e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a68e4:
  pcVar26 = *(char **)(lVar13 + 0xf0);
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
  pcVar20 = FUN_022ab12c;
  if (uVar11 != 0) {
    pcVar20 = FUN_022aafdc;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a6a24;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a6a24;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a6a24:
  pcVar26 = *(char **)(lVar13 + 0x108);
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
  pcVar20 = (code *)&LAB_022ab310;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022ab224;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a6b64;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a6b64;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a6b64:
  pcVar26 = *(char **)(lVar13 + 0x120);
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
  pcVar20 = (code *)&LAB_022ab544;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022ab42c;
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
            *(code **)(lVar13 + 0x140) = pcVar20;
            goto LAB_022a6ca4;
          }
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_022a6ca4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022a6ca4:
  pcVar26 = *(char **)(lVar13 + 0x138);
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
  pcVar20 = FUN_022ab6f0;
  if (uVar11 != 0) {
    pcVar20 = FUN_022ab690;
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
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x140) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x188);
        goto joined_r0x022a6d88;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x188) = *(ulong *)(lVar13 + 0x188) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x188);
      goto joined_r0x022a6d88;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x188);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x022a6d88:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x188);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x188);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_308)[uVar24 * 2] = pcVar26;
    (&local_300)[uVar24 * 2] = (code *)PTR_LAB_043864c8;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x188);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_308)[uVar22 * 2] = pcVar26;
    (&local_300)[uVar22 * 2] = (code *)PTR_LAB_043864d0;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x140) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x140);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_308)[uVar24 * 2] = pcVar26;
    (&local_300)[uVar24 * 2] = pcVar20;
  }
  (&local_308)[uVar22 * 2] = (char *)0x0;
  (&local_300)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_5a8,&local_308,0x2a0);
  memcpy(asStack_848,&local_308,0x2a0);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_308)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_5b8[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5a7 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_848 + lVar15 * 0x10) = (&local_308)[lVar15 * 2];
  *(code **)(asStack_848 + (lVar15 * 2 + 1) * 8) = FUN_022ab750;
  FUN_00151fe0(param_2,0,2);
  local_850[0] = FUN_0014feb0(param_2,0xffffffff);
  local_858 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043864c0);
    puVar5 = PTR_DAT_043864d8;
    if (iVar9 != 0) {
      FUN_022aa370(PTR_DAT_043864d8);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043864c0);
    }
  }
  uVar10 = local_850[0];
  uVar22 = *(ulong *)(PTR_DAT_043864d8 + 8);
  puVar5 = *(undefined **)(PTR_DAT_043864d8 + 0x10);
  if ((*PTR_DAT_043864d8 & 1) == 0) {
    puVar5 = PTR_DAT_043864d8 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_043864d8 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,FUN_022ab7a0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_848;
      pbVar16 = (byte *)FUN_022a8b3c();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_5a8;
      pbVar16 = (byte *)FUN_022a895c();
    }
    else {
      psVar17 = (string *)&local_308;
      pbVar16 = (byte *)FUN_022a8d1c();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_860 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    local_868 = param_2;
    FUN_008fe304(local_870,param_2,&local_8a0,&local_858,local_860);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_860;
    if (*(long *)(lVar13 + 0x170) == 0) {
      lVar15 = *(long *)(lVar13 + 0x178);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x178);
      uVar10 = local_860;
    }
    local_860 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_860;
    uVar19 = *(undefined8 *)(lVar13 + 0x150);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_860;
    uVar19 = *(undefined8 *)(lVar13 + 0x158);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,1);
      FUN_008fe304(local_870,param_2,&local_8a0,&local_868,local_860);
    }
    else {
      local_870[0] = 1;
      local_8a0 = &LAB_022ab7f0;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022aca44(param_2,local_870,&local_8a0,local_860);
      local_870[0] = 2;
      local_8a0 = &LAB_022ab7f4;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022aca44(param_2,local_870,&local_8a0,local_860);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    FUN_008fe304(local_870,param_2,&local_8a0,&local_858,uVar10);
    if (*(undefined1 **)(lVar13 + 0x148) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x180) != '\0') goto LAB_022a7438;
LAB_022a711c:
      if (param_2 == 0) goto LAB_022a7498;
LAB_022a7124:
      uVar12 = local_860;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_898 = 0;
      local_870[0] = 4;
      local_8a0 = *(undefined1 **)(lVar13 + 0x148);
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022aca44(param_2,local_870,&local_8a0,uVar10);
      if (*(char *)(lVar13 + 0x180) == '\0') goto LAB_022a711c;
LAB_022a7438:
      local_870[0] = 1;
      local_8a0 = &LAB_022ab7f0;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022aca44(param_2,local_870,&local_8a0,uVar10);
      local_870[0] = 2;
      local_8a0 = &LAB_022ab7f4;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022aca44(param_2,local_870,&local_8a0,uVar10);
      if (param_2 != 0) goto LAB_022a7124;
LAB_022a7498:
      uVar12 = local_860;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_868,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_022a8f54();
      puVar5 = DAT_043e0840;
      if ((DAT_043e0830 & 1) == 0) {
        puVar5 = &DAT_043e0831;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0._0_4_ = 0x1e;
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_308,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar12);
      local_8a0 = *(undefined1 **)(lVar13 + 0x148);
      if (local_8a0 != (undefined1 *)0x0) {
        uStack_898 = 0;
        local_868 = CONCAT44(local_868._4_4_,4);
        local_890 = lVar13;
        lStack_888 = lVar23;
        FUN_022aca44(param_2,&local_868,&local_8a0,uVar12);
      }
      local_868._0_4_ = 1;
      local_8a0 = &LAB_022ab7f8;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d438;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022ad0f8(param_2,&local_868,&local_8a0,uVar12);
      local_868 = CONCAT44(local_868._4_4_,2);
      local_8a0 = &LAB_022ab7fc;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d438;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_022ad0f8(param_2,&local_868,&local_8a0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_850[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


