/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054f474; name: FUN_0054f474
 */


void FUN_0054f474(byte *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* try { // try from 0054f488 to 0054f497 has its CatchHandler @ 0054f5ec */
    FUN_0055de34();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0055de34();
  }
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    FUN_00552cc4(lVar2);
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_00552cc4(lVar2);
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  pbVar3 = *(byte **)(param_1 + 0x38);
  if ((pbVar3 != (byte *)0x0) && (pbVar3 != DAT_0439ed40)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if ((lVar2 != 0) && (lVar2 != DAT_0439ed48)) {
    FUN_005508c0(lVar2,*(undefined8 *)(lVar2 + 8));
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if ((lVar2 != 0) && (lVar2 != DAT_0439ed50)) {
    FUN_0036fdb8(lVar2,*(undefined8 *)(lVar2 + 8));
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  if ((param_1[0x60] & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x58));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
  return;
}


