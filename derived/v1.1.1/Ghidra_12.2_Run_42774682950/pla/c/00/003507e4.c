/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003507e4; name: FUN_003507e4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003507e4(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int iVar7;
  void *pvVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  byte *local_80;
  ulong uStack_78;
  void *local_70;
  
  uVar3 = FUN_0033fd34(*(undefined8 *)(param_1 + 8),param_2,8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar3 = (ulong)(*param_2 >> 1);
    }
    if (uVar3 == 0) {
LAB_003508e8:
      FUN_00350da4(param_1,param_2,param_2,param_3);
      return;
    }
    uVar12 = uVar3;
    do {
      uVar11 = uVar12;
      if (uVar11 == 0) goto LAB_003508e8;
      uVar12 = uVar11 - 1;
    } while (pbVar1[uVar11 - 1] != 0x2e);
    if (uVar11 == 0) goto LAB_003508e8;
    lVar9 = *(long *)(param_1 + 8);
    local_80 = (byte *)0x0;
    if (uVar12 <= uVar3) {
      uVar3 = uVar12;
    }
    uStack_78 = 0;
    local_70 = (void *)0x0;
    if (0xffffffffffffffef < uVar3) goto LAB_00350cb0;
    if (uVar3 < 0x17) {
      local_80 = (byte *)(ulong)(byte)((int)uVar3 << 1);
      pvVar8 = (void *)((ulong)&local_80 | 1);
      if (uVar3 != 0) goto LAB_003509bc;
    }
    else {
      uVar10 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
      local_80 = (byte *)(uVar10 | 1);
      uStack_78 = uVar3;
      local_70 = pvVar8;
LAB_003509bc:
      memcpy(pvVar8,pbVar1,uVar3);
    }
    *(undefined1 *)((long)pvVar8 + uVar3) = 0;
    puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    pvVar8 = local_70;
    uVar3 = uStack_78;
    if (puVar4 != (ulong *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      if (((ulong)local_80 & 1) == 0) {
        puVar4[2] = (ulong)local_70;
        puVar4[1] = uStack_78;
        *puVar4 = (ulong)local_80;
      }
      else {
        if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 00350cc0 to 00350cc7 has its CatchHandler @ 00350cc8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_78 < 0x17) {
          __dest = (void *)((long)puVar4 + 1);
          *(char *)puVar4 = (char)((int)uStack_78 << 1);
          if (uStack_78 != 0) goto LAB_00350b78;
        }
        else {
          uVar10 = uStack_78 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
          puVar4[1] = uVar3;
          puVar4[2] = (ulong)__dest;
          *puVar4 = uVar10 | 1;
LAB_00350b78:
          memcpy(__dest,pvVar8,uVar3);
        }
        *(undefined1 *)((long)__dest + uVar3) = 0;
      }
    }
                    /* try { // try from 00350b94 to 00350b9b has its CatchHandler @ 00350cc8 */
    local_a0 = puVar4;
    FUN_003410d8(lVar9 + 0xd0,&local_a0);
    if (((ulong)local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    FUN_003507e4(param_1,puVar4,param_3,param_4);
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = (byte *)0x0;
    bVar2 = *param_2;
    uVar3 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    if (uVar3 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = uVar3 - uVar11;
    pbVar1 = param_2 + 1;
    if ((bVar2 & 1) != 0) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
    if (0xffffffffffffffef < uVar3) {
LAB_00350cb0:
      local_70 = (void *)0x0;
      uStack_78 = 0;
      local_80 = (byte *)0x0;
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar3 < 0x17) {
      local_80 = (byte *)(ulong)(byte)((int)uVar3 << 1);
      pvVar8 = (void *)((ulong)&local_80 | 1);
      if (uVar3 != 0) goto LAB_00350c50;
    }
    else {
      uVar12 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
      local_80 = (byte *)(uVar12 | 1);
      uStack_78 = uVar3;
      local_70 = pvVar8;
LAB_00350c50:
      memcpy(pvVar8,pbVar1 + uVar11,uVar3);
    }
    *(undefined1 *)((long)pvVar8 + uVar3) = 0;
                    /* try { // try from 00350c64 to 00350c77 has its CatchHandler @ 00350cd8 */
    FUN_00350da4(param_1,&local_80,param_2,param_3);
    if (((ulong)local_80 & 1) == 0) {
      return;
    }
    local_c8 = local_70;
    goto LAB_00350c84;
  }
  local_80 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_80 = param_2 + 1;
  }
  lVar9 = FUN_00364a2c(*(long *)(param_1 + 8) + 0x130,&local_80);
  if (lVar9 == 0) {
    iVar7 = 0;
    lVar9 = 0;
  }
  else {
    iVar7 = *(int *)(lVar9 + 0x18);
    if (iVar7 == 8) {
      return;
    }
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  FUN_0034b2f0(local_d8,&DAT_039042e1,param_2);
                    /* try { // try from 00350934 to 00350947 has its CatchHandler @ 00350d80 */
  puVar4 = (ulong *)FUN_002e4094(local_d8,
                                 "\" is already defined (as something other than a package) in file \""
                                 ,0x42);
  local_b0 = puVar4[2];
  uStack_b8 = puVar4[1];
  local_c0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  switch(iVar7) {
  case 1:
  case 4:
  case 6:
    puVar5 = (undefined8 *)(lVar9 + 0x10);
    break;
  case 2:
    puVar5 = (undefined8 *)(lVar9 + 0x28);
    break;
  case 3:
  case 7:
    lVar9 = *(long *)(lVar9 + 0x10);
    goto LAB_00350a18;
  case 5:
    lVar9 = *(long *)(lVar9 + 0x18);
LAB_00350a18:
    puVar5 = (undefined8 *)(lVar9 + 0x10);
    break;
  default:
    puVar5 = (undefined8 *)0x0;
    goto LAB_00350a28;
  }
  puVar5 = (undefined8 *)*puVar5;
LAB_00350a28:
  pbVar6 = (byte *)*puVar5;
  uVar3 = *(ulong *)(pbVar6 + 8);
  pbVar1 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar1 = pbVar6 + 1;
    uVar3 = (ulong)(*pbVar6 >> 1);
  }
                    /* try { // try from 00350a44 to 00350a4b has its CatchHandler @ 00350d58 */
  puVar5 = (undefined8 *)FUN_002e4094(&local_c0,pbVar1,uVar3);
  uStack_98 = puVar5[1];
  local_a0 = (ulong *)*puVar5;
  local_90 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00350a64 to 00350a77 has its CatchHandler @ 00350d30 */
  puVar4 = (ulong *)FUN_002e4094(&local_a0,&DAT_038c838e,2);
  uStack_78 = puVar4[1];
  local_80 = (byte *)*puVar4;
  local_70 = (void *)puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00350a90 to 00350aa7 has its CatchHandler @ 00350cec */
  FUN_0034db00(param_1,param_2,param_3,0,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if (((ulong)local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if ((local_d8[0] & 1) != 0) {
LAB_00350c84:
    FUN_002e2ea0(PTR_LAB_04373088,local_c8);
  }
  return;
}


