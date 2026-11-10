/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008508ec; name: FUN_008508ec
 */


void FUN_008508ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  uVar1 = FUN_00851668();
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined1 *)(param_2 + 0x78) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


