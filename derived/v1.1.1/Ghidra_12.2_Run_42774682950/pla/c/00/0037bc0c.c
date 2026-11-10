/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037bc0c; name: FUN_0037bc0c
 */


undefined8 FUN_0037bc0c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x28) != 3) {
    FUN_0034b2f0(&local_38,"Expected integer, got: ",param_1 + 0x30);
                    /* try { // try from 0037bcc8 to 0037bcd3 has its CatchHandler @ 0037bd5c */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38);
LAB_0037bcd4:
    if ((local_38 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
    }
    return 0;
  }
  pbVar4 = (byte *)(param_1 + 0x30);
  bVar1 = *pbVar4;
  uVar2 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
  }
  if (1 < uVar2) {
    pcVar3 = *(char **)(param_1 + 0x40);
    if ((bVar1 & 1) == 0) {
      pcVar3 = (char *)(param_1 + 0x31);
    }
    if ((*pcVar3 == '0') && (((byte)(pcVar3[1] | 0x20U) == 0x78 || ((pcVar3[1] & 0xf8U) == 0x30))))
    {
      FUN_0034b2f0(&local_38,"Expect a decimal number, got: ",pbVar4);
                    /* try { // try from 0037bca0 to 0037bcab has its CatchHandler @ 0037bd4c */
      FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38
                  );
      goto LAB_0037bcd4;
    }
  }
  uVar2 = FUN_003a0b5c(pbVar4,param_3,&local_38);
  if ((uVar2 & 1) == 0) {
    uVar5 = FUN_003a0c3c(pbVar4);
  }
  else {
    uVar5 = NEON_ucvtf(CONCAT71(uStack_37,local_38));
  }
  *param_2 = uVar5;
  FUN_003a0640(param_1 + 0x28);
  return 1;
}


