/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eda6ac; name: FUN_02eda6ac
 */


byte FUN_02eda6ac(long param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 local_4;
  
  while (*(long *)(param_1 + 0x80) != 0 && (*(uint *)(param_1 + 0xaa) & 0x1000000) == 0) {
    param_1 = *(long *)(param_1 + 0x80);
  }
  local_4 = DAT_0440a8b0._4_4_;
  pbVar1 = *(byte **)(param_1 + 0x98);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if (pbVar1[uVar3 + 1] == 0x2d) goto LAB_02eda714;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_02eda714:
  pbVar1 = (byte *)&local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_2 = *(undefined4 *)pbVar1;
  return *(byte *)(param_1 + 0xad) >> 1 & 1;
}


