/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079b080; name: FUN_0079b080
 */


void FUN_0079b080(ulong *param_1,long param_2)

{
  void *__src;
  long *plVar1;
  byte *pbVar2;
  undefined1 *__dest;
  ulong uVar3;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  ulong uStack_48;
  void *local_40;
  long *plStack_38;
  
  pbVar2 = *(byte **)(param_2 + 0x40);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  FUN_0079cea0(&local_70,pbVar2);
  plVar1 = (long *)FUN_00612290();
  __src = local_40;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((local_50 & 1) == 0) {
    param_1[2] = (ulong)local_40;
    param_1[1] = uStack_48;
    *param_1 = CONCAT71(uStack_4f,local_50);
    goto joined_r0x0079b13c;
  }
  if (0xffffffffffffffef < uStack_48) {
                    /* try { // try from 0079b1bc to 0079b1c3 has its CatchHandler @ 0079b1c4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_48 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uStack_48 << 1);
    if (uStack_48 != 0) goto LAB_0079b19c;
    *__dest = 0;
  }
  else {
    uVar3 = uStack_48 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[1] = uStack_48;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
LAB_0079b19c:
    memcpy(__dest,__src,uStack_48);
    __dest[uStack_48] = 0;
  }
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
joined_r0x0079b13c:
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
  }
  return;
}


