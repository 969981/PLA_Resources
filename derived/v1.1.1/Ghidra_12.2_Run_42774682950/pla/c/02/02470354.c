/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02470354; name: FUN_02470354
 */


void FUN_02470354(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  size_t sVar16;
  byte *pbVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_b70;
  undefined8 uStack_b68;
  long local_b60;
  long lStack_b58;
  undefined8 local_b50;
  undefined *puStack_b48;
  undefined4 local_b40 [2];
  long local_b38;
  undefined4 local_b30;
  long local_b28;
  undefined4 local_b20 [2];
  string asStack_b18 [896];
  undefined8 auStack_798 [2];
  string local_788;
  undefined1 auStack_787 [7];
  size_t local_780;
  undefined1 *local_778;
  char *apcStack_408 [2];
  char *local_3f8;
  code *local_3f0;
  long local_3e8;
  
  if (((DAT_043e6278 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e6278), iVar9 != 0)) {
    local_3e8 = 0;
    local_3f0 = (code *)0x0;
    local_3f8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043873b8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043873b8);
      puVar2 = PTR_DAT_043873c0;
      if (iVar9 != 0) {
        FUN_0246db90(PTR_DAT_043873c0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043873b8);
      }
    }
    pcVar27 = (char *)FUN_0246cf5c(&local_3f8,PTR_DAT_043873c0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e6260,psVar18);
    lVar13 = local_3e8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3f8 & 1) != 0) && (local_3e8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_02472e8c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_02472e8c:
    FUN_00100250(PTR__string_04379718,&DAT_043e6260,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e6278);
  }
  std::string::string(&local_788,(string *)&DAT_043e6260);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e6258);
  if (((byte)local_788 & 1) == 0) {
    uVar23 = (ulong)((byte)local_788 >> 1);
  }
  else {
    uVar23 = local_780;
  }
  std::string::append((ulong)&local_788,(char)iVar9);
  if (((byte)local_788 & 1) == 0) {
    puVar28 = auStack_787;
    local_780 = (size_t)((byte)local_788 >> 1);
  }
  else {
    puVar28 = local_778;
  }
  snprintf(puVar28 + (uVar23 - 1),local_780,"%d",(ulong)DAT_043e6258);
  DAT_043e6258 = DAT_043e6258 + 1;
  if (((DAT_043e6298 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e6298), iVar9 != 0)) {
    local_3e8 = 0;
    local_3f0 = (code *)0x0;
    local_3f8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043873b8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043873b8);
      puVar2 = PTR_DAT_043873c0;
      if (iVar9 != 0) {
        FUN_0246db90(PTR_DAT_043873c0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043873b8);
      }
    }
    pcVar27 = (char *)FUN_0246cf5c(&local_3f8,PTR_DAT_043873c0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e6280,psVar18);
    lVar13 = local_3e8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3f8 & 1) != 0) && (local_3e8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_02472fe0;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_02472fe0:
    FUN_00100250(PTR__string_04379718,&DAT_043e6280,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e6298);
  }
  puVar2 = DAT_043e6290;
  if ((DAT_043e6280 & 1) == 0) {
    puVar2 = &DAT_043e6281;
  }
  if (((byte)local_788 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_788 | 1);
  }
  else {
    puVar28 = local_778;
  }
  if (((DAT_043e62a8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e62a8), iVar9 != 0)) {
    DAT_043e62a0 = 0x2e0;
    __cxa_guard_release(&DAT_043e62a8);
  }
  if (((DAT_043e62b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e62b8), iVar9 != 0)) {
    DAT_043e62b0 = 0x2e7;
    __cxa_guard_release(&DAT_043e62b8);
  }
  uVar23 = DAT_043e62a0;
  lVar13 = FUN_00153520(param_1,DAT_043e62a0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2e0)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043e62b0;
    lVar13 = FUN_00153520(param_1,DAT_043e62b0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2e0)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_02473870();
      puVar3 = DAT_043e62d0;
      if ((DAT_043e62c0 & 1) == 0) {
        puVar3 = &DAT_043e62c1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar13;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar13 + 8);
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
  *puVar19 = &PTR_LAB_0425c138;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x280);
  iVar9 = FUN_00154450(param_1,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_02473830,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar10 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar10);
  }
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_788 & 1) != 0) && (local_778 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
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
        FUN_02bcc824(plVar26,local_778,0,8);
        goto LAB_024706b8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_778,0,8);
  }
LAB_024706b8:
  memset(&local_3f8,0,0x390);
  puVar6 = PTR_DAT_04386a88;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  puVar2 = PTR_DAT_043816f8;
  *puVar6 = 1;
  *puVar2 = 1;
  *(undefined1 **)(lVar13 + 0x2c0) = &LAB_02473cd8;
  pcVar27 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x2c8) = &LAB_02473d94;
  *(undefined1 **)(lVar13 + 0x2b0) = &LAB_02473de0;
  *(undefined1 **)(lVar13 + 0x2b8) = &LAB_02473e20;
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar24 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246e194;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246dfe0;
  }
  puVar1 = (ulong *)(lVar13 + 0x2d8);
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_0247092c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_0247092c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3f8 = pcVar27;
  local_3f0 = pcVar21;
LAB_0247092c:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246e450;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246e2c0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02470a70;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02470a70;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02470a70:
  pcVar27 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246e590;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246e548;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02470bb0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02470bb0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02470bb0:
  pcVar27 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246e620;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246e5d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02470cf0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02470cf0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02470cf0:
  pcVar27 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246e880;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246e668;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02470e30;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02470e30;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02470e30:
  pcVar27 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246e9c0;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246e978;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02470f70;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02470f70;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02470f70:
  pcVar27 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246ed08;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246ea08;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_024710b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_024710b0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_024710b0:
  pcVar27 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246ef0c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246ee00;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_024711f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_024711f0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_024711f0:
  pcVar27 = *(char **)(lVar13 + 0x120);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f144;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0246f048;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471330;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471330;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471330:
  pcVar27 = *(char **)(lVar13 + 0x138);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f3bc;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f278;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471470;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471470;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471470:
  pcVar27 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f4fc;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f4b4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_024715b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_024715b0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_024715b0:
  pcVar27 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f58c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f544;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_024716f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_024716f0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_024716f0:
  pcVar27 = *(char **)(lVar13 + 0x180);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f61c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f5d4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471830;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471830;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471830:
  pcVar27 = *(char **)(lVar13 + 0x198);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f6ac;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f664;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471970;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471970;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471970:
  pcVar27 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f850;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f6f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471ab0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471ab0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471ab0:
  pcVar27 = *(char **)(lVar13 + 0x1c8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246f990;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f948;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471bf0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471bf0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471bf0:
  pcVar27 = *(char **)(lVar13 + 0x1e0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246fa20;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246f9d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471d30;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471d30;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471d30:
  pcVar27 = *(char **)(lVar13 + 0x1f8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246fab0;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246fa68;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471e70;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471e70;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471e70:
  pcVar27 = *(char **)(lVar13 + 0x210);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246fd74;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246faf8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02471fb0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02471fb0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02471fb0:
  pcVar27 = *(char **)(lVar13 + 0x228);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0246feb4;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246fe6c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_024720f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_024720f0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_024720f0:
  pcVar27 = *(char **)(lVar13 + 0x240);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0247007c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0246fefc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02472230;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02472230;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02472230:
  pcVar27 = *(char **)(lVar13 + 600);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_024701bc;
  if (uVar11 != 0) {
    pcVar21 = FUN_02470174;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_02472370;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_02472370;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02472370:
  pcVar27 = *(char **)(lVar13 + 0x270);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0247024c;
  if (uVar11 != 0) {
    pcVar21 = FUN_02470204;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x290) = pcVar21;
            goto LAB_024724b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      goto LAB_024724b0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_024724b0:
  pcVar27 = *(char **)(lVar13 + 0x288);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_024702f4;
  if (uVar11 != 0) {
    pcVar21 = FUN_02470294;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x290) = pcVar21;
        uVar11 = (uint)*puVar1;
        goto joined_r0x02472594;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2d8) = *(ulong *)(lVar13 + 0x2d8) | 1L << (uVar23 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x02472594;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f8)[uVar25 * 2] = pcVar27;
  (&local_3f0)[uVar25 * 2] = pcVar21;
  uVar11 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x02472594:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3f8)[uVar25 * 2] = pcVar27;
    (&local_3f0)[uVar25 * 2] = (code *)PTR_LAB_04387430;
    uVar11 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_3f8)[uVar23 * 2] = pcVar27;
    (&local_3f0)[uVar23 * 2] = (code *)PTR_LAB_04387438;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar13 + 0x290) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar13 + 0x290);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3f8)[uVar25 * 2] = pcVar27;
    (&local_3f0)[uVar25 * 2] = pcVar21;
  }
  (&local_3f8)[uVar23 * 2] = (char *)0x0;
  (&local_3f0)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_788,&local_3f8,0x390);
  memcpy(asStack_b18,&local_3f8,0x390);
  lVar29 = FUN_008cca50();
  lVar15 = uVar23 - 1;
  pcVar27 = (&local_3f8)[lVar15 * 2];
  sVar16 = strlen(pcVar27);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) == 0) {
    sVar14 = (size_t)(*(byte *)(lVar29 + 0x1c8) >> 1);
  }
  else {
    sVar14 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar16 == sVar14) &&
     (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_798[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_787 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_b18 + lVar15 * 0x10) = (&local_3f8)[lVar15 * 2];
  *(undefined1 **)(asStack_b18 + (lVar15 * 2 + 1) * 8) = &LAB_02473470;
  FUN_00151fe0(param_1,0,2);
  local_b20[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b28 = param_1;
  if ((*PTR_DAT_043873b8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043873b8);
    puVar2 = PTR_DAT_043873c0;
    if (iVar9 != 0) {
      FUN_0246db90(PTR_DAT_043873c0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043873b8);
    }
  }
  uVar10 = local_b20[0];
  uVar23 = *(ulong *)(PTR_DAT_043873c0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_043873c0 + 0x10);
  if ((*PTR_DAT_043873c0 & 1) == 0) {
    puVar2 = PTR_DAT_043873c0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_043873c0 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_024734c0,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_b18;
      pbVar17 = (byte *)FUN_0246c30c();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_788;
      pbVar17 = (byte *)FUN_0246c12c();
    }
    else {
      psVar18 = (string *)&local_3f8;
      pbVar17 = (byte *)FUN_0246c4ec();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b30 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    local_b38 = param_1;
    FUN_008fe304(local_b40,param_1,&local_b70,&local_b28,local_b30);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar18,2);
    uVar10 = local_b30;
    if (*(long *)(lVar13 + 0x2c0) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
    }
    uVar10 = local_b30;
    if (*(long *)(lVar13 + 0x2c8) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_b30;
    uVar20 = *(undefined8 *)(lVar13 + 0x2a0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar24);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_b30;
    uVar20 = *(undefined8 *)(lVar13 + 0x2a8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar24);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,1);
      FUN_008fe304(local_b40,param_1,&local_b70,&local_b38,local_b30);
    }
    else {
      local_b40[0] = 1;
      local_b70 = &LAB_02473510;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_02475524(param_1,local_b40,&local_b70,local_b30);
      local_b40[0] = 2;
      local_b70 = &LAB_0247381c;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_02475524(param_1,local_b40,&local_b70,local_b30);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    FUN_008fe304(local_b40,param_1,&local_b70,&local_b28,uVar10);
    if (*(undefined1 **)(lVar13 + 0x298) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x2d0) != '\0') goto LAB_02472c48;
LAB_024729ac:
      if (param_1 == 0) goto LAB_02472cac;
LAB_024729b4:
      uVar12 = local_b30;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_b68 = 0;
      local_b40[0] = 4;
      local_b70 = *(undefined1 **)(lVar13 + 0x298);
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_02475524(param_1,local_b40,&local_b70,uVar10);
      if (*(char *)(lVar13 + 0x2d0) == '\0') goto LAB_024729ac;
LAB_02472c48:
      local_b40[0] = 1;
      local_b70 = &LAB_02473510;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_02475524(param_1,local_b40,&local_b70,uVar10);
      local_b40[0] = 2;
      local_b70 = &LAB_0247381c;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_02475524(param_1,local_b40,&local_b70,uVar10);
      if (param_1 != 0) goto LAB_024729b4;
LAB_02472cac:
      uVar12 = local_b30;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b38,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_0246c724();
      puVar2 = DAT_043e6230;
      if ((DAT_043e6220 & 1) == 0) {
        puVar2 = &DAT_043e6221;
      }
      FUN_00154450(param_1,puVar2);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_b70._0_4_ = 0x1e;
      FUN_008fe304(&local_b38,param_1,&local_b70,&local_b28,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_3f8,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
      FUN_008fe304(&local_b38,param_1,&local_b70,&local_b28,uVar12);
      local_b70 = *(undefined1 **)(lVar13 + 0x298);
      if (local_b70 != (undefined1 *)0x0) {
        local_b38 = CONCAT44(local_b38._4_4_,4);
        uStack_b68 = 0;
        local_b60 = lVar13;
        lStack_b58 = lVar24;
        FUN_02475524(param_1,&local_b38,&local_b70,uVar12);
      }
      local_b38._0_4_ = 1;
      local_b70 = &LAB_02473820;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a7d590;
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_024758cc(param_1,&local_b38,&local_b70,uVar12);
      local_b38 = CONCAT44(local_b38._4_4_,2);
      local_b70 = &LAB_02473824;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a7d590;
      local_b60 = lVar13;
      lStack_b58 = lVar24;
      FUN_024758cc(param_1,&local_b38,&local_b70,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_b20[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


