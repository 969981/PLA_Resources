/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fc513c; name: FUN_00fc513c
 */


undefined8 FUN_00fc513c(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
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
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  undefined4 local_720 [2];
  long local_718;
  undefined4 local_710;
  long local_708;
  undefined4 local_700 [2];
  string asStack_6f8 [544];
  undefined8 auStack_4d8 [2];
  string local_4c8;
  undefined1 auStack_4c7 [7];
  size_t local_4c0;
  undefined1 *local_4b8;
  char *apcStack_2a8 [2];
  char *local_298 [2];
  long local_288;
  
  if (((DAT_043b7658 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b7658), iVar10 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437dd40 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437dd40);
      puVar3 = PTR_DAT_0437dd48;
      if (iVar10 != 0) {
        FUN_00fc8ec0(PTR_DAT_0437dd48);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437dd40);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437dd48 + 0x10);
    if ((*PTR_DAT_0437dd48 & 1) == 0) {
      puVar3 = PTR_DAT_0437dd48 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_298,(ulong)puVar3);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b7640,psVar18);
    lVar14 = local_288;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar14,0,8);
          goto LAB_00fc62a8;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar14,0,8);
    }
LAB_00fc62a8:
    FUN_00100250(PTR__string_04379718,&DAT_043b7640,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b7658);
  }
  std::string::string(&local_4c8,(string *)&DAT_043b7640);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b7638);
  sVar2 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar2 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar10);
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar29 = local_4b8;
  }
  snprintf(puVar29 + (sVar2 - 1),local_4c0,"%d",(ulong)DAT_043b7638);
  DAT_043b7638 = DAT_043b7638 + 1;
  if (((DAT_043b7678 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b7678), iVar10 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437dd40 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437dd40);
      puVar3 = PTR_DAT_0437dd48;
      if (iVar10 != 0) {
        FUN_00fc8ec0(PTR_DAT_0437dd48);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437dd40);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437dd48 + 0x10);
    if ((*PTR_DAT_0437dd48 & 1) == 0) {
      puVar3 = PTR_DAT_0437dd48 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_298,(ulong)puVar3);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b7660,psVar18);
    lVar14 = local_288;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar14,0,8);
          goto LAB_00fc6418;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar14,0,8);
    }
LAB_00fc6418:
    FUN_00100250(PTR__string_04379718,&DAT_043b7660,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b7678);
  }
  puVar3 = DAT_043b7670;
  if ((DAT_043b7660 & 1) == 0) {
    puVar3 = &DAT_043b7661;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar29 = local_4b8;
  }
  if (((DAT_043b7688 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b7688), iVar10 != 0)) {
    DAT_043b7680 = 0xd8;
    __cxa_guard_release(&DAT_043b7688);
  }
  if (((DAT_043b7698 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b7698), iVar10 != 0)) {
    DAT_043b7690 = 0xdf;
    __cxa_guard_release(&DAT_043b7698);
  }
  uVar23 = DAT_043b7680;
  lVar14 = FUN_00153520(param_2,DAT_043b7680);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0xd8)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043b7690;
    lVar14 = FUN_00153520(param_2,DAT_043b7690);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0xd8)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fcf820();
      puVar4 = DAT_043b76b0;
      if ((DAT_043b76a0 & 1) == 0) {
        puVar4 = &DAT_043b76a1;
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
  lVar25 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar25;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar23 = uVar26 - 1 & uVar23;
    }
    else if (uVar26 <= uVar23) {
      uVar7 = 0;
      if (uVar26 != 0) {
        uVar7 = uVar23 / uVar26;
      }
      uVar23 = uVar23 - uVar7 * uVar26;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar24 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar24;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_041eefd8;
  *(undefined1 *)(puVar19 + 0xb) = uVar6;
  uVar24 = *(undefined8 *)(param_1 + 0x70);
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar20;
  puVar19[0xe] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0x78);
  uVar24 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  puVar19[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x12] = uVar5;
  puVar19[0xf] = uVar20;
  puVar19[0x10] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  uVar24 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  puVar19[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x16] = uVar5;
  puVar19[0x13] = uVar20;
  puVar19[0x14] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0xb8);
  uVar24 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  puVar19[0x19] = *(undefined8 *)(param_1 + 200);
  puVar19[0x1a] = uVar5;
  puVar19[0x17] = uVar20;
  puVar19[0x18] = uVar24;
  iVar10 = FUN_00154450(param_2,puVar29);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_00fcf7e0,0);
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
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar8;
    }
    uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_4b8,0,8);
        goto LAB_00fc54d8;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_4b8,0,8);
  }
LAB_00fc54d8:
  memset(local_298,0,0x230);
  pcVar28 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar25 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar30 = 0;
  uVar23 = 0;
  puVar29 = &LAB_00fcb644;
  if (uVar12 != 0) {
    puVar29 = &LAB_00fc9688;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar30);
    sVar15 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar29;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar26 = 0;
            *(undefined1 **)(lVar14 + 0x88) = puVar29;
            goto LAB_00fc55f8;
          }
          *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar29;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) | 1L << (uVar23 & 0x3f);
      goto LAB_00fc55f8;
    }
    uVar23 = uVar23 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar23 != 0x20);
  uVar26 = 1;
  local_298[0] = pcVar28;
  local_298[1] = puVar29;
LAB_00fc55f8:
  pcVar28 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar30 = 0;
  uVar23 = 0;
  pcVar1 = FUN_00fcf67c;
  if (uVar12 != 0) {
    pcVar1 = FUN_00fcb824;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar30);
    sVar15 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x88) = pcVar1;
            goto LAB_00fc5814;
          }
          *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) | 1L << (uVar23 & 0x3f);
      goto LAB_00fc5814;
    }
    uVar23 = uVar23 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar23 != 0x20);
  local_298[uVar26 * 2] = pcVar28;
  local_298[uVar26 * 2 + 1] = (char *)pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00fc5814:
  pcVar28 = *(char **)(lVar14 + 0x80);
  sVar15 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar30 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00fcf740;
  if (uVar12 != 0) {
    pcVar21 = &LAB_00fcf70c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar30);
    sVar15 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        *(char **)(lVar14 + 0x88) = pcVar21;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
        goto joined_r0x00fc58f8;
      }
      if (iVar10 == 1) {
        *(char **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
      goto joined_r0x00fc58f8;
    }
    uVar23 = uVar23 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar23 != 0x20);
  local_298[uVar26 * 2] = pcVar28;
  local_298[uVar26 * 2 + 1] = pcVar21;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
  uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x00fc58f8:
  uVar23 = uVar26;
  if ((uVar12 >> 0x11 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x199);
    if ((*(byte *)(lVar30 + 0x198) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x1a8);
    }
    uVar23 = (ulong)((int)uVar26 + 1);
    local_298[uVar26 * 2] = pcVar28;
    local_298[uVar26 * 2 + 1] = PTR_LAB_0437dd18;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
  }
  uVar26 = uVar23;
  if ((uVar12 >> 0x12 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x1b1);
    if ((*(byte *)(lVar30 + 0x1b0) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x1c0);
    }
    uVar26 = (ulong)((int)uVar23 + 1);
    local_298[uVar23 * 2] = pcVar28;
    local_298[uVar23 * 2 + 1] = PTR_LAB_0437dd20;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
  }
  uVar23 = uVar26;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x181);
    if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 400);
    }
    uVar23 = (ulong)((int)uVar26 + 1);
    local_298[uVar26 * 2] = pcVar28;
    local_298[uVar26 * 2 + 1] = PTR_LAB_0437dd28;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
  }
  uVar26 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x289);
    if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x298);
    }
    uVar26 = (ulong)((int)uVar23 + 1);
    local_298[uVar23 * 2] = pcVar28;
    local_298[uVar23 * 2 + 1] = PTR_LAB_0437dd30;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xd0);
  }
  uVar23 = uVar26;
  if ((uVar12 >> 6 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x91);
    if ((*(byte *)(lVar30 + 0x90) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0xa0);
    }
    uVar23 = (ulong)((int)uVar26 + 1);
    local_298[uVar26 * 2] = pcVar28;
    local_298[uVar26 * 2 + 1] = PTR_LAB_0437dd38;
  }
  uVar26 = uVar23;
  if (*(long *)(lVar14 + 0x88) != 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x1c9);
    if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0x88);
    uVar26 = (ulong)((int)uVar23 + 1);
    local_298[uVar23 * 2] = pcVar28;
    local_298[uVar23 * 2 + 1] = pcVar21;
  }
  local_298[uVar26 * 2] = (char *)0x0;
  local_298[uVar26 * 2 + 1] = (char *)0x0;
  memcpy(&local_4c8,local_298,0x230);
  memcpy(asStack_6f8,local_298,0x230);
  lVar30 = FUN_008cca50();
  lVar16 = uVar26 - 1;
  pcVar28 = local_298[lVar16 * 2];
  sVar15 = strlen(pcVar28);
  sVar2 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
  if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar30 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar10 == 0)) {
    auStack_4d8[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4c7 + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6f8 + lVar16 * 0x10) = local_298[lVar16 * 2];
  *(undefined1 **)(asStack_6f8 + (lVar16 * 2 + 1) * 8) = &LAB_00fcf780;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if ((*PTR_DAT_0437dd40 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437dd40);
    puVar3 = PTR_DAT_0437dd48;
    if (iVar10 != 0) {
      FUN_00fc8ec0(PTR_DAT_0437dd48);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437dd40);
    }
  }
  uVar11 = local_700[0];
  uVar23 = *(ulong *)(PTR_DAT_0437dd48 + 8);
  puVar3 = *(undefined **)(PTR_DAT_0437dd48 + 0x10);
  if ((*PTR_DAT_0437dd48 & 1) == 0) {
    puVar3 = PTR_DAT_0437dd48 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437dd48 >> 1);
  }
  FUN_001514f0(param_2,puVar3,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00fc9c50,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar30 = 0;
  do {
    if (lVar30 == 1) {
      psVar18 = asStack_6f8;
      pbVar17 = (byte *)FUN_00fc7700();
    }
    else if (lVar30 == 0) {
      psVar18 = &local_4c8;
      pbVar17 = (byte *)FUN_00fc750c();
    }
    else {
      psVar18 = (string *)local_298;
      pbVar17 = (byte *)FUN_00fc78f4();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_710;
    if (*(long *)(lVar14 + 0xb8) == 0) {
      lVar16 = *(long *)(lVar14 + 0xc0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0xc0);
      uVar11 = local_710;
    }
    local_710 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_710;
    uVar20 = *(undefined8 *)(lVar14 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar25);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_710;
    uVar20 = *(undefined8 *)(lVar14 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar25);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_00fcf7d0;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd004c(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_00fcf7d4;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd004c(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar11);
    if (*(undefined1 **)(lVar14 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 200) != '\0') goto LAB_00fc6034;
LAB_00fc5d24:
      if (param_2 == 0) goto LAB_00fc6090;
LAB_00fc5d2c:
      uVar13 = local_710;
      FUN_00150260(param_2,uVar11);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar14 + 0x90);
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd004c(param_2,local_720,&local_750,uVar11);
      if (*(char *)(lVar14 + 200) == '\0') goto LAB_00fc5d24;
LAB_00fc6034:
      local_720[0] = 1;
      local_750 = &LAB_00fcf7d0;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd004c(param_2,local_720,&local_750,uVar11);
      local_720[0] = 2;
      local_750 = &LAB_00fcf7d4;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd004c(param_2,local_720,&local_750,uVar11);
      if (param_2 != 0) goto LAB_00fc5d2c;
LAB_00fc6090:
      uVar13 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar30 = lVar30 + 1;
    if (lVar30 == 3) {
      FUN_00fc7b44();
      puVar3 = DAT_043b7360;
      if ((DAT_043b7350 & 1) == 0) {
        puVar3 = &DAT_043b7351;
      }
      FUN_00154450(param_2,puVar3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar13);
      local_750 = *(undefined1 **)(lVar14 + 0x90);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar14;
        lStack_738 = lVar25;
        FUN_00fd004c(param_2,&local_718,&local_750,uVar13);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_00fcf7d8;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a788c8;
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd0700(param_2,&local_718,&local_750,uVar13);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_00fcf7dc;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a788c8;
      local_740 = lVar14;
      lStack_738 = lVar25;
      FUN_00fd0700(param_2,&local_718,&local_750,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


