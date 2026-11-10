/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dcac0; name: FUN_006dcac0
 */


undefined8 FUN_006dcac0(long *param_1,int *param_2)

{
  size_t sVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  __tree_node_base *p_Var9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong local_78;
  size_t sStack_70;
  void *local_68;
  long *plStack_60;
  undefined8 local_58;
  
  if (*param_2 == 5) {
    plVar11 = *(long **)(param_2 + 8);
    if (plVar11 != (long *)(param_2 + 10)) {
      pbVar7 = (byte *)(plVar11 + 8);
      pbVar8 = (byte *)(plVar11 + 4);
      if ((*pbVar7 & 1) == 0) goto LAB_006dcb30;
LAB_006dcb44:
      pbVar7 = (byte *)plVar11[10];
      if ((*pbVar8 & 1) != 0) goto LAB_006dcb3c;
LAB_006dcb50:
      pbVar8 = pbVar8 + 1;
      plVar12 = plVar11;
      do {
        sStack_70 = 0;
        local_68 = (void *)0x0;
        local_78 = 0;
        plVar11 = (long *)FUN_00612290();
        plStack_60 = plVar11;
        sVar1 = strlen((char *)pbVar8);
        if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 006dcd30 to 006dcd37 has its CatchHandler @ 006dcd38 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar1 < 0x17) {
          local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar1 << 1));
          __dest = (void *)((ulong)&local_78 | 1);
          if (sVar1 != 0) goto LAB_006dcbc8;
        }
        else {
          uVar10 = sVar1 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar10,1);
          local_78 = uVar10 | 1;
          sStack_70 = sVar1;
          local_68 = __dest;
LAB_006dcbc8:
          memcpy(__dest,pbVar8,sVar1);
        }
        *(undefined1 *)((long)__dest + sVar1) = 0;
                    /* try { // try from 006dcbdc to 006dcbeb has its CatchHandler @ 006dcd3c */
        puVar2 = (undefined8 *)FUN_0276557c(param_1,&local_58,&local_78);
        p_Var9 = (__tree_node_base *)*puVar2;
        if (p_Var9 == (__tree_node_base *)0x0) {
          p_Var9 = (__tree_node_base *)
                   (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x60,8);
          *(size_t *)(p_Var9 + 0x28) = sStack_70;
          *(ulong *)(p_Var9 + 0x20) = local_78;
          *(long **)(p_Var9 + 0x38) = plStack_60;
          *(void **)(p_Var9 + 0x30) = local_68;
          local_78 = 0;
          sStack_70 = 0;
          local_68 = (void *)0x0;
          *(undefined8 *)(p_Var9 + 0x50) = 0;
          *(undefined8 *)(p_Var9 + 0x40) = 0;
          *(undefined8 *)(p_Var9 + 0x48) = 0;
          uVar3 = FUN_00612290();
          *(undefined8 *)(p_Var9 + 0x50) = 0;
          *(undefined8 *)(p_Var9 + 0x58) = uVar3;
          *(undefined8 *)(p_Var9 + 0x40) = 0;
          *(undefined8 *)(p_Var9 + 0x48) = 0;
          *(undefined8 *)(p_Var9 + 0x10) = local_58;
          *(undefined8 *)p_Var9 = 0;
          *(undefined8 *)(p_Var9 + 8) = 0;
          *puVar2 = p_Var9;
          if (*(long *)*param_1 == 0) {
            p_Var4 = p_Var9;
          }
          else {
            *param_1 = *(long *)*param_1;
            p_Var4 = (__tree_node_base *)*puVar2;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((__tree_node_base *)param_1[1],p_Var4);
          param_1[3] = param_1[3] + 1;
        }
        sVar1 = strlen((char *)pbVar7);
                    /* try { // try from 006dcc8c to 006dcc97 has its CatchHandler @ 006dcd3c */
        FUN_02762710(p_Var9 + 0x40,pbVar7,sVar1);
        if ((local_78 & 1) != 0) {
          (**(code **)(*plStack_60 + 0x18))(plStack_60,local_68,local_78 & 0xfffffffffffffffe,1);
        }
        plVar5 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar5 = plVar12 + 2;
          plVar11 = (long *)*plVar5;
          if ((long *)*plVar11 != plVar12) {
            do {
              lVar6 = *plVar5;
              plVar5 = (long *)(lVar6 + 0x10);
              plVar11 = (long *)*plVar5;
            } while (*plVar11 != lVar6);
          }
        }
        else {
          do {
            plVar11 = plVar5;
            plVar5 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
        if (plVar11 == (long *)(param_2 + 10)) break;
        pbVar7 = (byte *)(plVar11 + 8);
        pbVar8 = (byte *)(plVar11 + 4);
        if ((*pbVar7 & 1) != 0) goto LAB_006dcb44;
LAB_006dcb30:
        pbVar7 = pbVar7 + 1;
        if ((*pbVar8 & 1) == 0) goto LAB_006dcb50;
LAB_006dcb3c:
        pbVar8 = (byte *)plVar11[6];
        plVar12 = plVar11;
      } while( true );
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80341;
  }
  return uVar3;
}


