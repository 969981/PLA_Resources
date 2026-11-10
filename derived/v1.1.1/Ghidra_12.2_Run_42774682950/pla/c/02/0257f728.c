/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257f728; name: FUN_0257f728
 */


void FUN_0257f728(long param_1,ulong param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  long lVar4;
  undefined1 *local_30;
  byte *pbStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  bVar3 = (param_2 & 1) == 0;
  pbStack_28 = (byte *)0x38f7319;
  if (bVar3) {
    pbStack_28 = (byte *)0x3965564;
  }
  bVar1 = *pbStack_28;
  local_30 = &DAT_cbf29ce484222645;
  local_20 = 0xc;
  pbVar2 = pbStack_28;
  if (bVar3) {
    local_20 = 0xd;
  }
  while (bVar1 != 0) {
    local_30 = (undefined1 *)(((ulong)local_30 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  uStack_18 = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  if (lVar4 != 0) {
    FUN_0283b1e8(lVar4,&local_30);
  }
  return;
}


