/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082abe0; name: FUN_0082abe0
 */


void FUN_0082abe0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  lVar1 = param_2 + 0x178;
  (**(code **)(**(long **)(param_2 + 0x18) + 0x100))(local_38,*(long **)(param_2 + 0x18),lVar1);
  FUN_0083fdc0(lVar1,*(undefined4 *)(param_2 + 0x158),*(undefined1 *)(param_2 + 0x171));
  FUN_0083fde4(lVar1,*(undefined4 *)(param_2 + 0x15c));
  (**(code **)(**(long **)(param_2 + 0x18) + 0x108))
            (local_38,*(long **)(param_2 + 0x18),param_2 + 0x1b8);
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


