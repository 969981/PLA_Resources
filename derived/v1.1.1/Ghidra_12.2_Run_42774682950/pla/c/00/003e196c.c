/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e196c; name: FUN_003e196c
 */


void FUN_003e196c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_LAB_04373088;
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if ((undefined8 *)param_1[1] == puVar5) {
    puVar2 = puVar5;
  }
  else {
    puVar2 = (undefined8 *)param_1[1] + -1;
    pbVar3 = (byte *)*puVar2;
    *puVar2 = 0;
    while( true ) {
      if (pbVar3 != (byte *)0x0) {
        puVar4 = *(undefined8 **)(pbVar3 + 0x38);
        pbVar3[0x38] = 0;
        pbVar3[0x39] = 0;
        pbVar3[0x3a] = 0;
        pbVar3[0x3b] = 0;
        pbVar3[0x3c] = 0;
        pbVar3[0x3d] = 0;
        pbVar3[0x3e] = 0;
        pbVar3[0x3f] = 0;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4);
          FUN_002e2ea0(puVar1,puVar4);
        }
        if ((pbVar3[0x18] & 1) != 0) {
          FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar3 + 0x28));
        }
        if ((*pbVar3 & 1) != 0) {
          FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar3 + 0x10));
        }
        FUN_002e2ea0(puVar1,pbVar3);
      }
      if (puVar5 == puVar2) break;
      puVar2 = puVar2 + -1;
      pbVar3 = (byte *)*puVar2;
      *puVar2 = 0;
    }
    puVar2 = (undefined8 *)*param_1;
  }
  puVar1 = PTR_LAB_04373088;
  param_1[1] = puVar5;
  FUN_002e2ea0(puVar1,puVar2);
  return;
}


