/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee41c; name: FUN_007ee41c
 */


void FUN_007ee41c(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar2 = PTR_DAT_04377510;
  if (0x12 < param_2 - 2U) {
    local_30[0] = 0x10407;
    goto LAB_007ee488;
  }
  iVar1 = *(int *)PTR_DAT_04377510;
  if (iVar1 < 0x15) {
    if (iVar1 == 0) {
      if (param_2 == 2) goto LAB_007ee4bc;
    }
    else if (*(int *)(PTR_DAT_04377518 + (long)iVar1 * 4 + -4) <= param_2) {
LAB_007ee4bc:
      *(int *)(PTR_DAT_04377518 + (long)iVar1 * 4) = param_2;
      *(int *)puVar2 = iVar1 + 1;
      local_30[0] = 0;
      goto LAB_007ee488;
    }
  }
  local_30[0] = 0x10408;
LAB_007ee488:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


