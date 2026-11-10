/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017b2f44; name: FUN_017b2f44
 */


undefined8 FUN_017b2f44(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
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
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
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
  
  if (((DAT_043d0668 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d0668), iVar9 != 0)) {
    local_2a0 = 0;
    local_2b0[1] = (undefined1 *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043813f0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043813f0);
      puVar3 = PTR_DAT_043813f8;
      if (iVar9 != 0) {
        FUN_017b6d50(PTR_DAT_043813f8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043813f0);
      }
    }
    pcVar26 = (char *)FUN_017b6164(local_2b0,PTR_DAT_043813f8);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d0650,psVar17);
    lVar13 = local_2a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
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
          goto LAB_017b40d8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_017b40d8:
    FUN_00100250(PTR__string_04379718,&DAT_043d0650,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d0668);
  }
  std::string::string(&local_4f0,(string *)&DAT_043d0650);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d0648);
  sVar2 = (ulong)((byte)local_4f0 >> 1);
  if (((byte)local_4f0 & 1) != 0) {
    sVar2 = local_4e8;
  }
  std::string::append((ulong)&local_4f0,(char)iVar9);
  if (((byte)local_4f0 & 1) == 0) {
    puVar27 = auStack_4ef;
    local_4e8 = (size_t)((byte)local_4f0 >> 1);
  }
  else {
    puVar27 = local_4e0;
  }
  snprintf(puVar27 + (sVar2 - 1),local_4e8,"%d",(ulong)DAT_043d0648);
  DAT_043d0648 = DAT_043d0648 + 1;
  if (((DAT_043d0688 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d0688), iVar9 != 0)) {
    local_2a0 = 0;
    local_2b0[1] = (undefined1 *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043813f0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043813f0);
      puVar3 = PTR_DAT_043813f8;
      if (iVar9 != 0) {
        FUN_017b6d50(PTR_DAT_043813f8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043813f0);
      }
    }
    pcVar26 = (char *)FUN_017b6164(local_2b0,PTR_DAT_043813f8);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d0670,psVar17);
    lVar13 = local_2a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
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
          goto LAB_017b422c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_017b422c:
    FUN_00100250(PTR__string_04379718,&DAT_043d0670,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d0688);
  }
  puVar3 = DAT_043d0680;
  if ((DAT_043d0670 & 1) == 0) {
    puVar3 = &DAT_043d0671;
  }
  if (((byte)local_4f0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4f0 | 1);
  }
  else {
    puVar27 = local_4e0;
  }
  if (((DAT_043d0698 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d0698), iVar9 != 0)) {
    DAT_043d0690 = 0xe8;
    __cxa_guard_release(&DAT_043d0698);
  }
  if (((DAT_043d06a8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d06a8), iVar9 != 0)) {
    DAT_043d06a0 = 0xef;
    __cxa_guard_release(&DAT_043d06a8);
  }
  uVar22 = DAT_043d0690;
  lVar13 = FUN_00153520(param_2,DAT_043d0690);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xe8)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043d06a0;
    lVar13 = FUN_00153520(param_2,DAT_043d06a0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xe8)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_017b7e50();
      puVar4 = DAT_043d06c0;
      if ((DAT_043d06b0 & 1) == 0) {
        puVar4 = &DAT_043d06b1;
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
  *puVar18 = &PTR_FUN_04225428;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x88);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_017b7e10,0);
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
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_4f0 & 1) != 0) && (local_4e0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_4e0,0,8);
        goto LAB_017b32a4;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4e0,0,8);
  }
LAB_017b32a4:
  memset(local_2b0,0,0x240);
  pcVar26 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  puVar27 = &LAB_017b7170;
  if (uVar11 != 0) {
    puVar27 = &LAB_017b7138;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar27;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar13 + 0x98) = puVar27;
            goto LAB_017b33c4;
          }
          *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
      goto LAB_017b33c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2b0[0] = pcVar26;
  local_2b0[1] = puVar27;
LAB_017b33c4:
  pcVar26 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_017b7398;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_017b71a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x98) = pcVar1;
        goto LAB_017b34a4;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
      goto LAB_017b34a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2b0[uVar24 * 2] = pcVar26;
  local_2b0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017b34a4:
  pcVar26 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_017b75bc;
  if (uVar11 != 0) {
    pcVar1 = FUN_017b73ec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x98) = pcVar1;
            goto LAB_017b3748;
          }
          *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
      goto LAB_017b3748;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2b0[uVar24 * 2] = pcVar26;
  local_2b0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017b3748:
  pcVar26 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_017b7ba0;
  if (uVar11 != 0) {
    pcVar1 = FUN_017b764c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x98) = pcVar1;
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe0);
            goto joined_r0x017b383c;
          }
          *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe0) = *(ulong *)(lVar13 + 0xe0) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe0);
      goto joined_r0x017b383c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2b0[uVar24 * 2] = pcVar26;
  local_2b0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe0);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x017b383c:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe0);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe0);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    local_2b0[uVar24 * 2] = pcVar26;
    local_2b0[uVar24 * 2 + 1] = PTR_LAB_043813e0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe0);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    local_2b0[uVar22 * 2] = pcVar26;
    local_2b0[uVar22 * 2 + 1] = PTR_LAB_043813e8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x98) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(char **)(lVar13 + 0x98);
    uVar22 = (ulong)((int)uVar24 + 1);
    local_2b0[uVar24 * 2] = pcVar26;
    local_2b0[uVar24 * 2 + 1] = pcVar20;
  }
  local_2b0[uVar22 * 2] = (char *)0x0;
  local_2b0[uVar22 * 2 + 1] = (char *)0x0;
  memcpy(&local_4f0,local_2b0,0x240);
  memcpy(asStack_730,local_2b0,0x240);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = local_2b0[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_500[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4ef + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_730 + lVar15 * 0x10) = local_2b0[lVar15 * 2];
  *(undefined1 **)(asStack_730 + (lVar15 * 2 + 1) * 8) = &LAB_017b7c00;
  FUN_00151fe0(param_2,0,2);
  local_738[0] = FUN_0014feb0(param_2,0xffffffff);
  local_740 = param_2;
  if ((*PTR_DAT_043813f0 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043813f0);
    puVar3 = PTR_DAT_043813f8;
    if (iVar9 != 0) {
      FUN_017b6d50(PTR_DAT_043813f8);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043813f0);
    }
  }
  uVar10 = local_738[0];
  uVar22 = *(ulong *)(PTR_DAT_043813f8 + 8);
  puVar3 = *(undefined **)(PTR_DAT_043813f8 + 0x10);
  if ((*PTR_DAT_043813f8 & 1) == 0) {
    puVar3 = PTR_DAT_043813f8 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_043813f8 >> 1);
  }
  FUN_001514f0(param_2,puVar3,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_017b7c50,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_730;
      pbVar16 = (byte *)FUN_017b5518();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_4f0;
      pbVar16 = (byte *)FUN_017b5338();
    }
    else {
      psVar17 = (string *)local_2b0;
      pbVar16 = (byte *)FUN_017b56f8();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_748 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_750 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_748;
    if (*(long *)(lVar13 + 200) == 0) {
      lVar15 = *(long *)(lVar13 + 0xd0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xd0);
      uVar10 = local_748;
    }
    local_748 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_748;
    uVar19 = *(undefined8 *)(lVar13 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_748;
    uVar19 = *(undefined8 *)(lVar13 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
    }
    else {
      local_780 = &LAB_017b7d40;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7ca0(param_2,1,&local_780,local_748);
      local_780 = &LAB_017b7d44;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7ca0(param_2,2,&local_780,local_748);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar10);
    if (*(undefined1 **)(lVar13 + 0xa0) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0xd8) != '\0') goto LAB_017b3ee0;
LAB_017b3c34:
      if (param_2 == 0) goto LAB_017b3f30;
LAB_017b3c3c:
      uVar12 = local_748;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar13 + 0xa0);
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7ca0(param_2,4,&local_780,uVar10);
      if (*(char *)(lVar13 + 0xd8) == '\0') goto LAB_017b3c34;
LAB_017b3ee0:
      local_780 = &LAB_017b7d40;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7ca0(param_2,1,&local_780,uVar10);
      local_780 = &LAB_017b7d44;
      uStack_778 = 0;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7ca0(param_2,2,&local_780,uVar10);
      if (param_2 != 0) goto LAB_017b3c3c;
LAB_017b3f30:
      uVar12 = local_748;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_750,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_017b5930();
      puVar3 = DAT_043d0600;
      if ((DAT_043d05f0 & 1) == 0) {
        puVar3 = &DAT_043d05f1;
      }
      FUN_00154450(param_2,puVar3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar12);
      local_780 = *(undefined1 **)(lVar13 + 0xa0);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar13;
        lStack_768 = lVar23;
        FUN_017b7ca0(param_2,4,&local_780,uVar12);
      }
      local_780 = &LAB_017b7e08;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7c5a8;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7d50(param_2,1,&local_780,uVar12);
      local_780 = &LAB_017b7e0c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7c5a8;
      local_770 = lVar13;
      lStack_768 = lVar23;
      FUN_017b7d50(param_2,2,&local_780,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


