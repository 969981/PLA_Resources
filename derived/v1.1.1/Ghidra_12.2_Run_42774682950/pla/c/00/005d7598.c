/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d7598; name: FUN_005d7598
 */


long * FUN_005d7598(ulong *param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x78);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if ((*param_1 & 1) == 0) {
    uStack_58 = param_1[1];
    local_60 = *param_1;
    local_50 = (void *)param_1[2];
    if ((*param_2 & 1) != 0) goto LAB_005d76b0;
LAB_005d7600:
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = (void *)param_2[2];
    bVar1 = (byte)*param_3;
  }
  else {
    uVar4 = param_1[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = (void *)param_1[2];
    if (uVar4 < 0x17) {
      local_60 = (ulong)(byte)((int)uVar4 << 1);
      pvVar5 = (void *)((ulong)&local_60 | 1);
      if (uVar4 != 0) goto LAB_005d768c;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_60 = uVar6 | 1;
      uStack_58 = uVar4;
      local_50 = pvVar5;
LAB_005d768c:
      memcpy(pvVar5,pvVar3,uVar4);
    }
    *(undefined1 *)((long)pvVar5 + uVar4) = 0;
    if ((*param_2 & 1) == 0) goto LAB_005d7600;
LAB_005d76b0:
    local_70 = (void *)0x0;
    uStack_78 = 0;
    local_80 = 0;
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 005d7820 to 005d7827 has its CatchHandler @ 005d7868 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      local_80 = (ulong)(byte)((int)uVar4 << 1);
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if (uVar4 != 0) goto LAB_005d7708;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_80 = uVar6 | 1;
      uStack_78 = uVar4;
      local_70 = pvVar5;
LAB_005d7708:
      memcpy(pvVar5,pvVar3,uVar4);
    }
    *(undefined1 *)((long)pvVar5 + uVar4) = 0;
    bVar1 = (byte)*param_3;
  }
  if ((bVar1 & 1) == 0) {
    uStack_98 = param_3[1];
    local_a0 = *param_3;
    local_90 = (void *)param_3[2];
    goto LAB_005d7798;
  }
  local_90 = (void *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar4 = param_3[1];
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 005d7828 to 005d782f has its CatchHandler @ 005d7830 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = (void *)param_3[2];
  if (uVar4 < 0x17) {
    local_a0 = (ulong)(byte)((int)uVar4 << 1);
    pvVar5 = (void *)((ulong)&local_a0 | 1);
    if (uVar4 != 0) goto LAB_005d7784;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_a0 = uVar6 | 1;
    uStack_98 = uVar4;
    local_90 = pvVar5;
LAB_005d7784:
    memcpy(pvVar5,pvVar3,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
LAB_005d7798:
  plVar2[2] = 1;
  *plVar2 = (long)(PTR_DAT_04375050 + 0x10);
  plVar2[1] = 0;
  plVar2[5] = (long)local_50;
  plVar2[4] = uStack_58;
  plVar2[3] = local_60;
  plVar2[8] = (long)local_70;
  plVar2[7] = uStack_78;
  plVar2[6] = local_80;
  plVar2[0xb] = (long)local_90;
  plVar2[0xc] = 0;
  plVar2[10] = uStack_98;
  plVar2[9] = local_a0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  return plVar2;
}


