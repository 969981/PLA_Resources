/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005140dc; name: FUN_005140dc
 */


void FUN_005140dc(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar1 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pvVar3 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_0051416c;
    }
    else {
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      *param_1 = uVar5 | 1;
      param_1[1] = uVar4;
      param_1[2] = (ulong)pvVar3;
LAB_0051416c:
      memcpy(pvVar3,pvVar1,uVar4);
    }
    *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  }
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if ((byte)param_2[3] == 0) {
    return;
  }
  puVar2 = param_1 + 4;
  *puVar2 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((param_2[4] & 1) == 0) {
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    *puVar2 = uVar4;
    goto LAB_00514228;
  }
  uVar4 = param_2[5];
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 0051424c to 00514253 has its CatchHandler @ 00514254 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar1 = (void *)param_2[6];
  if (uVar4 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x21);
    *(char *)puVar2 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_00514214;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    param_1[4] = uVar5 | 1;
    param_1[5] = uVar4;
    param_1[6] = (ulong)pvVar3;
LAB_00514214:
    memcpy(pvVar3,pvVar1,uVar4);
  }
  *(undefined1 *)((long)pvVar3 + uVar4) = 0;
LAB_00514228:
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


