/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00364070; name: FUN_00364070
 */


undefined1  [16] FUN_00364070(long param_1,ulong *param_2)

{
  ulong uVar1;
  void *__src;
  char *__dest;
  char *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong local_68;
  ulong uStack_60;
  char *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  
  uStack_48 = 0;
  local_40 = (char *)0x0;
  local_50 = 0;
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (char *)param_2[2];
  }
  else {
    uVar3 = param_2[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)param_2[2];
    if (uVar3 < 0x17) {
      local_50 = (ulong)(byte)((int)uVar3 << 1);
      pcVar2 = (char *)((ulong)&local_50 | 1);
      if (uVar3 != 0) goto LAB_00364100;
    }
    else {
      uVar1 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pcVar2 = (char *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
      local_50 = uVar1 | 1;
      uStack_48 = uVar3;
      local_40 = pcVar2;
LAB_00364100:
      memcpy(pcVar2,__src,uVar3);
    }
    pcVar2[uVar3] = '\0';
  }
  uVar3 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    uVar3 = uStack_48;
  }
  if (uVar3 == 0) goto LAB_0036420c;
  pcVar2 = (char *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pcVar2 = local_40;
  }
  if (*pcVar2 != '.') goto LAB_0036420c;
  uVar1 = uVar3 - 1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (char *)0x0;
  if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00364260 to 00364267 has its CatchHandler @ 00364268 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar1 < 0x17) {
    local_68 = (ulong)(byte)((int)uVar1 << 1);
    __dest = (char *)((ulong)&local_68 | 1);
    if (uVar1 != 0) goto LAB_003641b8;
    *__dest = '\0';
  }
  else {
    uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
    __dest = (char *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_68 = uVar3 | 1;
    uStack_60 = uVar1;
    local_58 = __dest;
LAB_003641b8:
    memcpy(__dest,pcVar2 + 1,uVar1);
    __dest[uVar1] = '\0';
  }
  if ((local_50 & 1) != 0) {
    *local_40 = '\0';
    uStack_48 = 0;
    if ((local_50 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
  }
  local_40 = local_58;
  uStack_48 = uStack_60;
  local_50 = local_68;
LAB_0036420c:
                    /* try { // try from 00364210 to 0036421b has its CatchHandler @ 00364278 */
  auVar4 = FUN_0033f438(*(undefined8 *)(param_1 + 0x20),param_1,&local_50);
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  return auVar4;
}


