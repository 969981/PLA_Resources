/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00793f40; name: FUN_00793f40
 */


ulong * FUN_00793f40(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    if ((*param_2 & 1) == 0) {
      uVar6 = param_2[1];
      uVar4 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar6;
      *puVar1 = uVar4;
      goto LAB_007940d0;
    }
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) goto LAB_00794104;
    pvVar3 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pvVar5 = (void *)((long)puVar1 + 1);
      *(char *)puVar1 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_007940bc;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      *puVar1 = uVar6 | 1;
      puVar1[1] = uVar4;
      puVar1[2] = (ulong)pvVar5;
LAB_007940bc:
      memcpy(pvVar5,pvVar3,uVar4);
    }
    *(undefined1 *)((long)pvVar5 + uVar4) = 0;
LAB_007940d0:
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FUN_0032cf88(lVar2,0,0x30);
  }
  puVar1 = (ulong *)FUN_0032cea0(lVar2,0x30);
  lVar2 = *param_1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((*param_2 & 1) == 0) {
    uVar6 = param_2[1];
    uVar4 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar6;
    *puVar1 = uVar4;
    goto LAB_00794044;
  }
  uVar4 = param_2[1];
  if (0xffffffffffffffef < uVar4) {
LAB_00794104:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = (void *)param_2[2];
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_00794030;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    *puVar1 = uVar6 | 1;
    puVar1[1] = uVar4;
    puVar1[2] = (ulong)pvVar5;
LAB_00794030:
    memcpy(pvVar5,pvVar3,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
LAB_00794044:
  FUN_00635a74(lVar2,puVar1);
  lVar2 = *param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  FUN_00635a74(lVar2);
  return puVar1;
}


