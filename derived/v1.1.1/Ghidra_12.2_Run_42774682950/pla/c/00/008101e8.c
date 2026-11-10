/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008101e8; name: FUN_008101e8
 */


undefined8 FUN_008101e8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined4 local_58 [8];
  int local_38 [4];
  undefined4 local_28 [2];
  
  plVar1 = *(long **)(param_1 + 0x80);
  FUN_007f0fc8(local_58,param_1 + 0x60);
  (**(code **)(*plVar1 + 0x388))(local_38,plVar1,local_58);
  FUN_007e34a4(local_58);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (local_38[0] == 0) {
    local_58[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
    FUN_007ee578(auStack_68,local_58);
    FUN_007e5c40(uVar2,auStack_68);
  }
  else {
    FUN_007ee578(auStack_78,local_38);
    FUN_007e5cac(uVar2,auStack_78);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


