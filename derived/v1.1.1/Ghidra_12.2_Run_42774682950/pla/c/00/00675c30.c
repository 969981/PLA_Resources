/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00675c30; name: FUN_00675c30
 */


void FUN_00675c30(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  ulong __n;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  bVar1 = FUN_006544d0(param_2);
  *param_1 = bVar1 & 1;
  FUN_00654534(param_1 + 8,param_2,&DAT_0398d884);
  pbVar3 = (byte *)FUN_0065450c(param_2);
  plVar4 = (long *)FUN_00612290();
  pbVar5 = param_1 + 0x28;
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar5[4] = 0;
  pbVar5[5] = 0;
  pbVar5[6] = 0;
  pbVar5[7] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(long **)(param_1 + 0x40) = plVar4;
  if ((*pbVar3 & 1) == 0) {
    uVar8 = *(undefined8 *)(pbVar3 + 8);
    uVar7 = *(undefined8 *)pbVar3;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(pbVar3 + 0x10);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)pbVar5 = uVar7;
    goto LAB_00675d1c;
  }
  __n = *(ulong *)(pbVar3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00675d84 to 00675d8b has its CatchHandler @ 00675d8c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pbVar3 + 0x10);
  if (__n < 0x17) {
    pbVar3 = param_1 + 0x29;
    *pbVar5 = (byte)((int)__n << 1);
    if (__n != 0) goto LAB_00675d08;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    pbVar3 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar6,1);
    *(ulong *)(param_1 + 0x28) = uVar6 | 1;
    *(ulong *)(param_1 + 0x30) = __n;
    *(byte **)(param_1 + 0x38) = pbVar3;
LAB_00675d08:
    memcpy(pbVar3,__src,__n);
  }
  pbVar3[__n] = 0;
LAB_00675d1c:
                    /* try { // try from 00675d1c to 00675d53 has its CatchHandler @ 00675da0 */
  uVar2 = FUN_00654518(param_2,"ussid");
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00654518(param_2,"ucsid");
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00654518(param_2,"upcsid");
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  FUN_00654534(param_1 + 0x58,param_2,&DAT_03906deb);
  return;
}


