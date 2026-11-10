/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021a6744; name: FUN_021a6744
 */


undefined8 FUN_021a6744(long param_1,long param_2)

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
  char *local_2b0;
  code *local_2a8;
  long local_2a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043dcaf8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dcaf8), iVar8 != 0)) {
    local_2a0 = 0;
    local_2a8 = (code *)0x0;
    local_2b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043855f0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043855f0);
      puVar2 = PTR_DAT_043855f8;
      if (iVar8 != 0) {
        FUN_021aa430(PTR_DAT_043855f8);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043855f0);
      }
    }
    pcVar25 = (char *)FUN_021a9844(&local_2b0,PTR_DAT_043855f8);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043dcae0,psVar16);
    lVar12 = local_2a0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2b0 & 1) != 0) && (local_2a0 != 0)) {
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
          goto LAB_021a77cc;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_021a77cc:
    FUN_00100250(PTR__string_04379718,&DAT_043dcae0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dcaf8);
  }
  std::string::string(&local_4f0,(string *)&DAT_043dcae0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dcad8);
  sVar1 = (ulong)((byte)local_4f0 >> 1);
  if (((byte)local_4f0 & 1) != 0) {
    sVar1 = local_4e8;
  }
  std::string::append((ulong)&local_4f0,(char)iVar8);
  if (((byte)local_4f0 & 1) == 0) {
    puVar26 = auStack_4ef;
    local_4e8 = (size_t)((byte)local_4f0 >> 1);
  }
  else {
    puVar26 = local_4e0;
  }
  snprintf(puVar26 + (sVar1 - 1),local_4e8,"%d",(ulong)DAT_043dcad8);
  DAT_043dcad8 = DAT_043dcad8 + 1;
  if (((DAT_043dcb18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dcb18), iVar8 != 0)) {
    local_2a0 = 0;
    local_2a8 = (code *)0x0;
    local_2b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043855f0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043855f0);
      puVar2 = PTR_DAT_043855f8;
      if (iVar8 != 0) {
        FUN_021aa430(PTR_DAT_043855f8);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043855f0);
      }
    }
    pcVar25 = (char *)FUN_021a9844(&local_2b0,PTR_DAT_043855f8);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043dcb00,psVar16);
    lVar12 = local_2a0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2b0 & 1) != 0) && (local_2a0 != 0)) {
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
          goto LAB_021a7920;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_021a7920:
    FUN_00100250(PTR__string_04379718,&DAT_043dcb00,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dcb18);
  }
  puVar2 = DAT_043dcb10;
  if ((DAT_043dcb00 & 1) == 0) {
    puVar2 = &DAT_043dcb01;
  }
  if (((byte)local_4f0 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_4f0 | 1);
  }
  else {
    puVar26 = local_4e0;
  }
  if (((DAT_043dcb28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dcb28), iVar8 != 0)) {
    DAT_043dcb20 = 0xf0;
    __cxa_guard_release(&DAT_043dcb28);
  }
  if (((DAT_043dcb38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dcb38), iVar8 != 0)) {
    DAT_043dcb30 = 0xf7;
    __cxa_guard_release(&DAT_043dcb38);
  }
  uVar21 = DAT_043dcb20;
  lVar12 = FUN_00153520(param_2,DAT_043dcb20);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf0)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043dcb30;
    lVar12 = FUN_00153520(param_2,DAT_043dcb30);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf0)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_021ab8c0();
      puVar3 = DAT_043dcb50;
      if ((DAT_043dcb40 & 1) == 0) {
        puVar3 = &DAT_043dcb41;
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
  *puVar17 = &PTR_FUN_0425b6c8;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_021ab880,0);
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
  if ((((byte)local_4f0 & 1) != 0) && (local_4e0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_4e0,0,8);
        goto LAB_021a6aa4;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_4e0,0,8);
  }
LAB_021a6aa4:
  memset(&local_2b0,0,0x240);
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
  pcVar19 = FUN_021aa994;
  if (uVar10 != 0) {
    pcVar19 = FUN_021aa81c;
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
        uVar23 = 0;
        *(code **)(lVar12 + 0xa0) = pcVar19;
        goto LAB_021a6b9c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      goto LAB_021a6b9c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2b0 = pcVar25;
  local_2a8 = pcVar19;
LAB_021a6b9c:
  puVar2 = PTR_DAT_04380660;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *puVar2 = 1;
  pcVar25 = *(char **)(lVar12 + 0x70);
  *(undefined1 **)(lVar12 + 0xd0) = &LAB_021abcf0;
  *(undefined1 **)(lVar12 + 0xd8) = &LAB_021abdac;
  *(undefined1 **)(lVar12 + 0xc0) = &LAB_021abe00;
  *(undefined1 **)(lVar12 + 200) = &LAB_021abe10;
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
  pcVar19 = (code *)&LAB_021aaba8;
  if (uVar10 != 0) {
    pcVar19 = FUN_021aaa94;
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
            *(code **)(lVar12 + 0xa0) = pcVar19;
            goto LAB_021a6e44;
          }
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      goto LAB_021a6e44;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2b0)[uVar23 * 2] = pcVar25;
  (&local_2a8)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_021a6e44:
  pcVar25 = *(char **)(lVar12 + 0x88);
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
  pcVar19 = FUN_021ab280;
  if (uVar10 != 0) {
    pcVar19 = FUN_021aacf0;
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
            *(code **)(lVar12 + 0xa0) = pcVar19;
            uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
            goto joined_r0x021a6f38;
          }
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
      goto joined_r0x021a6f38;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2b0)[uVar23 * 2] = pcVar25;
  (&local_2a8)[uVar23 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x021a6f38:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2b0)[uVar23 * 2] = pcVar25;
    (&local_2a8)[uVar23 * 2] = (code *)PTR_LAB_043855e0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  }
  uVar23 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_2b0)[uVar21 * 2] = pcVar25;
    (&local_2a8)[uVar21 * 2] = (code *)PTR_LAB_043855e8;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar12 + 0xa0) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0xa0);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2b0)[uVar23 * 2] = pcVar25;
    (&local_2a8)[uVar23 * 2] = pcVar19;
  }
  (&local_2b0)[uVar21 * 2] = (char *)0x0;
  (&local_2a8)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_4f0,&local_2b0,0x240);
  memcpy(asStack_730,&local_2b0,0x240);
  lVar27 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (&local_2b0)[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_500[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4ef + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_730 + lVar14 * 0x10) = (&local_2b0)[lVar14 * 2];
  *(undefined1 **)(asStack_730 + (lVar14 * 2 + 1) * 8) = &LAB_021ab370;
  FUN_00151fe0(param_2,0,2);
  local_738[0] = FUN_0014feb0(param_2,0xffffffff);
  local_740 = param_2;
  if ((*PTR_DAT_043855f0 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_043855f0);
    puVar2 = PTR_DAT_043855f8;
    if (iVar8 != 0) {
      FUN_021aa430(PTR_DAT_043855f8);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043855f0);
    }
  }
  uVar9 = local_738[0];
  uVar21 = *(ulong *)(PTR_DAT_043855f8 + 8);
  puVar2 = *(undefined **)(PTR_DAT_043855f8 + 0x10);
  if ((*PTR_DAT_043855f8 & 1) == 0) {
    puVar2 = PTR_DAT_043855f8 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_043855f8 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_021ab3c0,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar16 = asStack_730;
      pbVar15 = (byte *)FUN_021a8bf4();
    }
    else if (lVar27 == 0) {
      psVar16 = &local_4f0;
      pbVar15 = (byte *)FUN_021a8a14();
    }
    else {
      psVar16 = (string *)&local_2b0;
      pbVar15 = (byte *)FUN_021a8dd4();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_748 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_750 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_748;
    if (*(long *)(lVar12 + 0xd0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
    }
    uVar9 = local_748;
    if (*(long *)(lVar12 + 0xd8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_748;
    uVar18 = *(undefined8 *)(lVar12 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_748;
    uVar18 = *(undefined8 *)(lVar12 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
    }
    else {
      local_780 = &LAB_021ab4b0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab410(param_2,1,&local_780,local_748);
      local_780 = &LAB_021ab7bc;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab410(param_2,2,&local_780,local_748);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar9);
    if (*(undefined1 **)(lVar12 + 0xa8) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xe0) == '\0') goto LAB_021a739c;
LAB_021a75d4:
      local_780 = &LAB_021ab4b0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab410(param_2,1,&local_780,uVar9);
      local_780 = &LAB_021ab7bc;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab410(param_2,2,&local_780,uVar9);
      if (param_2 == 0) goto LAB_021a7624;
LAB_021a73a4:
      uVar11 = local_748;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar12 + 0xa8);
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab410(param_2,4,&local_780,uVar9);
      if (*(char *)(lVar12 + 0xe0) != '\0') goto LAB_021a75d4;
LAB_021a739c:
      if (param_2 != 0) goto LAB_021a73a4;
LAB_021a7624:
      uVar11 = local_748;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_750,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_021a900c();
      puVar2 = DAT_043dca90;
      if ((DAT_043dca80 & 1) == 0) {
        puVar2 = &DAT_043dca81;
      }
      FUN_00154450(param_2,puVar2);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar11);
      local_780 = *(undefined1 **)(lVar12 + 0xa8);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar12;
        lStack_768 = lVar22;
        FUN_021ab410(param_2,4,&local_780,uVar11);
      }
      local_780 = &LAB_021ab878;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d398;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab7c0(param_2,1,&local_780,uVar11);
      local_780 = &LAB_021ab87c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d398;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_021ab7c0(param_2,2,&local_780,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


