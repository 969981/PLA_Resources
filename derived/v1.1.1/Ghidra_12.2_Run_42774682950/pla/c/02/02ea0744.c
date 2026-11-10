/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea0744; name: FUN_02ea0744
 */


undefined8 FUN_02ea0744(undefined8 *param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != (byte *)0x0) {
    uVar4 = 0;
    pbVar1 = pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc);
    do {
      if (pbVar3[uVar4 + 1] == param_2) goto LAB_02ea079c;
      uVar4 = uVar4 + 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar4 < *pbVar3);
  }
  pbVar1 = (byte *)FUN_02ea4f8c();
  if (pbVar1 == (byte *)0x0) {
    uVar2 = 2;
  }
  else {
LAB_02ea079c:
    uVar2 = 1;
    *(undefined4 *)pbVar1 = param_3;
  }
  return uVar2;
}


