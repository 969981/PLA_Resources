/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083f0fc; name: FUN_0083f0fc
 */


undefined8 FUN_0083f0fc(long param_1)

{
  undefined8 uVar1;
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  FUN_008345b0(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0xb4) == 0) {
    local_50[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_18);
    FUN_007ee578(auStack_40,local_50);
    FUN_007e5c40(uVar1,auStack_40);
  }
  else {
    FUN_007ee578(auStack_30);
    FUN_007e5cac(uVar1,auStack_30);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


