/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065a2dc; name: FUN_0065a2dc
 */


void FUN_0065a2dc(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long *plVar5;
  byte *pbVar6;
  ulong __n;
  void *__src;
  ulong uVar7;
  undefined8 uVar8;
  
  bVar1 = FUN_006544d0(param_2);
  *param_1 = bVar1 & 1;
  uVar3 = FUN_0067d528();
  FUN_00654534(param_1 + 8,param_2,uVar3);
  uVar3 = FUN_0067d54c();
                    /* try { // try from 0065a328 to 0065a32f has its CatchHandler @ 0065a46c */
  uVar2 = FUN_00654518(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  pbVar4 = (byte *)FUN_0065450c(param_2);
  plVar5 = (long *)FUN_00612290();
  pbVar6 = param_1 + 0x30;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(long **)(param_1 + 0x48) = plVar5;
  if ((*pbVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(pbVar4 + 8);
    uVar3 = *(undefined8 *)pbVar4;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(pbVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *(undefined8 *)pbVar6 = uVar3;
    goto LAB_0065a3dc;
  }
  __n = *(ulong *)(pbVar4 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0065a464 to 0065a46b has its CatchHandler @ 0065a46c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pbVar4 + 0x10);
  if (__n < 0x17) {
    pbVar4 = param_1 + 0x31;
    *pbVar6 = (byte)((int)__n << 1);
    if (__n != 0) goto LAB_0065a3c8;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pbVar4 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar7,1);
    *(ulong *)(param_1 + 0x30) = uVar7 | 1;
    *(ulong *)(param_1 + 0x38) = __n;
    *(byte **)(param_1 + 0x40) = pbVar4;
LAB_0065a3c8:
    memcpy(pbVar4,__src,__n);
  }
  pbVar4[__n] = 0;
LAB_0065a3dc:
  uVar3 = FUN_0067d558();
  FUN_006545b4(param_1 + 0x50,param_2,uVar3);
  uVar3 = FUN_0067d564();
  FUN_00654534(param_1 + 0x58,param_2,uVar3);
  uVar3 = FUN_0067d570();
  FUN_00654534(param_1 + 0x78,param_2,uVar3);
  uVar3 = FUN_0067d534();
                    /* try { // try from 0065a42c to 0065a447 has its CatchHandler @ 0065a480 */
  uVar2 = FUN_00654518(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar3 = FUN_0067d540();
  uVar2 = FUN_00654518(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  return;
}


