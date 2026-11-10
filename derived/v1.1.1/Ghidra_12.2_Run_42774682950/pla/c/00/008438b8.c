/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008438b8; name: FUN_008438b8
 */


void FUN_008438b8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_38 [6];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    FUN_007e3120(local_38);
    FUN_007e3130(param_2 + 8,local_38);
    uVar1 = *(uint *)(param_2 + 8);
  }
  else {
    FUN_007e3130(param_2 + 8);
    uVar1 = *(uint *)(param_2 + 8);
  }
  if (uVar1 < 2) {
    uVar2 = FUN_007e8130(*(undefined8 *)PTR_DAT_04377480,uVar1,
                         *(undefined2 *)(*(long *)PTR_DAT_043773c0 + 0x50));
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10407;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_38);
  return;
}


