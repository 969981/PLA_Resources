/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022bf538; name: FUN_022bf538
 */


void FUN_022bf538(long param_1,long param_2)

{
  ulong *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  string *psVar16;
  code *__maxlen;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 uVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  long *plVar28;
  undefined1 *local_a20;
  undefined8 uStack_a18;
  long local_a10;
  long lStack_a08;
  undefined8 local_a00;
  undefined *puStack_9f8;
  undefined4 local_9f0 [2];
  long local_9e8;
  undefined4 local_9e0;
  long local_9d8;
  undefined4 local_9d0 [2];
  long alStack_9c8 [98];
  long alStack_6b8 [100];
  long alStack_398 [2];
  undefined8 local_388;
  code *local_380;
  ulong local_378;
  
  if (((DAT_043e0e38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0e38), iVar8 != 0)) {
    local_378 = 0;
    local_380 = (code *)0x0;
    local_388 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043865b8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043865b8);
      puVar5 = PTR_DAT_043865c0;
      if (iVar8 != 0) {
        FUN_022bd490(PTR_DAT_043865c0);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043865b8);
      }
    }
    pcVar26 = (char *)FUN_022bc86c(&local_388,PTR_DAT_043865c0);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e0e20,psVar16);
    uVar24 = local_378;
    plVar28 = DAT_043f1798;
    if ((((ulong)local_388 & 1) != 0) && (local_378 != 0)) {
      lVar13 = tpidr_el0;
      plVar25 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar25 = plVar28;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar25,uVar24,0,8);
          goto LAB_022c17a8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,uVar24,0,8);
    }
LAB_022c17a8:
    FUN_00100250(PTR__string_04379718,&DAT_043e0e20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0e38);
  }
  std::string::string((string *)&local_388,(string *)&DAT_043e0e20);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e0e18);
  pcVar20 = (code *)((ulong)local_388 >> 1 & 0x7f);
  if (((ulong)local_388 & 1) != 0) {
    pcVar20 = local_380;
  }
  std::string::append((ulong)&local_388,(char)iVar8);
  if (((ulong)local_388 & 1) == 0) {
    uVar24 = (long)&local_388 + 1;
    __maxlen = (code *)((ulong)local_388 >> 1 & 0x7f);
  }
  else {
    __maxlen = local_380;
    uVar24 = local_378;
  }
  iVar8 = snprintf((char *)(pcVar20 + (uVar24 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043e0e18);
  DAT_043e0e18 = DAT_043e0e18 + 1;
  pbVar12 = (byte *)FUN_022c1b90(iVar8);
  pbVar18 = *(byte **)(pbVar12 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    pbVar18 = pbVar12 + 1;
  }
  if (((ulong)local_388 & 1) == 0) {
    uVar24 = (ulong)&local_388 | 1;
  }
  else {
    uVar24 = local_378;
  }
  if (((DAT_043e0e68 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0e68), iVar8 != 0)) {
    DAT_043e0e60 = 0x238;
    __cxa_guard_release(&DAT_043e0e68);
  }
  if (((DAT_043e0e78 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0e78), iVar8 != 0)) {
    DAT_043e0e70 = 0x23f;
    __cxa_guard_release(&DAT_043e0e78);
  }
  uVar21 = DAT_043e0e60;
  lVar13 = FUN_00153520(param_1,DAT_043e0e60);
  if ((uVar21 < ((ulong)(uint)-(int)lVar13 & 7 | 0x238)) ||
     (puVar17 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar21 = DAT_043e0e70;
    lVar13 = FUN_00153520(param_1,DAT_043e0e70);
    if ((uVar21 < ((ulong)(uint)-(int)lVar13 & 7 | 0x238)) ||
       (puVar17 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_022c1e20();
      puVar3 = DAT_043e0e90;
      if ((DAT_043e0e80 & 1) == 0) {
        puVar3 = &DAT_043e0e81;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar17[1] = uVar19;
  puVar17[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar17[3] = lVar13;
  lVar22 = *(long *)(param_2 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar13 + 8);
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
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar19;
  puVar17[7] = uVar4;
  puVar17[8] = *(undefined8 *)(param_2 + 0x40);
  puVar17[9] = *(undefined8 *)(param_2 + 0x48);
  puVar17[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar17 = &PTR_FUN_0425ba60;
  memcpy(puVar17 + 0xc,(void *)(param_2 + 0x60),0x1d8);
  iVar8 = FUN_00154450(param_1,uVar24);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_022c1de0,0);
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
  FUN_001522a0(param_1,pbVar18);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,pbVar18);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  uVar24 = local_378;
  plVar28 = DAT_043f1798;
  if ((((ulong)local_388 & 1) != 0) && (local_378 != 0)) {
    lVar22 = tpidr_el0;
    plVar25 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar25 = plVar28;
    }
    uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar25,uVar24,0,8);
        goto LAB_022bf88c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,uVar24,0,8);
  }
LAB_022bf88c:
  memset(&local_388,0,800);
  puVar5 = PTR_DAT_043847e0;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar5 = 1;
  pcVar26 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x220) = &LAB_022c2318;
  *(undefined1 **)(lVar13 + 0x218) = &LAB_022c225c;
  *(undefined1 **)(lVar13 + 0x210) = &LAB_022c24a0;
  *(undefined1 **)(lVar13 + 0x208) = &LAB_022c2370;
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar13 + 8;
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bda6c;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bd8bc;
  }
  puVar1 = (ulong *)(lVar13 + 0x230);
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar21 = 0;
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022bfae8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar21 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022bfae8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  uVar21 = 1;
  local_388 = pcVar26;
  local_380 = pcVar20;
LAB_022bfae8:
  pcVar26 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bdd34;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bdb98;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022bfc2c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022bfc2c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022bfc2c:
  pcVar26 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bdf18;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bde1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022bfd6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022bfd6c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022bfd6c:
  pcVar26 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022be20c;
  if (uVar10 != 0) {
    pcVar20 = FUN_022be03c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022bfeac;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022bfeac;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022bfeac:
  pcVar26 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022be4e0;
  if (uVar10 != 0) {
    pcVar20 = FUN_022be2f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022bffec;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022bffec;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022bffec:
  pcVar26 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022be6fc;
  if (uVar10 != 0) {
    pcVar20 = FUN_022be5c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c012c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c012c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c012c:
  pcVar26 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = (code *)&LAB_022be81c;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_022be7e4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c026c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c026c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c026c:
  pcVar26 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022be9ac;
  if (uVar10 != 0) {
    pcVar20 = FUN_022be864;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c03ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c03ac;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c03ac:
  pcVar26 = *(char **)(lVar13 + 0x120);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = (code *)&LAB_022beacc;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_022bea94;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c04ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c04ec;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c04ec:
  pcVar26 = *(char **)(lVar13 + 0x138);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bec10;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_022beb14;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c062c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c062c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c062c:
  pcVar26 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = (code *)&LAB_022bed54;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_022bed1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c076c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c076c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c076c:
  pcVar26 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bede4;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bed9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c08ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c08ac;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c08ac:
  pcVar26 = *(char **)(lVar13 + 0x180);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bf034;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bee2c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c09ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c09ec;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c09ec:
  pcVar26 = *(char **)(lVar13 + 0x198);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bf164;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bf11c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c0b2c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c0b2c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c0b2c:
  pcVar26 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bf1f4;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bf1ac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c0c6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c0c6c;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c0c6c:
  pcVar26 = *(char **)(lVar13 + 0x1c8);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = (code *)&LAB_022bf340;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_022bf23c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x1e8) = pcVar20;
            goto LAB_022c0dac;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      goto LAB_022c0dac;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_022c0dac:
  pcVar26 = *(char **)(lVar13 + 0x1e0);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_022bf4d8;
  if (uVar10 != 0) {
    pcVar20 = FUN_022bf478;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      uVar23 = uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar13 + 0x1e8) = pcVar20;
        uVar10 = (uint)*puVar1;
        goto joined_r0x022c1620;
      }
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x230) = *(ulong *)(lVar13 + 0x230) | 1L << (uVar24 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x022c1620;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  uVar23 = (ulong)((int)uVar21 + 1);
  alStack_398[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_380)[uVar21 * 2] = pcVar20;
  uVar10 = (uint)*puVar1;
joined_r0x022c1620:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar27 = lVar15 + 0x181;
    if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
      lVar27 = *(long *)(lVar15 + 400);
    }
    alStack_398[uVar23 * 2 + 2] = lVar27;
    (&local_380)[uVar23 * 2] = (code *)&LAB_022c2750;
    uVar10 = (uint)*puVar1;
    uVar23 = (ulong)((int)uVar23 + 1);
  }
  uVar24 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar15 = FUN_008cca50();
    uVar24 = (ulong)((int)uVar23 + 1);
    lVar27 = lVar15 + 0x289;
    if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
      lVar27 = *(long *)(lVar15 + 0x298);
    }
    alStack_398[uVar23 * 2 + 2] = lVar27;
    (&local_380)[uVar23 * 2] = (code *)&LAB_022c2748;
  }
  uVar21 = uVar24;
  if (*(long *)(lVar13 + 0x1e8) != 0) {
    lVar15 = FUN_008cca50();
    lVar27 = lVar15 + 0x1c9;
    if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
      lVar27 = *(long *)(lVar15 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x1e8);
    uVar21 = (ulong)((int)uVar24 + 1);
    alStack_398[uVar24 * 2 + 2] = lVar27;
    (&local_380)[uVar24 * 2] = pcVar20;
  }
  alStack_398[uVar21 * 2 + 2] = 0;
  (&local_380)[uVar21 * 2] = (code *)0x0;
  memcpy(alStack_6b8 + 2,&local_388,800);
  memcpy(alStack_9c8,&local_388,800);
  lVar27 = FUN_008cca50();
  lVar15 = uVar21 - 1;
  pcVar26 = (char *)alStack_398[lVar15 * 2 + 2];
  sVar14 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    alStack_6b8[lVar15 * 2 + 2] = 0;
    alStack_6b8[lVar15 * 2 + 3] = 0;
  }
  alStack_9c8[lVar15 * 2] = alStack_398[lVar15 * 2 + 2];
  alStack_9c8[lVar15 * 2 + 1] = (long)&LAB_022c1ae0;
  FUN_00151fe0(param_1,0,2);
  local_9d0[0] = FUN_0014feb0(param_1,0xffffffff);
  local_9d8 = param_1;
  if ((*PTR_DAT_043865b8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_043865b8);
    puVar5 = PTR_DAT_043865c0;
    if (iVar8 != 0) {
      FUN_022bd490(PTR_DAT_043865c0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043865b8);
    }
  }
  uVar9 = local_9d0[0];
  uVar24 = *(ulong *)(PTR_DAT_043865c0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_043865c0 + 0x10);
  if ((*PTR_DAT_043865c0 & 1) == 0) {
    puVar5 = PTR_DAT_043865c0 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_043865c0 >> 1);
  }
  FUN_001514f0(param_1,puVar5,uVar24);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_022c1b30,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      plVar28 = alStack_9c8;
      FUN_022bbc18();
      pbVar18 = &DAT_043e0cf0;
LAB_022c10cc:
      pbVar12 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        pbVar12 = pbVar18 + 1;
      }
    }
    else {
      if (lVar27 == 0) {
        plVar28 = alStack_6b8 + 2;
        FUN_022bba3c();
        pbVar18 = &DAT_043e0c78;
        goto LAB_022c10cc;
      }
      plVar28 = &local_388;
      pbVar18 = (byte *)FUN_022bbdf4();
      pbVar12 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        pbVar12 = pbVar18 + 1;
      }
    }
    FUN_00154450(param_1,pbVar12);
    local_9e0 = FUN_0014feb0(param_1,0xffffffff);
    local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,0x1e);
    local_9e8 = param_1;
    FUN_008fe304(local_9f0,param_1,&local_a20,&local_9d8,local_9e0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,plVar28,2);
    uVar9 = local_9e0;
    if (*(long *)(lVar13 + 0x218) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
    }
    uVar9 = local_9e0;
    if (*(long *)(lVar13 + 0x220) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_9e0;
    uVar19 = *(undefined8 *)(lVar13 + 0x1f8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar22);
    FUN_001516f0(param_1,uVar19,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_9e0;
    uVar19 = *(undefined8 *)(lVar13 + 0x200);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar22);
    FUN_001516f0(param_1,uVar19,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,1);
      FUN_008fe304(local_9f0,param_1,&local_a20,&local_9e8,local_9e0);
    }
    else {
      local_9f0[0] = 1;
      local_a20 = &LAB_022c1b80;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3550(param_1,local_9f0,&local_a20,local_9e0);
      local_9f0[0] = 2;
      local_a20 = &LAB_022c1b84;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3550(param_1,local_9f0,&local_a20,local_9e0);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,0x1e);
    FUN_008fe304(local_9f0,param_1,&local_a20,&local_9d8,uVar9);
    if (*(undefined1 **)(lVar13 + 0x1f0) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x228) == '\0') goto LAB_022c12cc;
LAB_022c1560:
      local_9f0[0] = 1;
      local_a20 = &LAB_022c1b80;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3550(param_1,local_9f0,&local_a20,uVar9);
      local_9f0[0] = 2;
      local_a20 = &LAB_022c1b84;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3550(param_1,local_9f0,&local_a20,uVar9);
      if (param_1 == 0) goto LAB_022c15c4;
LAB_022c12d4:
      uVar11 = local_9e0;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_a18 = 0;
      local_9f0[0] = 4;
      local_a20 = *(undefined1 **)(lVar13 + 0x1f0);
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3550(param_1,local_9f0,&local_a20,uVar9);
      if (*(char *)(lVar13 + 0x228) != '\0') goto LAB_022c1560;
LAB_022c12cc:
      if (param_1 != 0) goto LAB_022c12d4;
LAB_022c15c4:
      uVar11 = local_9e0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_9e8,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_022bc02c();
      puVar5 = DAT_043e0df0;
      if ((DAT_043e0de0 & 1) == 0) {
        puVar5 = &DAT_043e0de1;
      }
      FUN_00154450(param_1,puVar5);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_a20._0_4_ = 0x1e;
      FUN_008fe304(&local_9e8,param_1,&local_a20,&local_9d8,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_388,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,0x1e);
      FUN_008fe304(&local_9e8,param_1,&local_a20,&local_9d8,uVar11);
      local_a20 = *(undefined1 **)(lVar13 + 0x1f0);
      if (local_a20 != (undefined1 *)0x0) {
        local_9e8 = CONCAT44(local_9e8._4_4_,4);
        uStack_a18 = 0;
        local_a10 = lVar13;
        lStack_a08 = lVar22;
        FUN_022c3550(param_1,&local_9e8,&local_a20,uVar11);
      }
      local_9e8._0_4_ = 1;
      local_a20 = &LAB_022c1b88;
      uStack_a18 = 0;
      local_a00 = 0;
      puStack_9f8 = &DAT_03a7d450;
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3c04(param_1,&local_9e8,&local_a20,uVar11);
      local_9e8 = CONCAT44(local_9e8._4_4_,2);
      local_a20 = &LAB_022c1b8c;
      uStack_a18 = 0;
      local_a00 = 0;
      puStack_9f8 = &DAT_03a7d450;
      local_a10 = lVar13;
      lStack_a08 = lVar22;
      FUN_022c3c04(param_1,&local_9e8,&local_a20,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_9d0[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


