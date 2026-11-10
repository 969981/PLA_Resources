/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033d6fc; name: FUN_0033d6fc
 */


void FUN_0033d6fc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_LAB_04373088;
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if ((undefined8 *)param_1[1] == puVar4) {
    puVar2 = puVar4;
  }
  else {
    puVar2 = (undefined8 *)param_1[1] + -1;
    pbVar3 = (byte *)*puVar2;
    *puVar2 = 0;
    while( true ) {
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 1) != 0) {
          FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar3 + 0x10));
        }
        FUN_002e2ea0(puVar1,pbVar3);
      }
      if (puVar4 == puVar2) break;
      puVar2 = puVar2 + -1;
      pbVar3 = (byte *)*puVar2;
      *puVar2 = 0;
    }
    puVar2 = (undefined8 *)*param_1;
  }
  puVar1 = PTR_LAB_04373088;
  param_1[1] = puVar4;
  FUN_002e2ea0(puVar1,puVar2);
  return;
}


