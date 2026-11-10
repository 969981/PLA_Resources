/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020c17ec; name: FUN_020c17ec
 */


void FUN_020c17ec(long param_1,long param_2)

{
  ulong *puVar1;
  code *__maxlen;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  size_t sVar16;
  string *psVar17;
  long lVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined8 uVar21;
  code *pcVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  long *plVar29;
  undefined1 *local_1320;
  undefined8 uStack_1318;
  long local_1310;
  long lStack_1308;
  undefined8 local_1300;
  undefined *puStack_12f8;
  long local_12f0;
  undefined4 local_12e8;
  long local_12e0;
  undefined4 local_12d8 [2];
  long alStack_12d0 [194];
  long alStack_cc0 [196];
  long alStack_6a0 [2];
  undefined8 local_690;
  code *local_688;
  ulong local_680;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d96a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d96a0), iVar7 != 0)) {
    local_680 = 0;
    local_688 = (code *)0x0;
    local_690 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04384780 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04384780);
      puVar4 = PTR_DAT_04384788;
      if (iVar7 != 0) {
        FUN_020bd280(PTR_DAT_04384788);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384780);
      }
    }
    pcVar28 = (char *)FUN_020bc650(&local_690,PTR_DAT_04384788);
    psVar17 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043d9688,psVar17);
    uVar26 = local_680;
    plVar29 = DAT_043f1798;
    if ((((ulong)local_690 & 1) != 0) && (local_680 != 0)) {
      lVar13 = tpidr_el0;
      plVar27 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar27 = plVar29;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar27,uVar26,0,8);
          goto LAB_020c7838;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,uVar26,0,8);
    }
LAB_020c7838:
    FUN_00100250(PTR__string_04379718,&DAT_043d9688,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d96a0);
  }
  std::string::string((string *)&local_690,(string *)&DAT_043d9688);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d9680);
  if (((ulong)local_690 & 1) == 0) {
    pcVar22 = (code *)((ulong)local_690 >> 1 & 0x7f);
  }
  else {
    pcVar22 = local_688;
  }
  std::string::append((ulong)&local_690,(char)iVar7);
  bVar6 = ((ulong)local_690 & 1) == 0;
  uVar26 = local_680;
  if (bVar6) {
    uVar26 = (long)&local_690 + 1;
  }
  __maxlen = (code *)((ulong)local_690 >> 1 & 0x7f);
  if (!bVar6) {
    __maxlen = local_688;
  }
  iVar7 = snprintf((char *)(pcVar22 + (uVar26 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043d9680);
  DAT_043d9680 = DAT_043d9680 + 1;
  pbVar12 = (byte *)FUN_020c8210(iVar7);
  pbVar20 = *(byte **)(pbVar12 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    pbVar20 = pbVar12 + 1;
  }
  if (((ulong)local_690 & 1) == 0) {
    uVar26 = (ulong)&local_690 | 1;
  }
  else {
    uVar26 = local_680;
  }
  if (((DAT_043d96d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d96d0), iVar7 != 0)) {
    DAT_043d96c8 = 0x6a0;
    __cxa_guard_release(&DAT_043d96d0);
  }
  if (((DAT_043d96e0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d96e0), iVar7 != 0)) {
    DAT_043d96d8 = 0x6a7;
    __cxa_guard_release(&DAT_043d96e0);
  }
  uVar23 = DAT_043d96c8;
  lVar13 = FUN_00153520(param_1,DAT_043d96c8);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x6a0)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043d96d8;
    lVar13 = FUN_00153520(param_1,DAT_043d96d8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x6a0)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_020c84a0();
      puVar2 = DAT_043d96f8;
      if ((DAT_043d96e8 & 1) == 0) {
        puVar2 = &DAT_043d96e9;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar2);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar21;
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
  uVar21 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar21;
  puVar19[7] = uVar3;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_LAB_0425b3f8;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x640);
  iVar7 = FUN_00154450(param_1,uVar26);
  if (iVar7 != 0) {
    FUN_001516f0(param_1,&LAB_020c8460,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar8 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar8);
  }
  FUN_001522a0(param_1,pbVar20);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,pbVar20);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  uVar26 = local_680;
  plVar29 = DAT_043f1798;
  if ((((ulong)local_690 & 1) != 0) && (local_680 != 0)) {
    lVar24 = tpidr_el0;
    plVar27 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar27 = plVar29;
    }
    uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar27,uVar26,0,8);
        goto LAB_020c1b4c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,uVar26,0,8);
  }
LAB_020c1b4c:
  memset(&local_690,0,0x620);
  pcVar28 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar18 = lVar13 + 8;
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bd854;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bd68c;
  }
  puVar1 = (ulong *)(lVar13 + 0x698);
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c1d6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c1d6c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  uVar23 = 1;
  local_690 = pcVar28;
  local_688 = pcVar22;
LAB_020c1d6c:
  pcVar28 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bdab0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bd964;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c1eb0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c1eb0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c1eb0:
  pcVar28 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bdcc4;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bdb9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c1ff4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c1ff4;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c1ff4:
  pcVar28 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bde34;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bddec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2138;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2138;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2138:
  pcVar28 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bdec4;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bde7c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c227c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c227c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c227c:
  pcVar28 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bdf54;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bdf0c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c23c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c23c0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c23c0:
  pcVar28 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bdfe4;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bdf9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2504;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2504;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2504:
  pcVar28 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be074;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be02c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2648;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2648;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2648:
  pcVar28 = *(char **)(lVar13 + 0x120);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be104;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be0bc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c278c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c278c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c278c:
  pcVar28 = *(char **)(lVar13 + 0x138);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be194;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be14c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c28d0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c28d0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c28d0:
  pcVar28 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be324;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be1dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2a14;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2a14;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2a14:
  pcVar28 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be524;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be410;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2b58;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2b58;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2b58:
  pcVar28 = *(char **)(lVar13 + 0x180);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be680;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be638;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2c9c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2c9c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2c9c:
  pcVar28 = *(char **)(lVar13 + 0x198);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be710;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be6c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2de0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2de0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2de0:
  pcVar28 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020be790;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020be758;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c2f24;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c2f24;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c2f24:
  pcVar28 = *(char **)(lVar13 + 0x1c8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be820;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be7d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3068;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3068;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3068:
  pcVar28 = *(char **)(lVar13 + 0x1e0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be8b0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be868;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c31ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c31ac;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c31ac:
  pcVar28 = *(char **)(lVar13 + 0x1f8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020be930;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020be8f8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c32f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c32f0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c32f0:
  pcVar28 = *(char **)(lVar13 + 0x210);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020be9c0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020be978;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3434;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3434;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3434:
  pcVar28 = *(char **)(lVar13 + 0x228);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bea50;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bea08;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3578;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3578;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3578:
  pcVar28 = *(char **)(lVar13 + 0x240);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020beae0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bea98;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c36bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c36bc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c36bc:
  pcVar28 = *(char **)(lVar13 + 600);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020beb70;
  if (uVar9 != 0) {
    pcVar22 = FUN_020beb28;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3800;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3800;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3800:
  pcVar28 = *(char **)(lVar13 + 0x270);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bec00;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bebb8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3944;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3944;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3944:
  pcVar28 = *(char **)(lVar13 + 0x288);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bec80;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bec48;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3a88;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3a88;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3a88:
  pcVar28 = *(char **)(lVar13 + 0x2a0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bed10;
  if (uVar9 != 0) {
    pcVar22 = FUN_020becc8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3bcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3bcc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3bcc:
  pcVar28 = *(char **)(lVar13 + 0x2b8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020beda0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bed58;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3d10;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3d10;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3d10:
  pcVar28 = *(char **)(lVar13 + 0x2d0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bee30;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bede8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3e54;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3e54;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3e54:
  pcVar28 = *(char **)(lVar13 + 0x2e8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020beec0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bee78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c3f98;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c3f98;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c3f98:
  pcVar28 = *(char **)(lVar13 + 0x300);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bef50;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bef08;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c40dc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c40dc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c40dc:
  pcVar28 = *(char **)(lVar13 + 0x318);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020befe0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bef98;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4220;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4220;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c4220:
  pcVar28 = *(char **)(lVar13 + 0x330);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bf070;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf028;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4364;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4364;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020c4364:
  iVar7 = (int)uVar23;
  pcVar28 = *(char **)(lVar13 + 0x348);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bf100;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf0b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c44a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c44a8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  iVar7 = iVar7 + 1;
  alStack_6a0[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_688)[uVar23 * 2] = pcVar22;
LAB_020c44a8:
  pcVar28 = *(char **)(lVar13 + 0x360);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf180;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf148;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c45ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c45ec;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c45ec:
  pcVar28 = *(char **)(lVar13 + 0x378);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf200;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf1c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4730;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4730;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c4730:
  pcVar28 = *(char **)(lVar13 + 0x390);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bf290;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf248;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4874;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4874;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c4874:
  pcVar28 = *(char **)(lVar13 + 0x3a8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf310;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf2d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c49b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c49b8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c49b8:
  pcVar28 = *(char **)(lVar13 + 0x3c0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf390;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf358;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4afc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4afc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c4afc:
  pcVar28 = *(char **)(lVar13 + 0x3d8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bf420;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf3d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4c40;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4c40;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c4c40:
  pcVar28 = *(char **)(lVar13 + 0x3f0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bf5bc;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf468;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4d84;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4d84;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c4d84:
  pcVar28 = *(char **)(lVar13 + 0x408);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bf6f0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf6a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c4ec8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c4ec8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c4ec8:
  pcVar28 = *(char **)(lVar13 + 0x420);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf770;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf738;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c500c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c500c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c500c:
  pcVar28 = *(char **)(lVar13 + 0x438);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf7f0;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf7b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5150;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5150;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5150:
  pcVar28 = *(char **)(lVar13 + 0x450);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bf870;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bf838;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5294;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5294;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5294:
  pcVar28 = *(char **)(lVar13 + 0x468);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bfac4;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bf8b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c53d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c53d8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c53d8:
  pcVar28 = *(char **)(lVar13 + 0x480);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bfbf8;
  if (uVar9 != 0) {
    pcVar22 = FUN_020bfbb0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c551c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c551c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c551c:
  pcVar28 = *(char **)(lVar13 + 0x498);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bfc78;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bfc40;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5660;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5660;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5660:
  pcVar28 = *(char **)(lVar13 + 0x4b0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020bff50;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bfcc0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c57a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c57a4;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c57a4:
  pcVar28 = *(char **)(lVar13 + 0x4b8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020bffdc;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020bff94;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c58e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c58e8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c58e8:
  pcVar28 = *(char **)(lVar13 + 0x4d0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0530;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020c0024;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5a2c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5a2c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5a2c:
  pcVar28 = *(char **)(lVar13 + 0x4d8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c05d0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0588;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5b70;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5b70;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5b70:
  pcVar28 = *(char **)(lVar13 + 0x4f0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0660;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0618;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5cb4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5cb4;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5cb4:
  pcVar28 = *(char **)(lVar13 + 0x508);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c06f0;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c06a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5df8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5df8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5df8:
  pcVar28 = *(char **)(lVar13 + 0x520);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0780;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0738;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c5f3c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c5f3c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c5f3c:
  pcVar28 = *(char **)(lVar13 + 0x538);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0810;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c07c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6080;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6080;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6080:
  pcVar28 = *(char **)(lVar13 + 0x550);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c09cc;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0858;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c61c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c61c4;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c61c4:
  pcVar28 = *(char **)(lVar13 + 0x568);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0c2c;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0ab8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6308;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6308;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6308:
  pcVar28 = *(char **)(lVar13 + 0x580);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0e5c;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0d18;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c644c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c644c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c644c:
  pcVar28 = *(char **)(lVar13 + 0x598);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c0f90;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0f48;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6590;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6590;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6590:
  pcVar28 = *(char **)(lVar13 + 0x5b0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c1020;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c0fd8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c66d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c66d4;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c66d4:
  pcVar28 = *(char **)(lVar13 + 0x5c8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c1434;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c1068;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6818;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6818;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6818:
  pcVar28 = *(char **)(lVar13 + 0x5d0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c14d4;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c148c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c695c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c695c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c695c:
  pcVar28 = *(char **)(lVar13 + 0x5e8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020c1554;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020c151c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6aa0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6aa0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6aa0:
  pcVar28 = *(char **)(lVar13 + 0x600);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c15e4;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c159c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6be4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6be4;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6be4:
  pcVar28 = *(char **)(lVar13 + 0x618);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020c1664;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020c162c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6d28;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6d28;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6d28:
  pcVar28 = *(char **)(lVar13 + 0x630);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = (code *)&LAB_020c16e4;
  if (uVar9 != 0) {
    pcVar22 = (code *)&LAB_020c16ac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar13 + 0x650) = pcVar22;
            goto LAB_020c6e6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      goto LAB_020c6e6c;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
LAB_020c6e6c:
  pcVar28 = *(char **)(lVar13 + 0x648);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar6) {
    uVar9 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar22 = FUN_020c178c;
  if (uVar9 != 0) {
    pcVar22 = FUN_020c172c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar20 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar26;
      if (iVar10 == 0x13) {
        *(code **)(lVar13 + 0x650) = pcVar22;
        uVar9 = (uint)*puVar1;
        goto joined_r0x020c6f54;
      }
      if (iVar10 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x698) = *(ulong *)(lVar13 + 0x698) | 1L << (uVar26 & 0x3f);
      uVar9 = (uint)*puVar1;
      goto joined_r0x020c6f54;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  lVar24 = (long)iVar7;
  iVar7 = iVar7 + 1;
  alStack_6a0[lVar24 * 2 + 2] = (long)pcVar28;
  (&local_688)[lVar24 * 2] = pcVar22;
  uVar9 = (uint)*puVar1;
joined_r0x020c6f54:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar24 = lVar15 + 0x181;
    if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
      lVar24 = *(long *)(lVar15 + 400);
    }
    lVar15 = (long)iVar7;
    iVar7 = iVar7 + 1;
    alStack_6a0[lVar15 * 2 + 2] = lVar24;
    (&local_688)[lVar15 * 2] = (code *)PTR_LAB_043847f8;
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar24 = lVar15 + 0x289;
    if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
      lVar24 = *(long *)(lVar15 + 0x298);
    }
    lVar15 = (long)iVar7;
    iVar7 = iVar7 + 1;
    alStack_6a0[lVar15 * 2 + 2] = lVar24;
    (&local_688)[lVar15 * 2] = (code *)PTR_LAB_04384800;
  }
  if (*(long *)(lVar13 + 0x650) != 0) {
    lVar15 = FUN_008cca50();
    lVar24 = lVar15 + 0x1c9;
    if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
      lVar24 = *(long *)(lVar15 + 0x1d8);
    }
    pcVar22 = *(code **)(lVar13 + 0x650);
    lVar15 = (long)iVar7;
    iVar7 = iVar7 + 1;
    alStack_6a0[lVar15 * 2 + 2] = lVar24;
    (&local_688)[lVar15 * 2] = pcVar22;
  }
  alStack_6a0[(long)iVar7 * 2 + 2] = 0;
  (&local_688)[(long)iVar7 * 2] = (code *)0x0;
  memcpy(alStack_cc0 + 2,&local_690,0x620);
  memcpy(alStack_12d0,&local_690,0x620);
  lVar24 = FUN_008cca50();
  lVar15 = (long)iVar7 + -1;
  pcVar28 = (char *)alStack_6a0[lVar15 * 2 + 2];
  sVar16 = strlen(pcVar28);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) == 0) {
    sVar14 = (size_t)(*(byte *)(lVar24 + 0x1c8) >> 1);
  }
  else {
    sVar14 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar16 == sVar14) &&
     (iVar7 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar7 == 0)) {
    alStack_cc0[lVar15 * 2 + 2] = 0;
    alStack_cc0[lVar15 * 2 + 3] = 0;
  }
  alStack_12d0[lVar15 * 2] = alStack_6a0[lVar15 * 2 + 2];
  alStack_12d0[lVar15 * 2 + 1] = (long)&LAB_020c8000;
  FUN_00151fe0(param_1,0,2);
  local_12d8[0] = FUN_0014feb0(param_1,0xffffffff);
  local_12e0 = param_1;
  if ((*PTR_DAT_04384780 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04384780);
    puVar4 = PTR_DAT_04384788;
    if (iVar7 != 0) {
      FUN_020bd280(PTR_DAT_04384788);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384780);
    }
  }
  uVar8 = local_12d8[0];
  uVar26 = *(ulong *)(PTR_DAT_04384788 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04384788 + 0x10);
  if ((*PTR_DAT_04384788 & 1) == 0) {
    puVar4 = PTR_DAT_04384788 + 1;
    uVar26 = (ulong)((byte)*PTR_DAT_04384788 >> 1);
  }
  FUN_001514f0(param_1,puVar4,uVar26);
  FUN_00152550(param_1,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_020c8050,0);
  FUN_00152550(param_1,uVar8,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      plVar29 = alStack_12d0;
      pbVar20 = (byte *)FUN_020bb9fc();
    }
    else if (lVar24 == 0) {
      plVar29 = alStack_cc0 + 2;
      pbVar20 = (byte *)FUN_020bb81c();
    }
    else {
      plVar29 = &local_690;
      pbVar20 = (byte *)FUN_020bbbdc();
    }
    pbVar12 = *(byte **)(pbVar20 + 0x10);
    if ((*pbVar20 & 1) == 0) {
      pbVar12 = pbVar20 + 1;
    }
    FUN_00154450(param_1,pbVar12);
    local_12e8 = FUN_0014feb0(param_1,0xffffffff);
    local_1320 = (undefined1 *)CONCAT44(local_1320._4_4_,0x1e);
    local_12f0 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_1320,&local_12e0,local_12e8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,plVar29,2);
    uVar8 = local_12e8;
    if (*(long *)(lVar13 + 0x680) == 0) {
      lVar15 = *(long *)(lVar13 + 0x688);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar8,"class_check");
      lVar15 = *(long *)(lVar13 + 0x688);
      uVar8 = local_12e8;
    }
    local_12e8 = uVar8;
    if (lVar15 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar8,"class_cast");
    }
    uVar8 = local_12e8;
    uVar21 = *(undefined8 *)(lVar13 + 0x660);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar8,&DAT_03955ac7);
    uVar8 = local_12e8;
    uVar21 = *(undefined8 *)(lVar13 + 0x668);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar8,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_1320 = (undefined1 *)CONCAT44(local_1320._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_1320,&local_12f0,local_12e8);
    }
    else {
      local_1320 = &LAB_020c8140;
      uStack_1318 = 0;
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c80a0(param_1,1,&local_1320,local_12e8);
      local_1320 = &LAB_020c8144;
      uStack_1318 = 0;
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c80a0(param_1,2,&local_1320,local_12e8);
    }
    FUN_00151fe0(param_1,0,3);
    uVar8 = FUN_0014feb0(param_1,0xffffffff);
    local_1320 = (undefined1 *)CONCAT44(local_1320._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_1320,&local_12e0,uVar8);
    if (*(undefined1 **)(lVar13 + 0x658) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x690) != '\0') goto LAB_020c7600;
LAB_020c72f8:
      if (param_1 == 0) goto LAB_020c7658;
LAB_020c7300:
      uVar11 = local_12e8;
      FUN_00150260(param_1,uVar8);
    }
    else {
      uStack_1318 = 0;
      local_1320 = *(undefined1 **)(lVar13 + 0x658);
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c80a0(param_1,4,&local_1320,uVar8);
      if (*(char *)(lVar13 + 0x690) == '\0') goto LAB_020c72f8;
LAB_020c7600:
      local_1320 = &LAB_020c8140;
      uStack_1318 = 0;
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c80a0(param_1,1,&local_1320,uVar8);
      local_1320 = &LAB_020c8144;
      uStack_1318 = 0;
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c80a0(param_1,2,&local_1320,uVar8);
      if (param_1 != 0) goto LAB_020c7300;
LAB_020c7658:
      uVar11 = local_12e8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_12f0,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_020bbe14();
      puVar4 = DAT_043d9638;
      if ((DAT_043d9628 & 1) == 0) {
        puVar4 = &DAT_043d9629;
      }
      FUN_00154450(param_1,puVar4);
      uVar8 = FUN_0014feb0(param_1,0xffffffff);
      local_1320._0_4_ = 0x1e;
      FUN_008fe304(&local_12f0,param_1,&local_1320,&local_12e0,uVar8);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_690,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_1320 = (undefined1 *)CONCAT44(local_1320._4_4_,0x1e);
      FUN_008fe304(&local_12f0,param_1,&local_1320,&local_12e0,uVar11);
      local_1320 = *(undefined1 **)(lVar13 + 0x658);
      if (local_1320 != (undefined1 *)0x0) {
        uStack_1318 = 0;
        local_1310 = lVar13;
        lStack_1308 = lVar18;
        FUN_020c80a0(param_1,4,&local_1320,uVar11);
      }
      local_1320 = &LAB_020c8208;
      uStack_1318 = 0;
      local_1300 = 0;
      puStack_12f8 = &DAT_03a7d318;
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c8150(param_1,1,&local_1320,uVar11);
      local_1320 = &LAB_020c820c;
      uStack_1318 = 0;
      local_1300 = 0;
      puStack_12f8 = &DAT_03a7d318;
      local_1310 = lVar13;
      lStack_1308 = lVar18;
      FUN_020c8150(param_1,2,&local_1320,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_12d8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


