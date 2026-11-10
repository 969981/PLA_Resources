/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef62f0; name: FUN_02ef62f0
 */


int FUN_02ef62f0(long param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte local_14 [4];
  
  local_14[0] = 1;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  pbVar3 = *(byte **)(param_1 + 0x98);
  pbVar4 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    uVar5 = 0;
    pbVar4 = pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc);
    do {
      if (pbVar3[uVar5 + 1] == 0x3a) goto LAB_02ef6344;
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 4;
    } while (uVar5 < *pbVar3);
    pbVar4 = (byte *)0x0;
  }
LAB_02ef6344:
  pbVar6 = *(byte **)(param_1 + 0xb0);
  pbVar3 = local_14;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = pbVar4;
  }
  iVar1 = *(int *)pbVar3;
  if (pbVar6 != (byte *)0x0) {
    uVar5 = 0;
    pbVar4 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      if (pbVar6[uVar5 + 1] == 0x3a) {
        iVar2 = FUN_02e87b38(pbVar4);
        return iVar2 + iVar1;
      }
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar5 < *pbVar6);
  }
  return iVar1;
}


