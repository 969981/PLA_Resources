/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0248e440; name: FUN_0248e440
 */


undefined8 FUN_0248e440(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
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
  undefined1 *local_a80;
  undefined8 uStack_a78;
  long local_a70;
  long lStack_a68;
  undefined8 local_a60;
  undefined *puStack_a58;
  long local_a50;
  undefined4 local_a48;
  long local_a40;
  undefined4 local_a38 [2];
  string asStack_a30 [816];
  undefined8 auStack_700 [2];
  string local_6f0;
  undefined1 auStack_6ef [7];
  size_t local_6e8;
  undefined1 *local_6e0;
  char *apcStack_3c0 [2];
  char *local_3b0;
  code *local_3a8;
  long local_3a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e6bf8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e6bf8), iVar9 != 0)) {
    local_3a0 = 0;
    local_3a8 = (code *)0x0;
    local_3b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387688 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387688);
      puVar2 = PTR_DAT_04387690;
      if (iVar9 != 0) {
        FUN_02493110(PTR_DAT_04387690);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387688);
      }
    }
    pcVar26 = (char *)FUN_0249251c(&local_3b0,PTR_DAT_04387690);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e6be0,psVar17);
    lVar13 = local_3a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3b0 & 1) != 0) && (local_3a0 != 0)) {
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
          goto LAB_0249037c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0249037c:
    FUN_00100250(PTR__string_04379718,&DAT_043e6be0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e6bf8);
  }
  std::string::string(&local_6f0,(string *)&DAT_043e6be0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e6bd8);
  sVar1 = (ulong)((byte)local_6f0 >> 1);
  if (((byte)local_6f0 & 1) != 0) {
    sVar1 = local_6e8;
  }
  std::string::append((ulong)&local_6f0,(char)iVar9);
  if (((byte)local_6f0 & 1) == 0) {
    puVar27 = auStack_6ef;
    local_6e8 = (size_t)((byte)local_6f0 >> 1);
  }
  else {
    puVar27 = local_6e0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_6e8,"%d",(ulong)DAT_043e6bd8);
  DAT_043e6bd8 = DAT_043e6bd8 + 1;
  if (((DAT_043e6c18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e6c18), iVar9 != 0)) {
    local_3a0 = 0;
    local_3a8 = (code *)0x0;
    local_3b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387688 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387688);
      puVar2 = PTR_DAT_04387690;
      if (iVar9 != 0) {
        FUN_02493110(PTR_DAT_04387690);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387688);
      }
    }
    pcVar26 = (char *)FUN_0249251c(&local_3b0,PTR_DAT_04387690);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e6c00,psVar17);
    lVar13 = local_3a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3b0 & 1) != 0) && (local_3a0 != 0)) {
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
          goto LAB_024904d0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_024904d0:
    FUN_00100250(PTR__string_04379718,&DAT_043e6c00,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e6c18);
  }
  puVar2 = DAT_043e6c10;
  if ((DAT_043e6c00 & 1) == 0) {
    puVar2 = &DAT_043e6c01;
  }
  if (((byte)local_6f0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_6f0 | 1);
  }
  else {
    puVar27 = local_6e0;
  }
  if (((DAT_043e6c28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e6c28), iVar9 != 0)) {
    DAT_043e6c20 = 0x1c8;
    __cxa_guard_release(&DAT_043e6c28);
  }
  if (((DAT_043e6c38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e6c38), iVar9 != 0)) {
    DAT_043e6c30 = 0x1cf;
    __cxa_guard_release(&DAT_043e6c38);
  }
  uVar22 = DAT_043e6c20;
  lVar13 = FUN_00153520(param_2,DAT_043e6c20);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1c8)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e6c30;
    lVar13 = FUN_00153520(param_2,DAT_043e6c30);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1c8)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02497f60();
      puVar3 = DAT_043e6c50;
      if ((DAT_043e6c40 & 1) == 0) {
        puVar3 = &DAT_043e6c41;
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
  *puVar18 = &PTR_FUN_0425c1b0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x168);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_02497f20,0);
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
  if ((((byte)local_6f0 & 1) != 0) && (local_6e0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_6e0,0,8);
        goto LAB_0248e7ac;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_6e0,0,8);
  }
LAB_0248e7ac:
  memset(&local_3b0,0,0x340);
  pcVar26 = *(char **)(lVar13 + 0xa0);
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
  pcVar20 = FUN_02493e70;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02493ca4;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248e9c4;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248e9c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_3b0 = pcVar26;
  local_3a8 = pcVar20;
LAB_0248e9c4:
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
  pcVar20 = FUN_024943f0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02493ec8;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248eb04;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248eb04;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248eb04:
  pcVar26 = *(char **)(lVar13 + 0xb0);
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
  pcVar20 = FUN_02494554;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02494448;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248ec44;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248ec44;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248ec44:
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
  pcVar20 = FUN_02494a3c;
  if (uVar11 != 0) {
    pcVar20 = FUN_0249485c;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248ed84;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248ed84;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248ed84:
  pcVar26 = *(char **)(lVar13 + 0xe0);
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
  pcVar20 = FUN_02494adc;
  if (uVar11 != 0) {
    pcVar20 = FUN_02494a94;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248eec4;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248eec4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248eec4:
  pcVar26 = *(char **)(lVar13 + 0xf8);
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
  pcVar20 = (code *)&LAB_02494cbc;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02494b24;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f004;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f004;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f004:
  pcVar26 = *(char **)(lVar13 + 0x100);
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
  pcVar20 = FUN_02494d48;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02494d00;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f144;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f144;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f144:
  pcVar26 = *(char **)(lVar13 + 0x118);
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
  pcVar20 = FUN_02494f6c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02494d90;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f284;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f284;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f284:
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
  pcVar20 = FUN_0249500c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02494fc4;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f3c4;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f3c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f3c4:
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
  pcVar20 = (code *)&LAB_024951ec;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02495054;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f504;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f504;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f504:
  pcVar26 = *(char **)(lVar13 + 0x140);
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
  pcVar20 = (code *)&LAB_024953cc;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02495230;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f644;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f644;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f644:
  pcVar26 = *(char **)(lVar13 + 0x148);
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
  pcVar20 = FUN_02495930;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02495410;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f784;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f784;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f784:
  pcVar26 = *(char **)(lVar13 + 0x150);
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
  pcVar20 = FUN_02495aa8;
  if (uVar11 != 0) {
    pcVar20 = FUN_02495988;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f8c4;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f8c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f8c4:
  pcVar26 = *(char **)(lVar13 + 0x168);
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
  pcVar20 = (code *)&LAB_02497824;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02495bfc;
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
            *(code **)(lVar13 + 0x178) = pcVar20;
            goto LAB_0248f9d4;
          }
          *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_0248f9d4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0248f9d4:
  pcVar26 = *(char **)(lVar13 + 0x170);
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
  pcVar20 = (code *)&LAB_02497a28;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024979f4;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_024900c0:
      (&local_3b0)[uVar24 * 2] = pcVar26;
      (&local_3a8)[uVar24 * 2] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c0);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0248fab8:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_0248fabc:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c0);
      }
LAB_0248fac4:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c0);
      }
      uVar22 = uVar24;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_3b0)[uVar24 * 2] = pcVar26;
        (&local_3a8)[uVar24 * 2] = (code *)PTR_LAB_04387678;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c0);
      }
      uVar24 = uVar22;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        (&local_3b0)[uVar22 * 2] = pcVar26;
        (&local_3a8)[uVar22 * 2] = (code *)PTR_LAB_04387680;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0x178) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(code **)(lVar13 + 0x178);
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_3b0)[uVar24 * 2] = pcVar26;
        (&local_3a8)[uVar24 * 2] = pcVar20;
      }
      (&local_3b0)[uVar22 * 2] = (char *)0x0;
      (&local_3a8)[uVar22 * 2] = (code *)0x0;
      memcpy(&local_6f0,&local_3b0,0x340);
      memcpy(asStack_a30,&local_3b0,0x340);
      lVar28 = FUN_008cca50();
      lVar15 = uVar22 - 1;
      pcVar26 = (&local_3b0)[lVar15 * 2];
      sVar14 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar1) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar9 == 0)) {
        auStack_700[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_6ef + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_a30 + lVar15 * 0x10) = (&local_3b0)[lVar15 * 2];
      *(undefined1 **)(asStack_a30 + (lVar15 * 2 + 1) * 8) = &LAB_02497a60;
      FUN_00151fe0(param_2,0,2);
      local_a38[0] = FUN_0014feb0(param_2,0xffffffff);
      local_a40 = param_2;
      if ((*PTR_DAT_04387688 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04387688);
        puVar2 = PTR_DAT_04387690;
        if (iVar9 != 0) {
          FUN_02493110(PTR_DAT_04387690);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04387688);
        }
      }
      uVar10 = local_a38[0];
      uVar22 = *(ulong *)(PTR_DAT_04387690 + 8);
      puVar2 = *(undefined **)(PTR_DAT_04387690 + 0x10);
      if ((*PTR_DAT_04387690 & 1) == 0) {
        puVar2 = PTR_DAT_04387690 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04387690 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_024961b0,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_a30;
          pbVar16 = (byte *)FUN_024918c4();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_6f0;
          pbVar16 = (byte *)FUN_024916e4();
        }
        else {
          psVar17 = (string *)&local_3b0;
          pbVar16 = (byte *)FUN_02491aa4();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_a48 = FUN_0014feb0(param_2,0xffffffff);
        local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
        local_a50 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_a80,&local_a40,local_a48);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_a48;
        if (*(long *)(lVar13 + 0x1a8) == 0) {
          lVar15 = *(long *)(lVar13 + 0x1b0);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x1b0);
          uVar10 = local_a48;
        }
        local_a48 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_a48;
        uVar19 = *(undefined8 *)(lVar13 + 0x188);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_a48;
        uVar19 = *(undefined8 *)(lVar13 + 400);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_a80,&local_a50,local_a48);
        }
        else {
          local_a80 = &LAB_02497b50;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02497ab0(param_2,1,&local_a80,local_a48);
          local_a80 = &LAB_02497e5c;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02497ab0(param_2,2,&local_a80,local_a48);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_a80,&local_a40,uVar10);
        if (*(undefined1 **)(lVar13 + 0x180) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x1b8);
        }
        else {
          uStack_a78 = 0;
          local_a80 = *(undefined1 **)(lVar13 + 0x180);
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02497ab0(param_2,4,&local_a80,uVar10);
          cVar5 = *(char *)(lVar13 + 0x1b8);
        }
        if (cVar5 != '\0') {
          local_a80 = &LAB_02497b50;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02497ab0(param_2,1,&local_a80,uVar10);
          local_a80 = &LAB_02497e5c;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02497ab0(param_2,2,&local_a80,uVar10);
        }
        uVar12 = local_a48;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_a50,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_02491cdc();
      puVar2 = DAT_043e6ad8;
      if ((DAT_043e6ac8 & 1) == 0) {
        puVar2 = &DAT_043e6ac9;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_a80._0_4_ = 0x1e;
      FUN_008fe304(&local_a50,param_2,&local_a80,&local_a40,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_3b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
      FUN_008fe304(&local_a50,param_2,&local_a80,&local_a40,uVar12);
      local_a80 = *(undefined1 **)(lVar13 + 0x180);
      if (local_a80 != (undefined1 *)0x0) {
        uStack_a78 = 0;
        local_a70 = lVar13;
        lStack_a68 = lVar23;
        FUN_02497ab0(param_2,4,&local_a80,uVar12);
      }
      local_a80 = &LAB_02497f18;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7d5a8;
      local_a70 = lVar13;
      lStack_a68 = lVar23;
      FUN_02497e60(param_2,1,&local_a80,uVar12);
      local_a80 = &LAB_02497f1c;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7d5a8;
      local_a70 = lVar13;
      lStack_a68 = lVar23;
      FUN_02497e60(param_2,2,&local_a80,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_a38[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(code **)(lVar13 + 0x178) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c0);
    goto joined_r0x0248fab8;
  }
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
      goto LAB_024900c0;
    }
    *(code **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x1c0) = *(ulong *)(lVar13 + 0x1c0) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c0);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_0248fabc;
  goto LAB_0248fac4;
}


