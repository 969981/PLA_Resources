/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061f280; name: FUN_0061f280
 */


void FUN_0061f280(ulong *param_1,long param_2,ulong *param_3)

{
  void *__src;
  long *plVar1;
  byte *pbVar2;
  void *__dest;
  ulong uVar3;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  void *local_50;
  long *plStack_48;
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  FUN_006e8660(&local_80,pbVar2);
  plVar1 = (long *)FUN_00612290();
  __src = local_50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((local_60 & 1) == 0) {
    param_1[2] = (ulong)local_50;
    param_1[1] = uStack_58;
    *param_1 = CONCAT71(uStack_5f,local_60);
    param_1[4] = *param_3;
    goto joined_r0x0061f398;
  }
  if (0xffffffffffffffef < uStack_58) {
                    /* try { // try from 0061f3d0 to 0061f3d7 has its CatchHandler @ 0061f3d8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_58 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uStack_58 << 1);
    if (uStack_58 != 0) goto LAB_0061f354;
  }
  else {
    uVar3 = uStack_58 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *param_1 = uVar3 | 1;
    param_1[1] = uStack_58;
    param_1[2] = (ulong)__dest;
LAB_0061f354:
    memcpy(__dest,__src,uStack_58);
  }
  *(undefined1 *)((long)__dest + uStack_58) = 0;
  param_1[4] = *param_3;
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
joined_r0x0061f398:
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  return;
}


