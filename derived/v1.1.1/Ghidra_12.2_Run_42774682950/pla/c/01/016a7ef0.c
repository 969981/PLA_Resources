/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a7ef0; name: FUN_016a7ef0
 */


void FUN_016a7ef0(long param_1,ulong *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong local_118;
  undefined1 local_110;
  undefined1 *local_108;
  ulong local_100;
  int *local_f8;
  undefined **local_f0 [2];
  undefined1 auStack_e0 [160];
  
  uVar11 = *(ulong *)(param_1 + 0xa0);
  if (uVar11 == 0) {
    return;
  }
  uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar9 = *param_2;
  uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar13 < 2) {
    uVar14 = uVar11 - 1 & uVar9;
  }
  else if (uVar9 < uVar11) {
    uVar14 = uVar9;
  }
  else {
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar9 / uVar11;
    }
    uVar14 = uVar9 - uVar14 * uVar11;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x98) + uVar14 * 8);
  if (plVar16 == (long *)0x0) {
    return;
  }
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) {
    return;
  }
  if (uVar13 < 2) {
    do {
      if (plVar16[1] == uVar9) {
        if (plVar16[2] == uVar9) goto LAB_016a8020;
      }
      else if ((plVar16[1] & uVar11 - 1) != uVar14) {
        return;
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar13 = plVar16[1];
    if (uVar13 == uVar9) {
      if (plVar16[2] == uVar9) goto LAB_016a8020;
    }
    else {
      if (uVar11 <= uVar13) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar13 / uVar11;
        }
        uVar13 = uVar13 - uVar5 * uVar11;
      }
      if (uVar13 != uVar14) {
        return;
      }
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_016a81bc:
  *(undefined1 *)(plVar17 + 3) = 10;
  goto LAB_016a81c4;
LAB_016a8020:
  local_108 = (undefined1 *)plVar16[3];
  local_100 = plVar16[4];
  local_f8 = (int *)plVar16[5];
  if (local_108 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return;
  }
  if (local_108 == &DAT_cbf29ce484222645) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar16 = *(long **)(lVar10 + 0x290);
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar12 = (undefined1 *)plVar16[0xe];
  if (puVar12 != (undefined1 *)0x0) {
    uVar11 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)local_108);
    }
    else if (local_108 < puVar12) {
      puVar15 = local_108;
    }
    else {
      uVar13 = 0;
      if (puVar12 != (undefined1 *)0x0) {
        uVar13 = (ulong)local_108 / (ulong)puVar12;
      }
      puVar15 = local_108 + -(uVar13 * (long)puVar12);
    }
    plVar17 = *(long **)(plVar16[0xd] + (long)puVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == local_108) {
            if ((undefined1 *)plVar17[2] == local_108) goto LAB_016a81bc;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar12 + -1)) != puVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar18 = (undefined1 *)plVar17[1];
          if (puVar18 == local_108) {
            if ((undefined1 *)plVar17[2] == local_108) goto LAB_016a81bc;
          }
          else {
            if (puVar12 <= puVar18) {
              uVar11 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar18 / (ulong)puVar12;
              }
              puVar18 = puVar18 + -(uVar11 * (long)puVar12);
            }
            if (puVar18 != puVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_016a81c4:
  uVar11 = FUN_016a83a0(&local_108);
  if ((uVar11 & 0xff) != 0) {
    puVar8 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&local_108);
    *puVar8 = (int)(uVar11 >> 0x20);
  }
  if (((*(ushort *)((long)local_f8 - (long)*local_f8) < 5) ||
      (uVar11 = (ulong)((ushort *)((long)local_f8 - (long)*local_f8))[2], uVar11 == 0)) ||
     (*(long *)((long)local_f8 + uVar11) != -0x1b2f856691a10a18)) {
    bVar4 = false;
  }
  else {
    plVar16[0x1a] = (long)local_108;
    FUN_016aa648(local_f0,param_1);
    if ((char)local_f0[0] == '\0') {
      puVar12 = &DAT_cbf29ce484222645;
    }
    else {
      puVar12 = (undefined1 *)*param_2;
      memcpy((void *)(param_1 + 0x200),auStack_e0,0x98);
      local_f0[0] = (undefined **)((ulong)local_f0[0] & 0xffffffffffffff00);
    }
    *(undefined1 **)(param_1 + 0x2a0) = puVar12;
    FUN_00db0abc("now_quest",local_100 & 0xffffffff);
    bVar4 = true;
  }
  FUN_00daa374(local_f0,*(undefined8 *)(param_1 + 8));
  local_f0[0] = &PTR_LAB_041eda58;
  uVar2 = (uint)local_100;
  if (!bVar4) {
    uVar2 = (uint)local_100 + 10000;
  }
  local_118 = (ulong)uVar2;
  local_110 = 1;
  FUN_00dab008(local_f0,&local_118);
  (*(code *)local_f0[0][2])(local_f0);
  thunk_FUN_00daf734(local_f0);
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return;
}


