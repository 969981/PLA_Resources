/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006095c0; name: FUN_006095c0
 */


void FUN_006095c0(undefined8 *param_1,int param_2,uint param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  void *__s;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  bVar2 = *param_4;
  if ((bVar2 & 1) == 0) {
    if (param_3 <= bVar2 >> 1) goto LAB_006095f8;
  }
  else if ((ulong)param_3 <= *(ulong *)(param_4 + 8)) {
LAB_006095f8:
    uVar7 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_4;
    param_1[2] = *(undefined8 *)(param_4 + 0x10);
    param_1[1] = uVar7;
    *param_1 = uVar6;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    return;
  }
  if ((bVar2 & 1) == 0) {
    uVar4 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_4 + 8);
  }
  uVar4 = param_3 - uVar4;
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    local_58 = (ulong)(byte)((int)uVar4 << 1);
    __s = (void *)((ulong)&local_58 | 1);
    if (uVar4 == 0) goto LAB_006096a0;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __s = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_58 = uVar5 | 1;
    local_50 = uVar4;
    local_48 = __s;
  }
  memset(__s,param_2,uVar4);
LAB_006096a0:
  *(undefined1 *)((long)__s + uVar4) = 0;
  uVar4 = *(ulong *)(param_4 + 8);
  pbVar1 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar1 = param_4 + 1;
    uVar4 = (ulong)(*param_4 >> 1);
  }
                    /* try { // try from 006096bc to 006096c3 has its CatchHandler @ 00609714 */
  puVar3 = (undefined8 *)FUN_002e4094(&local_58,pbVar1,uVar4);
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  param_1[2] = puVar3[2];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_58 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_48);
  return;
}


