/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01017aa8; name: FUN_01017aa8
 */


void FUN_01017aa8(long param_1,long param_2)

{
  ulong *puVar1;
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
  size_t sVar15;
  byte *pbVar16;
  string *psVar17;
  long lVar18;
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
  undefined1 *local_b70;
  undefined8 uStack_b68;
  long local_b60;
  long lStack_b58;
  undefined8 local_b50;
  undefined *puStack_b48;
  long local_b40;
  undefined4 local_b38;
  long local_b30;
  undefined4 local_b28 [2];
  string asStack_b20 [896];
  undefined8 auStack_7a0 [2];
  string local_790;
  undefined1 auStack_78f [7];
  size_t local_788;
  undefined1 *local_780;
  char *apcStack_410 [2];
  char *local_400;
  code *local_3f8;
  long local_3f0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b87e8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b87e8), iVar8 != 0)) {
    local_3f0 = 0;
    local_3f8 = (code *)0x0;
    local_400 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437c6a8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437c6a8);
      puVar2 = PTR_DAT_0437c6b0;
      if (iVar8 != 0) {
        FUN_00ea05c0(PTR_DAT_0437c6b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c6a8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437c6b0 + 0x10);
    if ((*PTR_DAT_0437c6b0 & 1) == 0) {
      puVar2 = PTR_DAT_0437c6b0 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_400,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b87d0,psVar17);
    lVar12 = local_3f0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_400 & 1) != 0) && (local_3f0 != 0)) {
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
          goto LAB_0101a724;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0101a724:
    FUN_00100250(PTR__string_04379718,&DAT_043b87d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b87e8);
  }
  std::string::string(&local_790,(string *)&DAT_043b87d0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b87c8);
  if (((byte)local_790 & 1) == 0) {
    uVar23 = (ulong)((byte)local_790 >> 1);
  }
  else {
    uVar23 = local_788;
  }
  std::string::append((ulong)&local_790,(char)iVar8);
  if (((byte)local_790 & 1) == 0) {
    puVar28 = auStack_78f;
    local_788 = (size_t)((byte)local_790 >> 1);
  }
  else {
    puVar28 = local_780;
  }
  snprintf(puVar28 + (uVar23 - 1),local_788,"%d",(ulong)DAT_043b87c8);
  DAT_043b87c8 = DAT_043b87c8 + 1;
  if (((DAT_043b8808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8808), iVar8 != 0)) {
    local_3f0 = 0;
    local_3f8 = (code *)0x0;
    local_400 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437c6a8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437c6a8);
      puVar2 = PTR_DAT_0437c6b0;
      if (iVar8 != 0) {
        FUN_00ea05c0(PTR_DAT_0437c6b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c6a8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437c6b0 + 0x10);
    if ((*PTR_DAT_0437c6b0 & 1) == 0) {
      puVar2 = PTR_DAT_0437c6b0 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_400,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b87f0,psVar17);
    lVar12 = local_3f0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_400 & 1) != 0) && (local_3f0 != 0)) {
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
          goto LAB_0101a894;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0101a894:
    FUN_00100250(PTR__string_04379718,&DAT_043b87f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8808);
  }
  puVar2 = DAT_043b8800;
  if ((DAT_043b87f0 & 1) == 0) {
    puVar2 = &DAT_043b87f1;
  }
  if (((byte)local_790 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_790 | 1);
  }
  else {
    puVar28 = local_780;
  }
  if (((DAT_043b8818 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8818), iVar8 != 0)) {
    DAT_043b8810 = 0x268;
    __cxa_guard_release(&DAT_043b8818);
  }
  if (((DAT_043b8828 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8828), iVar8 != 0)) {
    DAT_043b8820 = 0x26f;
    __cxa_guard_release(&DAT_043b8828);
  }
  uVar23 = DAT_043b8810;
  lVar12 = FUN_00153520(param_1,DAT_043b8810);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x268)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043b8820;
    lVar12 = FUN_00153520(param_1,DAT_043b8820);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x268)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0101af40();
      puVar3 = DAT_043b8840;
      if ((DAT_043b8830 & 1) == 0) {
        puVar3 = &DAT_043b8831;
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
  *puVar19 = &PTR_FUN_041ef2a0;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x208);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_0101af00,0);
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
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_790 & 1) != 0) && (local_780 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_780,0,8);
        goto LAB_01017e0c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_780,0,8);
  }
LAB_01017e0c:
  memset(&local_400,0,0x390);
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
  pcVar21 = FUN_010158e4;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_010157c8;
  }
  puVar1 = (ulong *)(lVar12 + 0x260);
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_0101801c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_0101801c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_400 = pcVar27;
  local_3f8 = pcVar21;
LAB_0101801c:
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
  pcVar21 = (code *)&LAB_01015a48;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01015a10;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018164;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018164;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018164:
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
  pcVar21 = (code *)&LAB_01015ac8;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01015a90;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010182a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010182a8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010182a8:
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
  pcVar21 = FUN_01015c14;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01015b10;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010183ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010183ec;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010183ec:
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
  pcVar21 = (code *)&LAB_01015d60;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01015d28;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018530;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018530;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018530:
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
  pcVar21 = (code *)&LAB_01015de0;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01015da8;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018674;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018674;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018674:
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
  pcVar21 = (code *)&LAB_01015f44;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01015e28;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010187b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010187b8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010187b8:
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
  pcVar21 = (code *)&LAB_0101617c;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01016090;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010188fc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010188fc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010188fc:
  pcVar27 = *(char **)(lVar12 + 0x120);
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
  pcVar21 = FUN_01016444;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01016298;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018a40;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018a40;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018a40:
  pcVar27 = *(char **)(lVar12 + 0x138);
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
  pcVar21 = FUN_010167a0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101653c;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018b84;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018b84;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018b84:
  pcVar27 = *(char **)(lVar12 + 0x150);
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
  pcVar21 = (code *)&LAB_010168d0;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01016898;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018cc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018cc8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018cc8:
  pcVar27 = *(char **)(lVar12 + 0x168);
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
  pcVar21 = FUN_01016960;
  if (uVar10 != 0) {
    pcVar21 = FUN_01016918;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018e0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018e0c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018e0c:
  pcVar27 = *(char **)(lVar12 + 0x180);
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
  pcVar21 = FUN_01016ad8;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_010169a8;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01018f50;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01018f50;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01018f50:
  pcVar27 = *(char **)(lVar12 + 400);
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
  pcVar21 = FUN_01016b68;
  if (uVar10 != 0) {
    pcVar21 = FUN_01016b20;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01019094;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01019094;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01019094:
  pcVar27 = *(char **)(lVar12 + 0x1a0);
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
  pcVar21 = FUN_01016e2c;
  if (uVar10 != 0) {
    pcVar21 = FUN_01016bb0;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010191d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010191d8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010191d8:
  pcVar27 = *(char **)(lVar12 + 0x1b0);
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
  pcVar21 = FUN_01016ebc;
  if (uVar10 != 0) {
    pcVar21 = FUN_01016e74;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_0101931c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_0101931c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0101931c:
  pcVar27 = *(char **)(lVar12 + 0x1c0);
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
  pcVar21 = FUN_01016f4c;
  if (uVar10 != 0) {
    pcVar21 = FUN_01016f04;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01019460;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01019460;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01019460:
  pcVar27 = *(char **)(lVar12 + 0x1d0);
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
  pcVar21 = FUN_0101718c;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01016f94;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010195a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010195a4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010195a4:
  pcVar27 = *(char **)(lVar12 + 0x1e0);
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
  pcVar21 = FUN_01017294;
  if (uVar10 != 0) {
    pcVar21 = FUN_01017228;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_010196e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_010196e8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010196e8:
  pcVar27 = *(char **)(lVar12 + 0x1e8);
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
  pcVar21 = FUN_01017388;
  if (uVar10 != 0) {
    pcVar21 = FUN_01017314;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_0101982c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_0101982c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0101982c:
  pcVar27 = *(char **)(lVar12 + 0x1f0);
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
  pcVar21 = FUN_01017498;
  if (uVar10 != 0) {
    pcVar21 = FUN_01017410;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01019970;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01019970;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01019970:
  pcVar27 = *(char **)(lVar12 + 0x1f8);
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
  pcVar21 = FUN_01017594;
  if (uVar10 != 0) {
    pcVar21 = FUN_01017520;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01019ab4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01019ab4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01019ab4:
  pcVar27 = *(char **)(lVar12 + 0x200);
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
  pcVar21 = FUN_01017690;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101761c;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01019bf8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01019bf8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01019bf8:
  pcVar27 = *(char **)(lVar12 + 0x208);
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
  pcVar21 = (code *)&LAB_0101788c;
  if (uVar10 != 0) {
    pcVar21 = FUN_01017718;
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
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x218) = pcVar21;
            goto LAB_01019d0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      goto LAB_01019d0c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01019d0c:
  pcVar27 = *(char **)(lVar12 + 0x210);
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
  pcVar21 = (code *)&LAB_01017a60;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01017a28;
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
        *(code **)(lVar12 + 0x218) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x01019df4;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x260) = *(ulong *)(lVar12 + 0x260) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x01019df4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar10 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x01019df4:
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
    (&local_400)[uVar25 * 2] = pcVar27;
    (&local_3f8)[uVar25 * 2] = (code *)PTR_LAB_0437c6f8;
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
    (&local_400)[uVar23 * 2] = pcVar27;
    (&local_3f8)[uVar23 * 2] = (code *)PTR_LAB_0437c700;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar12 + 0x218) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar12 + 0x218);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_400)[uVar25 * 2] = pcVar27;
    (&local_3f8)[uVar25 * 2] = pcVar21;
  }
  (&local_400)[uVar23 * 2] = (char *)0x0;
  (&local_3f8)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_790,&local_400,0x390);
  memcpy(asStack_b20,&local_400,0x390);
  lVar24 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar27 = (&local_400)[lVar14 * 2];
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
    auStack_7a0[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_78f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_b20 + lVar14 * 0x10) = (&local_400)[lVar14 * 2];
  *(undefined1 **)(asStack_b20 + (lVar14 * 2 + 1) * 8) = &LAB_0101ad40;
  FUN_00151fe0(param_1,0,2);
  local_b28[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b30 = param_1;
  if ((*PTR_DAT_0437c6a8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437c6a8);
    puVar2 = PTR_DAT_0437c6b0;
    if (iVar8 != 0) {
      FUN_00ea05c0(PTR_DAT_0437c6b0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437c6a8);
    }
  }
  uVar9 = local_b28[0];
  uVar23 = *(ulong *)(PTR_DAT_0437c6b0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437c6b0 + 0x10);
  if ((*PTR_DAT_0437c6b0 & 1) == 0) {
    puVar2 = PTR_DAT_0437c6b0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437c6b0 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,PTR_LAB_0437c6e0,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_b20;
      pbVar16 = (byte *)FUN_00ea1c1c();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_790;
      pbVar16 = (byte *)FUN_00ea1364();
    }
    else {
      psVar17 = (string *)&local_400;
      pbVar16 = (byte *)FUN_00e9ffa0();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b38 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    local_b40 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b70,&local_b30,local_b38);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,psVar17,2);
    uVar9 = local_b38;
    if (*(long *)(lVar12 + 0x248) == 0) {
      lVar14 = *(long *)(lVar12 + 0x250);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x250);
      uVar9 = local_b38;
    }
    local_b38 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_b38;
    uVar20 = *(undefined8 *)(lVar12 + 0x228);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_b38;
    uVar20 = *(undefined8 *)(lVar12 + 0x230);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b70,&local_b40,local_b38);
    }
    else {
      local_b70 = &LAB_0101ae30;
      uStack_b68 = 0;
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ad90(param_1,1,&local_b70,local_b38);
      local_b70 = &LAB_0101ae34;
      uStack_b68 = 0;
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ad90(param_1,2,&local_b70,local_b38);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b70,&local_b30,uVar9);
    if (*(undefined1 **)(lVar12 + 0x220) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 600) != '\0') goto LAB_0101a48c;
LAB_0101a190:
      if (param_1 == 0) goto LAB_0101a4e0;
LAB_0101a198:
      uVar11 = local_b38;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_b68 = 0;
      local_b70 = *(undefined1 **)(lVar12 + 0x220);
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ad90(param_1,4,&local_b70,uVar9);
      if (*(char *)(lVar12 + 600) == '\0') goto LAB_0101a190;
LAB_0101a48c:
      local_b70 = &LAB_0101ae30;
      uStack_b68 = 0;
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ad90(param_1,1,&local_b70,uVar9);
      local_b70 = &LAB_0101ae34;
      uStack_b68 = 0;
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ad90(param_1,2,&local_b70,uVar9);
      if (param_1 != 0) goto LAB_0101a198;
LAB_0101a4e0:
      uVar11 = local_b38;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b40,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_01015504();
      puVar2 = DAT_043b87b8;
      if ((DAT_043b87a8 & 1) == 0) {
        puVar2 = &DAT_043b87a9;
      }
      FUN_00154450(param_1,puVar2);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_b70._0_4_ = 0x1e;
      FUN_008fe304(&local_b40,param_1,&local_b70,&local_b30,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_400,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
      FUN_008fe304(&local_b40,param_1,&local_b70,&local_b30,uVar11);
      local_b70 = *(undefined1 **)(lVar12 + 0x220);
      if (local_b70 != (undefined1 *)0x0) {
        uStack_b68 = 0;
        local_b60 = lVar12;
        lStack_b58 = lVar18;
        FUN_0101ad90(param_1,4,&local_b70,uVar11);
      }
      local_b70 = &LAB_0101aef8;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a788e0;
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ae40(param_1,1,&local_b70,uVar11);
      local_b70 = &LAB_0101aefc;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a788e0;
      local_b60 = lVar12;
      lStack_b58 = lVar18;
      FUN_0101ae40(param_1,2,&local_b70,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_b28[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


