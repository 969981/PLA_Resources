/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c46e4; name: FUN_005c46e4
 */


void FUN_005c46e4(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  puVar3 = PTR_LAB_04373088;
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar1) {
    pbVar6 = (byte *)(lVar5 + -0x58);
    param_1[2] = (long)pbVar6;
    lVar4 = *(long *)(lVar5 + -0x10);
    *(undefined8 *)(lVar5 + -0x10) = 0;
    if (lVar4 != 0) {
      FUN_0054f474(lVar4);
      FUN_002e2ea0(puVar3,lVar4);
    }
    if ((*(byte *)(lVar5 + -0x28) & 1) == 0) {
      bVar2 = *pbVar6;
    }
    else {
      FUN_002e2ea0(puVar3,*(undefined8 *)(lVar5 + -0x18));
      bVar2 = *pbVar6;
    }
    if ((bVar2 & 1) != 0) {
      FUN_002e2ea0(puVar3,*(undefined8 *)(lVar5 + -0x48));
    }
    lVar5 = param_1[2];
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


