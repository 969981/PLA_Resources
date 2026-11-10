/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2f28; name: FUN_001f2f28
 */


void FUN_001f2f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((0 < *(long *)(param_1 + 0x7f8)) &&
     (iVar1 = FUN_001f8fe0(param_2,param_3,*(undefined8 *)(param_1 + 0x1050),
                           *(undefined8 *)(param_1 + 0x1058)), 2999 < iVar1)) {
    *(undefined8 *)(param_1 + 0x1050) = param_2;
    *(undefined8 *)(param_1 + 0x1058) = param_3;
    *(undefined8 *)(param_1 + 0x1060) = *(undefined8 *)(param_1 + 0xf90);
  }
  if ((0 < *(long *)(param_1 + 0x7f0)) &&
     (iVar1 = FUN_001f8fe0(param_2,param_3,*(undefined8 *)(param_1 + 0x1038),
                           *(undefined8 *)(param_1 + 0x1040)), 2999 < iVar1)) {
    *(undefined8 *)(param_1 + 0x1038) = param_2;
    *(undefined8 *)(param_1 + 0x1040) = param_3;
    *(undefined8 *)(param_1 + 0x1048) = *(undefined8 *)(param_1 + 0xf98);
  }
  return;
}


