/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebb2ec; name: FUN_02ebb2ec
 */


bool FUN_02ebb2ec(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined4 local_4;
  
  local_4 = DAT_0440a594;
  pbVar3 = *(byte **)(param_1 + 0x20);
  pbVar4 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    uVar5 = 0;
    pbVar4 = pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc);
    do {
      if (pbVar3[uVar5 + 1] == 0xf) goto LAB_02ebb33c;
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 4;
    } while (uVar5 < *pbVar3);
    pbVar4 = (byte *)0x0;
  }
LAB_02ebb33c:
  pbVar3 = (byte *)&local_4;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = pbVar4;
  }
  cVar1 = *(char *)(param_2 + 8);
  bVar2 = *(int *)pbVar3 == 1;
  if (cVar1 != '\0') {
    if (bVar2) {
      return *(int *)(param_2 + 0x24) != 3;
    }
    if (*(int *)pbVar3 == 2) {
      if (cVar1 == -0x80) {
        return true;
      }
      if (cVar1 == -0x70) {
        return *(char *)(param_2 + 0xb) == '\0';
      }
    }
    bVar2 = false;
  }
  return bVar2;
}


