/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060e9a0; name: FUN_0060e9a0
 */


undefined8 FUN_0060e9a0(ulong *param_1,byte *param_2,byte *param_3,ulong *param_4)

{
  byte *pbVar1;
  size_t __n;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  void *__dest;
  ulong local_b8;
  size_t sStack_b0;
  void *local_a8;
  undefined1 auStack_a0 [64];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if ((*param_1 & 1) == 0) {
    uStack_58 = param_1[1];
    local_60 = *param_1;
    local_50 = (void *)param_1[2];
  }
  else {
    uVar2 = param_1[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_1[2];
    if (uVar2 < 0x17) {
      local_60 = (ulong)(byte)((int)uVar2 << 1);
      __dest = (void *)((ulong)&local_60 | 1);
      if (uVar2 != 0) goto LAB_0060ea3c;
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      local_60 = uVar5 | 1;
      uStack_58 = uVar2;
      local_50 = __dest;
LAB_0060ea3c:
      memcpy(__dest,pvVar4,uVar2);
    }
    *(undefined1 *)((long)__dest + uVar2) = 0;
  }
                    /* try { // try from 0060ea50 to 0060eaa7 has its CatchHandler @ 0060ece0 */
  FUN_002e6a9c(&local_60,0x3a);
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  FUN_002e4094(&local_60,pbVar1,uVar2);
  FUN_002e6a9c(&local_60,0x3a);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
  FUN_002e4094(&local_60,pbVar1,uVar2);
  sStack_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  __n = strlen(PTR_DAT_043753a0);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0060ec70 to 0060ec77 has its CatchHandler @ 0060ec98 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
    pvVar4 = (void *)((ulong)&local_b8 | 1);
    if (__n == 0) goto LAB_0060eb24;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_b8 = uVar2 | 1;
    sStack_b0 = __n;
    local_a8 = pvVar4;
  }
  memcpy(pvVar4,PTR_DAT_043753a0,__n);
LAB_0060eb24:
  *(undefined1 *)((long)pvVar4 + __n) = 0;
  uVar2 = local_60 >> 1 & 0x7f;
  pvVar4 = (void *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    uVar2 = uStack_58;
    pvVar4 = local_50;
  }
                    /* try { // try from 0060eb48 to 0060eb57 has its CatchHandler @ 0060eca8 */
  uVar2 = FUN_0060f070(&local_b8,pvVar4,uVar2,auStack_a0,0x40);
  if ((local_b8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a8);
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    sStack_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 0060ec78 to 0060ec7f has its CatchHandler @ 0060ec88 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar2 < 0x17) {
      local_b8 = (ulong)(byte)((int)uVar2 << 1);
      pvVar4 = (void *)((ulong)&local_b8 | 1);
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      local_b8 = uVar5 | 1;
      sStack_b0 = uVar2;
      local_a8 = pvVar4;
    }
    memcpy(pvVar4,auStack_a0,uVar2);
    *(undefined1 *)((long)pvVar4 + uVar2) = 0;
    if ((*param_4 & 1) == 0) {
      *(undefined2 *)param_4 = 0;
    }
    else {
      *(undefined1 *)param_4[2] = 0;
      param_4[1] = 0;
      if ((*param_4 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,param_4[2]);
        *param_4 = 0;
      }
    }
    param_4[2] = (ulong)local_a8;
    param_4[1] = sStack_b0;
    *param_4 = local_b8;
    uVar3 = 1;
  }
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  return uVar3;
}


