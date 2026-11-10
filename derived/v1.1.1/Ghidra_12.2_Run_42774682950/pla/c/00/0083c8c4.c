/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c8c4; name: FUN_0083c8c4
 */


undefined8 FUN_0083c8c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x68) == 0) {
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
    FUN_007ee578(auStack_30,local_40);
    FUN_007e5c40(uVar1,auStack_30);
  }
  else {
    FUN_007ee578(auStack_50);
    FUN_007e5cac(uVar1,auStack_50);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


