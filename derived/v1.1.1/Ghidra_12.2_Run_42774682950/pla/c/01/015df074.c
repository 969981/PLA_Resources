/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015df074; name: FUN_015df074
 */


undefined8 FUN_015df074(long param_1,long param_2)

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
  
  if (((DAT_043cb9c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043cb9c8), iVar8 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043802d8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043802d8);
      puVar2 = PTR_DAT_043802e0;
      if (iVar8 != 0) {
        FUN_015e2d70(PTR_DAT_043802e0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043802d8);
      }
    }
    pcVar25 = (char *)FUN_015e2178(&local_298,PTR_DAT_043802e0);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043cb9b0,psVar16);
    lVar12 = local_288;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
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
          goto LAB_015e0100;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_015e0100:
    FUN_00100250(PTR__string_04379718,&DAT_043cb9b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb9c8);
  }
  std::string::string(&local_4c8,(string *)&DAT_043cb9b0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cb9a8);
  sVar1 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar1 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar8);
  if (((byte)local_4c8 & 1) == 0) {
    puVar26 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar26 = local_4b8;
  }
  snprintf(puVar26 + (sVar1 - 1),local_4c0,"%d",(ulong)DAT_043cb9a8);
  DAT_043cb9a8 = DAT_043cb9a8 + 1;
  if (((DAT_043cb9e8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043cb9e8), iVar8 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043802d8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043802d8);
      puVar2 = PTR_DAT_043802e0;
      if (iVar8 != 0) {
        FUN_015e2d70(PTR_DAT_043802e0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043802d8);
      }
    }
    pcVar25 = (char *)FUN_015e2178(&local_298,PTR_DAT_043802e0);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043cb9d0,psVar16);
    lVar12 = local_288;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
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
          goto LAB_015e0254;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_015e0254:
    FUN_00100250(PTR__string_04379718,&DAT_043cb9d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb9e8);
  }
  puVar2 = DAT_043cb9e0;
  if ((DAT_043cb9d0 & 1) == 0) {
    puVar2 = &DAT_043cb9d1;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar26 = local_4b8;
  }
  if (((DAT_043cb9f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043cb9f8), iVar8 != 0)) {
    DAT_043cb9f0 = 0xe8;
    __cxa_guard_release(&DAT_043cb9f8);
  }
  if (((DAT_043cba08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043cba08), iVar8 != 0)) {
    DAT_043cba00 = 0xef;
    __cxa_guard_release(&DAT_043cba08);
  }
  uVar21 = DAT_043cb9f0;
  lVar12 = FUN_00153520(param_2,DAT_043cb9f0);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xe8)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043cba00;
    lVar12 = FUN_00153520(param_2,DAT_043cba00);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xe8)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_015e3830();
      puVar3 = DAT_043cba20;
      if ((DAT_043cba10 & 1) == 0) {
        puVar3 = &DAT_043cba11;
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
  *puVar17 = &PTR_FUN_0421e570;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x88);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_015e37f0,0);
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
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_4b8,0,8);
        goto LAB_015df3d4;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_4b8,0,8);
  }
LAB_015df3d4:
  memset(&local_298,0,0x230);
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
  pcVar19 = FUN_015e3328;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_015e315c;
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
            uVar23 = 0;
            *(code **)(lVar12 + 0x98) = pcVar19;
            goto LAB_015df5f8;
          }
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      goto LAB_015df5f8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_298 = pcVar25;
  local_290 = pcVar19;
LAB_015df5f8:
  pcVar25 = *(char **)(lVar12 + 0x78);
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
  pcVar19 = (code *)&LAB_015e355c;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_015e3470;
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
            *(code **)(lVar12 + 0x98) = pcVar19;
            goto LAB_015df738;
          }
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      goto LAB_015df738;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_298)[uVar23 * 2] = pcVar25;
  (&local_290)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_015df738:
  pcVar25 = *(char **)(lVar12 + 0x90);
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
  pcVar19 = FUN_015e36d8;
  if (uVar10 != 0) {
    pcVar19 = FUN_015e3678;
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
        *(code **)(lVar12 + 0x98) = pcVar19;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
        goto joined_r0x015df81c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
      goto joined_r0x015df81c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_298)[uVar23 * 2] = pcVar25;
  (&local_290)[uVar23 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x015df81c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_298)[uVar23 * 2] = pcVar25;
    (&local_290)[uVar23 * 2] = (code *)PTR_LAB_043802c8;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  }
  uVar23 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_298)[uVar21 * 2] = pcVar25;
    (&local_290)[uVar21 * 2] = (code *)PTR_LAB_043802d0;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar12 + 0x98) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0x98);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_298)[uVar23 * 2] = pcVar25;
    (&local_290)[uVar23 * 2] = pcVar19;
  }
  (&local_298)[uVar21 * 2] = (char *)0x0;
  (&local_290)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_4c8,&local_298,0x230);
  memcpy(asStack_6f8,&local_298,0x230);
  lVar27 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (&local_298)[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_4d8[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4c7 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6f8 + lVar14 * 0x10) = (&local_298)[lVar14 * 2];
  *(undefined1 **)(asStack_6f8 + (lVar14 * 2 + 1) * 8) = &LAB_015e3740;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if ((*PTR_DAT_043802d8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_043802d8);
    puVar2 = PTR_DAT_043802e0;
    if (iVar8 != 0) {
      FUN_015e2d70(PTR_DAT_043802e0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043802d8);
    }
  }
  uVar9 = local_700[0];
  uVar21 = *(ulong *)(PTR_DAT_043802e0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_043802e0 + 0x10);
  if ((*PTR_DAT_043802e0 & 1) == 0) {
    puVar2 = PTR_DAT_043802e0 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_043802e0 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_015e3790,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar16 = asStack_6f8;
      pbVar15 = (byte *)FUN_015e1528();
    }
    else if (lVar27 == 0) {
      psVar16 = &local_4c8;
      pbVar15 = (byte *)FUN_015e1348();
    }
    else {
      psVar16 = (string *)&local_298;
      pbVar15 = (byte *)FUN_015e1708();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_710;
    if (*(long *)(lVar12 + 200) == 0) {
      lVar14 = *(long *)(lVar12 + 0xd0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xd0);
      uVar9 = local_710;
    }
    local_710 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_710;
    uVar18 = *(undefined8 *)(lVar12 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_710;
    uVar18 = *(undefined8 *)(lVar12 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_015e37e0;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e4a74(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_015e37e4;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e4a74(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar9);
    if (*(undefined1 **)(lVar12 + 0xa0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xd8) != '\0') goto LAB_015dfec4;
LAB_015dfbb4:
      if (param_2 == 0) goto LAB_015dff20;
LAB_015dfbbc:
      uVar11 = local_710;
      FUN_00150260(param_2,uVar9);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar12 + 0xa0);
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e4a74(param_2,local_720,&local_750,uVar9);
      if (*(char *)(lVar12 + 0xd8) == '\0') goto LAB_015dfbb4;
LAB_015dfec4:
      local_720[0] = 1;
      local_750 = &LAB_015e37e0;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e4a74(param_2,local_720,&local_750,uVar9);
      local_720[0] = 2;
      local_750 = &LAB_015e37e4;
      uStack_748 = 0;
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e4a74(param_2,local_720,&local_750,uVar9);
      if (param_2 != 0) goto LAB_015dfbbc;
LAB_015dff20:
      uVar11 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_015e1940();
      puVar2 = DAT_043cb980;
      if ((DAT_043cb970 & 1) == 0) {
        puVar2 = &DAT_043cb971;
      }
      FUN_00154450(param_2,puVar2);
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
      local_750 = *(undefined1 **)(lVar12 + 0xa0);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar12;
        lStack_738 = lVar22;
        FUN_015e4a74(param_2,&local_718,&local_750,uVar11);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_015e37e8;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c420;
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e5128(param_2,&local_718,&local_750,uVar11);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_015e37ec;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c420;
      local_740 = lVar12;
      lStack_738 = lVar22;
      FUN_015e5128(param_2,&local_718,&local_750,uVar11);
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


