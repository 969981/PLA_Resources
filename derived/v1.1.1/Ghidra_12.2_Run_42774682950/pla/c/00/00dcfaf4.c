/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dcfaf4; name: FUN_00dcfaf4
 */


undefined8 FUN_00dcfaf4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  byte *pbVar16;
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_840;
  undefined8 uStack_838;
  long local_830;
  long lStack_828;
  undefined8 local_820;
  undefined *puStack_818;
  undefined4 local_810 [2];
  long local_808;
  undefined4 local_800;
  long local_7f8;
  undefined4 local_7f0 [2];
  string asStack_7e8 [624];
  undefined8 auStack_578 [2];
  string local_568;
  undefined1 auStack_567 [7];
  size_t local_560;
  undefined1 *local_558;
  char *apcStack_2f8 [2];
  char *local_2e8;
  code *local_2e0;
  long local_2d8;
  
  puVar5 = PTR_DAT_0437b7f0;
  if (((DAT_043ad830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ad830), iVar9 != 0)) {
    local_2d8 = 0;
    local_2e0 = (code *)0x0;
    local_2e8 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437b7f0);
      puVar2 = PTR_DAT_0437b808;
      if (iVar9 != 0) {
        FUN_00dd3ef0(PTR_DAT_0437b808);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b7f0);
      }
    }
    pcVar26 = (char *)FUN_00dd32bc(&local_2e8,PTR_DAT_0437b808);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043ad818,psVar17);
    lVar13 = local_2d8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2e8 & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_00dd11d4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00dd11d4:
    FUN_00100250(PTR__string_04379718,&DAT_043ad818,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ad830);
  }
  std::string::string(&local_568,(string *)&DAT_043ad818);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ad810);
  sVar1 = (ulong)((byte)local_568 >> 1);
  if (((byte)local_568 & 1) != 0) {
    sVar1 = local_560;
  }
  std::string::append((ulong)&local_568,(char)iVar9);
  if (((byte)local_568 & 1) == 0) {
    puVar27 = auStack_567;
    local_560 = (size_t)((byte)local_568 >> 1);
  }
  else {
    puVar27 = local_558;
  }
  snprintf(puVar27 + (sVar1 - 1),local_560,"%d",(ulong)DAT_043ad810);
  DAT_043ad810 = DAT_043ad810 + 1;
  if (((DAT_043ad850 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ad850), iVar9 != 0)) {
    local_2d8 = 0;
    local_2e0 = (code *)0x0;
    local_2e8 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437b7f0);
      puVar2 = PTR_DAT_0437b808;
      if (iVar9 != 0) {
        FUN_00dd3ef0(PTR_DAT_0437b808);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b7f0);
      }
    }
    pcVar26 = (char *)FUN_00dd32bc(&local_2e8,PTR_DAT_0437b808);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043ad838,psVar17);
    lVar13 = local_2d8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2e8 & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_00dd1320;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00dd1320:
    FUN_00100250(PTR__string_04379718,&DAT_043ad838,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ad850);
  }
  puVar2 = DAT_043ad848;
  if ((DAT_043ad838 & 1) == 0) {
    puVar2 = &DAT_043ad839;
  }
  if (((byte)local_568 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_568 | 1);
  }
  else {
    puVar27 = local_558;
  }
  if (((DAT_043ad860 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ad860), iVar9 != 0)) {
    DAT_043ad858 = 0x150;
    __cxa_guard_release(&DAT_043ad860);
  }
  if (((DAT_043ad870 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ad870), iVar9 != 0)) {
    DAT_043ad868 = 0x157;
    __cxa_guard_release(&DAT_043ad870);
  }
  uVar22 = DAT_043ad858;
  lVar13 = FUN_00153520(param_2,DAT_043ad858);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x150)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043ad868;
    lVar13 = FUN_00153520(param_2,DAT_043ad868);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x150)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00dd6730();
      puVar3 = DAT_043ad888;
      if ((DAT_043ad878 & 1) == 0) {
        puVar3 = &DAT_043ad879;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
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
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar4;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_041ee580;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xf0);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00dd66f0,0);
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
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_568 & 1) != 0) && (local_558 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_558,0,8);
        goto LAB_00dcfe68;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_558,0,8);
  }
LAB_00dcfe68:
  memset(&local_2e8,0,0x280);
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
  pcVar20 = FUN_00dd45dc;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd42d4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd0084;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd0084;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2e8 = pcVar26;
  local_2e0 = pcVar20;
LAB_00dd0084:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_00dd47dc;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd466c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd01c4;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd01c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00dd01c4:
  pcVar26 = *(char **)(lVar13 + 0x90);
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
  pcVar20 = FUN_00dd4b44;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd486c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd0304;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd0304;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00dd0304:
  pcVar26 = *(char **)(lVar13 + 0xa8);
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
  pcVar20 = FUN_00dd4df8;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd4bd4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd0444;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd0444;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00dd0444:
  pcVar26 = *(char **)(lVar13 + 0xc0);
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
  pcVar20 = FUN_00dd4ed0;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd4e88;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd0584;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd0584;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00dd0584:
  pcVar26 = *(char **)(lVar13 + 0xd8);
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
  pcVar20 = FUN_00dd4f60;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd4f18;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd06c4;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd06c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00dd06c4:
  pcVar26 = *(char **)(lVar13 + 0xf0);
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
  pcVar20 = (code *)&LAB_00dd6424;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00dd4fa8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar20;
            goto LAB_00dd07d4;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_00dd07d4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00dd07d4:
  pcVar26 = *(char **)(lVar13 + 0xf8);
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
  pcVar20 = FUN_00dd6628;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dd65c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x100) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
        goto joined_r0x00dd08b8;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
      goto joined_r0x00dd08b8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2e8)[uVar24 * 2] = pcVar26;
  (&local_2e0)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00dd08b8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2e8)[uVar24 * 2] = pcVar26;
    (&local_2e0)[uVar24 * 2] = (code *)PTR_LAB_0437b7f8;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2e8)[uVar22 * 2] = pcVar26;
    (&local_2e0)[uVar22 * 2] = (code *)PTR_LAB_0437b800;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x100) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x100);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2e8)[uVar24 * 2] = pcVar26;
    (&local_2e0)[uVar24 * 2] = pcVar20;
  }
  (&local_2e8)[uVar22 * 2] = (char *)0x0;
  (&local_2e0)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_568,&local_2e8,0x280);
  memcpy(asStack_7e8,&local_2e8,0x280);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_2e8)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_578[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_567 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7e8 + lVar15 * 0x10) = (&local_2e8)[lVar15 * 2];
  *(undefined1 **)(asStack_7e8 + (lVar15 * 2 + 1) * 8) = &LAB_00dd6690;
  FUN_00151fe0(param_2,0,2);
  local_7f0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7f8 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437b7f0);
    puVar5 = PTR_DAT_0437b808;
    if (iVar9 != 0) {
      FUN_00dd3ef0(PTR_DAT_0437b808);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b7f0);
    }
  }
  uVar10 = local_7f0[0];
  uVar22 = *(ulong *)(PTR_DAT_0437b808 + 8);
  puVar5 = *(undefined **)(PTR_DAT_0437b808 + 0x10);
  if ((*PTR_DAT_0437b808 & 1) == 0) {
    puVar5 = PTR_DAT_0437b808 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437b808 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00dd5580,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_7e8;
      pbVar16 = (byte *)FUN_00dd266c();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_568;
      pbVar16 = (byte *)FUN_00dd248c();
    }
    else {
      psVar17 = (string *)&local_2e8;
      pbVar16 = (byte *)FUN_00dd284c();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_800 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_808 = param_2;
    FUN_008fe304(local_810,param_2,&local_840,&local_7f8,local_800);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_800;
    if (*(long *)(lVar13 + 0x130) == 0) {
      lVar15 = *(long *)(lVar13 + 0x138);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x138);
      uVar10 = local_800;
    }
    local_800 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_800;
    uVar19 = *(undefined8 *)(lVar13 + 0x110);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_800;
    uVar19 = *(undefined8 *)(lVar13 + 0x118);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(local_810,param_2,&local_840,&local_808,local_800);
    }
    else {
      local_810[0] = 1;
      local_840 = &LAB_00dd66e0;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd6b6c(param_2,local_810,&local_840,local_800);
      local_810[0] = 2;
      local_840 = &LAB_00dd66e4;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd6b6c(param_2,local_810,&local_840,local_800);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(local_810,param_2,&local_840,&local_7f8,uVar10);
    if (*(undefined1 **)(lVar13 + 0x108) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x140) != '\0') goto LAB_00dd0f68;
LAB_00dd0c4c:
      if (param_2 == 0) goto LAB_00dd0fc8;
LAB_00dd0c54:
      uVar12 = local_800;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_838 = 0;
      local_810[0] = 4;
      local_840 = *(undefined1 **)(lVar13 + 0x108);
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd6b6c(param_2,local_810,&local_840,uVar10);
      if (*(char *)(lVar13 + 0x140) == '\0') goto LAB_00dd0c4c;
LAB_00dd0f68:
      local_810[0] = 1;
      local_840 = &LAB_00dd66e0;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd6b6c(param_2,local_810,&local_840,uVar10);
      local_810[0] = 2;
      local_840 = &LAB_00dd66e4;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd6b6c(param_2,local_810,&local_840,uVar10);
      if (param_2 != 0) goto LAB_00dd0c54;
LAB_00dd0fc8:
      uVar12 = local_800;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_808,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00dd2a84();
      puVar5 = DAT_043ad750;
      if ((DAT_043ad740 & 1) == 0) {
        puVar5 = &DAT_043ad741;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2e8,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar12);
      local_840 = *(undefined1 **)(lVar13 + 0x108);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_808 = CONCAT44(local_808._4_4_,4);
        local_830 = lVar13;
        lStack_828 = lVar23;
        FUN_00dd6b6c(param_2,&local_808,&local_840,uVar12);
      }
      local_808._0_4_ = 1;
      local_840 = &LAB_00dd66e8;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a78770;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd7220(param_2,&local_808,&local_840,uVar12);
      local_808 = CONCAT44(local_808._4_4_,2);
      local_840 = &LAB_00dd66ec;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a78770;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dd7220(param_2,&local_808,&local_840,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


