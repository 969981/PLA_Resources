/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dc840; name: FUN_006dc840
 */


void FUN_006dc840(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long *local_38;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar3;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  if (uVar3 == 0) {
    return;
  }
  uVar4 = 0;
  while ((ulong)pbVar1[uVar4] < 0x40 && (1L << ((ulong)pbVar1[uVar4] & 0x3f) & 0x100002e00U) != 0) {
    uVar4 = uVar4 + 1;
    if (uVar3 == uVar4) {
      return;
    }
  }
  if (uVar4 == 0xffffffffffffffff) {
    return;
  }
  do {
    uVar5 = 0xffffffffffffffff;
    if (uVar3 == 0) break;
    uVar5 = uVar3 - 1;
    lVar2 = uVar3 - 1;
    uVar3 = uVar5;
  } while ((ulong)pbVar1[lVar2] < 0x40 && (1L << ((ulong)pbVar1[lVar2] & 0x3f) & 0x100002e00U) != 0)
  ;
  uVar3 = (uVar5 - uVar4) + 1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_38 = (long *)FUN_00612290();
  if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 006dca6c to 006dca73 has its CatchHandler @ 006dca74 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar3 < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar3 << 1));
    pvVar6 = (void *)((ulong)&local_50 | 1);
    if (uVar3 == 0) goto LAB_006dc978;
  }
  else {
    uVar5 = (uVar5 - uVar4) + 0x11 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*local_38 + 0x10))(local_38,uVar5,1);
    local_50 = uVar5 | 1;
    uStack_48 = uVar3;
    local_40 = pvVar6;
  }
  memcpy(pvVar6,pbVar1 + uVar4,uVar3);
LAB_006dc978:
  *(undefined1 *)((long)pvVar6 + uVar3) = 0;
  if (((long *)param_1[3] == local_38) ||
     (uVar3 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar3 & 1) != 0)) {
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
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[2] = (ulong)local_40;
  }
  else {
    if (&local_50 != param_1) {
      uVar3 = local_50 >> 1 & 0x7f;
      pvVar6 = (void *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        uVar3 = uStack_48;
        pvVar6 = local_40;
      }
                    /* try { // try from 006dca2c to 006dca33 has its CatchHandler @ 006dca88 */
      FUN_02762710(param_1,pvVar6,uVar3);
    }
    if ((local_50 & 1) != 0) {
      (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
    }
  }
  return;
}


