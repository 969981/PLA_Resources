/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0103ea2c; name: FUN_0103ea2c
 */


undefined8 FUN_0103ea2c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
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
  undefined1 *local_810;
  undefined8 uStack_808;
  long local_800;
  long lStack_7f8;
  undefined8 local_7f0;
  undefined *puStack_7e8;
  long local_7e0;
  undefined4 local_7d8;
  long local_7d0;
  undefined4 local_7c8 [2];
  string asStack_7c0 [608];
  undefined8 auStack_560 [2];
  string local_550;
  undefined1 auStack_54f [7];
  size_t local_548;
  undefined1 *local_540;
  char *apcStack_2f0 [2];
  char *local_2e0;
  code *local_2d8;
  long local_2d0;
  undefined1 auStack_70 [16];
  
  puVar3 = PTR_DAT_0437d3a0;
  if (((DAT_043b8f10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8f10), iVar8 != 0)) {
    local_2d0 = 0;
    local_2d8 = (code *)0x0;
    local_2e0 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437d398 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437d398), puVar1 = PTR_DAT_0437d3a0, iVar8 != 0)) {
      FUN_00f05130(PTR_DAT_0437d3a0);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d398);
    }
    puVar1 = *(undefined **)(puVar3 + 0x10);
    if ((*puVar3 & 1) == 0) {
      puVar1 = puVar3 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2e0,(ulong)puVar1);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b8ef8,psVar17);
    lVar12 = local_2d0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2e0 & 1) != 0) && (local_2d0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0103ffb0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0103ffb0:
    FUN_00100250(PTR__string_04379718,&DAT_043b8ef8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8f10);
  }
  std::string::string(&local_550,(string *)&DAT_043b8ef8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b8ef0);
  if (((byte)local_550 & 1) == 0) {
    uVar22 = (ulong)((byte)local_550 >> 1);
  }
  else {
    uVar22 = local_548;
  }
  std::string::append((ulong)&local_550,(char)iVar8);
  if (((byte)local_550 & 1) == 0) {
    puVar27 = auStack_54f;
    local_548 = (size_t)((byte)local_550 >> 1);
  }
  else {
    puVar27 = local_540;
  }
  snprintf(puVar27 + (uVar22 - 1),local_548,"%d",(ulong)DAT_043b8ef0);
  DAT_043b8ef0 = DAT_043b8ef0 + 1;
  if (((DAT_043b8f30 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8f30), iVar8 != 0)) {
    local_2d0 = 0;
    local_2d8 = (code *)0x0;
    local_2e0 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437d398 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437d398), puVar1 = PTR_DAT_0437d3a0, iVar8 != 0)) {
      FUN_00f05130(PTR_DAT_0437d3a0);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d398);
    }
    puVar1 = *(undefined **)(puVar3 + 0x10);
    if ((*puVar3 & 1) == 0) {
      puVar1 = puVar3 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2e0,(ulong)puVar1);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b8f18,psVar17);
    lVar12 = local_2d0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2e0 & 1) != 0) && (local_2d0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_01040114;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_01040114:
    FUN_00100250(PTR__string_04379718,&DAT_043b8f18,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8f30);
  }
  puVar1 = DAT_043b8f28;
  if ((DAT_043b8f18 & 1) == 0) {
    puVar1 = &DAT_043b8f19;
  }
  if (((byte)local_550 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_550 | 1);
  }
  else {
    puVar27 = local_540;
  }
  if (((DAT_043b8f40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8f40), iVar8 != 0)) {
    DAT_043b8f38 = 0x138;
    __cxa_guard_release(&DAT_043b8f40);
  }
  if (((DAT_043b8f50 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8f50), iVar8 != 0)) {
    DAT_043b8f48 = 0x13f;
    __cxa_guard_release(&DAT_043b8f50);
  }
  uVar22 = DAT_043b8f38;
  lVar12 = FUN_00153520(param_2,DAT_043b8f38);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x138)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b8f48;
    lVar12 = FUN_00153520(param_2,DAT_043b8f48);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x138)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01042120();
      puVar2 = DAT_043b8f68;
      if ((DAT_043b8f58 & 1) == 0) {
        puVar2 = &DAT_043b8f59;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar5 * uVar24;
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
  *puVar18 = &PTR_FUN_041ef340;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xd8);
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_010420e0,0);
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
  FUN_001522a0(param_2,puVar1);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar1);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_550 & 1) != 0) && (local_540 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
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
        FUN_02bcc824(plVar25,local_540,0,8);
        goto LAB_0103ed98;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_540,0,8);
  }
LAB_0103ed98:
  memset(&local_2e0,0,0x270);
  pcVar26 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_010417f0;
  if (uVar10 != 0) {
    pcVar20 = FUN_01041528;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar12 + 0xe8) = pcVar20;
            goto LAB_0103efa0;
          }
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_0103efa0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2e0 = pcVar26;
  local_2d8 = pcVar20;
LAB_0103efa0:
  pcVar26 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0104195c;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_01041860;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xe8) = pcVar20;
            goto LAB_0103f0e0;
          }
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_0103f0e0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e0)[uVar24 * 2] = pcVar26;
  (&local_2d8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0103f0e0:
  pcVar26 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_01041ad8;
  if (uVar10 != 0) {
    pcVar20 = FUN_01041a90;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xe8) = pcVar20;
            goto LAB_0103f220;
          }
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_0103f220;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e0)[uVar24 * 2] = pcVar26;
  (&local_2d8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0103f220:
  pcVar26 = *(char **)(lVar12 + 0x98);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_01041c0c;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_01041b20;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xe8) = pcVar20;
            goto LAB_0103f360;
          }
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_0103f360;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e0)[uVar24 * 2] = pcVar26;
  (&local_2d8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0103f360:
  pcVar26 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_01041d70;
  if (uVar10 != 0) {
    pcVar20 = FUN_01041d28;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xe8) = pcVar20;
            goto LAB_0103f4a0;
          }
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_0103f4a0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e0)[uVar24 * 2] = pcVar26;
  (&local_2d8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0103f4a0:
  pcVar26 = *(char **)(lVar12 + 200);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_01041e00;
  if (uVar10 != 0) {
    pcVar20 = FUN_01041db8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xe8) = pcVar20;
            goto LAB_0103f5e0;
          }
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_0103f5e0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e0)[uVar24 * 2] = pcVar26;
  (&local_2d8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0103f5e0:
  pcVar26 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_01041ea0;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_01041e48;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0xe8) = pcVar20;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x130);
        goto joined_r0x0103f6c4;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x130) = *(ulong *)(lVar12 + 0x130) | 1L << (uVar22 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x130);
      goto joined_r0x0103f6c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e0)[uVar24 * 2] = pcVar26;
  (&local_2d8)[uVar24 * 2] = pcVar20;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x130);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0103f6c4:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x130);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x130);
  }
  uVar22 = uVar24;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2e0)[uVar24 * 2] = pcVar26;
    (&local_2d8)[uVar24 * 2] = (code *)PTR_LAB_0437d3c0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x130);
  }
  uVar24 = uVar22;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2e0)[uVar22 * 2] = pcVar26;
    (&local_2d8)[uVar22 * 2] = (code *)PTR_LAB_0437d3c8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar12 + 0xe8) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar12 + 0xe8);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2e0)[uVar24 * 2] = pcVar26;
    (&local_2d8)[uVar24 * 2] = pcVar20;
  }
  (&local_2e0)[uVar22 * 2] = (char *)0x0;
  (&local_2d8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_550,&local_2e0,0x270);
  memcpy(asStack_7c0,&local_2e0,0x270);
  lVar28 = FUN_008cca50();
  lVar14 = uVar22 - 1;
  pcVar26 = (&local_2e0)[lVar14 * 2];
  sVar15 = strlen(pcVar26);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar28 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_560[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_54f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7c0 + lVar14 * 0x10) = (&local_2e0)[lVar14 * 2];
  *(undefined1 **)(asStack_7c0 + (lVar14 * 2 + 1) * 8) = &LAB_01041f20;
  FUN_00151fe0(param_2,0,2);
  local_7c8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7d0 = param_2;
  if (((*PTR_DAT_0437d398 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_0437d398), puVar1 = PTR_DAT_0437d3a0, iVar8 != 0)) {
    FUN_00f05130(PTR_DAT_0437d3a0);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d398);
  }
  uVar9 = local_7c8[0];
  uVar22 = (ulong)((byte)*puVar3 >> 1);
  puVar1 = *(undefined **)(puVar3 + 0x10);
  if ((*puVar3 & 1) == 0) {
    puVar1 = puVar3 + 1;
  }
  else {
    uVar22 = *(ulong *)(puVar3 + 8);
  }
  FUN_001514f0(param_2,puVar1,uVar22);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,PTR_LAB_0437d3a8,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_7c0;
      pbVar16 = (byte *)FUN_00f06b30();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_550;
      pbVar16 = (byte *)FUN_00f060a4();
    }
    else {
      psVar17 = (string *)&local_2e0;
      pbVar16 = (byte *)FUN_00f04b1c();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_7d8 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    local_7e0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_810,&local_7d0,local_7d8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar17,2);
    uVar9 = local_7d8;
    if (*(long *)(lVar12 + 0x118) == 0) {
      lVar14 = *(long *)(lVar12 + 0x120);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x120);
      uVar9 = local_7d8;
    }
    local_7d8 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_7d8;
    uVar19 = *(undefined8 *)(lVar12 + 0xf8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_7d8;
    uVar19 = *(undefined8 *)(lVar12 + 0x100);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_810,&local_7e0,local_7d8);
    }
    else {
      local_810 = &LAB_01042010;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01041f70(param_2,1,&local_810,local_7d8);
      local_810 = &LAB_01042014;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01041f70(param_2,2,&local_810,local_7d8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_810,&local_7d0,uVar9);
    if (*(undefined1 **)(lVar12 + 0xf0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x128) == '\0') goto LAB_0103fa54;
LAB_0103fd54:
      local_810 = &LAB_01042010;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01041f70(param_2,1,&local_810,uVar9);
      local_810 = &LAB_01042014;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01041f70(param_2,2,&local_810,uVar9);
      if (param_2 == 0) goto LAB_0103fda8;
LAB_0103fa5c:
      uVar11 = local_7d8;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_808 = 0;
      local_810 = *(undefined1 **)(lVar12 + 0xf0);
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01041f70(param_2,4,&local_810,uVar9);
      if (*(char *)(lVar12 + 0x128) != '\0') goto LAB_0103fd54;
LAB_0103fa54:
      if (param_2 != 0) goto LAB_0103fa5c;
LAB_0103fda8:
      uVar11 = local_7d8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7e0,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_01041268();
      puVar3 = DAT_043b8ee0;
      if ((DAT_043b8ed0 & 1) == 0) {
        puVar3 = &DAT_043b8ed1;
      }
      FUN_00154450(param_2,puVar3);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_810._0_4_ = 0x1e;
      FUN_008fe304(&local_7e0,param_2,&local_810,&local_7d0,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2e0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
      FUN_008fe304(&local_7e0,param_2,&local_810,&local_7d0,uVar11);
      local_810 = *(undefined1 **)(lVar12 + 0xf0);
      if (local_810 != (undefined1 *)0x0) {
        uStack_808 = 0;
        local_800 = lVar12;
        lStack_7f8 = lVar23;
        FUN_01041f70(param_2,4,&local_810,uVar11);
      }
      local_810 = &LAB_010420d8;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a78940;
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01042020(param_2,1,&local_810,uVar11);
      local_810 = &LAB_010420dc;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a78940;
      local_800 = lVar12;
      lStack_7f8 = lVar23;
      FUN_01042020(param_2,2,&local_810,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7c8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


