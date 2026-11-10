/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079cf20; name: FUN_0079cf20
 */


void FUN_0079cf20(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long *local_38;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_38 = (long *)FUN_00612290();
  if (0xffffffffffffffef < param_3) {
                    /* try { // try from 0079d0a4 to 0079d0ab has its CatchHandler @ 0079d0ac */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)param_3 << 1));
    pvVar2 = (void *)((ulong)&local_50 | 1);
    if (param_3 == 0) goto LAB_0079cfb0;
  }
  else {
    uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = (void *)(**(code **)(*local_38 + 0x10))(local_38,uVar1,1);
    local_50 = uVar1 | 1;
    uStack_48 = param_3;
    local_40 = pvVar2;
  }
  memcpy(pvVar2,param_2,param_3);
LAB_0079cfb0:
  *(undefined1 *)((long)pvVar2 + param_3) = 0;
  if (((long *)param_1[3] == local_38) ||
     (uVar1 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar1 & 1) != 0)) {
    if ((*param_1 & 1) == 0) {
      *(undefined2 *)param_1 = 0;
    }
    else {
      *(undefined1 *)param_1[2] = 0;
      param_1[1] = 0;
      if ((*param_1 & 1) != 0) {
        (**(code **)(*(long *)param_1[3] + 0x18))
                  ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
        *param_1 = 0;
      }
    }
    param_1[2] = (ulong)local_40;
    param_1[1] = uStack_48;
    *param_1 = local_50;
  }
  else {
    if (&local_50 != param_1) {
      uVar1 = local_50 >> 1 & 0x7f;
      pvVar2 = (void *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        uVar1 = uStack_48;
        pvVar2 = local_40;
      }
                    /* try { // try from 0079d064 to 0079d06b has its CatchHandler @ 0079d0b0 */
      FUN_02762710(param_1,pvVar2,uVar1);
    }
    if ((local_50 & 1) != 0) {
      (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
    }
  }
  return;
}


