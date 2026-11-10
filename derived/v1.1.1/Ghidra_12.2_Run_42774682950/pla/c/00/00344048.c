/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00344048; name: FUN_00344048
 */


uint FUN_00344048(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  void *__src;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *local_98;
  ulong uStack_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulong uStack_78;
  undefined1 *local_70;
  
  uStack_78 = 0;
  local_70 = (undefined1 *)0x0;
  local_80 = (undefined1 *)0x0;
  if ((*param_2 & 1) == 0) {
    uStack_78 = param_2[1];
    local_80 = (undefined1 *)*param_2;
    local_70 = (undefined1 *)param_2[2];
    goto LAB_003440fc;
  }
  uVar11 = param_2[1];
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar11 < 0x17) {
    local_80 = (undefined1 *)(ulong)(byte)((int)uVar11 << 1);
    puVar12 = (undefined1 *)((ulong)&local_80 | 1);
    if (uVar11 != 0) goto LAB_003440e8;
  }
  else {
    uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
    puVar12 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
    local_80 = (undefined1 *)(uVar8 | 1);
    uStack_78 = uVar11;
    local_70 = puVar12;
LAB_003440e8:
    memcpy(puVar12,__src,uVar11);
  }
  puVar12[uVar11] = 0;
LAB_003440fc:
  puVar2 = PTR_LAB_04373088;
  puVar1 = PTR_FUN_04373078;
  uVar8 = (ulong)local_80 & 0xff;
  bVar4 = ((ulong)local_80 & 1) == 0;
  uVar11 = (ulong)local_80 >> 1 & 0x7f;
  if (!bVar4) {
    uVar11 = uStack_78;
  }
  if (uVar11 != 0) {
    puVar13 = (undefined1 *)((ulong)&local_80 | 1);
    puVar12 = puVar13;
    if (((ulong)local_80 & 1) != 0) {
      puVar12 = local_70;
    }
    uVar9 = uStack_78;
    puVar6 = local_70;
    do {
      do {
        uVar10 = uVar11;
        if (uVar10 == 0) goto LAB_00344280;
        uVar11 = uVar10 - 1;
      } while (puVar12[uVar10 - 1] != '.');
      if (uVar10 == 0) break;
      local_98 = (undefined1 *)0x0;
      puVar12 = puVar13;
      uVar8 = uVar8 >> 1;
      if (!bVar4) {
        puVar12 = puVar6;
        uVar8 = uVar9;
      }
      uStack_90 = 0;
      local_88 = (undefined1 *)0x0;
      if (uVar11 <= uVar8) {
        uVar8 = uVar11;
      }
      if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 003442f0 to 003442f7 has its CatchHandler @ 00344300 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar8 < 0x17) {
        local_98 = (undefined1 *)(ulong)(byte)((int)uVar8 << 1);
        puVar6 = (undefined1 *)((ulong)&local_98 | 1);
        if (uVar8 != 0) goto LAB_003441dc;
        *(undefined1 *)((ulong)&local_98 | 1) = 0;
      }
      else {
        uVar11 = uVar8 + 0x10 & 0xfffffffffffffff0;
        puVar6 = (undefined1 *)FUN_002e2e80(puVar1,uVar11);
        local_98 = (undefined1 *)(uVar11 | 1);
        uStack_90 = uVar8;
        local_88 = puVar6;
LAB_003441dc:
        memcpy(puVar6,puVar12,uVar8);
        puVar6[uVar8] = 0;
      }
      if (((ulong)local_80 & 1) != 0) {
        *local_70 = 0;
        uStack_78 = 0;
        if (((ulong)local_80 & 1) != 0) {
          FUN_002e2ea0(puVar2,local_70);
        }
      }
      local_70 = local_88;
      uStack_78 = uStack_90;
      local_80 = local_98;
      uVar11 = (ulong)local_98 & 1;
      local_98 = puVar13;
      if (uVar11 != 0) {
        local_98 = local_88;
      }
                    /* try { // try from 00344244 to 0034424b has its CatchHandler @ 00344310 */
      lVar7 = FUN_00364a2c(*(long *)(param_1 + 0x20) + 0x130,&local_98);
      if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) | 8) != 8)) {
        uVar5 = 1;
        uVar3 = 1;
        if (((ulong)local_80 & 1) == 0) goto LAB_003442ac;
        goto LAB_0034429c;
      }
      uVar8 = (ulong)local_80 & 0xff;
      bVar4 = ((ulong)local_80 & 1) == 0;
      uVar11 = (ulong)local_80 >> 1 & 0x7f;
      puVar12 = puVar13;
      if (!bVar4) {
        uVar11 = uStack_78;
        puVar12 = local_70;
      }
      uVar9 = uStack_78;
      puVar6 = local_70;
    } while (uVar11 != 0);
  }
LAB_00344280:
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
                    /* try { // try from 00344288 to 0034428f has its CatchHandler @ 00344320 */
    uVar5 = FUN_00344048(*(long *)(param_1 + 0x18),param_2);
  }
  uVar3 = uVar5;
  if (((ulong)local_80 & 1) != 0) {
LAB_0034429c:
    uVar5 = uVar3;
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
LAB_003442ac:
  return uVar5 & 1;
}


