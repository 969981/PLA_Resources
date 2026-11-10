/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859e50; name: FUN_00859e50
 */


void FUN_00859e50(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  if (((DAT_043a5810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a5810), iVar1 != 0)) {
    DAT_043a5818._0_2_ = 0;
    DAT_043a5818._2_2_ = 0;
    DAT_043a581c = 0xffff;
    DAT_043a5820 = 0;
    __cxa_guard_release(&DAT_043a5810);
  }
  DAT_043a5818._2_2_ = 0xc000;
  DAT_043a581c = 0xffff;
  DAT_043a5820 = *(undefined8 *)(param_2 + 0xc88);
  FUN_0086d3c8(local_48,*(undefined8 *)(param_2 + 0x20));
  FUN_007ee660(local_38,local_48);
  if (local_38[0] == 0) {
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar2 = local_48;
  }
  else {
    piVar2 = local_38;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


