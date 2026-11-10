/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c4fc; name: FUN_0083c4fc
 */


void FUN_0083c4fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  *(undefined8 *)(param_2 + 0x60) = param_3;
  FUN_007e5bd8(param_3);
  FUN_007e5c2c(*(undefined8 *)(param_2 + 0x60));
  *(char **)(param_2 + 0x40) = "CreateMeshJob::SetupLocalStation";
  *(undefined **)(param_2 + 0x30) = PTR_FUN_04377ed0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


