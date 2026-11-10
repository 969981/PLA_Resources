/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9c74; name: FUN_02eb9c74
 */


undefined4 FUN_02eb9c74(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 local_4;
  
  local_4 = DAT_0440a558;
  pbVar1 = *(byte **)(param_1 + 0x20);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if (pbVar1[uVar3 + 1] == 0) goto LAB_02eb9cc0;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_02eb9cc0:
  pbVar1 = (byte *)&local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  return *(undefined4 *)pbVar1;
}


