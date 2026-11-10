/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00359000; name: FUN_00359000
 */


void FUN_00359000(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 00359030 to 00359033 has its CatchHandler @ 003590e0 */
  FUN_0030ff7c(param_1,uVar7);
  bVar5 = (*param_2 & 1) == 0;
  uVar7 = (ulong)(*param_2 >> 1);
  if (!bVar5) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    bVar6 = false;
    do {
      pbVar3 = param_2 + 1;
      if (!bVar5) {
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      bVar4 = pbVar3[uVar7];
      if (bVar4 == 0x5f) {
        bVar6 = true;
      }
      else {
        if (bVar6) {
          uVar1 = bVar4 - 0x20;
          if (0x19 < bVar4 - 0x61) {
            uVar1 = (uint)bVar4;
          }
                    /* try { // try from 003590b4 to 003590c7 has its CatchHandler @ 003590f0 */
          FUN_002e6a9c(param_1,uVar1);
        }
        else {
          FUN_002e6a9c(param_1);
        }
        bVar6 = false;
      }
      bVar5 = (*param_2 & 1) == 0;
      uVar7 = uVar7 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
      if (!bVar5) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
    } while (uVar7 < uVar2);
  }
  return;
}


