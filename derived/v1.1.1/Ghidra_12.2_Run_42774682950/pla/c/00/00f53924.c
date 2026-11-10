/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f53924; name: FUN_00f53924
 */


undefined8 FUN_00f53924(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  string *psVar14;
  undefined *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined1 *local_7e0;
  undefined8 uStack_7d8;
  long local_7d0;
  long lStack_7c8;
  undefined8 local_7c0;
  undefined *puStack_7b8;
  long local_7b0;
  undefined4 local_7a8;
  long local_7a0;
  undefined4 local_798 [2];
  string asStack_790 [592];
  undefined8 auStack_540 [2];
  string local_530;
  undefined1 auStack_52f [7];
  size_t local_528;
  undefined1 *local_520;
  char *apcStack_2e0 [2];
  char *local_2d0;
  code *local_2c8;
  long local_2c0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b56f0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b56f0), iVar7 != 0)) {
    local_2c0 = 0;
    local_2c8 = (code *)0x0;
    local_2d0 = (char *)0x2e6c6f7308;
    if (((DAT_043b55a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b55a0), iVar7 != 0)) {
      FUN_00f57a40();
      FUN_00100250(PTR__string_04379718,&DAT_043b5588,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b55a0);
    }
    pcVar24 = (char *)FUN_00f56e1c(&local_2d0,&DAT_043b5588);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043b56d8,psVar14);
    lVar11 = local_2c0;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2d0 & 1) != 0) && (local_2c0 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar21 + 0x38d480)) {
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_00f54d80;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_00f54d80:
    FUN_00100250(PTR__string_04379718,&DAT_043b56d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b56f0);
  }
  std::string::string(&local_530,(string *)&DAT_043b56d8);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b56d0);
  sVar1 = (ulong)((byte)local_530 >> 1);
  if (((byte)local_530 & 1) != 0) {
    sVar1 = local_528;
  }
  std::string::append((ulong)&local_530,(char)iVar7);
  if (((byte)local_530 & 1) == 0) {
    puVar25 = auStack_52f;
    local_528 = (size_t)((byte)local_530 >> 1);
  }
  else {
    puVar25 = local_520;
  }
  snprintf(puVar25 + (sVar1 - 1),local_528,"%d",(ulong)DAT_043b56d0);
  DAT_043b56d0 = DAT_043b56d0 + 1;
  if (((DAT_043b5710 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5710), iVar7 != 0)) {
    local_2c0 = 0;
    local_2c8 = (code *)0x0;
    local_2d0 = (char *)0x2e6c6f7308;
    if (((DAT_043b55a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b55a0), iVar7 != 0)) {
      FUN_00f57a40();
      FUN_00100250(PTR__string_04379718,&DAT_043b5588,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b55a0);
    }
    pcVar24 = (char *)FUN_00f56e1c(&local_2d0,&DAT_043b5588);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043b56f8,psVar14);
    lVar11 = local_2c0;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2d0 & 1) != 0) && (local_2c0 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar21 + 0x38d480)) {
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_00f54ecc;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_00f54ecc:
    FUN_00100250(PTR__string_04379718,&DAT_043b56f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5710);
  }
  puVar15 = DAT_043b5708;
  if ((DAT_043b56f8 & 1) == 0) {
    puVar15 = &DAT_043b56f9;
  }
  if (((byte)local_530 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_530 | 1);
  }
  else {
    puVar25 = local_520;
  }
  if (((DAT_043b5720 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5720), iVar7 != 0)) {
    DAT_043b5718 = 0x108;
    __cxa_guard_release(&DAT_043b5720);
  }
  if (((DAT_043b5730 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5730), iVar7 != 0)) {
    DAT_043b5728 = 0x10f;
    __cxa_guard_release(&DAT_043b5730);
  }
  uVar20 = DAT_043b5718;
  lVar11 = FUN_00153520(param_2,DAT_043b5718);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x108)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043b5728;
    lVar11 = FUN_00153520(param_2,DAT_043b5728);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x108)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00f5a900();
      puVar2 = DAT_043b5748;
      if ((DAT_043b5738 & 1) == 0) {
        puVar2 = &DAT_043b5739;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar16;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar11;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar21;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar18[2];
    uVar20 = *(ulong *)(lVar11 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar4 = 0;
      if (uVar22 != 0) {
        uVar4 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar4 * uVar22;
    }
    *(undefined8 **)(puVar18[1] + uVar20 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar16;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_041eebd8;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xa8);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_00f5a8c0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar8 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar8);
  }
  FUN_001522a0(param_2,puVar15);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar15);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_530 & 1) != 0) && (local_520 != (undefined1 *)0x0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar5;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar23,local_520,0,8);
        goto LAB_00f53c98;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_520,0,8);
  }
LAB_00f53c98:
  memset(&local_2d0,0,0x260);
  pcVar24 = *(char **)(lVar11 + 0x60);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar21 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f59184;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_00f57e60;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar22 = 0;
            *(code **)(lVar11 + 0xb8) = pcVar17;
            goto LAB_00f53eb4;
          }
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
      goto LAB_00f53eb4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_2d0 = pcVar24;
  local_2c8 = pcVar17;
LAB_00f53eb4:
  pcVar24 = *(char **)(lVar11 + 0x70);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f5953c;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_00f59224;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xb8) = pcVar17;
            goto LAB_00f53ff4;
          }
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
      goto LAB_00f53ff4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2d0)[uVar22 * 2] = pcVar24;
  (&local_2c8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f53ff4:
  pcVar24 = *(char **)(lVar11 + 0x78);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f596d0;
  if (uVar9 != 0) {
    pcVar17 = FUN_00f595ac;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xb8) = pcVar17;
            goto LAB_00f54134;
          }
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
      goto LAB_00f54134;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2d0)[uVar22 * 2] = pcVar24;
  (&local_2c8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f54134:
  pcVar24 = *(char **)(lVar11 + 0x90);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f5992c;
  if (uVar9 != 0) {
    pcVar17 = FUN_00f597f4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xb8) = pcVar17;
            goto LAB_00f54274;
          }
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
      goto LAB_00f54274;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2d0)[uVar22 * 2] = pcVar24;
  (&local_2c8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f54274:
  pcVar24 = *(char **)(lVar11 + 0xa8);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f5a4c4;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_00f59a14;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xb8) = pcVar17;
            goto LAB_00f54384;
          }
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
      goto LAB_00f54384;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2d0)[uVar22 * 2] = pcVar24;
  (&local_2c8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f54384:
  pcVar24 = *(char **)(lVar11 + 0xb0);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f5a6b4;
  if (uVar9 != 0) {
    pcVar17 = FUN_00f5a66c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0xb8) = pcVar17;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0x100);
        goto joined_r0x00f54468;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0x100);
      goto joined_r0x00f54468;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2d0)[uVar22 * 2] = pcVar24;
  (&local_2c8)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0x100);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x00f54468:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x100);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x100);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_2d0)[uVar22 * 2] = pcVar24;
    (&local_2c8)[uVar22 * 2] = (code *)&LAB_00f58250;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x100);
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar20 = uVar22;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    uVar20 = (ulong)((int)uVar22 + 1);
    pcVar24 = (char *)(lVar26 + 0x289);
    if ((*(byte *)(lVar26 + 0x288) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x298);
    }
    (&local_2d0)[uVar22 * 2] = pcVar24;
    (&local_2c8)[uVar22 * 2] = (code *)&LAB_00f58248;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0xb8) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0xb8);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_2d0)[uVar20 * 2] = pcVar24;
    (&local_2c8)[uVar20 * 2] = pcVar17;
  }
  (&local_2d0)[uVar22 * 2] = (char *)0x0;
  (&local_2c8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_530,&local_2d0,0x260);
  memcpy(asStack_790,&local_2d0,0x260);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_2d0)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_540[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_52f + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_790 + lVar13 * 0x10) = (&local_2d0)[lVar13 * 2];
  *(undefined1 **)(asStack_790 + (lVar13 * 2 + 1) * 8) = &LAB_00f5a700;
  FUN_00151fe0(param_2,0,2);
  local_798[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7a0 = param_2;
  if (((DAT_043b55a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b55a0), iVar7 != 0)) {
    FUN_00f57a40();
    FUN_00100250(PTR__string_04379718,&DAT_043b5588,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b55a0);
  }
  uVar8 = local_798[0];
  if ((DAT_043b5588 & 1) == 0) {
    uVar20 = (ulong)(DAT_043b5588 >> 1);
    puVar25 = &DAT_043b5589;
  }
  else {
    uVar20 = DAT_043b5590;
    puVar25 = DAT_043b5598;
  }
  FUN_001514f0(param_2,puVar25,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00f5a370,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_790;
      FUN_00f561cc();
      pbVar19 = &DAT_043b54f0;
      puVar15 = &DAT_043b54f1;
      puVar18 = &DAT_043b5500;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_530;
      FUN_00f55ff0();
      puVar15 = &DAT_043b5479;
      puVar18 = &DAT_043b5488;
      pbVar19 = &DAT_043b5478;
    }
    else {
      psVar14 = (string *)&local_2d0;
      FUN_00f563a8();
      puVar15 = &DAT_043b5569;
      puVar18 = &DAT_043b5578;
      pbVar19 = &DAT_043b5568;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_7a8 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    local_7b0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7a0,local_7a8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_7a8;
    if (*(long *)(lVar11 + 0xe8) == 0) {
      lVar13 = *(long *)(lVar11 + 0xf0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0xf0);
      uVar8 = local_7a8;
    }
    local_7a8 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_7a8;
    uVar16 = *(undefined8 *)(lVar11 + 200);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_7a8;
    uVar16 = *(undefined8 *)(lVar11 + 0xd0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7b0,local_7a8);
    }
    else {
      local_7e0 = &LAB_00f5a7f0;
      uStack_7d8 = 0;
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a750(param_2,1,&local_7e0,local_7a8);
      local_7e0 = &LAB_00f5a7f4;
      uStack_7d8 = 0;
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a750(param_2,2,&local_7e0,local_7a8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7a0,uVar8);
    if (*(undefined1 **)(lVar11 + 0xc0) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0xf8) == '\0') goto LAB_00f54830;
LAB_00f54b28:
      local_7e0 = &LAB_00f5a7f0;
      uStack_7d8 = 0;
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a750(param_2,1,&local_7e0,uVar8);
      local_7e0 = &LAB_00f5a7f4;
      uStack_7d8 = 0;
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a750(param_2,2,&local_7e0,uVar8);
      if (param_2 == 0) goto LAB_00f54b7c;
LAB_00f54838:
      uVar10 = local_7a8;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_7d8 = 0;
      local_7e0 = *(undefined1 **)(lVar11 + 0xc0);
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a750(param_2,4,&local_7e0,uVar8);
      if (*(char *)(lVar11 + 0xf8) != '\0') goto LAB_00f54b28;
LAB_00f54830:
      if (param_2 != 0) goto LAB_00f54838;
LAB_00f54b7c:
      uVar10 = local_7a8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7b0,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_00f565d0();
      puVar15 = DAT_043b55f0;
      if ((DAT_043b55e0 & 1) == 0) {
        puVar15 = &DAT_043b55e1;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0._0_4_ = 0x1e;
      FUN_008fe304(&local_7b0,param_2,&local_7e0,&local_7a0,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_2d0,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
      FUN_008fe304(&local_7b0,param_2,&local_7e0,&local_7a0,uVar10);
      local_7e0 = *(undefined1 **)(lVar11 + 0xc0);
      if (local_7e0 != (undefined1 *)0x0) {
        uStack_7d8 = 0;
        local_7d0 = lVar11;
        lStack_7c8 = lVar21;
        FUN_00f5a750(param_2,4,&local_7e0,uVar10);
      }
      local_7e0 = &LAB_00f5a8b8;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a788b8;
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a800(param_2,1,&local_7e0,uVar10);
      local_7e0 = &LAB_00f5a8bc;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a788b8;
      local_7d0 = lVar11;
      lStack_7c8 = lVar21;
      FUN_00f5a800(param_2,2,&local_7e0,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_798[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


