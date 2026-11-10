/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033d9c0; name: FUN_0033d9c0
 */


void FUN_0033d9c0(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar3 = PTR_LAB_04373088;
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  pbVar4 = (byte *)param_1[1];
  if (pbVar4 == pbVar5) {
    pbVar4 = pbVar5;
  }
  else {
    bVar1 = pbVar4[-0x18];
    pbVar2 = pbVar4 + -0x18;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar4 + -8));
      }
      if (pbVar5 == pbVar2) break;
      bVar1 = pbVar2[-0x18];
      pbVar4 = pbVar2;
      pbVar2 = pbVar2 + -0x18;
    }
    pbVar4 = (byte *)*param_1;
  }
  puVar3 = PTR_LAB_04373088;
  param_1[1] = pbVar5;
  FUN_002e2ea0(puVar3,pbVar4);
  return;
}


