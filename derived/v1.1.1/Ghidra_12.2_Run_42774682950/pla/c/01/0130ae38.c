/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130ae38; name: FUN_0130ae38
 */


undefined8 FUN_0130ae38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined4 uVar25;
  long lVar26;
  undefined4 uVar27;
  long *plVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  int *piVar31;
  long *plVar32;
  long lVar33;
  undefined *puVar34;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  long *local_4a0;
  char *local_498;
  undefined8 local_490;
  long *local_488;
  long *local_480;
  undefined1 *local_468;
  char *pcStack_460;
  undefined8 local_458;
  long *local_450;
  
  puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
  plVar9 = (long *)(**(code **)*puVar30)(puVar30);
  puVar21 = PTR_DAT_04379ca8;
  puVar6 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0))
  {
    uVar10 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar6) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
    }
  }
  local_468 = (undefined1 *)0xf368832e9e83e086;
  pcStack_460 = "View_Bg";
  local_458 = 7;
  local_450 = (long *)0x0;
  uVar10 = FUN_0130dfdc(puVar30[0x8f],&local_468);
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  plVar11 = (long *)(**(code **)(*param_1 + 0x68))(param_1);
  puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
  plVar9 = (long *)(**(code **)*puVar30)(puVar30);
  if (((*puVar21 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
    uVar12 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar12;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar6) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
    }
  }
  local_468 = (undefined1 *)0x30a9c837e1e298d0;
  pcStack_460 = "View_Icon";
  local_458 = 9;
  local_450 = (long *)0x0;
  uVar12 = FUN_0130e28c(puVar30[0x8f],&local_468);
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
  plVar9 = (long *)(**(code **)*puVar30)(puVar30);
  if (((*puVar21 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
    uVar13 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar13;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar6) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
    }
  }
  local_468 = (undefined1 *)0x4a802437f079a1e5;
  pcStack_460 = "View_Info";
  local_458 = 9;
  local_450 = (long *)0x0;
  uVar13 = FUN_0130e3d0(puVar30[0x8f],&local_468);
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
  plVar9 = (long *)(**(code **)*puVar30)(puVar30);
  if (((*puVar21 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
    uVar15 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar15;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar6) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
    }
  }
  local_468 = (undefined1 *)0xa7a4b1ae9877c7bd;
  pcStack_460 = "View_Popup";
  local_458 = 10;
  local_450 = (long *)0x0;
  lVar14 = FUN_0130e514(puVar30[0x8f],&local_468);
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
  plVar9 = (long *)(**(code **)*puVar30)(puVar30);
  if (((*puVar21 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
    uVar15 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar15;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar6) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
    }
  }
  local_468 = (undefined1 *)0xcf0f16cf59650f86;
  pcStack_460 = "View_Frame";
  local_458 = 10;
  local_450 = (long *)0x0;
  uVar15 = FUN_0130e658(puVar30[0x8f],&local_468);
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
  plVar9 = (long *)(**(code **)*puVar30)(puVar30);
  if (((*puVar21 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
    uVar16 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar16;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar6) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
    }
  }
  local_468 = &DAT_9205becae3b3431b;
  pcStack_460 = "View_Jacket";
  local_458 = 0xb;
  local_450 = (long *)0x0;
  uVar16 = FUN_0130e79c(puVar30[0x8f],&local_468);
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  lVar17 = FUN_0130abe8(param_1);
  if (lVar17 == 0) {
    uVar18 = 1;
switchD_0130b6e8_default:
    return uVar18;
  }
  lVar26 = *(long *)(lVar17 + 0x170);
  memset(&local_468,0,0x400);
  uVar5 = DAT_0388a298;
  uVar4 = DAT_0388a290;
  puVar21 = PTR_DAT_04379690;
  puVar22 = PTR_LAB_043796a8;
  puVar23 = PTR_DAT_04379698;
  puVar24 = PTR_DAT_043796a0;
  plVar28 = (long *)PTR_DAT_04379e38;
  plVar9 = (long *)PTR_DAT_04379e30;
  pbVar29 = PTR_DAT_04379e28;
  puVar34 = PTR_LAB_0437a500;
LAB_0130b27c:
  if ((int)param_1[0x1e] != 5) {
    uVar18 = 1;
    switch((int)param_1[0x1e]) {
    case 1:
      iVar7 = (**(code **)(*param_1 + 0x70))(param_1);
      if (*(int *)(lVar26 + (long)iVar7 * 0xd0 + 0xc0) != 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(uVar10,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(plVar11,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(uVar12,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(uVar13,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(lVar14,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(uVar15,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar20 = FUN_0130eb50(uVar16,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      uVar25 = 4;
      if ((char)param_1[0x1f] != '\0') {
        uVar25 = 2;
      }
      *(undefined4 *)(param_1 + 0x1e) = uVar25;
      puVar21 = PTR_DAT_04379690;
      pbVar29 = PTR_DAT_04379e28;
      break;
    case 2:
      (**(code **)(*plVar11 + 0xa8))(plVar11,0);
      puVar34 = PTR_LAB_0437a500;
      plVar9 = (long *)PTR_DAT_04379e30;
      puVar22 = PTR_LAB_043796a8;
      puVar24 = PTR_DAT_043796a0;
      puVar23 = PTR_DAT_04379698;
      puVar21 = PTR_DAT_04379690;
      *(undefined4 *)(param_1 + 0x1e) = 3;
      goto LAB_0130b27c;
    case 3:
      uVar20 = (**(code **)(*plVar11 + 0xb0))(plVar11,0);
      puVar34 = PTR_LAB_0437a500;
      pbVar29 = PTR_DAT_04379e28;
      puVar22 = PTR_LAB_043796a8;
      puVar24 = PTR_DAT_043796a0;
      puVar23 = PTR_DAT_04379698;
      puVar21 = PTR_DAT_04379690;
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1e) = 4;
      goto LAB_0130b27c;
    case 4:
      *(undefined1 *)(lVar14 + 0x639) = 1;
      FUN_00d42438(plVar11,1,1);
      puVar34 = PTR_LAB_0437a500;
      plVar9 = (long *)PTR_DAT_04379e30;
      pbVar29 = PTR_DAT_04379e28;
      puVar22 = PTR_LAB_043796a8;
      puVar24 = PTR_DAT_043796a0;
      puVar23 = PTR_DAT_04379698;
      puVar21 = PTR_DAT_04379690;
      *(undefined4 *)(param_1 + 0x1e) = 5;
      goto LAB_0130b27c;
    default:
      goto switchD_0130b6e8_default;
    case 6:
      iVar7 = FUN_013430ec(lVar14);
      if (iVar7 != 1) {
        return 0;
      }
      uVar25 = *(undefined4 *)(lVar17 + 0xdc);
      *(undefined4 *)(lVar17 + 0xdc) = 0;
      FUN_01312ed4(plVar11,uVar25);
      FUN_00d42438(plVar11,1,1);
      FUN_00d469b4(plVar11[0xd],plVar11,0);
      *(undefined4 *)(param_1 + 0x1e) = 5;
      *(undefined1 *)(lVar17 + 0x76) = 1;
      goto LAB_0130b938;
    case 7:
      if (*(int *)((long)param_1 + 0xf4) != 1) {
        return 0;
      }
      puVar30 = *(undefined8 **)(param_1[0xd] + 0x18);
      plVar9 = (long *)(**(code **)*puVar30)(puVar30);
      if (((*PTR_DAT_04379ca8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
        uVar18 = FUN_009311a8();
        *(undefined8 *)puVar6 = uVar18;
        __cxa_guard_release(PTR_DAT_04379ca8);
      }
      if (plVar9 != (long *)puVar6) {
        for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar6; plVar9 = (long *)*plVar9) {
        }
      }
      local_4a0 = (long *)&DAT_786441c0fda6345d;
      local_498 = "MessageView";
      local_490 = 0xb;
      local_488 = (long *)0x0;
      lVar33 = FUN_011994dc(puVar30[0x8f],&local_4a0);
      if (local_488 != (long *)0x0) {
        (**(code **)(*local_488 + 0x20))();
      }
      if (*(int *)(*(long *)(lVar33 + 0x5b0) + 0x80) != 7) {
        return 0;
      }
      lVar19 = FUN_0130abe8(param_1);
      if (lVar19 != 0) {
        *(undefined1 *)(lVar19 + 0x76) = 1;
      }
      *(undefined4 *)((long)param_1 + 0xf4) = 0;
      uVar20 = FUN_0131e948();
      if ((((uVar20 & 1) == 0) && (uVar20 = FUN_0131ef4c(), (uVar20 & 1) == 0)) &&
         (iVar7 = FUN_00d686a0(lVar33), iVar7 == 0)) {
        iVar7 = *(int *)((long)param_1 + 0xfc);
        if (((*PTR_DAT_04379690 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379690);
        }
        puVar30 = (undefined8 *)(PTR_DAT_0437edc0 + (long)iVar7 * 0x18);
        uVar18 = *(undefined8 *)PTR_DAT_04379698;
        *(undefined8 *)PTR_DAT_043796a0 = uVar18;
        local_4a0 = (long *)*puVar30;
        local_498 = (char *)puVar30[1];
        local_490 = puVar30[2];
        local_488 = (long *)0x0;
        FUN_0286b968(uVar18,&local_4a0);
        if (local_488 != (long *)0x0) {
          (**(code **)(*local_488 + 0x20))();
        }
        local_4a0 = (long *)0x0;
        local_498 = (char *)0x0;
        uStack_4a8 = uVar5;
        local_4b0 = uVar4;
        if (((*PTR_DAT_04379e28 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e28);
        }
        plVar28 = (long *)PTR_DAT_04379e38;
        plVar9 = (long *)PTR_DAT_04379e30;
        uVar18 = *(undefined8 *)PTR_DAT_04379e30;
        *(undefined8 *)PTR_DAT_04379e38 = uVar18;
        FUN_00d264cc(uVar18,0,0,&local_4a0,&local_4b0,8,0,0);
        *(undefined4 *)(param_1 + 0x1e) = 0xb;
        puVar21 = PTR_DAT_04379690;
        puVar22 = PTR_LAB_043796a8;
        puVar23 = PTR_DAT_04379698;
        puVar24 = PTR_DAT_043796a0;
        pbVar29 = PTR_DAT_04379e28;
      }
      else {
        FUN_00d42438(plVar11,1,1);
        FUN_00d469b4(plVar11[0xd],plVar11,0);
        *(undefined4 *)(param_1 + 0x1e) = 5;
        puVar21 = PTR_DAT_04379690;
        puVar22 = PTR_LAB_043796a8;
        puVar23 = PTR_DAT_04379698;
        puVar24 = PTR_DAT_043796a0;
        plVar28 = (long *)PTR_DAT_04379e38;
        plVar9 = (long *)PTR_DAT_04379e30;
        pbVar29 = PTR_DAT_04379e28;
      }
      goto LAB_0130b41c;
    case 8:
      *(undefined1 *)(lVar14 + 0x639) = 0;
      (**(code **)(*plVar11 + 0xb8))(plVar11,0);
      puVar34 = PTR_LAB_0437a500;
      plVar9 = (long *)PTR_DAT_04379e30;
      puVar22 = PTR_LAB_043796a8;
      puVar24 = PTR_DAT_043796a0;
      puVar23 = PTR_DAT_04379698;
      puVar21 = PTR_DAT_04379690;
      *(undefined4 *)(param_1 + 0x1e) = 9;
      goto LAB_0130b27c;
    case 9:
      if (*(int *)(lVar26 + (long)(int)param_1[0x20] * 0xd0 + 0xc0) != 0) {
        return 0;
      }
      uVar20 = (**(code **)(*plVar11 + 0xc0))(plVar11,0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      (**(code **)(*plVar11 + 200))();
      puVar34 = PTR_LAB_0437a500;
      pbVar29 = PTR_DAT_04379e28;
      puVar22 = PTR_LAB_043796a8;
      puVar24 = PTR_DAT_043796a0;
      puVar23 = PTR_DAT_04379698;
      puVar21 = PTR_DAT_04379690;
      if (*(char *)((long)param_1 + 0xf9) == '\0') {
        if (*(char *)((long)param_1 + 0xfa) != '\0') {
          uVar25 = 1;
          uVar27 = 3;
          goto LAB_0130b884;
        }
        if (*(char *)((long)param_1 + 0xfb) != '\0') {
          uVar25 = 0;
          *(undefined4 *)(lVar17 + 0x84) = 7;
          uVar27 = 2;
          goto LAB_0130b884;
        }
      }
      else {
        uVar25 = 2;
        uVar27 = 4;
LAB_0130b884:
        *(undefined4 *)(lVar17 + 0x70) = uVar27;
        *(undefined4 *)(lVar17 + 0x90) = uVar25;
      }
      *(undefined4 *)(param_1 + 0x1e) = 0;
      goto LAB_0130b27c;
    case 10:
      iVar7 = FUN_0130cb7c(param_1);
      if (iVar7 != 2) {
        if (iVar7 != 1) {
          return 0;
        }
        local_4a0 = (long *)0x0;
        local_498 = (char *)0x0;
        local_4b0 = uVar4;
        uStack_4a8 = uVar5;
        if (((*PTR_DAT_04379e28 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e28);
        }
        uVar10 = *(undefined8 *)PTR_DAT_04379e30;
        *(undefined8 *)PTR_DAT_04379e38 = uVar10;
        FUN_00d264cc(uVar10,0,0,&local_4a0,&local_4b0,8,0,0);
        *(undefined4 *)(param_1 + 0x1e) = 0xb;
        return 0;
      }
      FUN_00d42438(plVar11,1,1);
      FUN_00d469b4(plVar11[0xd],plVar11,0);
      *(undefined4 *)(param_1 + 0x1e) = 5;
      puVar21 = PTR_DAT_04379690;
      plVar28 = (long *)PTR_DAT_04379e38;
      pbVar29 = PTR_DAT_04379e28;
LAB_0130b938:
      puVar22 = PTR_LAB_043796a8;
      puVar23 = PTR_DAT_04379698;
      puVar24 = PTR_DAT_043796a0;
      plVar9 = (long *)PTR_DAT_04379e30;
      goto LAB_0130b41c;
    case 0xb:
      if (((*pbVar29 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(pbVar29,puVar21,puVar22,puVar23,puVar24), iVar7 != 0)) {
        FUN_00100250(puVar34,plVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar29);
      }
      lVar33 = *plVar9;
      *plVar28 = lVar33;
      plVar32 = *(long **)(lVar33 + 0x50);
      if (plVar32 != (long *)0x0) {
        plVar1 = plVar32 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = (**(code **)(*plVar32 + 0x30))(plVar32);
        if ((uVar20 & 1) == 0) {
          uVar20 = 1;
        }
        else {
          uVar20 = (**(code **)(*plVar32 + 0x78))(plVar32);
          uVar20 = uVar20 & 0xffffffff;
        }
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      local_498 = "PLAY_PROP_TR_SCENETRANSITION_FOOTSTEPS";
      local_4a0 = (long *)0xe9c946bdd0639ac0;
      local_490 = 0x26;
      local_488 = (long *)0x0;
      FUN_028354b0(&local_4a0,puVar21);
      if (local_488 != (long *)0x0) {
        (**(code **)(*local_488 + 0x20))();
      }
      *(undefined4 *)(lVar17 + 0x70) = 1;
      *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    puVar22 = PTR_LAB_043796a8;
    puVar23 = PTR_DAT_04379698;
LAB_0130b3fc:
    puVar24 = PTR_DAT_043796a0;
LAB_0130b41c:
    puVar34 = PTR_LAB_0437a500;
    goto LAB_0130b27c;
  }
  lVar33 = plVar11[0xb9];
  *(undefined4 *)(plVar11 + 0xb9) = 0;
  uVar18 = 0;
  switch((int)lVar33) {
  case 1:
    *(undefined1 *)(lVar17 + 0x76) = 0;
    FUN_013430fc(lVar14);
    FUN_00d42438(lVar14,1,1);
    FUN_00d469b4(*(undefined8 *)(lVar14 + 0x68),lVar14,0);
    uVar25 = 6;
    plVar28 = (long *)PTR_DAT_04379e38;
    plVar9 = (long *)PTR_DAT_04379e30;
    break;
  case 2:
    FUN_0130c56c(param_1);
    uVar25 = 7;
    puVar21 = PTR_DAT_04379690;
    puVar22 = PTR_LAB_043796a8;
    pbVar29 = PTR_DAT_04379e28;
    break;
  case 3:
    *(undefined1 *)((long)param_1 + 0xf9) = 1;
    *(undefined1 *)(lVar17 + 0x94) = 0;
    if (*(int *)(lVar17 + 0x84) != 7) {
      *(undefined4 *)(param_1 + 0x20) = 1;
      FUN_0131bd9c(&local_468,0x400,1);
      FUN_0130ad28(&local_4a0,&local_468);
      lVar33 = (long)(int)param_1[0x20];
      piVar31 = (int *)(lVar26 + lVar33 * 0xd0 + 0xc0);
      if ((*piVar31 == 0) &&
         (uVar20 = FUN_02c4d8d4(*(undefined8 *)(lVar26 + lVar33 * 0xd0 + 8),&local_4a0,0,0),
         (uVar20 & 1) != 0)) {
        lVar33 = lVar26 + lVar33 * 0xd0;
        *(undefined1 *)(lVar33 + 0x30) = 0;
        *(undefined4 *)(lVar33 + 0x34) = 0;
        *piVar31 = 1;
      }
      if (local_480 != (long *)0x0) {
        (**(code **)(*local_480 + 0x20))();
      }
      if (local_4a0 != (long *)0x0) {
        (**(code **)(*local_4a0 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0x1e) = 8;
    plVar28 = (long *)PTR_DAT_04379e38;
    plVar9 = (long *)PTR_DAT_04379e30;
    pbVar29 = PTR_DAT_04379e28;
    goto LAB_0130b3fc;
  case 4:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(lVar17 + 0x94) = 1;
    if (*(int *)(lVar17 + 0x84) != 7) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      FUN_0131bd9c(&local_468,0x400,0);
      FUN_0130ad28(&local_4a0,&local_468);
      lVar33 = (long)(int)param_1[0x20];
      piVar31 = (int *)(lVar26 + lVar33 * 0xd0 + 0xc0);
      if ((*piVar31 == 0) &&
         (uVar20 = FUN_02c4d8d4(*(undefined8 *)(lVar26 + lVar33 * 0xd0 + 8),&local_4a0,0,0),
         (uVar20 & 1) != 0)) {
        lVar33 = lVar26 + lVar33 * 0xd0;
        *(undefined1 *)(lVar33 + 0x30) = 0;
        *(undefined4 *)(lVar33 + 0x34) = 0;
        *piVar31 = 1;
      }
      if (local_480 != (long *)0x0) {
        (**(code **)(*local_480 + 0x20))();
      }
      if (local_4a0 != (long *)0x0) {
        (**(code **)(*local_4a0 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0x1e) = 8;
    puVar21 = PTR_DAT_04379690;
    plVar28 = (long *)PTR_DAT_04379e38;
    plVar9 = (long *)PTR_DAT_04379e30;
    pbVar29 = PTR_DAT_04379e28;
    goto LAB_0130b41c;
  case 5:
    *(undefined1 *)((long)param_1 + 0xfb) = 1;
    *(undefined1 *)(lVar17 + 0x94) = 1;
    *(undefined4 *)(param_1 + 0x1e) = 8;
    goto LAB_0130b27c;
  case 6:
    *(undefined1 *)(lVar17 + 0x128) = 1;
    return 0;
  case 7:
    goto switchD_0130b6e8_caseD_7;
  default:
    goto switchD_0130b6e8_default;
  }
  puVar34 = PTR_LAB_0437a500;
  puVar24 = PTR_DAT_043796a0;
  puVar23 = PTR_DAT_04379698;
  *(undefined4 *)(param_1 + 0x1e) = uVar25;
  goto LAB_0130b27c;
switchD_0130b6e8_caseD_7:
  FUN_0130c860(param_1);
  puVar34 = PTR_LAB_0437a500;
  puVar22 = PTR_LAB_043796a8;
  puVar24 = PTR_DAT_043796a0;
  puVar23 = PTR_DAT_04379698;
  puVar21 = PTR_DAT_04379690;
  *(undefined4 *)(param_1 + 0x1e) = 10;
  goto LAB_0130b27c;
}


