/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061b920; name: FUN_0061b920
 */


void FUN_0061b920(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long *plVar4;
  size_t __n;
  undefined8 uVar5;
  byte *pbVar6;
  void *__dest;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long *local_58;
  byte *local_50;
  byte *local_48;
  long local_40;
  long *plStack_38;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  plVar4 = (long *)FUN_00612290();
  local_58 = plVar4;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0061bb24 to 0061bb2b has its CatchHandler @ 0061bb2c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_0061b9c0;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar7,1);
    local_70 = uVar7 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0061b9c0:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (long *)FUN_00612290();
  local_90 = CONCAT53(local_90._3_5_,0x2f02);
  FUN_0061abf0(&local_50,&local_70,&local_90,2);
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((ulong)((long)local_48 - (long)local_50 >> 5) < 2) {
    uVar5 = FUN_00612290();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = uVar5;
    uVar8 = *(undefined8 *)(local_50 + 8);
    uVar5 = *(undefined8 *)local_50;
    uVar10 = *(undefined8 *)(local_50 + 0x18);
    uVar9 = *(undefined8 *)(local_50 + 0x10);
    pbVar6 = local_50;
  }
  else {
    uVar5 = *(undefined8 *)local_50;
    uVar9 = *(undefined8 *)(local_50 + 0x18);
    uVar8 = *(undefined8 *)(local_50 + 0x10);
    param_1[1] = *(undefined8 *)(local_50 + 8);
    *param_1 = uVar5;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    local_50[0x10] = 0;
    local_50[0x11] = 0;
    local_50[0x12] = 0;
    local_50[0x13] = 0;
    local_50[0x14] = 0;
    local_50[0x15] = 0;
    local_50[0x16] = 0;
    local_50[0x17] = 0;
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    uVar8 = *(undefined8 *)(local_50 + 0x28);
    uVar5 = *(undefined8 *)(local_50 + 0x20);
    uVar10 = *(undefined8 *)(local_50 + 0x38);
    uVar9 = *(undefined8 *)(local_50 + 0x30);
    pbVar6 = local_50 + 0x20;
  }
  pbVar3 = local_50;
  param_1[5] = uVar8;
  param_1[4] = uVar5;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  pbVar6[0x10] = 0;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  pbVar6[0x14] = 0;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[8] = 0;
  pbVar6[9] = 0;
  pbVar6[10] = 0;
  pbVar6[0xb] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  if (local_50 != (byte *)0x0) {
    if (local_48 != local_50) {
      bVar1 = local_48[-0x20];
      pbVar6 = local_48 + -0x20;
      while( true ) {
        pbVar2 = pbVar6;
        if ((bVar1 & 1) != 0) {
          (**(code **)(**(long **)(local_48 + -8) + 0x18))
                    (*(long **)(local_48 + -8),*(undefined8 *)(local_48 + -0x10),
                     *(ulong *)(local_48 + -0x20) & 0xfffffffffffffffe,1);
        }
        if (pbVar3 == pbVar2) break;
        bVar1 = pbVar2[-0x20];
        pbVar6 = pbVar2 + -0x20;
        local_48 = pbVar2;
      }
    }
    local_48 = pbVar3;
    (**(code **)(*plStack_38 + 0x18))(plStack_38,local_50,local_40 - (long)local_50,8);
  }
  return;
}


