/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0242c058; name: FUN_0242c058
 */


undefined8 FUN_0242c058(long param_1,long param_2)

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
  undefined1 *local_ba0;
  undefined8 uStack_b98;
  long local_b90;
  long lStack_b88;
  undefined8 local_b80;
  undefined *puStack_b78;
  long local_b70;
  undefined4 local_b68;
  long local_b60;
  undefined4 local_b58 [2];
  string asStack_b50 [912];
  undefined8 auStack_7c0 [2];
  string local_7b0;
  undefined1 auStack_7af [7];
  size_t local_7a8;
  undefined1 *local_7a0;
  char *apcStack_420 [2];
  char *local_410;
  code *local_408;
  long local_400;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e5640 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5640), iVar9 != 0)) {
    local_400 = 0;
    local_408 = (code *)0x0;
    local_410 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043871a8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043871a8);
      puVar2 = PTR_DAT_043871b0;
      if (iVar9 != 0) {
        FUN_02430d20(PTR_DAT_043871b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043871a8);
      }
    }
    pcVar26 = (char *)FUN_02430130(&local_410,PTR_DAT_043871b0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5628,psVar17);
    lVar13 = local_400;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_410 & 1) != 0) && (local_400 != 0)) {
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
          goto LAB_0242df94;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0242df94:
    FUN_00100250(PTR__string_04379718,&DAT_043e5628,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5640);
  }
  std::string::string(&local_7b0,(string *)&DAT_043e5628);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e5620);
  sVar1 = (ulong)((byte)local_7b0 >> 1);
  if (((byte)local_7b0 & 1) != 0) {
    sVar1 = local_7a8;
  }
  std::string::append((ulong)&local_7b0,(char)iVar9);
  if (((byte)local_7b0 & 1) == 0) {
    puVar27 = auStack_7af;
    local_7a8 = (size_t)((byte)local_7b0 >> 1);
  }
  else {
    puVar27 = local_7a0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_7a8,"%d",(ulong)DAT_043e5620);
  DAT_043e5620 = DAT_043e5620 + 1;
  if (((DAT_043e5660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5660), iVar9 != 0)) {
    local_400 = 0;
    local_408 = (code *)0x0;
    local_410 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043871a8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043871a8);
      puVar2 = PTR_DAT_043871b0;
      if (iVar9 != 0) {
        FUN_02430d20(PTR_DAT_043871b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043871a8);
      }
    }
    pcVar26 = (char *)FUN_02430130(&local_410,PTR_DAT_043871b0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5648,psVar17);
    lVar13 = local_400;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_410 & 1) != 0) && (local_400 != 0)) {
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
          goto LAB_0242e0e8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0242e0e8:
    FUN_00100250(PTR__string_04379718,&DAT_043e5648,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5660);
  }
  puVar2 = DAT_043e5658;
  if ((DAT_043e5648 & 1) == 0) {
    puVar2 = &DAT_043e5649;
  }
  if (((byte)local_7b0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_7b0 | 1);
  }
  else {
    puVar27 = local_7a0;
  }
  if (((DAT_043e5670 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5670), iVar9 != 0)) {
    DAT_043e5668 = 0x238;
    __cxa_guard_release(&DAT_043e5670);
  }
  if (((DAT_043e5680 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5680), iVar9 != 0)) {
    DAT_043e5678 = 0x23f;
    __cxa_guard_release(&DAT_043e5680);
  }
  uVar22 = DAT_043e5668;
  lVar13 = FUN_00153520(param_2,DAT_043e5668);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x238)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e5678;
    lVar13 = FUN_00153520(param_2,DAT_043e5678);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x238)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02436270();
      puVar3 = DAT_043e5698;
      if ((DAT_043e5688 & 1) == 0) {
        puVar3 = &DAT_043e5689;
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
  *puVar18 = &PTR_FUN_0425bf88;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x1d8);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_02436230,0);
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
  if ((((byte)local_7b0 & 1) != 0) && (local_7a0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_7a0,0,8);
        goto LAB_0242c3c4;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_7a0,0,8);
  }
LAB_0242c3c4:
  memset(&local_410,0,0x3a0);
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
  lVar23 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02431d60;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02431b94;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242c5dc;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242c5dc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_410 = pcVar26;
  local_408 = pcVar20;
LAB_0242c5dc:
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
  pcVar20 = FUN_024322e0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02431db8;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242c71c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242c71c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242c71c:
  pcVar26 = *(char **)(lVar13 + 0x110);
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
  pcVar20 = FUN_02432444;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02432338;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242c85c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242c85c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242c85c:
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
  pcVar20 = FUN_024328f0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0243274c;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242c99c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242c99c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242c99c:
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
  pcVar20 = (code *)&LAB_02432980;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02432948;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242cadc;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242cadc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242cadc:
  pcVar26 = *(char **)(lVar13 + 0x158);
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
  pcVar20 = (code *)&LAB_02432b5c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024329c8;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242cc1c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242cc1c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242cc1c:
  pcVar26 = *(char **)(lVar13 + 0x160);
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
  pcVar20 = FUN_02432be8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02432ba0;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242cd5c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242cd5c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242cd5c:
  pcVar26 = *(char **)(lVar13 + 0x178);
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
  pcVar20 = FUN_02432e0c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02432c30;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242ce9c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242ce9c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242ce9c:
  pcVar26 = *(char **)(lVar13 + 0x180);
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
  pcVar20 = FUN_02432eac;
  if (uVar11 != 0) {
    pcVar20 = FUN_02432e64;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242cfdc;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242cfdc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242cfdc:
  pcVar26 = *(char **)(lVar13 + 0x198);
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
  pcVar20 = (code *)&LAB_0243308c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02432ef4;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242d11c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242d11c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242d11c:
  pcVar26 = *(char **)(lVar13 + 0x1a0);
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
  pcVar20 = FUN_02433290;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024330d0;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242d25c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242d25c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242d25c:
  pcVar26 = *(char **)(lVar13 + 0x1a8);
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
  pcVar20 = (code *)&LAB_02433894;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024332e8;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242d39c;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242d39c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242d39c:
  pcVar26 = *(char **)(lVar13 + 0x1c0);
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
  pcVar20 = (code *)&LAB_02433a98;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02433978;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242d4dc;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242d4dc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242d4dc:
  pcVar26 = *(char **)(lVar13 + 0x1d8);
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
  pcVar20 = (code *)&LAB_02435854;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02433bec;
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
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_0242d5ec;
          }
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242d5ec;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_410)[uVar24 * 2] = pcVar26;
  (&local_408)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0242d5ec:
  pcVar26 = *(char **)(lVar13 + 0x1e0);
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
  pcVar20 = (code *)&LAB_02435a2c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024359f8;
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
LAB_0242dcd8:
      (&local_410)[uVar24 * 2] = pcVar26;
      (&local_408)[uVar24 * 2] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x230);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0242d6d0:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_0242d6d4:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x230);
      }
LAB_0242d6dc:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x230);
      }
      uVar22 = uVar24;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_410)[uVar24 * 2] = pcVar26;
        (&local_408)[uVar24 * 2] = (code *)PTR_LAB_04387198;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x230);
      }
      uVar24 = uVar22;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        (&local_410)[uVar22 * 2] = pcVar26;
        (&local_408)[uVar22 * 2] = (code *)PTR_LAB_043871a0;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0x1e8) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(code **)(lVar13 + 0x1e8);
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_410)[uVar24 * 2] = pcVar26;
        (&local_408)[uVar24 * 2] = pcVar20;
      }
      (&local_410)[uVar22 * 2] = (char *)0x0;
      (&local_408)[uVar22 * 2] = (code *)0x0;
      memcpy(&local_7b0,&local_410,0x3a0);
      memcpy(asStack_b50,&local_410,0x3a0);
      lVar28 = FUN_008cca50();
      lVar15 = uVar22 - 1;
      pcVar26 = (&local_410)[lVar15 * 2];
      sVar14 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar1) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar9 == 0)) {
        auStack_7c0[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_7af + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_b50 + lVar15 * 0x10) = (&local_410)[lVar15 * 2];
      *(undefined1 **)(asStack_b50 + (lVar15 * 2 + 1) * 8) = &LAB_02435a60;
      FUN_00151fe0(param_2,0,2);
      local_b58[0] = FUN_0014feb0(param_2,0xffffffff);
      local_b60 = param_2;
      if ((*PTR_DAT_043871a8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_043871a8);
        puVar2 = PTR_DAT_043871b0;
        if (iVar9 != 0) {
          FUN_02430d20(PTR_DAT_043871b0);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_043871a8);
        }
      }
      uVar10 = local_b58[0];
      uVar22 = *(ulong *)(PTR_DAT_043871b0 + 8);
      puVar2 = *(undefined **)(PTR_DAT_043871b0 + 0x10);
      if ((*PTR_DAT_043871b0 & 1) == 0) {
        puVar2 = PTR_DAT_043871b0 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_043871b0 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_024341e0,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_b50;
          pbVar16 = (byte *)FUN_0242f4dc();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_7b0;
          pbVar16 = (byte *)FUN_0242f2fc();
        }
        else {
          psVar17 = (string *)&local_410;
          pbVar16 = (byte *)FUN_0242f6bc();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_b68 = FUN_0014feb0(param_2,0xffffffff);
        local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,0x1e);
        local_b70 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_ba0,&local_b60,local_b68);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_b68;
        if (*(long *)(lVar13 + 0x218) == 0) {
          lVar15 = *(long *)(lVar13 + 0x220);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x220);
          uVar10 = local_b68;
        }
        local_b68 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_b68;
        uVar19 = *(undefined8 *)(lVar13 + 0x1f8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_b68;
        uVar19 = *(undefined8 *)(lVar13 + 0x200);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_ba0,&local_b70,local_b68);
        }
        else {
          local_ba0 = &LAB_02435b50;
          uStack_b98 = 0;
          local_b90 = lVar13;
          lStack_b88 = lVar23;
          FUN_02435ab0(param_2,1,&local_ba0,local_b68);
          local_ba0 = &LAB_02435e5c;
          uStack_b98 = 0;
          local_b90 = lVar13;
          lStack_b88 = lVar23;
          FUN_02435ab0(param_2,2,&local_ba0,local_b68);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_ba0,&local_b60,uVar10);
        if (*(undefined1 **)(lVar13 + 0x1f0) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x228);
        }
        else {
          uStack_b98 = 0;
          local_ba0 = *(undefined1 **)(lVar13 + 0x1f0);
          local_b90 = lVar13;
          lStack_b88 = lVar23;
          FUN_02435ab0(param_2,4,&local_ba0,uVar10);
          cVar5 = *(char *)(lVar13 + 0x228);
        }
        if (cVar5 != '\0') {
          local_ba0 = &LAB_02435b50;
          uStack_b98 = 0;
          local_b90 = lVar13;
          lStack_b88 = lVar23;
          FUN_02435ab0(param_2,1,&local_ba0,uVar10);
          local_ba0 = &LAB_02435e5c;
          uStack_b98 = 0;
          local_b90 = lVar13;
          lStack_b88 = lVar23;
          FUN_02435ab0(param_2,2,&local_ba0,uVar10);
        }
        uVar12 = local_b68;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_b70,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_0242f8f4();
      puVar2 = DAT_043e5520;
      if ((DAT_043e5510 & 1) == 0) {
        puVar2 = &DAT_043e5511;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_ba0._0_4_ = 0x1e;
      FUN_008fe304(&local_b70,param_2,&local_ba0,&local_b60,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_410,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,0x1e);
      FUN_008fe304(&local_b70,param_2,&local_ba0,&local_b60,uVar12);
      local_ba0 = *(undefined1 **)(lVar13 + 0x1f0);
      if (local_ba0 != (undefined1 *)0x0) {
        uStack_b98 = 0;
        local_b90 = lVar13;
        lStack_b88 = lVar23;
        FUN_02435ab0(param_2,4,&local_ba0,uVar12);
      }
      local_ba0 = &LAB_02436228;
      uStack_b98 = 0;
      local_b80 = 0;
      puStack_b78 = &DAT_03a7d558;
      local_b90 = lVar13;
      lStack_b88 = lVar23;
      FUN_02436170(param_2,1,&local_ba0,uVar12);
      local_ba0 = &LAB_0243622c;
      uStack_b98 = 0;
      local_b80 = 0;
      puStack_b78 = &DAT_03a7d558;
      local_b90 = lVar13;
      lStack_b88 = lVar23;
      FUN_02436170(param_2,2,&local_ba0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_b58[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(code **)(lVar13 + 0x1e8) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x230);
    goto joined_r0x0242d6d0;
  }
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
      goto LAB_0242dcd8;
    }
    *(code **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x230);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_0242d6d4;
  goto LAB_0242d6dc;
}


