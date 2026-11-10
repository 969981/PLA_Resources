/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00371764; name: FUN_00371764
 */


uint FUN_00371764(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  
  bVar1 = *param_2;
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    if ((long)uVar5 < 0) {
      FUN_0031f284(uVar5,"size_t to int conversion");
    }
  }
  uVar5 = FUN_00371830(pbVar4,uVar5,*param_1);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    bVar2 = (*param_2 & 1) != 0;
    pbVar4 = param_2 + 1;
    if (bVar2) {
      pbVar4 = *(byte **)(param_2 + 0x10);
    }
    uVar3 = (uint)(*param_2 >> 1);
    if (bVar2) {
      uVar3 = *(uint *)(param_2 + 8);
    }
    FUN_0030e2f8(auStack_50,pbVar4,uVar3,0xffffffff);
                    /* try { // try from 003717f4 to 00371803 has its CatchHandler @ 00371824 */
    uVar3 = FUN_003712c8(param_1,auStack_50,param_3);
  }
  return uVar3 & 1;
}


