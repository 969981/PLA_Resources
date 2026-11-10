/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa2ce8; name: FUN_00fa2ce8
 */


undefined8 FUN_00fa2ce8(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
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
  char *local_298;
  code *local_290;
  long local_288;
  
  if (((DAT_043b6688 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b6688), iVar9 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437acc8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437acc8);
      puVar2 = PTR_DAT_0437acd0;
      if (iVar9 != 0) {
        FUN_00b4fcd0(PTR_DAT_0437acd0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437acc8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437acd0 + 0x10);
    if ((*PTR_DAT_0437acd0 & 1) == 0) {
      puVar2 = PTR_DAT_0437acd0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_298,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b6670,psVar17);
    lVar13 = local_288;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
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
          goto LAB_00fa3e4c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00fa3e4c:
    FUN_00100250(PTR__string_04379718,&DAT_043b6670,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6688);
  }
  std::string::string(&local_4c8,(string *)&DAT_043b6670);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b6668);
  sVar1 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar1 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar9);
  if (((byte)local_4c8 & 1) == 0) {
    puVar27 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar27 = local_4b8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_4c0,"%d",(ulong)DAT_043b6668);
  DAT_043b6668 = DAT_043b6668 + 1;
  if (((DAT_043b66a8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b66a8), iVar9 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437acc8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437acc8);
      puVar2 = PTR_DAT_0437acd0;
      if (iVar9 != 0) {
        FUN_00b4fcd0(PTR_DAT_0437acd0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437acc8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437acd0 + 0x10);
    if ((*PTR_DAT_0437acd0 & 1) == 0) {
      puVar2 = PTR_DAT_0437acd0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_298,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b6690,psVar17);
    lVar13 = local_288;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
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
          goto LAB_00fa3fbc;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00fa3fbc:
    FUN_00100250(PTR__string_04379718,&DAT_043b6690,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b66a8);
  }
  puVar2 = DAT_043b66a0;
  if ((DAT_043b6690 & 1) == 0) {
    puVar2 = &DAT_043b6691;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar27 = local_4b8;
  }
  if (((DAT_043b66b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b66b8), iVar9 != 0)) {
    DAT_043b66b0 = 0xd0;
    __cxa_guard_release(&DAT_043b66b8);
  }
  if (((DAT_043b66c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b66c8), iVar9 != 0)) {
    DAT_043b66c0 = 0xd7;
    __cxa_guard_release(&DAT_043b66c8);
  }
  uVar22 = DAT_043b66b0;
  lVar13 = FUN_00153520(param_2,DAT_043b66b0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b66c0;
    lVar13 = FUN_00153520(param_2,DAT_043b66c0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fa5fd0();
      uVar19 = DAT_043b66e0;
      if (((byte)DAT_043b66d0 & 1) == 0) {
        uVar19 = 0x43b66d1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",uVar19);
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
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar18 = &PTR_FUN_041eef38;
  *(undefined1 *)(puVar18 + 0xb) = uVar5;
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  puVar18[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar18[0xd] = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  puVar18[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar18[0x11] = uVar4;
  puVar18[0xe] = uVar19;
  puVar18[0xf] = uVar3;
  uVar19 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  puVar18[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar18[0x15] = uVar4;
  puVar18[0x12] = uVar19;
  puVar18[0x13] = uVar3;
  uVar19 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_1 + 200);
  puVar18[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar18[0x19] = uVar4;
  puVar18[0x16] = uVar19;
  puVar18[0x17] = uVar3;
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00fa5f90,0);
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
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_4b8,0,8);
        goto LAB_00fa307c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4b8,0,8);
  }
LAB_00fa307c:
  memset(&local_298,0,0x230);
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
  pcVar20 = (code *)&LAB_00fa5bb0;
  if (uVar11 != 0) {
    pcVar20 = FUN_00fa5944;
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
            *(code **)(lVar13 + 0x80) = pcVar20;
            goto LAB_00fa319c;
          }
          *(ulong *)(lVar13 + 200) = *(ulong *)(lVar13 + 200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 200) = *(ulong *)(lVar13 + 200) | 1L << (uVar22 & 0x3f);
      goto LAB_00fa319c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_298 = pcVar26;
  local_290 = pcVar20;
LAB_00fa319c:
  pcVar26 = *(char **)(lVar13 + 0x68);
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
  pcVar20 = (code *)&LAB_00fa5e20;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00fa5da8;
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
            *(code **)(lVar13 + 0x80) = pcVar20;
            goto LAB_00fa33b8;
          }
          *(ulong *)(lVar13 + 200) = *(ulong *)(lVar13 + 200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 200) = *(ulong *)(lVar13 + 200) | 1L << (uVar22 & 0x3f);
      goto LAB_00fa33b8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_298)[uVar24 * 2] = pcVar26;
  (&local_290)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00fa33b8:
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
  pcVar20 = (code *)&LAB_00fa5ee4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00fa5eac;
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
        *(code **)(lVar13 + 0x80) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
        goto joined_r0x00fa349c;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 200) = *(ulong *)(lVar13 + 200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 200) = *(ulong *)(lVar13 + 200) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
      goto joined_r0x00fa349c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_298)[uVar24 * 2] = pcVar26;
  (&local_290)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00fa349c:
  uVar22 = uVar24;
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x199);
    if ((*(byte *)(lVar28 + 0x198) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1a8);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_298)[uVar24 * 2] = pcVar26;
    (&local_290)[uVar24 * 2] = (code *)PTR_LAB_0437c018;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x12 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1b1);
    if ((*(byte *)(lVar28 + 0x1b0) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1c0);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_298)[uVar22 * 2] = pcVar26;
    (&local_290)[uVar22 * 2] = (code *)PTR_LAB_0437c020;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_298)[uVar24 * 2] = pcVar26;
    (&local_290)[uVar24 * 2] = (code *)PTR_LAB_0437c028;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_298)[uVar22 * 2] = pcVar26;
    (&local_290)[uVar22 * 2] = (code *)PTR_LAB_0437c030;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 200);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 6 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x91);
    if ((*(byte *)(lVar28 + 0x90) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0xa0);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_298)[uVar24 * 2] = pcVar26;
    (&local_290)[uVar24 * 2] = (code *)PTR_LAB_0437c038;
  }
  uVar24 = uVar22;
  if (*(long *)(lVar13 + 0x80) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x80);
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_298)[uVar22 * 2] = pcVar26;
    (&local_290)[uVar22 * 2] = pcVar20;
  }
  (&local_298)[uVar24 * 2] = (char *)0x0;
  (&local_290)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_4c8,&local_298,0x230);
  memcpy(asStack_6f8,&local_298,0x230);
  lVar28 = FUN_008cca50();
  lVar15 = uVar24 - 1;
  pcVar26 = (&local_298)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_4d8[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4c7 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6f8 + lVar15 * 0x10) = (&local_298)[lVar15 * 2];
  *(undefined1 **)(asStack_6f8 + (lVar15 * 2 + 1) * 8) = &LAB_00fa5f30;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if ((*PTR_DAT_0437acc8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437acc8);
    puVar2 = PTR_DAT_0437acd0;
    if (iVar9 != 0) {
      FUN_00b4fcd0(PTR_DAT_0437acd0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437acc8);
    }
  }
  uVar10 = local_700[0];
  uVar22 = *(ulong *)(PTR_DAT_0437acd0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437acd0 + 0x10);
  if ((*PTR_DAT_0437acd0 & 1) == 0) {
    puVar2 = PTR_DAT_0437acd0 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437acd0 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,PTR_LAB_0437c290,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_6f8;
      pbVar16 = (byte *)FUN_00e1960c();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_4c8;
      pbVar16 = (byte *)FUN_00e18178();
    }
    else {
      psVar17 = (string *)&local_298;
      pbVar16 = (byte *)FUN_00e193bc();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_710;
    if (*(long *)(lVar13 + 0xb0) == 0) {
      lVar15 = *(long *)(lVar13 + 0xb8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xb8);
      uVar10 = local_710;
    }
    local_710 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_710;
    uVar19 = *(undefined8 *)(lVar13 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_710;
    uVar19 = *(undefined8 *)(lVar13 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_00fa5f80;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa67fc(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_00fa5f84;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa67fc(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar10);
    if (*(undefined1 **)(lVar13 + 0x88) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0xc0) != '\0') goto LAB_00fa3bd8;
LAB_00fa38c8:
      if (param_2 == 0) goto LAB_00fa3c34;
LAB_00fa38d0:
      uVar12 = local_710;
      FUN_00150260(param_2,uVar10);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar13 + 0x88);
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa67fc(param_2,local_720,&local_750,uVar10);
      if (*(char *)(lVar13 + 0xc0) == '\0') goto LAB_00fa38c8;
LAB_00fa3bd8:
      local_720[0] = 1;
      local_750 = &LAB_00fa5f80;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa67fc(param_2,local_720,&local_750,uVar10);
      local_720[0] = 2;
      local_750 = &LAB_00fa5f84;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa67fc(param_2,local_720,&local_750,uVar10);
      if (param_2 != 0) goto LAB_00fa38d0;
LAB_00fa3c34:
      uVar12 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00fa50b0();
      puVar2 = DAT_043b6658;
      if ((DAT_043b6648 & 1) == 0) {
        puVar2 = &DAT_043b6649;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar12);
      local_750 = *(undefined1 **)(lVar13 + 0x88);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar13;
        lStack_738 = lVar23;
        FUN_00fa67fc(param_2,&local_718,&local_750,uVar12);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_00fa5f88;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a788c8;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa6eb0(param_2,&local_718,&local_750,uVar12);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_00fa5f8c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a788c8;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_00fa6eb0(param_2,&local_718,&local_750,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


