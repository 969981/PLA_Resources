/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c47b4; name: FUN_005c47b4
 */


void FUN_005c47b4(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_LAB_04373088;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    lVar3 = *(long *)(lVar5 + -0x10);
    *(undefined8 *)(lVar5 + -0x10) = 0;
    while( true ) {
      if (lVar3 != 0) {
        FUN_0054f474(lVar3);
        FUN_002e2ea0(puVar2,lVar3);
      }
      if ((*(byte *)(lVar5 + -0x28) & 1) == 0) {
        bVar1 = *(byte *)(lVar5 + -0x58);
      }
      else {
        FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -0x18));
        bVar1 = *(byte *)(lVar5 + -0x58);
      }
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -0x48));
      }
      if (lVar4 == lVar5 + -0x58) break;
      lVar3 = *(long *)(lVar5 + -0x68);
      *(undefined8 *)(lVar5 + -0x68) = 0;
      lVar5 = lVar5 + -0x58;
    }
    lVar5 = *param_1;
  }
  puVar2 = PTR_LAB_04373088;
  param_1[1] = lVar4;
  FUN_002e2ea0(puVar2,lVar5);
  return;
}


