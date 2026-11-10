/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083d1e8; name: FUN_0083d1e8
 */


undefined8 FUN_0083d1e8(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = auStack_60;
  FUN_007e8b38(local_30,*(undefined8 *)PTR_DAT_04377458);
  local_40[0] = 0x8c52;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  if (local_30[0] == local_40[0]) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_007ee578(auStack_50,local_30);
    puVar1 = auStack_50;
  }
  else {
    FUN_00854f28(local_40,*(undefined8 *)PTR_DAT_043773c0);
    if (local_40[0] == 0) {
      return 1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_007ee578(auStack_60,local_40);
  }
  FUN_007e5cac(uVar2,puVar1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 0;
}


