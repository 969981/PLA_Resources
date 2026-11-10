/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fe9b0; name: FUN_006fe9b0
 */


void FUN_006fe9b0(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  undefined8 *puVar7;
  ulong __n;
  long *plVar8;
  void *__src;
  void *__dest;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  __tree_node_base *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_58 [8];
  
  *param_1 = *param_2;
  plVar2 = (long *)FUN_00612290();
  puVar7 = (undefined8 *)(param_1 + 2);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plVar2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
    *puVar7 = uVar3;
    goto LAB_006fea80;
  }
  __n = *(ulong *)(param_2 + 4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006fec34 to 006fec3b has its CatchHandler @ 006fec3c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 6);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)puVar7 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_006fea6c;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar9,1);
    *(ulong *)(param_1 + 2) = uVar9 | 1;
    *(ulong *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
LAB_006fea6c:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_006fea80:
  local_78 = 0;
  local_70 = FUN_00612290();
  local_68 = 0;
                    /* try { // try from 006fea9c to 006feaa7 has its CatchHandler @ 006fec40 */
  local_80 = (__tree_node_base *)&local_78;
  FUN_02767d84(&local_a0,param_2 + 10,&local_80);
  FUN_02767254(&local_80,local_78);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_a0;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  *(undefined8 *)(param_1 + 0xe) = local_98;
  plVar2 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_88;
  if (local_88 == 0) {
    *(long **)(param_1 + 0xc) = plVar2;
  }
  else {
    *(long **)(*plVar2 + 0x10) = plVar2;
    local_88 = 0;
    local_a0 = &local_98;
    local_98 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_02767254(&local_a0,local_98);
  plVar8 = (long *)(param_1 + 0x14);
  *plVar8 = 0;
  uVar3 = FUN_00612290();
  puVar7 = (undefined8 *)(param_1 + 0x16);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *plVar8 = (long)puVar7;
  plVar2 = (long *)*param_3;
  do {
    while( true ) {
      if (plVar2 == param_3 + 1) {
        return;
      }
                    /* try { // try from 006feb50 to 006feb8f has its CatchHandler @ 006fec50 */
      plVar4 = (long *)FUN_02cd5968(plVar8,puVar7,&local_a0,auStack_58,plVar2 + 4);
      if (*plVar4 != 0) break;
      FUN_006edf6c(&local_80,plVar8,plVar2 + 4);
      *(undefined8 **)(local_80 + 0x10) = local_a0;
      *(undefined8 *)local_80 = 0;
      *(undefined8 *)(local_80 + 8) = 0;
      *plVar4 = (long)local_80;
      p_Var5 = local_80;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        p_Var5 = (__tree_node_base *)*plVar4;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x16),p_Var5);
      *(long *)(param_1 + 0x1a) = *(long *)(param_1 + 0x1a) + 1;
      plVar4 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) goto LAB_006febe4;
LAB_006febd4:
      do {
        plVar2 = plVar4;
        plVar4 = (long *)*plVar2;
      } while (plVar4 != (long *)0x0);
    }
    plVar4 = (long *)plVar2[1];
    if ((long *)plVar2[1] != (long *)0x0) goto LAB_006febd4;
LAB_006febe4:
    plVar4 = plVar2 + 2;
    bVar1 = (long *)*(long *)*plVar4 != plVar2;
    plVar2 = (long *)*plVar4;
    if (bVar1) {
      do {
        lVar6 = *plVar4;
        plVar4 = (long *)(lVar6 + 0x10);
        plVar2 = (long *)*plVar4;
      } while (*(long *)*plVar4 != lVar6);
    }
  } while( true );
}


