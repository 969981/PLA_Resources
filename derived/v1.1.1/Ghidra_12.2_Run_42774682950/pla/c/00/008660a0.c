/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008660a0; name: FUN_008660a0
 */


void FUN_008660a0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_58 [4];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  lVar1 = *(long *)(param_2 + 0x1418);
  if (lVar1 == 0) {
    local_38[0] = 0x10407;
  }
  else {
    if (*(int *)(param_2 + 0x1420) != 1) {
      if (*(int *)(param_2 + 0x1450) != 0) {
        FUN_007e5bd8(param_2 + 0x1420);
        lVar1 = *(long *)(param_2 + 0x1418);
        *(undefined4 *)(param_2 + 0x1450) = 0;
      }
      FUN_0086b848(local_38,lVar1,param_2 + 0x1420);
      if (local_38[0] == 0) {
        *(undefined4 *)(param_2 + 0x1450) = 2;
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x1418),0);
      }
      uVar2 = *(undefined8 *)PTR_DAT_04377550;
      local_58[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      FUN_007ee578(auStack_48,local_58);
      FUN_0082a7d4(uVar2,auStack_48,1);
      goto LAB_00866188;
    }
    local_38[0] = 0x10408;
  }
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_58);
LAB_00866188:
  FUN_007ee578(param_1,local_38);
  return;
}


