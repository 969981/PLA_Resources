/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f992d0; name: FUN_00f992d0
 */


void FUN_00f992d0(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
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
  size_t sVar15;
  byte *pbVar16;
  string *psVar17;
  long lVar18;
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
  undefined1 *local_b10;
  undefined8 uStack_b08;
  long local_b00;
  long lStack_af8;
  undefined8 local_af0;
  undefined *puStack_ae8;
  long local_ae0;
  undefined4 local_ad8;
  long local_ad0;
  undefined4 local_ac8 [2];
  string asStack_ac0 [864];
  undefined8 auStack_760 [2];
  string local_750;
  undefined1 auStack_74f [7];
  size_t local_748;
  undefined1 *local_740;
  char *apcStack_3f0 [2];
  char *local_3e0 [2];
  long local_3d0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b65a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b65a8), iVar8 != 0)) {
    local_3d0 = 0;
    local_3e0[1] = (undefined1 *)0x0;
    local_3e0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d8c8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437d8c8);
      puVar3 = PTR_DAT_0437d8d0;
      if (iVar8 != 0) {
        FUN_00f93c00(PTR_DAT_0437d8d0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d8c8);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437d8d0 + 0x10);
    if ((*PTR_DAT_0437d8d0 & 1) == 0) {
      puVar3 = PTR_DAT_0437d8d0 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_3e0,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b6590,psVar17);
    lVar12 = local_3d0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3e0[0] & 1) != 0) && (local_3d0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_00f9bcc4;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_00f9bcc4:
    FUN_00100250(PTR__string_04379718,&DAT_043b6590,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b65a8);
  }
  std::string::string(&local_750,(string *)&DAT_043b6590);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b6588);
  if (((byte)local_750 & 1) == 0) {
    uVar23 = (ulong)((byte)local_750 >> 1);
  }
  else {
    uVar23 = local_748;
  }
  std::string::append((ulong)&local_750,(char)iVar8);
  if (((byte)local_750 & 1) == 0) {
    puVar28 = auStack_74f;
    local_748 = (size_t)((byte)local_750 >> 1);
  }
  else {
    puVar28 = local_740;
  }
  snprintf(puVar28 + (uVar23 - 1),local_748,"%d",(ulong)DAT_043b6588);
  DAT_043b6588 = DAT_043b6588 + 1;
  if (((DAT_043b65c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b65c8), iVar8 != 0)) {
    local_3d0 = 0;
    local_3e0[1] = (undefined1 *)0x0;
    local_3e0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d8c8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437d8c8);
      puVar3 = PTR_DAT_0437d8d0;
      if (iVar8 != 0) {
        FUN_00f93c00(PTR_DAT_0437d8d0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d8c8);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437d8d0 + 0x10);
    if ((*PTR_DAT_0437d8d0 & 1) == 0) {
      puVar3 = PTR_DAT_0437d8d0 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_3e0,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b65b0,psVar17);
    lVar12 = local_3d0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3e0[0] & 1) != 0) && (local_3d0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_00f9be34;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_00f9be34:
    FUN_00100250(PTR__string_04379718,&DAT_043b65b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b65c8);
  }
  puVar3 = DAT_043b65c0;
  if ((DAT_043b65b0 & 1) == 0) {
    puVar3 = &DAT_043b65b1;
  }
  if (((byte)local_750 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_750 | 1);
  }
  else {
    puVar28 = local_740;
  }
  if (((DAT_043b65d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b65d8), iVar8 != 0)) {
    DAT_043b65d0 = 0x168;
    __cxa_guard_release(&DAT_043b65d8);
  }
  if (((DAT_043b65e8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b65e8), iVar8 != 0)) {
    DAT_043b65e0 = 0x16f;
    __cxa_guard_release(&DAT_043b65e8);
  }
  uVar23 = DAT_043b65d0;
  lVar12 = FUN_00153520(param_1,DAT_043b65d0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x168)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043b65e0;
    lVar12 = FUN_00153520(param_1,DAT_043b65e0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x168)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_00f9c4b0();
      uVar20 = DAT_043b6600;
      if (((byte)DAT_043b65f0 & 1) == 0) {
        uVar20 = 0x43b65f1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",uVar20);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar12;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar12 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar5 = 0;
      if (uVar25 != 0) {
        uVar5 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar5 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_041eef10;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x108);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_00f9c470,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar9 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar9);
  }
  FUN_001522a0(param_1,puVar3);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar3);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_750 & 1) != 0) && (local_740 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar6;
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
        FUN_02bcc824(plVar26,local_740,0,8);
        goto LAB_00f99634;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_740,0,8);
  }
LAB_00f99634:
  memset(local_3e0,0,0x370);
  pcVar27 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar18 = lVar12 + 8;
  lVar24 = 0;
  uVar23 = 0;
  puVar28 = &LAB_00f9479c;
  if (uVar10 != 0) {
    puVar28 = &LAB_00f94428;
  }
  puVar1 = (ulong *)(lVar12 + 0x160);
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar28;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar12 + 0x118) = puVar28;
            goto LAB_00f99844;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f99844;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3e0[0] = pcVar27;
  local_3e0[1] = puVar28;
LAB_00f99844:
  pcVar27 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00f94a94;
  if (uVar10 != 0) {
    pcVar21 = &LAB_00f947d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x118) = pcVar21;
            goto LAB_00f9998c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9998c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9998c:
  pcVar27 = *(char **)(lVar12 + 0x70);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00f94d84;
  if (uVar10 != 0) {
    pcVar21 = &LAB_00f94ac8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x118) = pcVar21;
            goto LAB_00f99ad0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f99ad0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f99ad0:
  pcVar27 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00f95074;
  if (uVar10 != 0) {
    pcVar21 = &LAB_00f94db8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x118) = pcVar21;
            goto LAB_00f99c14;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f99c14;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f99c14:
  pcVar27 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f9534c;
  if (uVar10 != 0) {
    pcVar2 = (code *)&LAB_00f950a8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f99d58;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f99d58;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f99d58:
  pcVar27 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f95638;
  if (uVar10 != 0) {
    pcVar2 = (code *)&LAB_00f953bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f99e9c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f99e9c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f99e9c:
  pcVar27 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f95928;
  if (uVar10 != 0) {
    pcVar2 = (code *)&LAB_00f956a8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f99fe0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f99fe0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f99fe0:
  pcVar27 = *(char **)(lVar12 + 0x98);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00f95ae4;
  if (uVar10 != 0) {
    pcVar21 = &LAB_00f95998;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x118) = pcVar21;
            goto LAB_00f9a124;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a124;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a124:
  pcVar27 = *(char **)(lVar12 + 0xa0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f95de4;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f95b54;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9a268;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a268;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a268:
  pcVar27 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f960dc;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f95e3c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9a3ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a3ac;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a3ac:
  pcVar27 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f963c4;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96134;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9a4f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a4f0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a4f0:
  pcVar27 = *(char **)(lVar12 + 0xb8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f96504;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f9641c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9a634;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a634;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a634:
  pcVar27 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f9666c;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f9655c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9a778;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a778;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a778:
  pcVar27 = *(char **)(lVar12 + 200);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f9682c;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f966cc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9a8bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9a8bc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9a8bc:
  pcVar27 = *(char **)(lVar12 + 0xd0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f96ad8;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96884;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9aa00;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9aa00;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9aa00:
  pcVar27 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = (code *)&LAB_00f96ba4;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96b30;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9ab44;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9ab44;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9ab44:
  pcVar27 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f96c88;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96bfc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9ac88;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9ac88;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9ac88:
  pcVar27 = *(char **)(lVar12 + 0xe8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = (code *)&LAB_00f96d54;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96ce0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9adcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9adcc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9adcc:
  pcVar27 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f96e38;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96dac;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9af10;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9af10;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9af10:
  pcVar27 = *(char **)(lVar12 + 0xf8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = (code *)&LAB_00f96f04;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96e90;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9b054;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9b054;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9b054:
  pcVar27 = *(char **)(lVar12 + 0x100);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar2 = FUN_00f96fe8;
  if (uVar10 != 0) {
    pcVar2 = FUN_00f96f5c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x118) = pcVar2;
            goto LAB_00f9b198;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9b198;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = (char *)pcVar2;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9b198:
  pcVar27 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00f990c4;
  if (uVar10 != 0) {
    pcVar21 = &LAB_00f97040;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x118) = pcVar21;
            goto LAB_00f9b2ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      goto LAB_00f9b2ac;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_00f9b2ac:
  pcVar27 = *(char **)(lVar12 + 0x110);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = &LAB_00f9929c;
  if (uVar10 != 0) {
    pcVar21 = &LAB_00f99268;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 0x13) {
        *(char **)(lVar12 + 0x118) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x00f9b394;
      }
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x160) = *(ulong *)(lVar12 + 0x160) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x00f9b394;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  local_3e0[uVar25 * 2] = pcVar27;
  local_3e0[uVar25 * 2 + 1] = pcVar21;
  uVar10 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x00f9b394:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_3e0[uVar25 * 2] = pcVar27;
    local_3e0[uVar25 * 2 + 1] = PTR_LAB_0437d940;
    uVar10 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_3e0[uVar23 * 2] = pcVar27;
    local_3e0[uVar23 * 2 + 1] = PTR_LAB_0437d948;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar12 + 0x118) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar12 + 0x118);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_3e0[uVar25 * 2] = pcVar27;
    local_3e0[uVar25 * 2 + 1] = pcVar21;
  }
  local_3e0[uVar23 * 2] = (char *)0x0;
  local_3e0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_750,local_3e0,0x370);
  memcpy(asStack_ac0,local_3e0,0x370);
  lVar24 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar27 = local_3e0[lVar14 * 2];
  sVar15 = strlen(pcVar27);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar24 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar8 == 0)) {
    auStack_760[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_74f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_ac0 + lVar14 * 0x10) = local_3e0[lVar14 * 2];
  *(undefined1 **)(asStack_ac0 + (lVar14 * 2 + 1) * 8) = &LAB_00f9c2b0;
  FUN_00151fe0(param_1,0,2);
  local_ac8[0] = FUN_0014feb0(param_1,0xffffffff);
  local_ad0 = param_1;
  if ((*PTR_DAT_0437d8c8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437d8c8);
    puVar3 = PTR_DAT_0437d8d0;
    if (iVar8 != 0) {
      FUN_00f93c00(PTR_DAT_0437d8d0);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d8c8);
    }
  }
  uVar9 = local_ac8[0];
  uVar23 = *(ulong *)(PTR_DAT_0437d8d0 + 8);
  puVar3 = *(undefined **)(PTR_DAT_0437d8d0 + 0x10);
  if ((*PTR_DAT_0437d8d0 & 1) == 0) {
    puVar3 = PTR_DAT_0437d8d0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437d8d0 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_00f97620,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_ac0;
      pbVar16 = (byte *)FUN_00f923c8();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_750;
      pbVar16 = (byte *)FUN_00f921d4();
    }
    else {
      psVar17 = (string *)local_3e0;
      pbVar16 = (byte *)FUN_00f925bc();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_ad8 = FUN_0014feb0(param_1,0xffffffff);
    local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
    local_ae0 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b10,&local_ad0,local_ad8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,psVar17,2);
    uVar9 = local_ad8;
    if (*(long *)(lVar12 + 0x148) == 0) {
      lVar14 = *(long *)(lVar12 + 0x150);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x150);
      uVar9 = local_ad8;
    }
    local_ad8 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_ad8;
    uVar20 = *(undefined8 *)(lVar12 + 0x128);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_ad8;
    uVar20 = *(undefined8 *)(lVar12 + 0x130);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b10,&local_ae0,local_ad8);
    }
    else {
      local_b10 = &LAB_00f9c3a0;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c300(param_1,1,&local_b10,local_ad8);
      local_b10 = &LAB_00f9c3a4;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c300(param_1,2,&local_b10,local_ad8);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b10,&local_ad0,uVar9);
    if (*(undefined1 **)(lVar12 + 0x120) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x158) != '\0') goto LAB_00f9ba2c;
LAB_00f9b730:
      if (param_1 == 0) goto LAB_00f9ba80;
LAB_00f9b738:
      uVar11 = local_ad8;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_b08 = 0;
      local_b10 = *(undefined1 **)(lVar12 + 0x120);
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c300(param_1,4,&local_b10,uVar9);
      if (*(char *)(lVar12 + 0x158) == '\0') goto LAB_00f9b730;
LAB_00f9ba2c:
      local_b10 = &LAB_00f9c3a0;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c300(param_1,1,&local_b10,uVar9);
      local_b10 = &LAB_00f9c3a4;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c300(param_1,2,&local_b10,uVar9);
      if (param_1 != 0) goto LAB_00f9b738;
LAB_00f9ba80:
      uVar11 = local_ad8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_ae0,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_00f9280c();
      puVar3 = DAT_043b64c8;
      if ((DAT_043b64b8 & 1) == 0) {
        puVar3 = &DAT_043b64b9;
      }
      FUN_00154450(param_1,puVar3);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_b10._0_4_ = 0x1e;
      FUN_008fe304(&local_ae0,param_1,&local_b10,&local_ad0,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,local_3e0,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
      FUN_008fe304(&local_ae0,param_1,&local_b10,&local_ad0,uVar11);
      local_b10 = *(undefined1 **)(lVar12 + 0x120);
      if (local_b10 != (undefined1 *)0x0) {
        uStack_b08 = 0;
        local_b00 = lVar12;
        lStack_af8 = lVar18;
        FUN_00f9c300(param_1,4,&local_b10,uVar11);
      }
      local_b10 = &LAB_00f9c468;
      uStack_b08 = 0;
      local_af0 = 0;
      puStack_ae8 = &DAT_03a788c0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c3b0(param_1,1,&local_b10,uVar11);
      local_b10 = &LAB_00f9c46c;
      uStack_b08 = 0;
      local_af0 = 0;
      puStack_ae8 = &DAT_03a788c0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_00f9c3b0(param_1,2,&local_b10,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_ac8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


