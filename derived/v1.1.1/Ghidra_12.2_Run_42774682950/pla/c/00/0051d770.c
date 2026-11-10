/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051d770; name: FUN_0051d770
 */


void FUN_0051d770(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  __tree_node_base **pp_Var4;
  long lVar5;
  undefined8 *puVar6;
  __tree_node_base *p_Var7;
  undefined8 *puVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  __tree_node_base *p_Var11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  __tree_node_base *p_Var15;
  __tree_node_base *local_d8;
  __tree_node_base *local_d0;
  long local_c8;
  __tree_node_base *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  __tree_node_base *local_90;
  __tree_node_base *local_88;
  long local_80;
  undefined1 local_78 [8];
  __tree_node_base *local_70;
  undefined8 local_68;
  
  puVar3 = PTR_LAB_04373088;
  puVar2 = PTR_FUN_04373078;
  local_88 = (__tree_node_base *)0x0;
  local_80 = 0;
  lVar5 = *param_2;
  lVar13 = param_2[1];
  local_90 = (__tree_node_base *)&local_88;
  if (lVar5 != lVar13) {
    if (*(long *)(lVar5 + 0x60) != *(long *)(lVar5 + 0x68)) goto LAB_0051d7ec;
LAB_0051d7d4:
    lVar5 = lVar5 + 0x78;
    if (lVar13 != lVar5) {
      while (*(long *)(lVar5 + 0x60) != *(long *)(lVar5 + 0x68)) {
LAB_0051d7ec:
                    /* try { // try from 0051d7ec to 0051d7f3 has its CatchHandler @ 0051dde8 */
        FUN_0051d490(&local_c0);
                    /* try { // try from 0051d7f4 to 0051d84f has its CatchHandler @ 0051ddf4 */
        pp_Var4 = (__tree_node_base **)FUN_00524fc8(&local_90,&local_a8);
        if ((__tree_node_base *)&local_88 == (__tree_node_base *)pp_Var4) {
          puVar6 = (undefined8 *)FUN_005250d8(&local_90,&local_d8,&local_a8);
          p_Var9 = (__tree_node_base *)*puVar6;
          if (p_Var9 == (__tree_node_base *)0x0) {
            p_Var9 = (__tree_node_base *)FUN_002e2e80(puVar2,0x50);
            *(undefined8 *)(p_Var9 + 0x30) = local_98;
            *(undefined8 *)(p_Var9 + 0x38) = 0;
            *(undefined8 *)(p_Var9 + 0x28) = uStack_a0;
            *(ulong *)(p_Var9 + 0x20) = local_a8;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            *(undefined8 *)(p_Var9 + 0x40) = 0;
            *(undefined8 *)(p_Var9 + 0x48) = 0;
            *(__tree_node_base **)(p_Var9 + 0x10) = local_d8;
            *(undefined8 *)p_Var9 = 0;
            *(undefined8 *)(p_Var9 + 8) = 0;
            *puVar6 = p_Var9;
            if (*(__tree_node_base **)local_90 == (__tree_node_base *)0x0) {
              p_Var11 = p_Var9;
            }
            else {
              p_Var11 = (__tree_node_base *)*puVar6;
              local_90 = *(__tree_node_base **)local_90;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_88,p_Var11);
            local_80 = local_80 + 1;
            p_Var11 = p_Var9 + 0x38;
            if (((byte)*p_Var11 & 1) != 0) goto LAB_0051d8e8;
LAB_0051d868:
            *(undefined2 *)p_Var11 = 0;
          }
          else {
            p_Var11 = p_Var9 + 0x38;
            if (((byte)*p_Var11 & 1) == 0) goto LAB_0051d868;
LAB_0051d8e8:
            **(undefined1 **)(p_Var9 + 0x48) = 0;
            *(undefined8 *)(p_Var9 + 0x40) = 0;
            if (((byte)p_Var9[0x38] & 1) != 0) {
              FUN_002e2ea0(puVar3,*(undefined8 *)(p_Var9 + 0x48));
              *(undefined8 *)(p_Var9 + 0x38) = 0;
            }
          }
          *(undefined8 *)(p_Var11 + 0x10) = local_b0;
          *(undefined8 *)(p_Var11 + 8) = uStack_b8;
          *(__tree_node_base **)p_Var11 = local_c0;
          uStack_b8 = 0;
          local_b0 = 0;
          local_c0 = (__tree_node_base *)0x0;
        }
        if ((local_a8 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_98);
        }
        if (((ulong)local_c0 & 1) == 0) break;
        FUN_002e2ea0(puVar3,local_b0);
        lVar5 = lVar5 + 0x78;
        if (lVar13 == lVar5) goto LAB_0051d93c;
      }
      goto LAB_0051d7d4;
    }
  }
LAB_0051d93c:
  local_d0 = (__tree_node_base *)0x0;
  local_c8 = 0;
  local_d8 = (__tree_node_base *)&local_d0;
  if ((__tree_node_base *)&local_88 != local_90) {
    p_Var9 = local_90;
    do {
      while( true ) {
        p_Var11 = p_Var9 + 0x38;
                    /* try { // try from 0051d974 to 0051d97f has its CatchHandler @ 0051de34 */
        lVar5 = FUN_00524da8(param_1 + 0x158,p_Var11);
        if (param_1 + 0x160 != lVar5) break;
LAB_0051da5c:
        p_Var11 = *(__tree_node_base **)(p_Var9 + 8);
        if (*(__tree_node_base **)(p_Var9 + 8) == (__tree_node_base *)0x0) {
          p_Var11 = p_Var9 + 0x10;
          if (*(__tree_node_base **)*(__tree_node_base **)p_Var11 == p_Var9) {
            p_Var9 = *(__tree_node_base **)p_Var11;
          }
          else {
            do {
              lVar5 = *(long *)p_Var11;
              p_Var11 = (__tree_node_base *)(lVar5 + 0x10);
              p_Var9 = *(__tree_node_base **)p_Var11;
            } while (*(long *)p_Var9 != lVar5);
          }
        }
        else {
          do {
            p_Var9 = p_Var11;
            p_Var11 = *(__tree_node_base **)p_Var9;
          } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
        }
        if ((__tree_node_base *)&local_88 == p_Var9) goto LAB_0051db3c;
      }
                    /* try { // try from 0051d990 to 0051d9c7 has its CatchHandler @ 0051ddf0 */
      local_70 = p_Var11;
      puVar6 = (undefined8 *)FUN_005251f4(&local_d8,&local_68,p_Var11);
      p_Var11 = (__tree_node_base *)*puVar6;
      if ((__tree_node_base *)*puVar6 == (__tree_node_base *)0x0) {
        FUN_00525310(&local_c0,&local_d8,&DAT_03a2945a,&local_70,local_78);
        *(undefined8 *)(local_c0 + 0x10) = local_68;
        *(undefined8 *)local_c0 = 0;
        *(undefined8 *)(local_c0 + 8) = 0;
        *puVar6 = local_c0;
        p_Var11 = local_c0;
        if (*(__tree_node_base **)local_d8 != (__tree_node_base *)0x0) {
          p_Var11 = (__tree_node_base *)*puVar6;
          local_d8 = *(__tree_node_base **)local_d8;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_d0,p_Var11);
        local_c8 = local_c8 + 1;
        p_Var11 = local_c0;
      }
      puVar6 = (undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(p_Var11 + 0x38) = *(undefined8 *)(lVar5 + 0x38);
                    /* try { // try from 0051da14 to 0051da3f has its CatchHandler @ 0051de30 */
      p_Var7 = (__tree_node_base *)FUN_0052542c(puVar6,p_Var9 + 0x20);
      if ((__tree_node_base *)(lVar5 + 0x48) == p_Var7) goto LAB_0051da5c;
      uVar14 = *(undefined8 *)(p_Var7 + 0x38);
      puVar8 = (undefined8 *)FUN_0051c524(p_Var11 + 0x40,p_Var9 + 0x20);
      *puVar8 = uVar14;
      plVar1 = *(long **)(p_Var7 + 8);
      if (*(long **)(p_Var7 + 8) == (long *)0x0) {
        p_Var11 = p_Var7 + 0x10;
        plVar10 = *(long **)p_Var11;
        if ((__tree_node_base *)*plVar10 != p_Var7) {
          do {
            lVar13 = *(long *)p_Var11;
            p_Var11 = (__tree_node_base *)(lVar13 + 0x10);
            plVar10 = *(long **)p_Var11;
          } while (*plVar10 != lVar13);
        }
      }
      else {
        do {
          plVar10 = plVar1;
          plVar1 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if ((__tree_node_base *)*puVar6 == p_Var7) {
        *puVar6 = plVar10;
      }
      *(long *)(lVar5 + 0x50) = *(long *)(lVar5 + 0x50) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(*(__tree_node_base **)(lVar5 + 0x48),p_Var7)
      ;
      if (((byte)p_Var7[0x20] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var7 + 0x30));
      }
      FUN_002e2ea0(PTR_LAB_04373088,p_Var7);
                    /* try { // try from 0051db1c to 0051db27 has its CatchHandler @ 0051dde4 */
      p_Var9 = (__tree_node_base *)FUN_0052553c(&local_90,p_Var9);
    } while ((__tree_node_base *)&local_88 != p_Var9);
  }
LAB_0051db3c:
  puVar2 = PTR_LAB_04373088;
  if (local_90 != (__tree_node_base *)&local_88) {
    plVar1 = (long *)(param_1 + 0x158);
    p_Var9 = local_90;
    do {
      p_Var11 = p_Var9 + 0x38;
                    /* try { // try from 0051db70 to 0051dba3 has its CatchHandler @ 0051de3c */
      local_70 = p_Var11;
      puVar6 = (undefined8 *)FUN_005251f4(&local_d8,&local_68,p_Var11);
      p_Var7 = (__tree_node_base *)*puVar6;
      if ((__tree_node_base *)*puVar6 == (__tree_node_base *)0x0) {
        FUN_00525310(&local_c0,&local_d8,&DAT_03a2945a,&local_70,local_78);
        *(undefined8 *)(local_c0 + 0x10) = local_68;
        *(undefined8 *)local_c0 = 0;
        *(undefined8 *)(local_c0 + 8) = 0;
        *puVar6 = local_c0;
        p_Var7 = local_c0;
        if (*(__tree_node_base **)local_d8 != (__tree_node_base *)0x0) {
          p_Var7 = (__tree_node_base *)*puVar6;
          local_d8 = *(__tree_node_base **)local_d8;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_d0,p_Var7);
        local_c8 = local_c8 + 1;
        p_Var7 = local_c0;
      }
                    /* try { // try from 0051dbe4 to 0051dc17 has its CatchHandler @ 0051de38 */
      local_70 = p_Var11;
      puVar6 = (undefined8 *)FUN_005251f4(plVar1,&local_68,p_Var11);
      p_Var11 = (__tree_node_base *)*puVar6;
      if ((__tree_node_base *)*puVar6 == (__tree_node_base *)0x0) {
        FUN_00525310(&local_c0,plVar1,&DAT_03a2945a,&local_70,local_78);
        *(undefined8 *)(local_c0 + 0x10) = local_68;
        *(undefined8 *)local_c0 = 0;
        *(undefined8 *)(local_c0 + 8) = 0;
        *puVar6 = local_c0;
        p_Var11 = local_c0;
        if (*(long *)*plVar1 != 0) {
          *plVar1 = *(long *)*plVar1;
          p_Var11 = (__tree_node_base *)*puVar6;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 0x160),p_Var11);
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
        p_Var11 = local_c0;
      }
      p_Var15 = *(__tree_node_base **)(p_Var11 + 0x40);
      if (p_Var11 + 0x48 == p_Var15) {
        lVar5 = *(long *)(p_Var7 + 0x38);
        *(long *)(p_Var7 + 0x38) = lVar5 + 1;
        plVar10 = (long *)FUN_0051c524(p_Var7 + 0x40,p_Var9 + 0x20);
        *plVar10 = lVar5;
        p_Var11 = *(__tree_node_base **)(p_Var9 + 8);
        if (*(__tree_node_base **)(p_Var9 + 8) == (__tree_node_base *)0x0) goto LAB_0051dd40;
LAB_0051dd30:
        do {
          p_Var7 = p_Var11;
          p_Var11 = *(__tree_node_base **)p_Var7;
        } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
      }
      else {
        uVar14 = *(undefined8 *)(p_Var15 + 0x38);
                    /* try { // try from 0051dc74 to 0051dca7 has its CatchHandler @ 0051de2c */
        puVar6 = (undefined8 *)FUN_0051c524(p_Var7 + 0x40,p_Var9 + 0x20);
        *puVar6 = uVar14;
        plVar10 = *(long **)(p_Var15 + 8);
        if (*(long **)(p_Var15 + 8) == (long *)0x0) {
          p_Var7 = p_Var15 + 0x10;
          plVar12 = *(long **)p_Var7;
          if ((__tree_node_base *)*plVar12 != p_Var15) {
            do {
              lVar5 = *(long *)p_Var7;
              p_Var7 = (__tree_node_base *)(lVar5 + 0x10);
              plVar12 = *(long **)p_Var7;
            } while (*plVar12 != lVar5);
          }
        }
        else {
          do {
            plVar12 = plVar10;
            plVar10 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
        if (*(__tree_node_base **)(p_Var11 + 0x40) == p_Var15) {
          *(long **)(p_Var11 + 0x40) = plVar12;
        }
        *(long *)(p_Var11 + 0x50) = *(long *)(p_Var11 + 0x50) + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(p_Var11 + 0x48),p_Var15);
        if (((byte)p_Var15[0x20] & 1) != 0) {
          FUN_002e2ea0(puVar2,*(undefined8 *)(p_Var15 + 0x30));
        }
        FUN_002e2ea0(puVar2,p_Var15);
        p_Var11 = *(__tree_node_base **)(p_Var9 + 8);
        if (*(__tree_node_base **)(p_Var9 + 8) != (__tree_node_base *)0x0) goto LAB_0051dd30;
LAB_0051dd40:
        p_Var11 = p_Var9 + 0x10;
        p_Var7 = *(__tree_node_base **)p_Var11;
        if (*(__tree_node_base **)p_Var7 != p_Var9) {
          do {
            lVar5 = *(long *)p_Var11;
            p_Var11 = (__tree_node_base *)(lVar5 + 0x10);
            p_Var7 = *(__tree_node_base **)p_Var11;
          } while (*(long *)p_Var7 != lVar5);
        }
      }
      p_Var9 = p_Var7;
    } while (p_Var7 != (__tree_node_base *)&local_88);
  }
  FUN_00524080((long *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160));
  *(__tree_node_base **)(param_1 + 0x158) = local_d8;
  *(__tree_node_base **)(param_1 + 0x160) = local_d0;
  *(long *)(param_1 + 0x168) = local_c8;
  if (local_c8 == 0) {
    *(long *)(param_1 + 0x158) = param_1 + 0x160;
  }
  else {
    *(long *)(local_d0 + 0x10) = param_1 + 0x160;
    local_d0 = (__tree_node_base *)0x0;
    local_c8 = 0;
    local_d8 = (__tree_node_base *)&local_d0;
  }
  FUN_00524080(&local_d8,local_d0);
  FUN_003c7e4c(&local_90,local_88);
  return;
}


