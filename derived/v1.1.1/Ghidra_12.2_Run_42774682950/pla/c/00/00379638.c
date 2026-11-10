/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00379638; name: FUN_00379638
 */


undefined8 FUN_00379638(long param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_48 [16];
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    }
    if (iVar1 == 5) {
      do {
        FUN_003a0ddc(param_1 + 0x30,param_2);
        FUN_003a0640(param_1 + 0x28);
      } while (*(int *)(param_1 + 0x28) == 5);
    }
    uVar2 = 1;
  }
  else {
    FUN_0034b2f0(local_48,"Expected string, got: ",param_1 + 0x30);
                    /* try { // try from 00379690 to 0037969b has its CatchHandler @ 00379714 */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_48);
    if ((local_48[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
    uVar2 = 0;
  }
  return uVar2;
}


