/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e49484; name: FUN_00e49484
 */


undefined8 FUN_00e49484(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
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
  string *psVar15;
  undefined *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
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
  
  if (((DAT_043b0030 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b0030), iVar8 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if (((DAT_043affb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043affb0), iVar8 != 0)) {
      FUN_00e4d1e0();
      FUN_00100250(PTR__string_04379718,&DAT_043aff98,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043affb0);
    }
    pcVar26 = (char *)FUN_00e4c5c8(&local_298,&DAT_043aff98);
    psVar15 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b0018,psVar15);
    lVar12 = local_288;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_00e4a57c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_00e4a57c:
    FUN_00100250(PTR__string_04379718,&DAT_043b0018,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b0030);
  }
  std::string::string(&local_4c8,(string *)&DAT_043b0018);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b0010);
  sVar1 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar1 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar8);
  if (((byte)local_4c8 & 1) == 0) {
    puVar27 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar27 = local_4b8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_4c0,"%d",(ulong)DAT_043b0010);
  DAT_043b0010 = DAT_043b0010 + 1;
  if (((DAT_043b0050 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b0050), iVar8 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if (((DAT_043affb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043affb0), iVar8 != 0)) {
      FUN_00e4d1e0();
      FUN_00100250(PTR__string_04379718,&DAT_043aff98,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043affb0);
    }
    pcVar26 = (char *)FUN_00e4c5c8(&local_298,&DAT_043aff98);
    psVar15 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b0038,psVar15);
    lVar12 = local_288;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_00e4a6d0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_00e4a6d0:
    FUN_00100250(PTR__string_04379718,&DAT_043b0038,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b0050);
  }
  puVar16 = DAT_043b0048;
  if ((DAT_043b0038 & 1) == 0) {
    puVar16 = &DAT_043b0039;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar27 = local_4b8;
  }
  if (((DAT_043b0060 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b0060), iVar8 != 0)) {
    DAT_043b0058 = 0xd8;
    __cxa_guard_release(&DAT_043b0060);
  }
  if (((DAT_043b0070 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b0070), iVar8 != 0)) {
    DAT_043b0068 = 0xdf;
    __cxa_guard_release(&DAT_043b0070);
  }
  uVar21 = DAT_043b0058;
  lVar12 = FUN_00153520(param_2,DAT_043b0058);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd8)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043b0068;
    lVar12 = FUN_00153520(param_2,DAT_043b0068);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd8)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00e4d980();
      puVar2 = DAT_043b0088;
      if ((DAT_043b0078 & 1) == 0) {
        puVar2 = &DAT_043b0079;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar17;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar23;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar21 = uVar24 - 1 & uVar21;
    }
    else if (uVar24 <= uVar21) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar21 / uVar24;
      }
      uVar21 = uVar21 - uVar5 * uVar24;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar22;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_041ee878;
  *(undefined1 *)(puVar19 + 0xb) = uVar4;
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar17;
  puVar19[0xe] = uVar22;
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  uVar22 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  puVar19[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x12] = uVar3;
  puVar19[0xf] = uVar17;
  puVar19[0x10] = uVar22;
  uVar17 = *(undefined8 *)(param_1 + 0x98);
  uVar22 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  puVar19[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x16] = uVar3;
  puVar19[0x13] = uVar17;
  puVar19[0x14] = uVar22;
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  uVar22 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  puVar19[0x19] = *(undefined8 *)(param_1 + 200);
  puVar19[0x1a] = uVar3;
  puVar19[0x17] = uVar17;
  puVar19[0x18] = uVar22;
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00e4d940,0);
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
  FUN_001522a0(param_2,puVar16);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar16);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
    }
    uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar25,local_4b8,0,8);
        goto LAB_00e49814;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4b8,0,8);
  }
LAB_00e49814:
  memset(&local_298,0,0x230);
  pcVar26 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
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
  uVar21 = 0;
  pcVar18 = FUN_00e4d6f4;
  if (uVar10 != 0) {
    pcVar18 = FUN_00e4d608;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar12 + 0x88) = pcVar18;
            goto LAB_00e49a38;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_00e49a38;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  uVar24 = 1;
  local_298 = pcVar26;
  local_290 = pcVar18;
LAB_00e49a38:
  pcVar26 = *(char **)(lVar12 + 0x70);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar18 = FUN_00e4d784;
  if (uVar10 != 0) {
    pcVar18 = FUN_00e4d73c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x88) = pcVar18;
            goto LAB_00e49b78;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_00e49b78;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_298)[uVar24 * 2] = pcVar26;
  (&local_290)[uVar24 * 2] = pcVar18;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e49b78:
  pcVar26 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar18 = FUN_00e4d82c;
  if (uVar10 != 0) {
    pcVar18 = FUN_00e4d7cc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x88) = pcVar18;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
        goto joined_r0x00e49c5c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
      goto joined_r0x00e49c5c;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_298)[uVar24 * 2] = pcVar26;
  (&local_290)[uVar24 * 2] = pcVar18;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00e49c5c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    (&local_298)[uVar24 * 2] = pcVar26;
    (&local_290)[uVar24 * 2] = (code *)&LAB_00e4ddc0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
    uVar24 = (ulong)((int)uVar24 + 1);
  }
  uVar21 = uVar24;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar24 + 1);
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    (&local_298)[uVar24 * 2] = pcVar26;
    (&local_290)[uVar24 * 2] = (code *)&LAB_00e4ddbc;
  }
  uVar24 = uVar21;
  if (*(long *)(lVar12 + 0x88) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar18 = *(code **)(lVar12 + 0x88);
    uVar24 = (ulong)((int)uVar21 + 1);
    (&local_298)[uVar21 * 2] = pcVar26;
    (&local_290)[uVar21 * 2] = pcVar18;
  }
  (&local_298)[uVar24 * 2] = (char *)0x0;
  (&local_290)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_4c8,&local_298,0x230);
  memcpy(asStack_6f8,&local_298,0x230);
  lVar28 = FUN_008cca50();
  lVar14 = uVar24 - 1;
  pcVar26 = (&local_298)[lVar14 * 2];
  sVar13 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_4d8[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4c7 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6f8 + lVar14 * 0x10) = (&local_298)[lVar14 * 2];
  *(undefined1 **)(asStack_6f8 + (lVar14 * 2 + 1) * 8) = &LAB_00e4d890;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if (((DAT_043affb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043affb0), iVar8 != 0)) {
    FUN_00e4d1e0();
    FUN_00100250(PTR__string_04379718,&DAT_043aff98,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043affb0);
  }
  uVar9 = local_700[0];
  if ((DAT_043aff98 & 1) == 0) {
    uVar21 = (ulong)(DAT_043aff98 >> 1);
    puVar27 = &DAT_043aff99;
  }
  else {
    uVar21 = DAT_043affa0;
    puVar27 = DAT_043affa8;
  }
  FUN_001514f0(param_2,puVar27,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00e4d8e0,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar15 = asStack_6f8;
      FUN_00e4b988();
      pbVar20 = &DAT_043aff00;
      puVar16 = &DAT_043aff01;
      puVar19 = &DAT_043aff10;
    }
    else if (lVar28 == 0) {
      psVar15 = &local_4c8;
      FUN_00e4b7ac();
      puVar16 = &DAT_043afe89;
      puVar19 = &DAT_043afe98;
      pbVar20 = &DAT_043afe88;
    }
    else {
      psVar15 = (string *)&local_298;
      FUN_00e4bb64();
      puVar16 = &DAT_043aff79;
      puVar19 = &DAT_043aff88;
      pbVar20 = &DAT_043aff78;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_710;
    if (*(long *)(lVar12 + 0xb8) == 0) {
      lVar14 = *(long *)(lVar12 + 0xc0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xc0);
      uVar9 = local_710;
    }
    local_710 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_710;
    uVar17 = *(undefined8 *)(lVar12 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_710;
    uVar17 = *(undefined8 *)(lVar12 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_00e4d930;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4ecfc(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_00e4d934;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4ecfc(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar9);
    if (*(undefined1 **)(lVar12 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 200) == '\0') goto LAB_00e4a028;
LAB_00e4a33c:
      local_720[0] = 1;
      local_750 = &LAB_00e4d930;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4ecfc(param_2,local_720,&local_750,uVar9);
      local_720[0] = 2;
      local_750 = &LAB_00e4d934;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4ecfc(param_2,local_720,&local_750,uVar9);
      if (param_2 == 0) goto LAB_00e4a39c;
LAB_00e4a030:
      uVar11 = local_710;
      FUN_00150260(param_2,uVar9);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar12 + 0x90);
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4ecfc(param_2,local_720,&local_750,uVar9);
      if (*(char *)(lVar12 + 200) != '\0') goto LAB_00e4a33c;
LAB_00e4a028:
      if (param_2 != 0) goto LAB_00e4a030;
LAB_00e4a39c:
      uVar11 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00e4bd8c();
      puVar16 = DAT_043b0000;
      if ((DAT_043afff0 & 1) == 0) {
        puVar16 = &DAT_043afff1;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar11);
      local_750 = *(undefined1 **)(lVar12 + 0x90);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar12;
        lStack_738 = lVar23;
        FUN_00e4ecfc(param_2,&local_718,&local_750,uVar11);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_00e4d938;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a787c0;
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4f3b0(param_2,&local_718,&local_750,uVar11);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_00e4d93c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a787c0;
      local_740 = lVar12;
      lStack_738 = lVar23;
      FUN_00e4f3b0(param_2,&local_718,&local_750,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


