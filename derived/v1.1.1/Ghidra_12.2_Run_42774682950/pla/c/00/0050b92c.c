/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050b92c; name: FUN_0050b92c
 */


__tree_node_base * FUN_0050b92c(ulong *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__src;
  __tree_node_base *p_Var5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  __tree_node_base *p_Var11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  byte local_b0 [16];
  ulong local_a0;
  undefined1 auStack_98 [32];
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  int *piStack_58;
  
  if (param_1[0x13] == param_1[0x14]) {
    return (__tree_node_base *)(param_1 + 9);
  }
  piVar12 = *(int **)(param_1[0x14] - 8);
  if (*piVar12 == 5) {
    plVar1 = (long *)(piVar12 + 8);
    puVar9 = param_1 + 0x16;
    piVar2 = (int *)FUN_00500624(plVar1,puVar9);
    if (piVar12 + 10 == piVar2) goto LAB_0050bc8c;
    puVar10 = param_1 + 5;
    if (param_1[6] - *puVar10 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_0050bc8c;
    }
    local_70 = (ulong *)PTR_LAB_04374a18;
    local_68 = (ulong *)(param_1[1] + ~*param_1);
    local_60 = (ulong *)PTR_LAB_04374a10;
    local_78 = puVar9;
    FUN_002e6390(local_b0,"duplicate key \"%s\" at index %lu",0x1f,&local_78,2);
    uVar14 = (ulong)local_b0 | 1;
    if ((local_b0[0] & 1) != 0) {
      uVar14 = local_a0;
    }
                    /* try { // try from 0050bab8 to 0050badb has its CatchHandler @ 0050bd8c */
    FUN_002f2ff0(auStack_98,uVar14);
    uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0xba,
                         auStack_98,0,0);
    puVar4 = (undefined8 *)param_1[6];
    if (puVar4 < (undefined8 *)param_1[7]) {
      *puVar4 = uVar3;
      param_1[6] = param_1[6] + 8;
    }
    else {
      lVar13 = (long)((long)puVar4 - *puVar10) >> 3;
      uVar14 = lVar13 + 1;
      if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 0050bd84 to 0050bd8b has its CatchHandler @ 0050bd8c */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = (long)param_1[7] - *puVar10;
      if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
        uVar7 = lVar6 >> 2;
        if (uVar14 <= uVar7) {
          uVar14 = uVar7;
        }
        if (uVar14 != 0) goto LAB_0050bc1c;
        lVar6 = 0;
      }
      else {
        uVar14 = 0x1fffffffffffffff;
LAB_0050bc1c:
        lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 3);
      }
      puVar4 = (undefined8 *)(lVar6 + lVar13 * 8);
      *puVar4 = uVar3;
      __src = (void *)param_1[5];
      __n = param_1[6] - (long)__src;
      if (0 < (long)__n) {
        memcpy((void *)((long)puVar4 - __n),__src,__n);
        __src = (void *)*puVar10;
      }
      param_1[5] = (ulong)((long)puVar4 - __n);
      param_1[6] = (ulong)(puVar4 + 1);
      param_1[7] = lVar6 + uVar14 * 8;
      if (__src != (void *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
    if ((local_b0[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0);
    }
LAB_0050bc8c:
    puVar4 = (undefined8 *)FUN_003ea500(plVar1,&local_78,puVar9);
    p_Var11 = (__tree_node_base *)*puVar4;
    if (p_Var11 == (__tree_node_base *)0x0) {
      p_Var11 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      uVar7 = param_1[0x17];
      uVar14 = *puVar9;
      *(ulong *)(p_Var11 + 0x30) = param_1[0x18];
      *(ulong *)(p_Var11 + 0x28) = uVar7;
      *(ulong *)(p_Var11 + 0x20) = uVar14;
      *puVar9 = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      *(undefined8 *)(p_Var11 + 0x60) = 0;
      *(undefined8 *)(p_Var11 + 0x58) = 0;
      *(undefined8 *)(p_Var11 + 0x68) = 0;
      *(undefined8 *)(p_Var11 + 0x70) = 0;
      *(__tree_node_base **)(p_Var11 + 0x58) = p_Var11 + 0x60;
      *(undefined8 *)(p_Var11 + 0x50) = 0;
      *(undefined8 *)(p_Var11 + 0x48) = 0;
      *(undefined8 *)(p_Var11 + 0x40) = 0;
      *(undefined8 *)(p_Var11 + 0x38) = 0;
      *(undefined8 *)(p_Var11 + 0x78) = 0;
      *(undefined8 *)(p_Var11 + 0x80) = 0;
      *(ulong **)(p_Var11 + 0x10) = local_78;
      *(undefined8 *)p_Var11 = 0;
      *(undefined8 *)(p_Var11 + 8) = 0;
      *puVar4 = p_Var11;
      if (*(long *)*plVar1 == 0) {
        p_Var5 = p_Var11;
      }
      else {
        *plVar1 = *(long *)*plVar1;
        p_Var5 = (__tree_node_base *)*puVar4;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(piVar12 + 10),p_Var5);
      *(long *)(piVar12 + 0xc) = *(long *)(piVar12 + 0xc) + 1;
    }
    return p_Var11 + 0x38;
  }
  if (*piVar12 != 6) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0xbf,2,
                 "assertion failed: %s","parent->type() == Json::Type::ARRAY");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar4 = *(undefined8 **)(piVar12 + 0x10);
  if (puVar4 < *(undefined8 **)(piVar12 + 0x12)) {
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[4] = puVar4 + 5;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    lVar13 = *(long *)(piVar12 + 0x10) + 0x50;
    *(long *)(piVar12 + 0x10) = lVar13;
    goto LAB_0050bbd0;
  }
  lVar13 = (long)puVar4 - *(long *)(piVar12 + 0xe) >> 4;
  uVar7 = 0x333333333333333;
  uVar14 = lVar13 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar14) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(piVar12 + 0x12) - *(long *)(piVar12 + 0xe) >> 4;
  piStack_58 = piVar12 + 0x12;
  if ((ulong)(lVar6 * -0x3333333333333333) < 0x199999999999999) {
    uVar8 = lVar6 * -0x6666666666666666;
    uVar7 = uVar14;
    if (uVar14 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 != 0) goto LAB_0050bb14;
    local_78 = (ulong *)0x0;
  }
  else {
LAB_0050bb14:
    local_60 = (ulong *)0x0;
    local_78 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar7 * 0x50);
  }
  local_70 = local_78 + lVar13 * 2;
  local_60 = local_78 + uVar7 * 10;
  local_70[3] = 0;
  local_70[2] = 0;
  local_70[5] = 0;
  local_70[4] = 0;
  local_70[4] = (ulong)(local_70 + 5);
  local_68 = local_70 + 10;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[1] = 0;
  *local_70 = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  puVar9 = *(ulong **)(piVar12 + 0xe);
  puVar10 = *(ulong **)(piVar12 + 0x10);
  if (puVar10 == puVar9) {
    puVar10 = puVar9;
  }
  else {
    do {
      puVar10 = puVar10 + -10;
                    /* try { // try from 0050bb74 to 0050bb7b has its CatchHandler @ 0050bdb0 */
      FUN_003eaa30(local_70 + -10,puVar10);
      local_70 = local_70 + -10;
    } while (puVar9 != puVar10);
    puVar9 = *(ulong **)(piVar12 + 0xe);
    puVar10 = *(ulong **)(piVar12 + 0x10);
  }
  *(ulong **)(piVar12 + 0xe) = local_70;
  *(ulong **)(piVar12 + 0x10) = local_68;
  uVar3 = *(undefined8 *)(piVar12 + 0x12);
  *(ulong **)(piVar12 + 0x12) = local_60;
  local_78 = puVar9;
  local_70 = puVar9;
  local_68 = puVar10;
  local_60 = (ulong *)uVar3;
  FUN_003eeba8(&local_78);
  lVar13 = *(long *)(piVar12 + 0x10);
LAB_0050bbd0:
  return (__tree_node_base *)(lVar13 + -0x50);
}


