/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe777c; name: FUN_00fe777c
 */


undefined8 FUN_00fe777c(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  string *psVar15;
  code *__maxlen;
  undefined *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  undefined1 *local_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  undefined8 local_760;
  undefined *puStack_758;
  long local_750;
  undefined4 local_748;
  long local_740;
  undefined4 local_738 [2];
  long alStack_730 [70];
  long alStack_500 [72];
  long alStack_2c0 [2];
  undefined8 local_2b0;
  code *local_2a8;
  ulong local_2a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b80c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b80c0), iVar8 != 0)) {
    local_2a0 = 0;
    local_2a8 = (code *)0x0;
    local_2b0 = (char *)0x2e6c6f7308;
    if (((DAT_043b8028 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8028), iVar8 != 0)) {
      FUN_00feb930();
      FUN_00100250(PTR__string_04379718,&DAT_043b8010,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b8028);
    }
    puVar16 = DAT_043b8020;
    if ((DAT_043b8010 & 1) == 0) {
      puVar16 = &DAT_043b8011;
    }
    pcVar25 = (char *)std::string::append((char *)&local_2b0,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b80a8,psVar15);
    uVar28 = local_2a0;
    plVar27 = DAT_043f1798;
    if ((((ulong)local_2b0 & 1) != 0) && (local_2a0 != 0)) {
      lVar12 = tpidr_el0;
      plVar24 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar24 = plVar27;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar24,uVar28,0,8);
          goto LAB_00fe897c;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,uVar28,0,8);
    }
LAB_00fe897c:
    FUN_00100250(PTR__string_04379718,&DAT_043b80a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b80c0);
  }
  std::string::string((string *)&local_2b0,(string *)&DAT_043b80a8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b80a0);
  pcVar18 = (code *)((ulong)local_2b0 >> 1 & 0x7f);
  if (((ulong)local_2b0 & 1) != 0) {
    pcVar18 = local_2a8;
  }
  std::string::append((ulong)&local_2b0,(char)iVar8);
  if (((ulong)local_2b0 & 1) == 0) {
    uVar28 = (long)&local_2b0 + 1;
    __maxlen = (code *)((ulong)local_2b0 >> 1 & 0x7f);
  }
  else {
    __maxlen = local_2a8;
    uVar28 = local_2a0;
  }
  iVar8 = snprintf((char *)(pcVar18 + (uVar28 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043b80a0);
  DAT_043b80a0 = DAT_043b80a0 + 1;
  FUN_00fec9e0(iVar8);
  puVar16 = DAT_043b80d8;
  if ((DAT_043b80c8 & 1) == 0) {
    puVar16 = &DAT_043b80c9;
  }
  if (((ulong)local_2b0 & 1) == 0) {
    uVar28 = (ulong)&local_2b0 | 1;
  }
  else {
    uVar28 = local_2a0;
  }
  if (((DAT_043b80f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b80f0), iVar8 != 0)) {
    DAT_043b80e8 = 0xd0;
    __cxa_guard_release(&DAT_043b80f0);
  }
  if (((DAT_043b8100 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8100), iVar8 != 0)) {
    DAT_043b80f8 = 0xd7;
    __cxa_guard_release(&DAT_043b8100);
  }
  uVar21 = DAT_043b80e8;
  lVar12 = FUN_00153520(param_2,DAT_043b80e8);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd0)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043b80f8;
    lVar12 = FUN_00153520(param_2,DAT_043b80f8);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd0)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fecc70();
      puVar2 = DAT_043b8118;
      if ((DAT_043b8108 & 1) == 0) {
        puVar2 = &DAT_043b8109;
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
  lVar22 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar22;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar6 = 0;
      if (uVar23 != 0) {
        uVar6 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar6 * uVar23;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar3;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_041ef110;
  *(undefined1 *)(puVar19 + 0xb) = uVar5;
  uVar17 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar17;
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar19[0x11] = uVar4;
  puVar19[0xe] = uVar17;
  puVar19[0xf] = uVar3;
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar19[0x15] = uVar4;
  puVar19[0x12] = uVar17;
  puVar19[0x13] = uVar3;
  uVar17 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_1 + 200);
  puVar19[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar19[0x19] = uVar4;
  puVar19[0x16] = uVar17;
  puVar19[0x17] = uVar3;
  iVar8 = FUN_00154450(param_2,uVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00fecc30,0);
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
  uVar28 = local_2a0;
  plVar27 = DAT_043f1798;
  if ((((ulong)local_2b0 & 1) != 0) && (local_2a0 != 0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar27;
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
        FUN_02bcc824(plVar24,uVar28,0,8);
        goto LAB_00fe7af4;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,uVar28,0,8);
  }
LAB_00fe7af4:
  memset(&local_2b0,0,0x240);
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
  lVar26 = 0;
  uVar28 = 0;
  pcVar18 = FUN_00fec2b4;
  if (uVar10 != 0) {
    pcVar18 = (code *)&LAB_00fec134;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar21 = 0;
            *(code **)(lVar12 + 0x80) = pcVar18;
            goto LAB_00fe7cfc;
          }
          *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      uVar21 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
      goto LAB_00fe7cfc;
    }
    uVar28 = uVar28 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar28 != 0x20);
  uVar21 = 1;
  local_2b0 = pcVar25;
  local_2a8 = pcVar18;
LAB_00fe7cfc:
  pcVar25 = *(char **)(lVar12 + 0x68);
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
  lVar26 = 0;
  uVar28 = 0;
  pcVar18 = FUN_00fec4f8;
  if (uVar10 != 0) {
    pcVar18 = FUN_00fec388;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x80) = pcVar18;
            goto LAB_00fe7e3c;
          }
          *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
      goto LAB_00fe7e3c;
    }
    uVar28 = uVar28 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar28 != 0x20);
  alStack_2c0[uVar21 * 2 + 2] = (long)pcVar25;
  (&local_2a8)[uVar21 * 2] = pcVar18;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_00fe7e3c:
  pcVar25 = *(char **)(lVar12 + 0x70);
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
  lVar26 = 0;
  uVar28 = 0;
  pcVar18 = FUN_00fec6b8;
  if (uVar10 != 0) {
    pcVar18 = FUN_00fec550;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x80) = pcVar18;
            goto LAB_00fe7f7c;
          }
          *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
      goto LAB_00fe7f7c;
    }
    uVar28 = uVar28 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar28 != 0x20);
  alStack_2c0[uVar21 * 2 + 2] = (long)pcVar25;
  (&local_2a8)[uVar21 * 2] = pcVar18;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_00fe7f7c:
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
  lVar26 = 0;
  uVar28 = 0;
  pcVar18 = FUN_00fec770;
  if (uVar10 != 0) {
    pcVar18 = FUN_00fec710;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x80) = pcVar18;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 200);
        goto joined_r0x00fe8060;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 200) = *(ulong *)(lVar12 + 200) | 1L << (uVar28 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 200);
      goto joined_r0x00fe8060;
    }
    uVar28 = uVar28 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar28 != 0x20);
  alStack_2c0[uVar21 * 2 + 2] = (long)pcVar25;
  (&local_2a8)[uVar21 * 2] = pcVar18;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 200);
  uVar21 = (ulong)((int)uVar21 + 1);
joined_r0x00fe8060:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 200);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 200);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar14 = FUN_008cca50();
    lVar26 = lVar14 + 0x181;
    if ((*(byte *)(lVar14 + 0x180) & 1) != 0) {
      lVar26 = *(long *)(lVar14 + 400);
    }
    alStack_2c0[uVar21 * 2 + 2] = lVar26;
    (&local_2a8)[uVar21 * 2] = (code *)&LAB_00fed4b0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 200);
    uVar21 = (ulong)((int)uVar21 + 1);
  }
  uVar28 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar14 = FUN_008cca50();
    uVar28 = (ulong)((int)uVar21 + 1);
    lVar26 = lVar14 + 0x289;
    if ((*(byte *)(lVar14 + 0x288) & 1) != 0) {
      lVar26 = *(long *)(lVar14 + 0x298);
    }
    alStack_2c0[uVar21 * 2 + 2] = lVar26;
    (&local_2a8)[uVar21 * 2] = (code *)&LAB_00fed4a0;
  }
  uVar21 = uVar28;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar14 = FUN_008cca50();
    lVar26 = lVar14 + 0x1c9;
    if ((*(byte *)(lVar14 + 0x1c8) & 1) != 0) {
      lVar26 = *(long *)(lVar14 + 0x1d8);
    }
    pcVar18 = *(code **)(lVar12 + 0x80);
    uVar21 = (ulong)((int)uVar28 + 1);
    alStack_2c0[uVar28 * 2 + 2] = lVar26;
    (&local_2a8)[uVar28 * 2] = pcVar18;
  }
  alStack_2c0[uVar21 * 2 + 2] = 0;
  (&local_2a8)[uVar21 * 2] = (code *)0x0;
  memcpy(alStack_500 + 2,&local_2b0,0x240);
  memcpy(alStack_730,&local_2b0,0x240);
  lVar26 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (char *)alStack_2c0[lVar14 * 2 + 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    alStack_500[lVar14 * 2 + 2] = 0;
    alStack_500[lVar14 * 2 + 3] = 0;
  }
  alStack_730[lVar14 * 2] = alStack_2c0[lVar14 * 2 + 2];
  alStack_730[lVar14 * 2 + 1] = (long)FUN_00fec7d0;
  FUN_00151fe0(param_2,0,2);
  local_738[0] = FUN_0014feb0(param_2,0xffffffff);
  local_740 = param_2;
  if (((DAT_043b8028 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8028), iVar8 != 0)) {
    FUN_00feb930();
    FUN_00100250(PTR__string_04379718,&DAT_043b8010,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8028);
  }
  uVar9 = local_738[0];
  if ((DAT_043b8010 & 1) == 0) {
    uVar28 = (ulong)(DAT_043b8010 >> 1);
    puVar16 = &DAT_043b8011;
  }
  else {
    uVar28 = DAT_043b8018;
    puVar16 = DAT_043b8020;
  }
  FUN_001514f0(param_2,puVar16,uVar28);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,FUN_00fec820,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      plVar27 = alStack_730;
      FUN_00fe9bb8();
      pbVar20 = &DAT_043b7f78;
      puVar16 = &DAT_043b7f79;
      puVar19 = &DAT_043b7f88;
    }
    else if (lVar26 == 0) {
      plVar27 = alStack_500 + 2;
      FUN_00fe99c4();
      puVar16 = &DAT_043b7f01;
      puVar19 = &DAT_043b7f10;
      pbVar20 = &DAT_043b7f00;
    }
    else {
      plVar27 = &local_2b0;
      FUN_00fe9dac();
      puVar16 = &DAT_043b7ff1;
      puVar19 = &DAT_043b8000;
      pbVar20 = &DAT_043b7ff0;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_748 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_750 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,plVar27,2);
    uVar9 = local_748;
    if (*(long *)(lVar12 + 0xb0) == 0) {
      lVar14 = *(long *)(lVar12 + 0xb8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xb8);
      uVar9 = local_748;
    }
    local_748 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_748;
    uVar17 = *(undefined8 *)(lVar12 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_748;
    uVar17 = *(undefined8 *)(lVar12 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
    }
    else {
      local_780 = &LAB_00fec910;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec870(param_2,1,&local_780,local_748);
      local_780 = &LAB_00fec914;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec870(param_2,2,&local_780,local_748);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar9);
    if (*(undefined1 **)(lVar12 + 0x88) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xc0) == '\0') goto LAB_00fe8430;
LAB_00fe871c:
      local_780 = &LAB_00fec910;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec870(param_2,1,&local_780,uVar9);
      local_780 = &LAB_00fec914;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec870(param_2,2,&local_780,uVar9);
      if (param_2 == 0) goto LAB_00fe876c;
LAB_00fe8438:
      uVar11 = local_748;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar12 + 0x88);
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec870(param_2,4,&local_780,uVar9);
      if (*(char *)(lVar12 + 0xc0) != '\0') goto LAB_00fe871c;
LAB_00fe8430:
      if (param_2 != 0) goto LAB_00fe8438;
LAB_00fe876c:
      uVar11 = local_748;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_750,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_00fe9fec();
      puVar16 = DAT_043b8078;
      if ((DAT_043b8068 & 1) == 0) {
        puVar16 = &DAT_043b8069;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar11);
      local_780 = *(undefined1 **)(lVar12 + 0x88);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar12;
        lStack_768 = lVar22;
        FUN_00fec870(param_2,4,&local_780,uVar11);
      }
      local_780 = &LAB_00fec9d8;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788d8;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec920(param_2,1,&local_780,uVar11);
      local_780 = &LAB_00fec9dc;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788d8;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00fec920(param_2,2,&local_780,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


