/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d319c; name: FUN_008d319c
 */


void FUN_008d319c(long param_1,long param_2,byte *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  
  iVar4 = *(int *)(param_3 + 8);
  if (0 < iVar4) {
    bVar5 = 0;
    do {
      bVar3 = param_3[(ulong)bVar5 + 1];
      local_48 = (uint)param_3[6];
      local_50 = (uint)*param_3;
      uStack_4c = (uint)bVar3;
      *(undefined4 *)(param_1 + 0x54) = 0;
      FUN_008d348c(param_1,&local_50);
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      pbVar1 = (byte *)(param_2 + (ulong)bVar5 * 8);
      bVar5 = bVar5 + 1;
      *pbVar1 = bVar3;
      *(undefined4 *)(pbVar1 + 4) = uVar2;
      iVar4 = *(int *)(param_3 + 8);
    } while ((int)(uint)bVar5 < iVar4);
  }
  *(char *)(param_2 + 0x28) = (char)iVar4;
  return;
}


