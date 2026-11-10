/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ea810; name: FUN_006ea810
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006ea810(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,long *param_5,
                 ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *__n;
  undefined1 auVar10 [8];
  long *******ppppppplVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *******ppppppplVar16;
  undefined8 local_1e0;
  long *local_1d8;
  long *local_1d0;
  long *local_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  long *******local_1b0;
  long *******ppppppplStack_1a8;
  long *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long lStack_168;
  long local_160;
  undefined **local_158;
  long *local_150;
  byte *local_130;
  long *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  undefined *local_e0;
  long *plStack_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  undefined1 local_c0 [8];
  long *plStack_b8;
  long *local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long **local_78;
  long *local_70;
  
  puVar4 = PTR_DAT_04373170;
  puVar12 = PTR_DAT_04373168;
  if ((param_6 & 1) != 0) {
    FUN_006fd050(&local_100,*(long *)(*param_2 + 8) + 8,*(long *)(*param_2 + 8) + 0x48);
    puVar1 = puVar12 + 0x10;
    puStack_1b8 = puVar4 + 0x10;
    local_1b0 = (long *******)&local_1b0;
    local_158 = (undefined **)0x0;
    local_150 = (long *)0x0;
    local_1c0 = puVar1;
    ppppppplStack_1a8 = local_1b0;
    (**(code **)(*local_100 + 0x10))(local_100,&local_198);
    local_158 = &puStack_1b8;
    thunk_FUN_00783af0(&local_1c0);
    local_1c0 = puVar1;
    FUN_00782f18(&puStack_1b8);
    uVar5 = (**(code **)(*local_100 + 0x38))();
                    /* try { // try from 006ea8d0 to 006ea8d7 has its CatchHandler @ 006eb1dc */
    FUN_006eb444(&local_e0,uVar5);
    if (plStack_f8 == (long *)0x0) {
LAB_006ea8f8:
    }
    else {
      plVar13 = plStack_f8 + 1;
      do {
        lVar14 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 != 0) goto LAB_006ea8f8;
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      std::__shared_weak_count::__release_weak();
    }
    if ((int)local_e0 != 0) {
      lStack_168 = 0;
      local_170 = 0;
      local_158 = (undefined **)0x0;
      local_160 = 0;
      puStack_1b8 = (undefined *)0x0;
      local_1c0 = (undefined *)0x0;
      plStack_188 = (long *)0x0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      ppppppplStack_1a8 = (long *******)0x0;
      local_1b0 = (long *******)0x0;
      local_198 = 0;
      local_1a0 = (long *)0x0;
      ppppppplStack_1a8 = (long *******)FUN_00612290();
      local_1a0 = (long *)0x0;
      local_1b0 = (long *******)0x0;
      local_1c0 = (undefined *)0x0;
      puStack_1b8 = (undefined *)0x0;
      local_198 = 0;
      local_190 = 0;
      plStack_188 = (long *)FUN_00612290();
      lStack_168 = 0;
      local_160 = 0;
      local_158 = (undefined **)0x0;
      local_190 = 0;
      local_1a0 = (long *)0x0;
      local_198 = 0;
      local_150 = (long *)FUN_00612290();
      FUN_006eb5c8(param_1,&local_e0,&local_1c0);
      lVar15 = lStack_168;
      lVar14 = local_160;
      if (lStack_168 != 0) {
        while (lVar14 != lVar15) {
          FUN_006ee714(lVar14 + -0xa8);
          lVar14 = lVar14 + -0xa8;
        }
        local_160 = lVar15;
        (**(code **)(*local_150 + 0x18))(local_150,lStack_168,(long)local_158 - lStack_168,8);
      }
      if (((ulong)local_1a0 & 1) != 0) {
        (**(code **)(*plStack_188 + 0x18))
                  (plStack_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_1c0 & 1) != 0) {
        (*(code *)(*ppppppplStack_1a8)[3])
                  (ppppppplStack_1a8,local_1b0,(ulong)local_1c0 & 0xfffffffffffffffe,1);
      }
      FUN_02cd5c94(&local_90,lStack_88);
      if ((char)plStack_b8 != '\0') {
        FUN_02767254(&local_b0,plStack_a8);
      }
      if (((ulong)plStack_d8 & 1) == 0) {
        return;
      }
      auVar10 = local_c0;
      ppppppplVar16 = ppppppplStack_c8;
      plVar13 = plStack_d8;
      goto LAB_006eb070;
    }
    lVar14 = *(long *)(param_3 + 0x30);
    if (lVar14 == 0) {
      puVar6 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_3 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
                    /* try { // try from 006ea9c4 to 006ea9c7 has its CatchHandler @ 006eb0b8 */
      lVar14 = FUN_00724638(puVar6);
      *(long *)(param_3 + 0x30) = lVar14;
    }
    plVar13 = (long *)0x0;
    if (*(long *)(lVar14 + 0x20) != 0) {
      plVar13 = (long *)(*(long *)(lVar14 + 0x20) + 8);
    }
    if (*(int *)(lVar14 + 0x18) != 0) {
      lVar14 = (long)*(int *)(lVar14 + 0x18) << 3;
      lVar15 = *plVar13;
      lVar7 = *(long *)(lVar15 + 0x28);
      while( true ) {
        if (lVar7 == 0) {
          puVar6 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
            puVar6 = (ulong *)*puVar6;
          }
                    /* try { // try from 006eaa00 to 006eaa03 has its CatchHandler @ 006eb220 */
          lVar7 = FUN_00724a34(puVar6);
          *(long *)(lVar15 + 0x28) = lVar7;
        }
        FUN_006fb1e0(lVar7,&local_90);
        plVar13 = plVar13 + 1;
        lVar14 = lVar14 + -8;
        if (lVar14 == 0) break;
        lVar15 = *plVar13;
        lVar7 = *(long *)(lVar15 + 0x28);
      }
    }
    FUN_02cd5c94(&local_90,lStack_88);
    if ((char)plStack_b8 != '\0') {
      FUN_02767254(&local_b0,plStack_a8);
    }
    if (((ulong)plStack_d8 & 1) != 0) {
      (**(code **)(*(long *)local_c0 + 0x18))
                (local_c0,ppppppplStack_c8,(ulong)plStack_d8 & 0xfffffffffffffffe,1);
    }
  }
  plStack_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_100 = (long *)0x0;
  local_e8 = (long *)FUN_00612290();
  local_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_1e0 = 0;
  local_1d8 = (long *)0x0;
  FUN_006ee7cc(&local_1d0,*(undefined8 *)(*param_2 + 8),param_3,&local_1e0);
  puVar12 = puVar12 + 0x10;
  plStack_d8 = (long *)(puVar4 + 0x10);
  local_d0 = (long *******)&local_d0;
  local_78 = (long **)0x0;
  local_70 = (long *)0x0;
  local_e0 = puVar12;
  ppppppplStack_c8 = local_d0;
  (**(code **)(*local_1d0 + 0x10))(local_1d0,&plStack_b8);
  local_78 = &plStack_d8;
  thunk_FUN_00783af0(&local_e0);
  local_e0 = puVar12;
  FUN_00782f18(&plStack_d8);
  plVar9 = local_1c8;
  plVar13 = local_1d0;
  local_1d0 = (long *)0x0;
  local_1c8 = (long *)0x0;
  (**(code **)(*plVar13 + 0x30))(&local_1c0);
  if (plVar9 != (long *)0x0) {
    plVar13 = plVar9 + 1;
    do {
      lVar14 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1c8 != (long *)0x0) {
    plVar13 = local_1c8 + 1;
    do {
      lVar14 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_1c8 + 0x10))(local_1c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1d8 == (long *)0x0) {
LAB_006eabb0:
    if ((int)local_1c0 != 0) goto LAB_006eabb8;
LAB_006eac5c:
    if ((*local_130 & 1) == 0) {
      local_130 = local_130 + 1;
    }
    else {
      local_130 = *(byte **)(local_130 + 0x10);
    }
    FUN_0070ea20(&local_e0,local_130);
    if ((local_e8 == plStack_a8) || (uVar8 = (**(code **)(*local_e8 + 0x20))(), (uVar8 & 1) != 0)) {
      if (((ulong)local_100 & 1) != 0) {
        *(char *)local_f0 = '\0';
        plStack_f8 = (long *)0x0;
        if (((ulong)local_100 & 1) != 0) {
          (**(code **)(*local_e8 + 0x18))(local_e8,local_f0,(ulong)local_100 & 0xfffffffffffffffe,1)
          ;
        }
      }
      local_100 = (long *)local_c0;
      local_c0 = (undefined1  [8])0x0;
      plStack_f8 = plStack_b8;
      local_f0 = local_b0;
      plStack_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
LAB_006eada4:
      if (((ulong)local_e0 & 1) == 0) goto LAB_006eadac;
LAB_006eafac:
      (*(code *)(*ppppppplStack_c8)[3])
                (ppppppplStack_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      lVar14 = *param_5;
    }
    else {
      if (((ulong)(byte)local_c0[0] & 1) == 0) {
        plVar13 = (long *)((ulong)local_c0 >> 1 & 0x7f);
        plVar9 = (long *)(local_c0 + 1);
      }
      else {
        plVar13 = plStack_b8;
        plVar9 = local_b0;
      }
                    /* try { // try from 006eaf78 to 006eaf7f has its CatchHandler @ 006eb0bc */
      FUN_02762710(&local_100,plVar9,plVar13);
      if (((ulong)(byte)local_c0[0] & 1) == 0) goto LAB_006eada4;
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
      if (((ulong)local_e0 & 1) != 0) goto LAB_006eafac;
LAB_006eadac:
      lVar14 = *param_5;
    }
    if (lVar14 != 0) {
      plVar13 = (long *)((ulong)&local_100 | 1);
      if (((ulong)local_100 & 1) != 0) {
        plVar13 = local_f0;
      }
      FUN_006eb9b0(lVar14,plVar13);
    }
    FUN_00718d5c(&local_170);
    if ((char)local_198 != '\0') {
      FUN_02767254(&local_190,plStack_188);
    }
    if (((ulong)puStack_1b8 & 1) != 0) {
      (**(code **)(*local_1a0 + 0x18))
                (local_1a0,ppppppplStack_1a8,(ulong)puStack_1b8 & 0xfffffffffffffffe,1);
    }
    plVar13 = (long *)((ulong)&local_100 | 1);
    if (((ulong)local_100 & 1) != 0) {
      plVar13 = local_f0;
    }
    local_e0 = (undefined *)0x0;
    plStack_d8 = (long *)0x0;
    local_d0 = (long *******)0x0;
    plVar9 = (long *)FUN_00612290();
    ppppppplStack_c8 = (long *******)plVar9;
    __n = (long *)strlen((char *)plVar13);
    if ((long *)0xffffffffffffffef < __n) {
                    /* try { // try from 006eb0ac to 006eb0b3 has its CatchHandler @ 006eb0b4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (&DAT_00000016 < __n) {
      ppppppplVar16 =
           (long *******)
           (**(code **)(*plVar9 + 0x10))(plVar9,(ulong)(__n + 2) & 0xfffffffffffffff0,1);
      local_e0 = (undefined *)((ulong)(__n + 2) & 0xfffffffffffffff0 | 1);
      plStack_d8 = __n;
      local_d0 = ppppppplVar16;
LAB_006eaea4:
      memcpy(ppppppplVar16,plVar13,(size_t)__n);
    }
    else {
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,(char)((int)__n << 1));
      ppppppplVar16 = (long *******)((ulong)&local_e0 | 1);
      if (__n != (long *)0x0) goto LAB_006eaea4;
    }
    *(undefined1 *)((long)ppppppplVar16 + (long)__n) = 0;
    local_c0 = (undefined1  [8])0x0;
    plStack_b8 = (long *)0x0;
    FUN_00704ef8(&local_1c0,&local_e0,param_4);
                    /* try { // try from 006eaecc to 006eaee7 has its CatchHandler @ 006eb160 */
    FUN_006ebac0(param_1,param_2,&local_1c0,param_4,param_5,param_7);
    FUN_00714664(&local_1c0);
    if (plStack_b8 != (long *)0x0) {
      plVar13 = plStack_b8 + 1;
      do {
        lVar14 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (((ulong)local_e0 & 1) != 0) {
      ppppppplVar16 = ppppppplStack_c8;
      ppppppplVar11 = local_d0;
      puVar12 = local_e0;
      goto LAB_006eaf38;
    }
  }
  else {
    plVar13 = local_1d8 + 1;
    do {
      lVar14 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 != 0) goto LAB_006eabb0;
    (**(code **)(*local_1d8 + 0x10))(local_1d8);
    std::__shared_weak_count::__release_weak();
    if ((int)local_1c0 == 0) goto LAB_006eac5c;
LAB_006eabb8:
    lStack_88 = 0;
    local_90 = 0;
    local_78 = (long **)0x0;
    local_80 = 0;
    plStack_d8 = (long *)0x0;
    local_e0 = (undefined *)0x0;
    plStack_a8 = (long *)0x0;
    local_b0 = (long *)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    ppppppplStack_c8 = (long *******)0x0;
    local_d0 = (long *******)0x0;
    plStack_b8 = (long *)0x0;
    local_c0 = (undefined1  [8])0x0;
    ppppppplStack_c8 = (long *******)FUN_00612290();
    local_c0 = (undefined1  [8])0x0;
    local_d0 = (long *******)0x0;
    local_e0 = (undefined *)0x0;
    plStack_d8 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plStack_a8 = (long *)FUN_00612290();
    lStack_88 = 0;
    local_80 = 0;
    local_78 = (long **)0x0;
    local_b0 = (long *)0x0;
    local_c0 = (undefined1  [8])0x0;
    plStack_b8 = (long *)0x0;
    local_70 = (long *)FUN_00612290();
    FUN_006eb7bc(param_1,&local_1c0,&local_e0);
    lVar15 = lStack_88;
    lVar14 = local_80;
    if (lStack_88 != 0) {
      while (lVar14 != lVar15) {
        FUN_006ee714(lVar14 + -0xa8);
        lVar14 = lVar14 + -0xa8;
      }
      local_80 = lVar15;
      (**(code **)(*local_70 + 0x18))(local_70,lStack_88,(long)local_78 - lStack_88,8);
    }
    if (((ulong)(byte)local_c0[0] & 1) != 0) {
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_e0 & 1) != 0) {
      (**(code **)((long)*ppppppplStack_c8 + 0x18))
                (ppppppplStack_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
    }
    FUN_00718d5c(&local_170);
    if ((char)local_198 != '\0') {
      FUN_02767254(&local_190,plStack_188);
    }
    if (((ulong)puStack_1b8 & 1) != 0) {
      ppppppplVar16 = (long *******)local_1a0;
      ppppppplVar11 = ppppppplStack_1a8;
      puVar12 = puStack_1b8;
LAB_006eaf38:
      (**(code **)((long)*ppppppplVar16 + 0x18))
                (ppppppplVar16,ppppppplVar11,(ulong)puVar12 & 0xfffffffffffffffe,1);
    }
  }
  if (((ulong)local_100 & 1) == 0) {
    return;
  }
  auVar10 = (undefined1  [8])local_e8;
  ppppppplVar16 = (long *******)local_f0;
  plVar13 = local_100;
LAB_006eb070:
  (**(code **)(*(long *)auVar10 + 0x18))
            (auVar10,ppppppplVar16,(ulong)plVar13 & 0xfffffffffffffffe,1);
  return;
}


