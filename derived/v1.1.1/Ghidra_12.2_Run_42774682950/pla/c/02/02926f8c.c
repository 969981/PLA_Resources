/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02926f8c; name: FUN_02926f8c
 */


undefined8 FUN_02926f8c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  undefined4 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  *(undefined8 *)(param_1 + 0x3d0) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_b0 = 0x12f684bda12f684;
  local_a8 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0x12f684bda12f684;
  local_80 = 0;
  local_68 = 0x3f800000;
  local_c0 = 0;
  local_98 = 0;
  uVar5 = 0;
  local_b8 = param_2;
  local_90 = param_2;
  if (*(long *)(param_1 + 0xc0) != 0) {
    if (*(long **)(param_1 + 0x98) != (long *)0x0) {
      lVar6 = tpidr_el0;
      plVar9 = *(long **)(param_1 + 0x98);
      do {
        while( true ) {
          plVar7 = (long *)*plVar9;
          if ((long *)plVar9[6] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[6] + 0x20))();
          }
          if ((long *)plVar9[3] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[3] + 0x20))();
          }
          plVar10 = *(long **)(param_1 + 0xa0);
          uVar3 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar3 & 1) != 0) break;
LAB_029270a4:
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0xe8,8);
          plVar9 = plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0292713c;
        }
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_029270a4;
        FUN_02bcc824(plVar10,plVar9,0xe8,8);
        plVar9 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
LAB_0292713c:
    uVar3 = *(ulong *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (uVar3 == 0) {
      local_c8 = 0;
    }
    else {
      uVar4 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar8 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar8 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar8 + 0x18) = 0;
        } while (uVar3 - uVar4 != lVar6);
      }
      if (uVar4 != 0) {
        lVar6 = lVar6 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    uVar5 = local_c8;
  }
  local_c8 = 0;
  lVar6 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  if (lVar6 != 0) {
    plVar9 = *(long **)(param_1 + 0x78);
    lVar8 = *(long *)(param_1 + 0x70) << 3;
    uVar3 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar6,lVar8,8);
        goto LAB_02927260;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,lVar8,8);
  }
LAB_02927260:
  uVar3 = local_c0;
  *(ulong *)(param_1 + 0x70) = local_c0;
  *(undefined8 *)(param_1 + 0x78) = local_b8;
  local_c0 = 0;
  *(undefined4 *)(param_1 + 0x90) = local_a0;
  *(undefined8 *)(param_1 + 0x80) = local_b0;
  *(undefined8 *)(param_1 + 0x88) = local_a8;
  *(undefined4 *)(param_1 + 0xb8) = local_78;
  *(undefined8 *)(param_1 + 0xa0) = local_90;
  *(undefined8 *)(param_1 + 0xa8) = local_88;
  *(undefined8 *)(param_1 + 0xb0) = local_80;
  *(long *)(param_1 + 0xc0) = local_70;
  *(undefined4 *)(param_1 + 200) = local_68;
  *(long *)(param_1 + 0x98) = local_98;
  if (local_70 != 0) {
    uVar4 = *(ulong *)(local_98 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar4 = uVar4 & uVar3 - 1;
    }
    else if (uVar3 <= uVar4) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar4 / uVar3;
      }
      uVar4 = uVar4 - uVar1 * uVar3;
    }
    *(long **)(*(long *)(param_1 + 0x68) + uVar4 * 8) = (long *)(param_1 + 0x98);
    local_70 = 0;
    local_98 = 0;
  }
  FUN_02926cf4(&local_c8);
  plVar9 = (long *)(param_1 + 0xd0);
  lVar6 = *plVar9;
  if (lVar6 != 0) {
    plVar7 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xd8) = lVar6;
    lVar8 = *(long *)(param_1 + 0xe0) - lVar6;
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_02927364:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar8,8);
    }
    else {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02927364;
      FUN_02bcc824(plVar7,lVar6,lVar8,8);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *plVar9 = 0;
  }
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  *(undefined8 *)(param_1 + 0xf0) = 0x1fffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *plVar9 = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x108) = param_2;
  local_c8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_b0 = 0x7ffffffffffffff;
  local_a8 = 0;
  local_88 = 0x7ffffffffffffff;
  local_80 = 0;
  local_68 = 0x3f800000;
  local_c0 = 0;
  local_98 = 0;
  local_b8 = param_2;
  local_90 = param_2;
  if (*(long *)(param_1 + 0x180) != 0) {
    if (*(long **)(param_1 + 0x158) != (long *)0x0) {
      lVar6 = tpidr_el0;
      plVar9 = *(long **)(param_1 + 0x158);
      do {
        while( true ) {
          plVar7 = *(long **)(param_1 + 0x160);
          plVar10 = (long *)*plVar9;
          uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar3 & 1) != 0) break;
LAB_02927450:
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar9,0x30,8);
          plVar9 = plVar10;
          if (plVar10 == (long *)0x0) goto LAB_029274e4;
        }
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02927450;
        FUN_02bcc824(plVar7,plVar9,0x30,8);
        plVar9 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
LAB_029274e4:
    uVar3 = *(ulong *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (uVar3 != 0) {
      uVar4 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar8 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x128) + lVar8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x128) + lVar8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x128) + lVar8 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x128) + lVar8 + 0x18) = 0;
        } while (uVar3 - uVar4 != lVar6);
      }
      if (uVar4 != 0) {
        lVar6 = lVar6 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x128) + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  local_c8 = 0;
  lVar6 = *(long *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (lVar6 != 0) {
    plVar9 = *(long **)(param_1 + 0x138);
    lVar8 = *(long *)(param_1 + 0x130) << 3;
    uVar3 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar6,lVar8,8);
        goto LAB_029275fc;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,lVar8,8);
  }
LAB_029275fc:
  local_c0 = 0;
  *(undefined4 *)(param_1 + 0x150) = local_a0;
  *(undefined8 *)(param_1 + 0x140) = local_b0;
  *(undefined8 *)(param_1 + 0x148) = local_a8;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = local_b8;
  *(undefined4 *)(param_1 + 0x178) = local_78;
  *(undefined8 *)(param_1 + 0x168) = local_88;
  *(undefined8 *)(param_1 + 0x170) = local_80;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = local_90;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  FUN_0292a430(&local_c8);
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x666666666666666;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0x666666666666666;
  local_80 = 0;
  local_b8 = param_2;
  local_90 = param_2;
  FUN_0292a698(param_1 + 0x1b0,&local_c8);
  FUN_0292a1c8(&local_c8);
  local_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x666666666666666;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0x666666666666666;
  local_80 = 0;
  local_b8 = param_2;
  local_90 = param_2;
  FUN_0292a698(param_1 + 0x218,&local_c8);
  FUN_0292a1c8(&local_c8);
  local_c8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_c0 = 0;
  local_70 = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x108421084210842;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0x108421084210842;
  local_80 = 0;
  local_b8 = param_2;
  local_90 = param_2;
  FUN_0292aa0c(param_1 + 0x280,&local_c8);
  FUN_02929f48(&local_c8);
  local_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x3f800000;
  local_b0 = 0x108421084210842;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0x108421084210842;
  local_80 = 0;
  local_b8 = param_2;
  local_90 = param_2;
  FUN_0292aa0c(param_1 + 0x2e8,&local_c8);
  FUN_02929f48(&local_c8);
  *(undefined1 *)(param_1 + 0x50) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return 1;
}


