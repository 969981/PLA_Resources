/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b1258; name: FUN_007b1258
 */


void FUN_007b1258(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long lStack_48;
  long local_40;
  
  lStack_48 = param_3[1];
  local_50 = *param_3;
  pbVar1 = *(byte **)(*param_3 + 8);
  local_40 = param_3[2];
  FUN_007b1564(param_3);
  FUN_007b1314(param_2[2],&local_50);
  if (pbVar1 != (byte *)0x0 && *param_2 == 0) {
    if ((pbVar1[0x18] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar1 + 0x28));
    }
    if ((*pbVar1 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar1);
  }
  lVar3 = param_3[1];
  lVar2 = *param_3;
  param_1[2] = param_3[2];
  param_1[1] = lVar3;
  *param_1 = lVar2;
  return;
}


