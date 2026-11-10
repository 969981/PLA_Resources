/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ba2d0; name: FUN_002ba2d0
 */


void FUN_002ba2d0(undefined4 *param_1,undefined4 param_2,byte *param_3,byte *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)(param_1 + 2);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if ((*param_3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *puVar1 = uVar6;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar2 = *(void **)(param_3 + 0x10);
    if (uVar5 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 9);
      *(char *)puVar1 = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_002ba368;
    }
    else {
      uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
      *(ulong *)(param_1 + 2) = uVar3 | 1;
      *(ulong *)(param_1 + 4) = uVar5;
      *(void **)(param_1 + 6) = pvVar4;
LAB_002ba368:
      memcpy(pvVar4,pvVar2,uVar5);
    }
    *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if ((*param_4 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_1 + 10) = uVar7;
    *puVar1 = uVar6;
    return;
  }
  uVar5 = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 002ba424 to 002ba42b has its CatchHandler @ 002ba42c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar2 = *(void **)(param_4 + 0x10);
  if (uVar5 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x21);
    *(char *)puVar1 = (char)((int)uVar5 << 1);
    if (uVar5 == 0) goto LAB_002ba404;
  }
  else {
    uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    *(ulong *)(param_1 + 8) = uVar3 | 1;
    *(ulong *)(param_1 + 10) = uVar5;
    *(void **)(param_1 + 0xc) = pvVar4;
  }
  memcpy(pvVar4,pvVar2,uVar5);
LAB_002ba404:
  *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  return;
}


