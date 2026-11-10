/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00585ee4; name: FUN_00585ee4
 */


void FUN_00585ee4(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04374e38 + 0x10);
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0x10]);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    lVar2 = param_1[4];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[10]);
    lVar2 = param_1[4];
  }
  if (lVar2 != 0) {
    param_1[5] = lVar2;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_00582160(param_1);
  return;
}


