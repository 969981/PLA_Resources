/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01593704; name: FUN_01593704
 */


undefined8 FUN_01593704(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
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
  string *psVar16;
  undefined *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 *puVar20;
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
  long local_720;
  undefined4 local_718;
  long local_710;
  undefined4 local_708 [2];
  string asStack_700 [544];
  undefined8 auStack_4e0 [2];
  string local_4d0;
  undefined1 auStack_4cf [7];
  size_t local_4c8;
  undefined1 *local_4c0;
  char *apcStack_2b0 [2];
  char *local_2a0;
  code *local_298;
  long local_290;
  undefined1 auStack_70 [16];
  
  if (((DAT_043c9cd0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9cd0), iVar9 != 0)) {
    local_290 = 0;
    local_298 = (code *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if (((DAT_043c9ba0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9ba0), iVar9 != 0)) {
      FUN_01597440();
      FUN_00100250(PTR__string_04379718,&DAT_043c9b88,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c9ba0);
    }
    pcVar26 = (char *)FUN_015967f8(&local_2a0,&DAT_043c9b88);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043c9cb8,psVar16);
    lVar13 = local_290;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
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
          goto LAB_015947b4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_015947b4:
    FUN_00100250(PTR__string_04379718,&DAT_043c9cb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c9cd0);
  }
  std::string::string(&local_4d0,(string *)&DAT_043c9cb8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043c9cb0);
  sVar1 = (ulong)((byte)local_4d0 >> 1);
  if (((byte)local_4d0 & 1) != 0) {
    sVar1 = local_4c8;
  }
  std::string::append((ulong)&local_4d0,(char)iVar9);
  if (((byte)local_4d0 & 1) == 0) {
    puVar27 = auStack_4cf;
    local_4c8 = (size_t)((byte)local_4d0 >> 1);
  }
  else {
    puVar27 = local_4c0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_4c8,"%d",(ulong)DAT_043c9cb0);
  DAT_043c9cb0 = DAT_043c9cb0 + 1;
  if (((DAT_043c9cf0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9cf0), iVar9 != 0)) {
    local_290 = 0;
    local_298 = (code *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if (((DAT_043c9ba0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9ba0), iVar9 != 0)) {
      FUN_01597440();
      FUN_00100250(PTR__string_04379718,&DAT_043c9b88,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c9ba0);
    }
    pcVar26 = (char *)FUN_015967f8(&local_2a0,&DAT_043c9b88);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043c9cd8,psVar16);
    lVar13 = local_290;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
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
          goto LAB_01594908;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_01594908:
    FUN_00100250(PTR__string_04379718,&DAT_043c9cd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c9cf0);
  }
  puVar17 = DAT_043c9ce8;
  if ((DAT_043c9cd8 & 1) == 0) {
    puVar17 = &DAT_043c9cd9;
  }
  if (((byte)local_4d0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4d0 | 1);
  }
  else {
    puVar27 = local_4c0;
  }
  if (((DAT_043c9d00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9d00), iVar9 != 0)) {
    DAT_043c9cf8 = 200;
    __cxa_guard_release(&DAT_043c9d00);
  }
  if (((DAT_043c9d10 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9d10), iVar9 != 0)) {
    DAT_043c9d08 = 0xcf;
    __cxa_guard_release(&DAT_043c9d10);
  }
  uVar22 = DAT_043c9cf8;
  lVar13 = FUN_00153520(param_2,DAT_043c9cf8);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 200)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043c9d08;
    lVar13 = FUN_00153520(param_2,DAT_043c9d08);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 200)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0159a940();
      puVar2 = DAT_043c9d28;
      if ((DAT_043c9d18 & 1) == 0) {
        puVar2 = &DAT_043c9d19;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar18;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar23;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar20[2];
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
    *(undefined8 **)(puVar20[1] + uVar22 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar18;
  puVar20[7] = uVar3;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_0421e440;
  *(undefined1 *)(puVar20 + 0xb) = uVar5;
  puVar20[0xc] = *(undefined8 *)(param_1 + 0x60);
  uVar18 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar20[0xf] = *(undefined8 *)(param_1 + 0x78);
  puVar20[0x10] = uVar4;
  puVar20[0xd] = uVar18;
  puVar20[0xe] = uVar3;
  uVar18 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  puVar20[0x13] = *(undefined8 *)(param_1 + 0x98);
  puVar20[0x14] = uVar4;
  puVar20[0x11] = uVar18;
  puVar20[0x12] = uVar3;
  uVar18 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  puVar20[0x17] = *(undefined8 *)(param_1 + 0xb8);
  puVar20[0x18] = uVar4;
  puVar20[0x15] = uVar18;
  puVar20[0x16] = uVar3;
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_0159a900,0);
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
  FUN_001522a0(param_2,puVar17);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar17);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_4d0 & 1) != 0) && (local_4c0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_4c0,0,8);
        goto LAB_01593a8c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4c0,0,8);
  }
LAB_01593a8c:
  memset(&local_2a0,0,0x230);
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
  pcVar19 = (code *)&LAB_01598e50;
  if (uVar11 != 0) {
    pcVar19 = FUN_01597858;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar19;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x78) = pcVar19;
            goto LAB_01593cb0;
          }
          *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar19;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
      goto LAB_01593cb0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2a0 = pcVar26;
  local_298 = pcVar19;
LAB_01593cb0:
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
  pcVar19 = (code *)&LAB_0159a52c;
  if (uVar11 != 0) {
    pcVar19 = (code *)&LAB_01598ebc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar19;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x78) = pcVar19;
            goto LAB_01593dc0;
          }
          *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
      goto LAB_01593dc0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2a0)[uVar24 * 2] = pcVar26;
  (&local_298)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_01593dc0:
  pcVar26 = *(char **)(lVar13 + 0x70);
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
  pcVar19 = (code *)&LAB_0159a708;
  if (uVar11 != 0) {
    pcVar19 = (code *)&LAB_0159a6d4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x78) = pcVar19;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
        goto joined_r0x01593ea4;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar19;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xc0) = *(ulong *)(lVar13 + 0xc0) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
      goto joined_r0x01593ea4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2a0)[uVar24 * 2] = pcVar26;
  (&local_298)[uVar24 * 2] = pcVar19;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x01593ea4:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    (&local_2a0)[uVar24 * 2] = pcVar26;
    (&local_298)[uVar24 * 2] = (code *)&LAB_01599590;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xc0);
    uVar24 = (ulong)((int)uVar24 + 1);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    uVar22 = (ulong)((int)uVar24 + 1);
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    (&local_2a0)[uVar24 * 2] = pcVar26;
    (&local_298)[uVar24 * 2] = (code *)&LAB_01599588;
  }
  uVar24 = uVar22;
  if (*(long *)(lVar13 + 0x78) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar13 + 0x78);
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2a0)[uVar22 * 2] = pcVar26;
    (&local_298)[uVar22 * 2] = pcVar19;
  }
  (&local_2a0)[uVar24 * 2] = (char *)0x0;
  (&local_298)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_4d0,&local_2a0,0x230);
  memcpy(asStack_700,&local_2a0,0x230);
  lVar28 = FUN_008cca50();
  lVar15 = uVar24 - 1;
  pcVar26 = (&local_2a0)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_4e0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4cf + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_700 + lVar15 * 0x10) = (&local_2a0)[lVar15 * 2];
  *(undefined1 **)(asStack_700 + (lVar15 * 2 + 1) * 8) = &LAB_0159a740;
  FUN_00151fe0(param_2,0,2);
  local_708[0] = FUN_0014feb0(param_2,0xffffffff);
  local_710 = param_2;
  if (((DAT_043c9ba0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c9ba0), iVar9 != 0)) {
    FUN_01597440();
    FUN_00100250(PTR__string_04379718,&DAT_043c9b88,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c9ba0);
  }
  uVar10 = local_708[0];
  if ((DAT_043c9b88 & 1) == 0) {
    uVar22 = (ulong)(DAT_043c9b88 >> 1);
    puVar27 = &DAT_043c9b89;
  }
  else {
    uVar22 = DAT_043c9b90;
    puVar27 = DAT_043c9b98;
  }
  FUN_001514f0(param_2,puVar27,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_015994a0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar16 = asStack_700;
      FUN_01595bc0();
      pbVar21 = &DAT_043c9af0;
      puVar17 = &DAT_043c9af1;
      puVar20 = &DAT_043c9b00;
    }
    else if (lVar28 == 0) {
      psVar16 = &local_4d0;
      FUN_015959e4();
      puVar17 = &DAT_043c9a79;
      puVar20 = &DAT_043c9a88;
      pbVar21 = &DAT_043c9a78;
    }
    else {
      psVar16 = (string *)&local_2a0;
      FUN_01595d9c();
      puVar17 = &DAT_043c9b69;
      puVar20 = &DAT_043c9b78;
      pbVar21 = &DAT_043c9b68;
    }
    if ((*pbVar21 & 1) != 0) {
      puVar17 = (undefined *)*puVar20;
    }
    FUN_00154450(param_2,puVar17);
    local_718 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_720 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,local_718);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar16,2);
    uVar10 = local_718;
    if (*(long *)(lVar13 + 0xa8) == 0) {
      lVar15 = *(long *)(lVar13 + 0xb0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xb0);
      uVar10 = local_718;
    }
    local_718 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_718;
    uVar18 = *(undefined8 *)(lVar13 + 0x88);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_718;
    uVar18 = *(undefined8 *)(lVar13 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_750,&local_720,local_718);
    }
    else {
      local_750 = &LAB_0159a830;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a790(param_2,1,&local_750,local_718);
      local_750 = &LAB_0159a834;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a790(param_2,2,&local_750,local_718);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,uVar10);
    if (*(undefined1 **)(lVar13 + 0x80) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0xb8) == '\0') goto LAB_01594270;
LAB_0159455c:
      local_750 = &LAB_0159a830;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a790(param_2,1,&local_750,uVar10);
      local_750 = &LAB_0159a834;
      uStack_748 = 0;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a790(param_2,2,&local_750,uVar10);
      if (param_2 == 0) goto LAB_015945ac;
LAB_01594278:
      uVar12 = local_718;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar13 + 0x80);
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a790(param_2,4,&local_750,uVar10);
      if (*(char *)(lVar13 + 0xb8) != '\0') goto LAB_0159455c;
LAB_01594270:
      if (param_2 != 0) goto LAB_01594278;
LAB_015945ac:
      uVar12 = local_718;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_720,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_01595fc4();
      puVar17 = DAT_043c9bf0;
      if ((DAT_043c9be0 & 1) == 0) {
        puVar17 = &DAT_043c9be1;
      }
      FUN_00154450(param_2,puVar17);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2a0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar12);
      local_750 = *(undefined1 **)(lVar13 + 0x80);
      if (local_750 != (undefined1 *)0x0) {
        uStack_748 = 0;
        local_740 = lVar13;
        lStack_738 = lVar23;
        FUN_0159a790(param_2,4,&local_750,uVar12);
      }
      local_750 = &LAB_0159a8f8;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c3f8;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a840(param_2,1,&local_750,uVar12);
      local_750 = &LAB_0159a8fc;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c3f8;
      local_740 = lVar13;
      lStack_738 = lVar23;
      FUN_0159a840(param_2,2,&local_750,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_708[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


