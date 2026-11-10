/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159e9a4; name: FUN_0159e9a4
 */


undefined8 FUN_0159e9a4(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
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
  string *psVar17;
  undefined *puVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
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
  char *local_2a0 [2];
  long local_290;
  undefined1 auStack_70 [16];
  
  if (((DAT_043c9ff8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043c9ff8), iVar10 != 0)) {
    local_290 = 0;
    local_2a0[1] = (undefined1 *)0x0;
    local_2a0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c9e98 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043c9e98), iVar10 != 0)) {
      FUN_015a26b0();
      FUN_00100250(PTR__string_04379718,&DAT_043c9e80,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c9e98);
    }
    pcVar27 = (char *)FUN_015a1a98(local_2a0,&DAT_043c9e80);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043c9fe0,psVar17);
    lVar14 = local_290;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2a0[0] & 1) != 0) && (local_290 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_0159fa54;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_0159fa54:
    FUN_00100250(PTR__string_04379718,&DAT_043c9fe0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c9ff8);
  }
  std::string::string(&local_4d0,(string *)&DAT_043c9fe0);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043c9fd8);
  sVar2 = (ulong)((byte)local_4d0 >> 1);
  if (((byte)local_4d0 & 1) != 0) {
    sVar2 = local_4c8;
  }
  std::string::append((ulong)&local_4d0,(char)iVar10);
  if (((byte)local_4d0 & 1) == 0) {
    puVar28 = auStack_4cf;
    local_4c8 = (size_t)((byte)local_4d0 >> 1);
  }
  else {
    puVar28 = local_4c0;
  }
  snprintf(puVar28 + (sVar2 - 1),local_4c8,"%d",(ulong)DAT_043c9fd8);
  DAT_043c9fd8 = DAT_043c9fd8 + 1;
  if (((DAT_043ca018 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ca018), iVar10 != 0)) {
    local_290 = 0;
    local_2a0[1] = (undefined1 *)0x0;
    local_2a0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c9e98 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043c9e98), iVar10 != 0)) {
      FUN_015a26b0();
      FUN_00100250(PTR__string_04379718,&DAT_043c9e80,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c9e98);
    }
    pcVar27 = (char *)FUN_015a1a98(local_2a0,&DAT_043c9e80);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043ca000,psVar17);
    lVar14 = local_290;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2a0[0] & 1) != 0) && (local_290 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_0159fba8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_0159fba8:
    FUN_00100250(PTR__string_04379718,&DAT_043ca000,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ca018);
  }
  puVar18 = DAT_043ca010;
  if ((DAT_043ca000 & 1) == 0) {
    puVar18 = &DAT_043ca001;
  }
  if (((byte)local_4d0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_4d0 | 1);
  }
  else {
    puVar28 = local_4c0;
  }
  if (((DAT_043ca028 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ca028), iVar10 != 0)) {
    DAT_043ca020 = 200;
    __cxa_guard_release(&DAT_043ca028);
  }
  if (((DAT_043ca038 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ca038), iVar10 != 0)) {
    DAT_043ca030 = 0xcf;
    __cxa_guard_release(&DAT_043ca038);
  }
  uVar23 = DAT_043ca020;
  lVar14 = FUN_00153520(param_2,DAT_043ca020);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 200)) ||
     (puVar21 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043ca030;
    lVar14 = FUN_00153520(param_2,DAT_043ca030);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 200)) ||
       (puVar21 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_015a4c70();
      puVar3 = DAT_043ca050;
      if ((DAT_043ca040 & 1) == 0) {
        puVar3 = &DAT_043ca041;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar21[1] = uVar19;
  puVar21[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar21[3] = lVar14;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar21[4] = lVar24;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar21[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar7 = 0;
      if (uVar25 != 0) {
        uVar7 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar7 * uVar25;
    }
    *(undefined8 **)(puVar21[1] + uVar23 * 8) = puVar21 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar19;
  puVar21[7] = uVar4;
  puVar21[8] = *(undefined8 *)(param_1 + 0x40);
  puVar21[9] = *(undefined8 *)(param_1 + 0x48);
  puVar21[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar21 = &PTR_FUN_0421e4d0;
  *(undefined1 *)(puVar21 + 0xb) = uVar6;
  puVar21[0xc] = *(undefined8 *)(param_1 + 0x60);
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  puVar21[0xf] = *(undefined8 *)(param_1 + 0x78);
  puVar21[0x10] = uVar5;
  puVar21[0xd] = uVar19;
  puVar21[0xe] = uVar4;
  uVar19 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  puVar21[0x13] = *(undefined8 *)(param_1 + 0x98);
  puVar21[0x14] = uVar5;
  puVar21[0x11] = uVar19;
  puVar21[0x12] = uVar4;
  uVar19 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  puVar21[0x17] = *(undefined8 *)(param_1 + 0xb8);
  puVar21[0x18] = uVar5;
  puVar21[0x15] = uVar19;
  puVar21[0x16] = uVar4;
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_015a4c30,0);
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
  FUN_001522a0(param_2,puVar18);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar18);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_4d0 & 1) != 0) && (local_4c0 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar8;
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
        FUN_02bcc824(plVar26,local_4c0,0,8);
        goto LAB_0159ed2c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_4c0,0,8);
  }
LAB_0159ed2c:
  memset(local_2a0,0,0x230);
  pcVar27 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_015a4044;
  if (uVar12 != 0) {
    puVar28 = &LAB_015a2ac8;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar22 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar28;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar14 + 0x78) = puVar28;
            goto LAB_0159ef50;
          }
          *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
      goto LAB_0159ef50;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2a0[0] = pcVar27;
  local_2a0[1] = puVar28;
LAB_0159ef50:
  pcVar27 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar20 = &LAB_015a4804;
  if (uVar12 != 0) {
    pcVar20 = &LAB_015a40b4;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar22 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(char **)(lVar14 + 0x30) = pcVar20;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar14 + 0x78) = pcVar20;
            goto LAB_0159f060;
          }
          *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
      goto LAB_0159f060;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2a0[uVar25 * 2] = pcVar27;
  local_2a0[uVar25 * 2 + 1] = pcVar20;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0159f060:
  pcVar27 = *(char **)(lVar14 + 0x70);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015a4a0c;
  if (uVar12 != 0) {
    pcVar1 = FUN_015a49ac;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar22 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0x78) = pcVar1;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
        goto joined_r0x0159f144;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
      goto joined_r0x0159f144;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2a0[uVar25 * 2] = pcVar27;
  local_2a0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x0159f144:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  }
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    local_2a0[uVar25 * 2] = pcVar27;
    local_2a0[uVar25 * 2 + 1] = &LAB_015a30a0;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
    uVar25 = (ulong)((int)uVar25 + 1);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    uVar23 = (ulong)((int)uVar25 + 1);
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    local_2a0[uVar25 * 2] = pcVar27;
    local_2a0[uVar25 * 2 + 1] = "\\\x03";
  }
  uVar25 = uVar23;
  if (*(long *)(lVar14 + 0x78) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar20 = *(char **)(lVar14 + 0x78);
    uVar25 = (ulong)((int)uVar23 + 1);
    local_2a0[uVar23 * 2] = pcVar27;
    local_2a0[uVar23 * 2 + 1] = pcVar20;
  }
  local_2a0[uVar25 * 2] = (char *)0x0;
  local_2a0[uVar25 * 2 + 1] = (char *)0x0;
  memcpy(&local_4d0,local_2a0,0x230);
  memcpy(asStack_700,local_2a0,0x230);
  lVar29 = FUN_008cca50();
  lVar16 = uVar25 - 1;
  pcVar27 = local_2a0[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_4e0[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4cf + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_700 + lVar16 * 0x10) = local_2a0[lVar16 * 2];
  *(undefined1 **)(asStack_700 + (lVar16 * 2 + 1) * 8) = &LAB_015a4a70;
  FUN_00151fe0(param_2,0,2);
  local_708[0] = FUN_0014feb0(param_2,0xffffffff);
  local_710 = param_2;
  if (((DAT_043c9e98 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043c9e98), iVar10 != 0)) {
    FUN_015a26b0();
    FUN_00100250(PTR__string_04379718,&DAT_043c9e80,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c9e98);
  }
  uVar11 = local_708[0];
  if ((DAT_043c9e80 & 1) == 0) {
    uVar23 = (ulong)(DAT_043c9e80 >> 1);
    puVar28 = &DAT_043c9e81;
  }
  else {
    uVar23 = DAT_043c9e88;
    puVar28 = DAT_043c9e90;
  }
  FUN_001514f0(param_2,puVar28,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_015a4690,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar17 = asStack_700;
      FUN_015a0e60();
      pbVar22 = &DAT_043c9de8;
      puVar18 = &DAT_043c9de9;
      puVar21 = &DAT_043c9df8;
    }
    else if (lVar29 == 0) {
      psVar17 = &local_4d0;
      FUN_015a0c84();
      puVar18 = &DAT_043c9d71;
      puVar21 = &DAT_043c9d80;
      pbVar22 = &DAT_043c9d70;
    }
    else {
      psVar17 = (string *)local_2a0;
      FUN_015a103c();
      puVar18 = &DAT_043c9e61;
      puVar21 = &DAT_043c9e70;
      pbVar22 = &DAT_043c9e60;
    }
    if ((*pbVar22 & 1) != 0) {
      puVar18 = (undefined *)*puVar21;
    }
    FUN_00154450(param_2,puVar18);
    local_718 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_720 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,local_718);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar17,2);
    uVar11 = local_718;
    if (*(long *)(lVar14 + 0xa8) == 0) {
      lVar16 = *(long *)(lVar14 + 0xb0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0xb0);
      uVar11 = local_718;
    }
    local_718 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_718;
    uVar19 = *(undefined8 *)(lVar14 + 0x88);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_718;
    uVar19 = *(undefined8 *)(lVar14 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_750,&local_720,local_718);
    }
    else {
      local_750 = &LAB_015a4b60;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4ac0(param_2,1,&local_750,local_718);
      local_750 = &LAB_015a4b64;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4ac0(param_2,2,&local_750,local_718);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,uVar11);
    if (*(undefined1 **)(lVar14 + 0x80) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xb8) == '\0') goto LAB_0159f510;
LAB_0159f7fc:
      local_750 = &LAB_015a4b60;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4ac0(param_2,1,&local_750,uVar11);
      local_750 = &LAB_015a4b64;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4ac0(param_2,2,&local_750,uVar11);
      if (param_2 == 0) goto LAB_0159f84c;
LAB_0159f518:
      uVar13 = local_718;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar14 + 0x80);
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4ac0(param_2,4,&local_750,uVar11);
      if (*(char *)(lVar14 + 0xb8) != '\0') goto LAB_0159f7fc;
LAB_0159f510:
      if (param_2 != 0) goto LAB_0159f518;
LAB_0159f84c:
      uVar13 = local_718;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_720,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_015a1264();
      puVar18 = DAT_043c9ee8;
      if ((DAT_043c9ed8 & 1) == 0) {
        puVar18 = &DAT_043c9ed9;
      }
      FUN_00154450(param_2,puVar18);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_2a0,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar13);
      local_750 = *(undefined1 **)(lVar14 + 0x80);
      if (local_750 != (undefined1 *)0x0) {
        uStack_748 = 0;
        local_740 = lVar14;
        lStack_738 = lVar24;
        FUN_015a4ac0(param_2,4,&local_750,uVar13);
      }
      local_750 = &LAB_015a4c28;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c400;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4b70(param_2,1,&local_750,uVar13);
      local_750 = &LAB_015a4c2c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c400;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_015a4b70(param_2,2,&local_750,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_708[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


