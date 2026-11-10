/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbb590; name: FUN_02cbb590
 */


void FUN_02cbb590(int *param_1)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (((DAT_04408a30 == (long *)0x0) ||
      ((**(code **)(*DAT_04408a30 + 0x28))(param_1), *param_1 == 0)) &&
     ((*(long *)PTR_DAT_04377458 == 0 || (FUN_007e8b38(param_1), *param_1 == 0)))) {
    local_30[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
    FUN_007ee578(param_1,local_30);
  }
  return;
}


