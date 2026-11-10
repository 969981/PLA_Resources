/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c54d0; name: FUN_003c54d0
 */


undefined8 FUN_003c54d0(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  void *pvVar11;
  long *plVar12;
  void *pvVar13;
  ulong uVar14;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  bVar2 = (byte)*param_2;
  uVar5 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar5 = param_2[1];
  }
  if (uVar5 != 0) {
    pbVar10 = (byte *)param_2[2];
    if ((bVar2 & 1) == 0) {
      pbVar10 = (byte *)((long)param_2 + 1);
    }
    bVar2 = *pbVar10;
    if (bVar2 != 0x2e) goto LAB_003c5540;
    do {
      do {
        uVar5 = uVar5 - 1;
        pbVar10 = pbVar10 + 1;
        if (uVar5 == 0) goto LAB_003c55b8;
        bVar2 = *pbVar10;
      } while (bVar2 == 0x2e);
LAB_003c5540:
    } while ((bVar2 == 0x5f) ||
            ((0x2f < bVar2 &&
             ((bVar2 < 0x3a || ((0x40 < bVar2 && ((bVar2 < 0x5b || ((byte)(bVar2 + 0x9f) < 0x1a)))))
              )))));
    FUN_0030f640(&local_90,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor_database.cc"
                 ,0x9e);
                    /* try { // try from 003c5590 to 003c55ab has its CatchHandler @ 003c5a68 */
    uVar3 = FUN_0030f3ac(&local_90,"Invalid symbol name: ");
    uVar3 = FUN_0030f3e8(uVar3,param_2);
                    /* try { // try from 003c55ac to 003c55b3 has its CatchHandler @ 003c5a4c */
    FUN_0030f41c(&local_58,uVar3);
LAB_003c5764:
    FUN_0030f658(&local_90);
    return 0;
  }
LAB_003c55b8:
  plVar4 = (long *)FUN_003c5ef0(param_1,param_2);
  plVar1 = (long *)(param_1 + 0x18);
  local_78 = param_3;
  uStack_70 = param_4;
  if ((long *)(param_1 + 0x20) == plVar4) {
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    if ((*param_2 & 1) == 0) {
      uStack_88 = param_2[1];
      local_90 = *param_2;
      local_80 = (void *)param_2[2];
    }
    else {
      uVar5 = param_2[1];
      if (0xffffffffffffffef < uVar5) {
LAB_003c59ec:
        local_80 = (void *)0x0;
        uStack_88 = 0;
        local_90 = 0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pvVar11 = (void *)param_2[2];
      if (uVar5 < 0x17) {
        local_90 = (ulong)(byte)((int)uVar5 << 1);
        pvVar13 = (void *)((ulong)&local_90 | 1);
        if (uVar5 != 0) goto LAB_003c57f0;
      }
      else {
        uVar14 = uVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
        local_90 = uVar14 | 1;
        uStack_88 = uVar5;
        local_80 = pvVar13;
LAB_003c57f0:
        memcpy(pvVar13,pvVar11,uVar5);
      }
      *(undefined1 *)((long)pvVar13 + uVar5) = 0;
    }
                    /* try { // try from 003c580c to 003c581b has its CatchHandler @ 003c5a50 */
    plVar4 = (long *)FUN_003c5dd4(plVar1,&local_58,&local_90);
    if (*plVar4 != 0) goto LAB_003c59b4;
    p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x48);
    p_Var7 = p_Var6 + 0x20;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    if ((local_90 & 1) == 0) goto LAB_003c5904;
    if (0xffffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c59f4 to 003c59f7 has its CatchHandler @ 003c5a08 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (0x16 < uStack_88) goto LAB_003c5930;
LAB_003c5864:
    p_Var7 = p_Var6 + 0x21;
    p_Var6[0x20] = SUB41((int)uStack_88 << 1,0);
    uVar5 = uStack_88;
    pvVar11 = local_80;
    if (uStack_88 != 0) goto LAB_003c5958;
LAB_003c5968:
    p_Var7[uVar5] = (__tree_node_base)0x0;
  }
  else {
    uVar5 = FUN_003c5fe0(param_1,plVar4 + 4,param_2);
    if ((uVar5 & 1) != 0) {
      FUN_0030f640(&local_90,2,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor_database.cc"
                   ,0xaf);
                    /* try { // try from 003c5608 to 003c5643 has its CatchHandler @ 003c5a6c */
      uVar3 = FUN_0030f3ac(&local_90,"Symbol name \"");
      uVar3 = FUN_0030f3e8(uVar3,param_2);
      uVar3 = FUN_0030f3ac(uVar3,"\" conflicts with the existing symbol \"");
      uVar3 = FUN_0030f3e8(uVar3,plVar4 + 4);
      uVar3 = FUN_0030f3ac(uVar3,&DAT_038c838e);
                    /* try { // try from 003c5644 to 003c564b has its CatchHandler @ 003c5a48 */
      FUN_0030f41c(&local_58,uVar3);
      goto LAB_003c5764;
    }
    plVar8 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar8 = plVar4 + 2;
      plVar12 = (long *)*plVar8;
      if ((long *)*plVar12 != plVar4) {
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(lVar9 + 0x10);
          plVar12 = (long *)*plVar8;
        } while (*plVar12 != lVar9);
      }
    }
    else {
      do {
        plVar12 = plVar8;
        plVar8 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
    if (plVar12 != (long *)(param_1 + 0x20)) {
      uVar5 = FUN_003c5fe0(param_1,param_2,plVar12 + 4);
      if ((uVar5 & 1) != 0) {
        FUN_0030f640(&local_90,2,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor_database.cc"
                     ,0xbe);
                    /* try { // try from 003c5720 to 003c575b has its CatchHandler @ 003c5a64 */
        uVar3 = FUN_0030f3ac(&local_90,"Symbol name \"");
        uVar3 = FUN_0030f3e8(uVar3,param_2);
        uVar3 = FUN_0030f3ac(uVar3,"\" conflicts with the existing symbol \"");
        uVar3 = FUN_0030f3e8(uVar3,plVar12 + 4);
        uVar3 = FUN_0030f3ac(uVar3,&DAT_038c838e);
                    /* try { // try from 003c575c to 003c5763 has its CatchHandler @ 003c5a40 */
        FUN_0030f41c(&local_58,uVar3);
        goto LAB_003c5764;
      }
    }
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    if ((*param_2 & 1) == 0) {
      uStack_88 = param_2[1];
      local_90 = *param_2;
      local_80 = (void *)param_2[2];
    }
    else {
      uVar5 = param_2[1];
      if (0xffffffffffffffef < uVar5) goto LAB_003c59ec;
      pvVar11 = (void *)param_2[2];
      if (uVar5 < 0x17) {
        local_90 = (ulong)(byte)((int)uVar5 << 1);
        pvVar13 = (void *)((ulong)&local_90 | 1);
        if (uVar5 != 0) goto LAB_003c58a0;
      }
      else {
        uVar14 = uVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
        local_90 = uVar14 | 1;
        uStack_88 = uVar5;
        local_80 = pvVar13;
LAB_003c58a0:
        memcpy(pvVar13,pvVar11,uVar5);
      }
      *(undefined1 *)((long)pvVar13 + uVar5) = 0;
    }
                    /* try { // try from 003c58bc to 003c58d3 has its CatchHandler @ 003c5a44 */
    plVar4 = (long *)FUN_003c60fc(plVar1,plVar12,&local_58,auStack_60,&local_90);
    if (*plVar4 != 0) goto LAB_003c59b4;
    p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x48);
    p_Var7 = p_Var6 + 0x20;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    if ((local_90 & 1) != 0) {
      if (0xffffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c59f8 to 003c59fb has its CatchHandler @ 003c59fc */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_88 < 0x17) goto LAB_003c5864;
LAB_003c5930:
      pvVar11 = local_80;
      uVar5 = uStack_88;
      uVar14 = uStack_88 + 0x10 & 0xfffffffffffffff0;
      p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
      *(ulong *)(p_Var6 + 0x20) = uVar14 | 1;
      *(ulong *)(p_Var6 + 0x28) = uVar5;
      *(__tree_node_base **)(p_Var6 + 0x30) = p_Var7;
LAB_003c5958:
      memcpy(p_Var7,pvVar11,uVar5);
      goto LAB_003c5968;
    }
LAB_003c5904:
    *(void **)(p_Var7 + 0x10) = local_80;
    *(ulong *)(p_Var7 + 8) = uStack_88;
    *(ulong *)p_Var7 = local_90;
  }
  *(undefined8 *)(p_Var6 + 0x40) = uStack_70;
  *(undefined8 *)(p_Var6 + 0x38) = local_78;
  *(undefined8 *)p_Var6 = 0;
  *(undefined8 *)(p_Var6 + 8) = 0;
  *(undefined8 *)(p_Var6 + 0x10) = local_58;
  *plVar4 = (long)p_Var6;
  if (*(long *)*plVar1 != 0) {
    *plVar1 = *(long *)*plVar1;
    p_Var6 = (__tree_node_base *)*plVar4;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_1 + 0x20),p_Var6);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
LAB_003c59b4:
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  return 1;
}


