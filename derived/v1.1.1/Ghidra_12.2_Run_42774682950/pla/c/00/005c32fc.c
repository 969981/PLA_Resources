/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c32fc; name: FUN_005c32fc
 */


void FUN_005c32fc(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  puVar3 = PTR_LAB_04373088;
  pbVar6 = *(byte **)(param_1 + 0x60);
  if (pbVar6 != (byte *)0x0) {
    pbVar4 = *(byte **)(param_1 + 0x68);
    if (pbVar4 == pbVar6) {
      pbVar4 = pbVar6;
    }
    else {
      bVar1 = pbVar4[-0x20];
      pbVar2 = pbVar4 + -0x20;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar4 + -0x10));
        }
        if (pbVar6 == pbVar2) break;
        bVar1 = pbVar2[-0x20];
        pbVar4 = pbVar2;
        pbVar2 = pbVar2 + -0x20;
      }
      pbVar4 = *(byte **)(param_1 + 0x60);
    }
    *(byte **)(param_1 + 0x68) = pbVar6;
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x58));
  }
  FUN_005c47b4(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar5 != 0) {
    FUN_0054f474(lVar5);
    FUN_002e2ea0(PTR_LAB_04373088,lVar5);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x18));
  return;
}


