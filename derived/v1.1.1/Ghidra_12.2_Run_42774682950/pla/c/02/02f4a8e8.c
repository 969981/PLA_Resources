/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4a8e8; name: FUN_02f4a8e8
 */


void FUN_02f4a8e8(long param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte local_4 [4];
  
  *param_2 = *(byte *)(param_1 + 0x118) & 1;
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  pbVar1 = *(byte **)(param_1 + 0x98);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if (pbVar1[uVar3 + 1] == 0x38) goto LAB_02f4a93c;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_02f4a93c:
  pbVar1 = local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_3 = *(undefined4 *)pbVar1;
  *param_4 = *(byte *)(param_1 + 0x118) >> 2 & 1;
  return;
}


