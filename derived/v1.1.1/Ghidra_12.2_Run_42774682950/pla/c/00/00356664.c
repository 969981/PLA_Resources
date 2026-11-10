/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00356664; name: FUN_00356664
 */


void FUN_00356664(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  void *__dest;
  undefined8 *puVar4;
  __tree_node_base *p_Var5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong __n;
  __tree_node_base *p_Var11;
  undefined8 uVar12;
  void *__src;
  byte local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 *local_88;
  __tree_node_base *local_78;
  __tree_node_base *local_70;
  long local_68;
  
  puVar3 = PTR_LAB_04373088;
  local_70 = (__tree_node_base *)0x0;
  local_68 = 0;
  local_78 = (__tree_node_base *)&local_70;
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar9);
      puVar6 = (ulong *)*puVar1;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      if ((*puVar6 & 1) == 0) {
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        local_90 = (void *)puVar6[2];
      }
      else {
        __n = puVar6[1];
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 00356c18 to 00356c1f has its CatchHandler @ 00356c20 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        __src = (void *)puVar6[2];
        if (__n < 0x17) {
          local_a0 = (ulong)(byte)((int)__n << 1);
          __dest = (void *)((ulong)&local_a0 | 1);
          if (__n != 0) goto LAB_00356770;
        }
        else {
          uVar10 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
          local_a0 = uVar10 | 1;
          uStack_98 = __n;
          local_90 = __dest;
LAB_00356770:
          memcpy(__dest,__src,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
      }
                    /* try { // try from 00356788 to 00356797 has its CatchHandler @ 00356cdc */
      local_88 = puVar1;
      puVar4 = (undefined8 *)FUN_0036fe70(&local_78,&local_b8,&local_a0);
      p_Var11 = (__tree_node_base *)*puVar4;
      if (p_Var11 == (__tree_node_base *)0x0) {
        p_Var11 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
        *(void **)(p_Var11 + 0x30) = local_90;
        *(ulong *)(p_Var11 + 0x28) = uStack_98;
        *(ulong *)(p_Var11 + 0x20) = local_a0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        *(undefined8 **)(p_Var11 + 0x38) = local_88;
        *(undefined8 *)p_Var11 = 0;
        *(undefined8 *)(p_Var11 + 8) = 0;
        *(ulong *)(p_Var11 + 0x10) = CONCAT71(uStack_b7,local_b8);
        *puVar4 = p_Var11;
        if (*(__tree_node_base **)local_78 == (__tree_node_base *)0x0) {
          p_Var5 = p_Var11;
        }
        else {
          p_Var5 = (__tree_node_base *)*puVar4;
          local_78 = *(__tree_node_base **)local_78;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var5);
        local_68 = local_68 + 1;
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((local_a0 & 1) != 0) {
        FUN_002e2ea0(puVar3,local_90);
      }
      if ((!bVar2) &&
         ((*(char *)(*(long *)(*(long *)(p_Var11 + 0x38) + 0x20) + 0x4b) != '\0' ||
          (*(char *)(puVar1[4] + 0x4b) != '\0')))) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 003567e4 to 003567f3 has its CatchHandler @ 00356c34 */
        FUN_0034b2f0(&local_b8,"Expanded map entry type ",*puVar1);
                    /* try { // try from 003567f4 to 00356807 has its CatchHandler @ 00356c24 */
        puVar6 = (ulong *)FUN_002e4094(&local_b8," conflicts with an existing nested message type.",
                                       0x30);
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        local_90 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 00356820 to 00356837 has its CatchHandler @ 00356c38 */
        FUN_0034db00(param_1,uVar12,param_3,0,&local_a0);
        if ((local_a0 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_a8);
        }
      }
      lVar7 = *(long *)(param_2 + 0x38);
                    /* try { // try from 00356864 to 0035687f has its CatchHandler @ 00356cfc */
      uVar12 = FUN_00365e80(param_3 + 0x30,uVar8 & 0xffffffff);
      FUN_00356664(param_1,lVar7 + lVar9,uVar12);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x90;
    } while ((long)uVar8 < (long)*(int *)(param_2 + 0x74));
  }
  puVar3 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
                    /* try { // try from 0035696c to 00356973 has its CatchHandler @ 00356cd8 */
      p_Var11 = (__tree_node_base *)
                FUN_0036ff8c(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar7));
      if (((__tree_node_base *)&local_70 != p_Var11) &&
         (*(char *)((*(undefined8 **)(p_Var11 + 0x38))[4] + 0x4b) != '\0')) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00356994 to 0035699f has its CatchHandler @ 00356ca0 */
        FUN_0034b2f0(&local_b8,"Expanded map entry type ",**(undefined8 **)(p_Var11 + 0x38));
                    /* try { // try from 003569a0 to 003569af has its CatchHandler @ 00356c90 */
        puVar6 = (ulong *)FUN_002e4094(&local_b8," conflicts with an existing field.",0x22);
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        local_90 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 003569c8 to 003569df has its CatchHandler @ 00356ca4 */
        FUN_0034db00(param_1,uVar12,param_3,0,&local_a0);
        if ((local_a0 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_a8);
        }
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x98;
    } while (lVar9 < *(int *)(param_2 + 0x68));
  }
  puVar3 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
                    /* try { // try from 00356a5c to 00356a63 has its CatchHandler @ 00356cd4 */
      p_Var11 = (__tree_node_base *)
                FUN_0036ff8c(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar7));
      if (((__tree_node_base *)&local_70 != p_Var11) &&
         (*(char *)((*(undefined8 **)(p_Var11 + 0x38))[4] + 0x4b) != '\0')) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00356a84 to 00356a8f has its CatchHandler @ 00356c7c */
        FUN_0034b2f0(&local_b8,"Expanded map entry type ",**(undefined8 **)(p_Var11 + 0x38));
                    /* try { // try from 00356a90 to 00356a9f has its CatchHandler @ 00356c6c */
        puVar6 = (ulong *)FUN_002e4094(&local_b8," conflicts with an existing enum type.",0x26);
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        local_90 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 00356ab8 to 00356acf has its CatchHandler @ 00356c80 */
        FUN_0034db00(param_1,uVar12,param_3,0,&local_a0);
        if ((local_a0 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_a8);
        }
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x50;
    } while (lVar9 < *(int *)(param_2 + 0x78));
  }
  puVar3 = PTR_LAB_04373088;
  if (0 < *(int *)(param_2 + 0x6c)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
                    /* try { // try from 00356b4c to 00356b53 has its CatchHandler @ 00356cd0 */
      p_Var11 = (__tree_node_base *)
                FUN_0036ff8c(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar7));
      if (((__tree_node_base *)&local_70 != p_Var11) &&
         (*(char *)((*(undefined8 **)(p_Var11 + 0x38))[4] + 0x4b) != '\0')) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00356b74 to 00356b7f has its CatchHandler @ 00356c58 */
        FUN_0034b2f0(&local_b8,"Expanded map entry type ",**(undefined8 **)(p_Var11 + 0x38));
                    /* try { // try from 00356b80 to 00356b8f has its CatchHandler @ 00356c48 */
        puVar6 = (ulong *)FUN_002e4094(&local_b8," conflicts with an existing oneof type.",0x27);
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        local_90 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 00356ba8 to 00356bbf has its CatchHandler @ 00356c5c */
        FUN_0034db00(param_1,uVar12,param_3,0,&local_a0);
        if ((local_a0 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_a8);
        }
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x30;
    } while (lVar9 < *(int *)(param_2 + 0x6c));
  }
  FUN_0036fe14(&local_78,local_70);
  return;
}


