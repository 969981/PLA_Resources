/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed00ac; name: FUN_02ed00ac
 */


void FUN_02ed00ac(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != (byte *)0x0) {
    uVar3 = 0;
    pbVar1 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
    do {
      if (pbVar2[uVar3 + 1] == param_2) goto LAB_02ed00d0;
      uVar3 = uVar3 + 1;
      pbVar1 = pbVar1 + 8;
    } while (uVar3 < *pbVar2);
  }
  pbVar1 = (byte *)FUN_02ed3014();
  if (pbVar1 != (byte *)0x0) {
LAB_02ed00d0:
    *(undefined8 *)pbVar1 = param_3;
  }
  return;
}


