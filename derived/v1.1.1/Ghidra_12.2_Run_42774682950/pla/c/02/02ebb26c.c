/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebb26c; name: FUN_02ebb26c
 */


void FUN_02ebb26c(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x28);
  if (pbVar4 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc);
    do {
      if (pbVar4[uVar3 + 1] == 0x11) {
        iVar1 = FUN_02e87b38(pbVar2);
        iVar1 = *param_2 + iVar1;
        if (99 < iVar1) {
          iVar1 = 100;
        }
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        *param_2 = iVar1;
        return;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (uVar3 < *pbVar4);
  }
  return;
}


