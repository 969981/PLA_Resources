/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034d9d0; name: FUN_0034d9d0
 */


void FUN_0034d9d0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0xc0));
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_0036b4c4(param_1 + 0x78,*(undefined8 *)(param_1 + 0x80));
  FUN_0036b4c4(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x48));
  }
  puVar2 = PTR_LAB_04373088;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    lVar3 = *(long *)(lVar5 + -0x28);
    while( true ) {
      if (lVar3 != 0) {
        *(long *)(lVar5 + -0x20) = lVar3;
        FUN_002e2ea0(puVar2);
      }
      if ((*(byte *)(lVar5 + -0x40) & 1) == 0) {
        bVar1 = *(byte *)(lVar5 + -0x58);
      }
      else {
        FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -0x30));
        bVar1 = *(byte *)(lVar5 + -0x58);
      }
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -0x48));
      }
      if (lVar4 == lVar5 + -0x58) break;
      lVar3 = *(long *)(lVar5 + -0x80);
      lVar5 = lVar5 + -0x58;
    }
    lVar5 = *(long *)(param_1 + 0x18);
  }
  puVar2 = PTR_LAB_04373088;
  *(long *)(param_1 + 0x20) = lVar4;
  FUN_002e2ea0(puVar2,lVar5);
  return;
}


