/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035eb54; name: FUN_0035eb54
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0035eb54(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long *plVar11;
  __tree_node_base *p_Var12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  char *__s;
  undefined *local_f8 [2];
  undefined8 local_e8;
  undefined *local_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined ***local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined **local_a0;
  undefined **ppuStack_98;
  ulong local_90;
  undefined *local_80;
  undefined **local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  
  if (param_2[0x43] != '\0') {
    uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 8);
    if (((DAT_04399ae0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04399ae0), iVar6 != 0)) {
      plVar7 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (plVar7 != (long *)0x0) {
        plVar7[2] = 0;
        plVar7[1] = 0;
        *plVar7 = (long)(plVar7 + 1);
      }
      puVar5 = PTR_LAB_04373088;
      uVar4 = s_google_protobuf__03896d48._8_8_;
      uVar3 = s_google_protobuf__03896d48._0_8_;
      lVar14 = 0;
      do {
        local_c0 = (undefined ***)0x20;
        __s = *(char **)((long)&PTR_s_FileOptions_04153a98 + lVar14);
        uStack_b8 = 0;
        *(undefined8 *)((char *)((ulong)&local_c0 | 1) + 8) = uVar4;
        *(undefined8 *)((ulong)&local_c0 | 1) = uVar3;
        local_b0 = 0;
        sVar10 = strlen(__s);
                    /* try { // try from 0035f014 to 0035f01f has its CatchHandler @ 0035f324 */
        puVar8 = (ulong *)FUN_002e4094(&local_c0,__s,sVar10);
        ppuStack_98 = (undefined **)puVar8[1];
        local_a0 = (undefined **)*puVar8;
        local_90 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
                    /* try { // try from 0035f038 to 0035f047 has its CatchHandler @ 0035f2fc */
        plVar11 = (long *)FUN_003667bc(plVar7,&local_e0,&local_a0);
        if (*plVar11 == 0) {
          p_Var12 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
          *(ulong *)(p_Var12 + 0x30) = local_90;
          *(undefined ***)(p_Var12 + 0x28) = ppuStack_98;
          *(undefined ***)(p_Var12 + 0x20) = local_a0;
          ppuStack_98 = (undefined **)0x0;
          local_90 = 0;
          local_a0 = (undefined **)0x0;
          *(undefined8 *)p_Var12 = 0;
          *(undefined8 *)(p_Var12 + 8) = 0;
          *(undefined **)(p_Var12 + 0x10) = local_e0;
          *plVar11 = (long)p_Var12;
          if (*(long *)*plVar7 != 0) {
            *plVar7 = *(long *)*plVar7;
            p_Var12 = (__tree_node_base *)*plVar11;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((__tree_node_base *)plVar7[1],p_Var12);
          plVar7[2] = plVar7[2] + 1;
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(puVar5,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_002e2ea0(puVar5,local_b0);
        }
        uStack_d8 = 0;
        local_d0 = 0;
        *(undefined1 *)((undefined4 *)((ulong)&local_e0 | 1) + 1) = 0x6f;
        *(undefined4 *)((ulong)&local_e0 | 1) = 0x746f7270;
        local_e0 = (undefined *)0xa;
                    /* try { // try from 0035f094 to 0035f0a3 has its CatchHandler @ 0035f2e8 */
        puVar8 = (ulong *)FUN_002e4094(&local_e0,&DAT_03904a60,2);
        uStack_b8 = puVar8[1];
        local_c0 = (undefined ***)*puVar8;
        local_b0 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        sVar10 = strlen(__s);
                    /* try { // try from 0035f0c8 to 0035f0d3 has its CatchHandler @ 0035f2c0 */
        puVar9 = (undefined8 *)FUN_002e4094(&local_c0,__s,sVar10);
        ppuStack_98 = (undefined **)puVar9[1];
        local_a0 = (undefined **)*puVar9;
        local_90 = puVar9[2];
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
                    /* try { // try from 0035f0ec to 0035f0fb has its CatchHandler @ 0035f284 */
        plVar11 = (long *)FUN_003667bc(plVar7,local_f8,&local_a0);
        if (*plVar11 == 0) {
          p_Var12 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
          *(ulong *)(p_Var12 + 0x30) = local_90;
          *(undefined ***)(p_Var12 + 0x28) = ppuStack_98;
          *(undefined ***)(p_Var12 + 0x20) = local_a0;
          ppuStack_98 = (undefined **)0x0;
          local_90 = 0;
          local_a0 = (undefined **)0x0;
          *(undefined8 *)p_Var12 = 0;
          *(undefined8 *)(p_Var12 + 8) = 0;
          *(undefined **)(p_Var12 + 0x10) = local_f8[0];
          *plVar11 = (long)p_Var12;
          if (*(long *)*plVar7 != 0) {
            *plVar7 = *(long *)*plVar7;
            p_Var12 = (__tree_node_base *)*plVar11;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((__tree_node_base *)plVar7[1],p_Var12);
          plVar7[2] = plVar7[2] + 1;
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(puVar5,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_002e2ea0(puVar5,local_b0);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_002e2ea0(puVar5,local_d0);
        }
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0x40);
                    /* try { // try from 0035f254 to 0035f263 has its CatchHandler @ 0035f27c */
      FUN_0031f0c0(PTR_LAB_04373c38,plVar7);
      DAT_04399ad8 = plVar7;
      __cxa_guard_release(&DAT_04399ae0);
    }
    plVar7 = (long *)FUN_003668d8(DAT_04399ad8,uVar13);
    if (DAT_04399ad8 + 1 == plVar7) {
      FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,3,
                   "Extensions in proto3 are only allowed for defining options.");
      iVar6 = *(int *)(param_2 + 0x3c);
      goto joined_r0x0035ebc0;
    }
  }
  iVar6 = *(int *)(param_2 + 0x3c);
joined_r0x0035ebc0:
  if (iVar6 == 2) {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "Required fields are not allowed in proto3.");
  }
  if (param_2[0x40] != '\0') {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,4,
                 "Explicit default values are not allowed in proto3.");
  }
  puVar5 = PTR_LAB_04373a98;
  puVar8 = *(ulong **)(param_2 + 0x30);
  if (puVar8 != (ulong *)0x0) {
    local_e0 = PTR_LAB_04373a98;
    local_f8[0] = param_2;
    if (*puVar8 != 0xffffffffffffffff) {
      local_a0 = &local_e0;
      ppuStack_98 = local_f8;
      local_c0 = &local_a0;
      std::__call_once(puVar8,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(param_2 + 0x38) == 0xe) {
    puVar8 = *(ulong **)(param_2 + 0x30);
    if ((puVar8 != (ulong *)0x0) && (local_e0 = param_2, *puVar8 != 0xffffffffffffffff)) {
      ppuStack_98 = &local_e0;
      local_a0 = (undefined **)puVar5;
      local_c0 = &local_a0;
      std::__call_once(puVar8,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    lVar14 = *(long *)(param_2 + 0x70);
    if (lVar14 != 0) {
      puVar8 = *(ulong **)(param_2 + 0x30);
      if (puVar8 != (ulong *)0x0) {
        local_e0 = param_2;
        if (*puVar8 != 0xffffffffffffffff) {
          ppuStack_98 = &local_e0;
          local_a0 = (undefined **)puVar5;
          local_c0 = &local_a0;
          std::__call_once(puVar8,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        lVar14 = *(long *)(param_2 + 0x70);
      }
      iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + 0x3c);
      if (iVar6 != 3) {
        puVar8 = *(ulong **)(param_2 + 0x30);
        if (puVar8 != (ulong *)0x0) {
          local_e0 = param_2;
          if (*puVar8 != 0xffffffffffffffff) {
            ppuStack_98 = &local_e0;
            local_a0 = (undefined **)puVar5;
            local_c0 = &local_a0;
            std::__call_once(puVar8,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373b88);
          }
          lVar14 = *(long *)(param_2 + 0x70);
          iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + 0x3c);
        }
        if (iVar6 != 0) {
          uVar13 = *(undefined8 *)(param_2 + 8);
          puVar8 = *(ulong **)(param_2 + 0x30);
          if (puVar8 != (ulong *)0x0) {
            local_80 = param_2;
            if (*puVar8 != 0xffffffffffffffff) {
              ppuStack_68 = &local_80;
              local_70 = puVar5;
              local_78 = &local_70;
              std::__call_once(puVar8,&local_78,(_func_void_void_ptr *)PTR_LAB_04373b88);
            }
            lVar14 = *(long *)(param_2 + 0x70);
          }
          FUN_0034b2f0(local_f8,"Enum type \"",*(undefined8 *)(lVar14 + 8));
                    /* try { // try from 0035ed80 to 0035ed93 has its CatchHandler @ 0035f3ec */
          puVar8 = (ulong *)FUN_002e4094(local_f8,"\" is not a proto3 enum, but is used in \"",0x28)
          ;
          uStack_d8 = puVar8[1];
          local_e0 = (undefined *)*puVar8;
          local_d0 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          pbVar15 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
          uVar1 = *(ulong *)(pbVar15 + 8);
          pbVar2 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar2 = pbVar15 + 1;
            uVar1 = (ulong)(*pbVar15 >> 1);
          }
                    /* try { // try from 0035edcc to 0035edd3 has its CatchHandler @ 0035f3c4 */
          puVar9 = (undefined8 *)FUN_002e4094(&local_e0,pbVar2,uVar1);
          uStack_b8 = puVar9[1];
          local_c0 = (undefined ***)*puVar9;
          local_b0 = puVar9[2];
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
                    /* try { // try from 0035edec to 0035edff has its CatchHandler @ 0035f39c */
          puVar9 = (undefined8 *)FUN_002e4094(&local_c0,"\" which is a proto3 message type.",0x21);
          ppuStack_98 = (undefined **)puVar9[1];
          local_a0 = (undefined **)*puVar9;
          local_90 = puVar9[2];
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
                    /* try { // try from 0035ee18 to 0035ee2f has its CatchHandler @ 0035f354 */
          FUN_0034db00(param_1,uVar13,param_3,2,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_90);
          }
          if (((ulong)local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_d0);
          }
          if (((ulong)local_f8[0] & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_e8);
          }
        }
      }
    }
  }
  puVar8 = *(ulong **)(param_2 + 0x30);
  if (puVar8 != (ulong *)0x0) {
    local_e0 = puVar5;
    local_f8[0] = param_2;
    if (*puVar8 != 0xffffffffffffffff) {
      local_a0 = &local_e0;
      ppuStack_98 = local_f8;
      local_c0 = &local_a0;
      std::__call_once(puVar8,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(param_2 + 0x38) == 10) {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "Groups are not supported in proto3 syntax.");
  }
  return;
}


