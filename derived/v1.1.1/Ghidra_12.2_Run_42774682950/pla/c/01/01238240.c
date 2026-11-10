/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01238240; name: FUN_01238240
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01238240(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  uint local_168 [2];
  long *local_160;
  undefined1 local_158;
  long *local_150;
  long *local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long *local_118;
  uint *local_110;
  uint *local_108;
  uint *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  uint *local_d8;
  uint *local_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  uint *local_a0;
  uint *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  uStack_f8 = *(undefined8 *)(param_1 + 8);
  local_70 = 0;
  local_a0 = (uint *)0x0;
  local_80 = 0x333333333333333;
  uStack_78 = 0;
  local_a8 = 0;
  local_e0 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_c8 = (uint *)0x0;
  local_d8 = (uint *)0x0;
  local_d0 = (uint *)0x0;
  local_b8 = 0x333333333333333;
  uStack_b0 = 0;
  local_100 = (uint *)0x0;
  local_110 = (uint *)0x0;
  local_108 = (uint *)0x0;
  local_f0 = 0x333333333333333;
  uStack_e8 = 0;
  uStack_c0 = uStack_f8;
  uStack_88 = uStack_f8;
  FUN_0123924c(&local_a0);
  lVar8 = *param_2;
  lVar15 = param_2[1];
  while (lVar15 != lVar8) {
    if (*(long **)(lVar15 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar15 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + -0x30) + 0x20))();
    }
    if (*(long **)(lVar15 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + -0x38) + 0x20))();
    }
    plVar1 = (long *)(lVar15 + -0x48);
    lVar15 = lVar15 + -0x50;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  param_2[1] = lVar8;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01149008(&local_118);
  puVar12 = local_98;
  if (local_a0 != local_98) {
    puVar13 = local_a0;
    do {
      local_168[0] = *puVar13;
      local_160 = *(long **)(puVar13 + 2);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x18))();
      }
      local_158 = (undefined1)puVar13[4];
      local_150 = *(long **)(puVar13 + 6);
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x18))();
      }
      local_148 = *(long **)(puVar13 + 8);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))();
      }
      local_140 = *(undefined8 *)(puVar13 + 10);
      local_138 = *(long **)(puVar13 + 0xc);
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))();
      }
      local_130 = *(undefined8 *)(puVar13 + 0xe);
      local_128 = *(undefined8 *)(puVar13 + 0x10);
      uStack_120 = *(undefined8 *)(puVar13 + 0x12);
      if (6 < param_3) goto LAB_0123845c;
      uVar9 = (ulong)local_168[0];
      switch(param_3) {
      case 0:
        if (local_168[0] < 200) {
          cVar3 = *(char *)((long)local_118 + uVar9 + 0x68);
joined_r0x01238a58:
          if (cVar3 != '\0') goto LAB_012384e8;
        }
        break;
      case 1:
        if ((199 < local_168[0]) || (*(char *)((long)local_118 + uVar9 + 0x130) == '\0')) break;
LAB_012384e8:
        if (local_d0 == local_c8) {
          ppuVar7 = &local_d8;
          goto LAB_0123854c;
        }
        FUN_01236698(&uStack_c0,local_d0,local_168);
        local_d0 = local_d0 + 0x14;
        goto joined_r0x01238558;
      case 2:
        if (local_168[0] < 200) {
          cVar3 = *(char *)((long)local_118 + uVar9 + 0x1f8);
          goto joined_r0x01238a58;
        }
        break;
      case 3:
        if (local_168[0] < 100) {
          cVar3 = *(char *)((long)local_118 + uVar9 + 0x2c0);
          goto joined_r0x01238a58;
        }
        break;
      case 4:
        if (local_168[0] < 4) {
          cVar3 = *(char *)((long)local_118 + uVar9 + 0x324);
          goto joined_r0x01238a58;
        }
        break;
      case 5:
        if (local_168[0] < 200) {
          cVar3 = *(char *)((long)local_118 + uVar9 + 0x328);
          goto joined_r0x01238a58;
        }
        break;
      case 6:
        if (local_168[0] < 100) {
          cVar3 = *(char *)((long)local_118 + uVar9 + 0x3f0);
          goto joined_r0x01238a58;
        }
      }
LAB_0123845c:
      if (local_108 == local_100) {
        ppuVar7 = &local_110;
LAB_0123854c:
        FUN_01239b24(ppuVar7,local_168);
      }
      else {
        FUN_01236698(&uStack_f8,local_108,local_168);
        local_108 = local_108 + 0x14;
      }
joined_r0x01238558:
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      puVar13 = puVar13 + 0x14;
    } while (puVar13 != puVar12);
  }
  FUN_01239d90(local_d8,local_d0);
  FUN_0123aad0(local_110,local_108);
  puVar12 = local_108;
  if (local_110 != local_108) {
    puVar13 = local_110;
    do {
      local_168[0] = *puVar13;
      local_160 = *(long **)(puVar13 + 2);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x18))();
      }
      local_158 = (undefined1)puVar13[4];
      local_150 = *(long **)(puVar13 + 6);
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x18))();
      }
      local_148 = *(long **)(puVar13 + 8);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))();
      }
      local_140 = *(undefined8 *)(puVar13 + 10);
      local_138 = *(long **)(puVar13 + 0xc);
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))();
      }
      local_130 = *(undefined8 *)(puVar13 + 0xe);
      local_128 = *(undefined8 *)(puVar13 + 0x10);
      uStack_120 = *(undefined8 *)(puVar13 + 0x12);
      if (param_2[1] == param_2[2]) {
        FUN_01239b24(param_2,local_168);
      }
      else {
        FUN_01236698(param_2 + 3,param_2[1],local_168);
        param_2[1] = param_2[1] + 0x50;
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      puVar13 = puVar13 + 0x14;
    } while (puVar13 != puVar12);
  }
  puVar11 = local_d0;
  puVar12 = local_d8;
  puVar13 = local_a0;
  puVar10 = local_98;
  puVar5 = local_a0;
  if (local_d8 != local_d0) {
    puVar14 = local_d8;
    do {
      local_168[0] = *puVar14;
      local_160 = *(long **)(puVar14 + 2);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x18))();
      }
      local_158 = (undefined1)puVar14[4];
      local_150 = *(long **)(puVar14 + 6);
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x18))();
      }
      local_148 = *(long **)(puVar14 + 8);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))();
      }
      local_140 = *(undefined8 *)(puVar14 + 10);
      local_138 = *(long **)(puVar14 + 0xc);
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))();
      }
      local_130 = *(undefined8 *)(puVar14 + 0xe);
      local_128 = *(undefined8 *)(puVar14 + 0x10);
      uStack_120 = *(undefined8 *)(puVar14 + 0x12);
      if (param_2[1] == param_2[2]) {
        FUN_01239b24(param_2,local_168);
      }
      else {
        FUN_01236698(param_2 + 3,param_2[1],local_168);
        param_2[1] = param_2[1] + 0x50;
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      puVar14 = puVar14 + 0x14;
      puVar12 = local_d8;
      puVar13 = local_a0;
      puVar10 = local_98;
      puVar5 = local_a0;
    } while (puVar14 != puVar11);
  }
  while (local_a0 = puVar5, puVar5 = local_a0, local_d8 = puVar12, puVar10 != local_a0) {
    local_a0 = puVar13;
    if (*(long **)(puVar10 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(puVar10 + -8) + 0x20))();
    }
    if (*(long **)(puVar10 + -0xc) != (long *)0x0) {
      (**(code **)(**(long **)(puVar10 + -0xc) + 0x20))();
    }
    if (*(long **)(puVar10 + -0xe) != (long *)0x0) {
      (**(code **)(**(long **)(puVar10 + -0xe) + 0x20))();
    }
    puVar11 = puVar10 + -0x12;
    puVar10 = puVar10 + -0x14;
    puVar12 = local_d8;
    puVar13 = local_a0;
    if (*(long **)puVar11 != (long *)0x0) {
      (**(code **)(**(long **)puVar11 + 0x20))();
      puVar12 = local_d8;
      puVar13 = local_a0;
    }
  }
  local_98 = local_a0;
  puVar10 = local_110;
  puVar11 = local_d0;
  local_a0 = puVar13;
  while (local_110 = puVar10, puVar11 != puVar12) {
    if (*(long **)(puVar11 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(puVar11 + -8) + 0x20))();
    }
    if (*(long **)(puVar11 + -0xc) != (long *)0x0) {
      (**(code **)(**(long **)(puVar11 + -0xc) + 0x20))();
    }
    if (*(long **)(puVar11 + -0xe) != (long *)0x0) {
      (**(code **)(**(long **)(puVar11 + -0xe) + 0x20))();
    }
    puVar13 = puVar11 + -0x12;
    puVar11 = puVar11 + -0x14;
    puVar10 = local_110;
    if (*(long **)puVar13 != (long *)0x0) {
      (**(code **)(**(long **)puVar13 + 0x20))();
      puVar10 = local_110;
    }
  }
  local_d0 = puVar12;
  puVar12 = local_108;
  while (puVar12 != puVar10) {
    if (*(long **)(puVar12 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(puVar12 + -8) + 0x20))();
    }
    if (*(long **)(puVar12 + -0xc) != (long *)0x0) {
      (**(code **)(**(long **)(puVar12 + -0xc) + 0x20))();
    }
    if (*(long **)(puVar12 + -0xe) != (long *)0x0) {
      (**(code **)(**(long **)(puVar12 + -0xe) + 0x20))();
    }
    puVar13 = puVar12 + -0x12;
    puVar12 = puVar12 + -0x14;
    if (*(long **)puVar13 != (long *)0x0) {
      (**(code **)(**(long **)puVar13 + 0x20))();
    }
  }
  local_108 = puVar10;
  if (local_118 != (long *)0x0) {
    lVar8 = local_118[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  FUN_01239a1c(&local_110);
  FUN_01239a1c(&local_d8);
  FUN_01239a1c(&local_a0);
  return;
}


