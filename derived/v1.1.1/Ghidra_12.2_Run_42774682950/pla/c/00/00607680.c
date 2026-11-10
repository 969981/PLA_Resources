/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607680; name: FUN_00607680
 */


undefined8 FUN_00607680(byte *param_1,long param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined4 local_18 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  uVar1 = FUN_00607700(2,pbVar2,local_18);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 8) = 2;
    *(undefined4 *)(param_2 + 0xc) = local_18[0];
  }
  return uVar1;
}


