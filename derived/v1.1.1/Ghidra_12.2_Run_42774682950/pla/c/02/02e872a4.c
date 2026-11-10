/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e872a4; name: FUN_02e872a4
 */


int FUN_02e872a4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 local_14;
  
  local_14 = DAT_0440a840;
  pbVar4 = *(byte **)(param_1 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    pbVar6 = (byte *)0x0;
  }
  else {
    uVar3 = 0;
    pbVar5 = pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc);
    do {
      pbVar6 = pbVar5;
      if (pbVar4[uVar3 + 1] == 0x10) break;
      uVar3 = uVar3 + 1;
      pbVar6 = (byte *)0x0;
      pbVar5 = pbVar5 + 4;
    } while (uVar3 < *pbVar4);
  }
  pbVar5 = *(byte **)(param_1 + 0x28);
  pbVar4 = (byte *)&local_14;
  if (pbVar6 != (byte *)0x0) {
    pbVar4 = pbVar6;
  }
  iVar1 = *(int *)pbVar4;
  if (pbVar5 != (byte *)0x0) {
    uVar3 = 0;
    pbVar4 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
    do {
      if (pbVar5[uVar3 + 1] == 0x10) {
        iVar2 = FUN_02e87b38(pbVar4);
        return iVar2 + iVar1;
      }
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar3 < *pbVar5);
  }
  return iVar1;
}


