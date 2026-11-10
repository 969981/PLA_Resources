/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00358e90; name: FUN_00358e90
 */


void FUN_00358e90(byte *param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar7 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 00358ec4 to 00358ec7 has its CatchHandler @ 00358fc8 */
  FUN_0030ff7c(param_1,uVar7);
  bVar5 = (*param_2 & 1) == 0;
  uVar7 = (ulong)(*param_2 >> 1);
  if (!bVar5) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    uVar6 = param_3 ^ 1;
    do {
      pbVar2 = param_2 + 1;
      if (!bVar5) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      bVar4 = pbVar2[uVar7];
      if (bVar4 == 0x5f) {
        uVar6 = 1;
      }
      else {
        if ((uVar6 & 1) == 0) {
          FUN_002e6a9c(param_1);
        }
        else {
          uVar6 = bVar4 - 0x20;
          if (0x19 < bVar4 - 0x61) {
            uVar6 = (uint)bVar4;
          }
                    /* try { // try from 00358f48 to 00358f5b has its CatchHandler @ 00358fd8 */
          FUN_002e6a9c(param_1,uVar6);
        }
        uVar6 = 0;
      }
      bVar5 = (*param_2 & 1) == 0;
      uVar7 = uVar7 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
      if (!bVar5) {
        uVar1 = *(ulong *)(param_2 + 8);
      }
    } while (uVar7 < uVar1);
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  bVar4 = *param_1;
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if ((bVar4 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  bVar3 = *param_1;
  bVar4 = bVar3 + 0x20;
  if (0x19 < bVar3 - 0x41) {
    bVar4 = bVar3;
  }
  *param_1 = bVar4;
  return;
}


