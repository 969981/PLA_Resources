/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006db330; name: FUN_006db330
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006db330(undefined8 param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  __tree_node_base *p_Var9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  undefined1 *puVar13;
  long lVar14;
  char *pcVar15;
  __tree_node_base *p_Var16;
  byte local_110;
  undefined7 uStack_10f;
  char *local_100;
  long *plStack_f8;
  ulong local_f0;
  size_t sStack_e8;
  void *local_e0;
  long *local_d8;
  byte *local_d0;
  size_t sStack_c8;
  undefined1 *local_c0;
  long *local_b8;
  undefined1 auStack_a8 [16];
  byte *local_98;
  undefined4 local_90;
  int local_88;
  undefined8 local_80;
  size_t sStack_78;
  undefined1 *local_70;
  long *local_68;
  
  pbVar10 = *(byte **)(param_2 + 0x28);
  if ((*pbVar10 & 1) == 0) {
    pbVar10 = pbVar10 + 1;
  }
  else {
    pbVar10 = *(byte **)(pbVar10 + 0x10);
  }
  sStack_78 = 0;
  local_70 = (undefined1 *)0x0;
  local_80 = (byte *)0x0;
  plVar2 = (long *)FUN_00612290();
  local_68 = plVar2;
  sVar3 = strlen((char *)pbVar10);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 006db9f8 to 006db9ff has its CatchHandler @ 006dba00 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_80 = (byte *)CONCAT71(local_80._1_7_,(char)((int)sVar3 << 1));
    puVar13 = (undefined1 *)((ulong)&local_80 | 1);
    if (sVar3 == 0) goto LAB_006db3f8;
  }
  else {
    uVar4 = sVar3 + 0x10 & 0xfffffffffffffff0;
    puVar13 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    local_80 = (byte *)(uVar4 | 1);
    sStack_78 = sVar3;
    local_70 = puVar13;
  }
  memcpy(puVar13,pbVar10,sVar3);
LAB_006db3f8:
  puVar13[sVar3] = 0;
  plVar2 = (long *)0x0;
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 0x20) + 8);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    pvVar12 = (void *)((ulong)&local_f0 | 1);
    lVar14 = (long)*(int *)(param_2 + 0x18) << 3;
    do {
      lVar11 = *plVar2;
                    /* try { // try from 006db470 to 006db47f has its CatchHandler @ 006dbb64 */
      uVar4 = FUN_003a174c(lVar11 + 0x28,"nn.npln.errdetails.NError",0x19);
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 006db484 to 006db48f has its CatchHandler @ 006dbb54 */
        FUN_006e651c(auStack_a8,0);
                    /* try { // try from 006db490 to 006db4a3 has its CatchHandler @ 006dbb1c */
        uVar4 = FUN_003a170c(lVar11 + 0x28,"nn.npln.errdetails.NError",0x19,auStack_a8);
        if ((uVar4 & 1) != 0) {
          if ((*local_98 & 1) == 0) {
            local_d0 = local_98 + 1;
          }
          else {
            local_d0 = *(byte **)(local_98 + 0x10);
          }
                    /* try { // try from 006db4c4 to 006db4d7 has its CatchHandler @ 006dbaa8 */
          FUN_006dbb74(param_3,PTR_PTR_04375458,&local_d0);
          local_e0 = (void *)0x0;
          local_d8 = local_68;
          puVar13 = (undefined1 *)((ulong)&local_80 | 1);
          sVar3 = (ulong)local_80 >> 1 & 0x7f;
          if (((ulong)local_80 & 1) != 0) {
            puVar13 = local_70;
            sVar3 = sStack_78;
          }
          local_f0 = 0;
          sStack_e8 = 0;
          if (0xffffffffffffffef < sVar3 + 10) {
                    /* try { // try from 006db9e8 to 006db9ef has its CatchHandler @ 006dba14 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar3 + 10 < 0x17) {
            local_f0 = (ulong)(byte)((int)sVar3 << 1);
            pvVar7 = pvVar12;
            if (sVar3 != 0) goto LAB_006db550;
          }
          else {
            uVar4 = sVar3 + 0x1a & 0xfffffffffffffff0;
            pvVar7 = (void *)(**(code **)(*local_68 + 0x10))(local_68,uVar4,1);
            local_f0 = uVar4 | 1;
            sStack_e8 = sVar3;
            local_e0 = pvVar7;
LAB_006db550:
            memcpy(pvVar7,puVar13,sVar3);
          }
          *(undefined1 *)((long)pvVar7 + sVar3) = 0;
                    /* try { // try from 006db564 to 006db577 has its CatchHandler @ 006dbaf0 */
          FUN_002a45d4(&local_f0," TraceId: ",10);
          if ((*local_98 & 1) == 0) {
            pbVar10 = local_98 + 1;
          }
          else {
            pbVar10 = *(byte **)(local_98 + 0x10);
          }
                    /* try { // try from 006db59c to 006db5a3 has its CatchHandler @ 006dbae0 */
          (**(code **)PTR_PTR_043761c0)(&local_110,pbVar10);
          pcVar15 = (char *)((ulong)&local_110 | 1);
          if ((local_110 & 1) != 0) {
            pcVar15 = local_100;
          }
          sVar3 = strlen(pcVar15);
                    /* try { // try from 006db5c0 to 006db5cb has its CatchHandler @ 006dbaac */
          puVar5 = (undefined8 *)FUN_002a45d4(&local_f0,pcVar15,sVar3);
          sStack_c8 = puVar5[1];
          local_d0 = (byte *)*puVar5;
          local_b8 = (long *)puVar5[3];
          local_c0 = (undefined1 *)puVar5[2];
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          if ((local_68 == local_b8) ||
             (uVar4 = (**(code **)(*local_68 + 0x20))(), (uVar4 & 1) != 0)) {
            if (((ulong)local_80 & 1) != 0) {
              *local_70 = 0;
              sStack_78 = 0;
              if (((ulong)local_80 & 1) != 0) {
                (**(code **)(*local_68 + 0x18))
                          (local_68,local_70,(ulong)local_80 & 0xfffffffffffffffe,1);
              }
            }
            local_70 = local_c0;
            sStack_78 = sStack_c8;
            local_80 = local_d0;
            local_d0 = (byte *)0x0;
            sStack_c8 = 0;
            local_c0 = (undefined1 *)0x0;
          }
          else {
            sVar3 = (ulong)local_d0 >> 1 & 0x7f;
            puVar13 = (undefined1 *)((ulong)&local_d0 | 1);
            if (((ulong)local_d0 & 1) != 0) {
              sVar3 = sStack_c8;
              puVar13 = local_c0;
            }
                    /* try { // try from 006db70c to 006db713 has its CatchHandler @ 006dba24 */
            FUN_02762710(&local_80,puVar13,sVar3);
            if (((ulong)local_d0 & 1) != 0) {
              (**(code **)(*local_b8 + 0x18))
                        (local_b8,local_c0,(ulong)local_d0 & 0xfffffffffffffffe,1);
            }
          }
          if ((local_110 & 1) != 0) {
            (**(code **)(*plStack_f8 + 0x18))
                      (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
          }
          if ((local_f0 & 1) != 0) {
            (**(code **)(*local_d8 + 0x18))(local_d8,local_e0,local_f0 & 0xfffffffffffffffe,1);
          }
          if (local_88 != 0) {
            switch(local_88) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              uVar1 = local_90;
              break;
            default:
              uVar1 = 0;
            }
            FUN_0061c880(&local_d0,uVar1);
            local_f0 = 0;
            pcVar15 = *(char **)PTR_PTR_04375450;
            sStack_e8 = 0;
            local_e0 = (void *)0x0;
            plVar6 = (long *)FUN_00612290();
            local_d8 = plVar6;
            sVar3 = strlen(pcVar15);
            if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 006db9f0 to 006db9f7 has its CatchHandler @ 006dba04 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar3 < 0x17) {
              local_f0 = CONCAT71(local_f0._1_7_,(char)((int)sVar3 << 1));
              pvVar7 = pvVar12;
              if (sVar3 != 0) goto LAB_006db7bc;
            }
            else {
              uVar4 = sVar3 + 0x10 & 0xfffffffffffffff0;
              pvVar7 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
              local_f0 = uVar4 | 1;
              sStack_e8 = sVar3;
              local_e0 = pvVar7;
LAB_006db7bc:
              memcpy(pvVar7,pcVar15,sVar3);
            }
            *(undefined1 *)((long)pvVar7 + sVar3) = 0;
                    /* try { // try from 006db7d0 to 006db7df has its CatchHandler @ 006dba6c */
            puVar5 = (undefined8 *)FUN_0276557c(param_3,&local_110,&local_f0);
            p_Var16 = (__tree_node_base *)*puVar5;
            if (p_Var16 == (__tree_node_base *)0x0) {
              p_Var16 = (__tree_node_base *)
                        (**(code **)(*(long *)param_3[2] + 0x10))((long *)param_3[2],0x60,8);
              *(size_t *)(p_Var16 + 0x28) = sStack_e8;
              *(ulong *)(p_Var16 + 0x20) = local_f0;
              *(long **)(p_Var16 + 0x38) = local_d8;
              *(void **)(p_Var16 + 0x30) = local_e0;
              local_f0 = 0;
              sStack_e8 = 0;
              local_e0 = (void *)0x0;
              *(undefined8 *)(p_Var16 + 0x50) = 0;
              *(undefined8 *)(p_Var16 + 0x40) = 0;
              *(undefined8 *)(p_Var16 + 0x48) = 0;
              uVar8 = FUN_00612290();
              *(undefined8 *)(p_Var16 + 0x50) = 0;
              *(undefined8 *)(p_Var16 + 0x58) = uVar8;
              *(undefined8 *)(p_Var16 + 0x40) = 0;
              *(undefined8 *)(p_Var16 + 0x48) = 0;
              *(ulong *)(p_Var16 + 0x10) = CONCAT71(uStack_10f,local_110);
              *(undefined8 *)p_Var16 = 0;
              *(undefined8 *)(p_Var16 + 8) = 0;
              *puVar5 = p_Var16;
              if (*(long *)*param_3 == 0) {
                p_Var9 = p_Var16;
              }
              else {
                *param_3 = *(long *)*param_3;
                p_Var9 = (__tree_node_base *)*puVar5;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((__tree_node_base *)param_3[1],p_Var9);
              param_3[3] = param_3[3] + 1;
            }
            p_Var9 = p_Var16 + 0x40;
            if ((*(long **)(p_Var16 + 0x58) == local_b8) ||
               (uVar4 = (**(code **)(**(long **)(p_Var16 + 0x58) + 0x20))(), (uVar4 & 1) != 0)) {
              if (((byte)*p_Var9 & 1) == 0) {
                *(undefined2 *)p_Var9 = 0;
              }
              else {
                **(undefined1 **)(p_Var16 + 0x50) = 0;
                *(undefined8 *)(p_Var16 + 0x48) = 0;
                if (((byte)p_Var16[0x40] & 1) != 0) {
                  (**(code **)(**(long **)(p_Var16 + 0x58) + 0x18))
                            (*(long **)(p_Var16 + 0x58),*(undefined8 *)(p_Var16 + 0x50),
                             *(ulong *)(p_Var16 + 0x40) & 0xfffffffffffffffe,1);
                  *(undefined8 *)(p_Var16 + 0x40) = 0;
                }
              }
              *(undefined1 **)(p_Var16 + 0x50) = local_c0;
              *(size_t *)(p_Var16 + 0x48) = sStack_c8;
              *(byte **)p_Var9 = local_d0;
              sStack_c8 = 0;
              local_c0 = (undefined1 *)0x0;
              local_d0 = (byte *)0x0;
            }
            else if (p_Var9 != (__tree_node_base *)&local_d0) {
              sVar3 = (ulong)local_d0 >> 1 & 0x7f;
              puVar13 = (undefined1 *)((ulong)&local_d0 | 1);
              if (((ulong)local_d0 & 1) != 0) {
                sVar3 = sStack_c8;
                puVar13 = local_c0;
              }
                    /* try { // try from 006db920 to 006db927 has its CatchHandler @ 006dba6c */
              FUN_02762710(p_Var9,puVar13,sVar3);
            }
            if ((local_f0 & 1) != 0) {
              (**(code **)(*local_d8 + 0x18))(local_d8,local_e0,local_f0 & 0xfffffffffffffffe,1);
            }
            if (((ulong)local_d0 & 1) != 0) {
              (**(code **)(*local_b8 + 0x18))
                        (local_b8,local_c0,(ulong)local_d0 & 0xfffffffffffffffe,1);
            }
          }
        }
        FUN_006e6574(auStack_a8);
      }
      plVar2 = plVar2 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  puVar13 = local_70;
  if (((ulong)local_80 & 1) == 0) {
    puVar13 = (undefined1 *)((long)&local_80 + 1);
  }
  FUN_00294a60(param_1,*(undefined4 *)(param_2 + 0x30),puVar13,param_3);
  if (((ulong)local_80 & 1) != 0) {
    (**(code **)(*local_68 + 0x18))(local_68,local_70,(ulong)local_80 & 0xfffffffffffffffe,1);
  }
  return;
}


