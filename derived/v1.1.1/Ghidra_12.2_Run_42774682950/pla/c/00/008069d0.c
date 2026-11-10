/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008069d0; name: FUN_008069d0
 */


void FUN_008069d0(undefined8 param_1,long *param_2,long param_3,byte param_4)

{
  long lVar1;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (*(int *)(param_2[0x16] + 0x288) == 1) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[0xb] = param_3;
    FUN_007e5bd8(param_3);
    FUN_007e5c2c(param_2[0xb]);
    *(byte *)(param_2 + 0x15) = param_4 & 1;
    if ((param_4 & 1) != 0) {
      lVar1 = param_2[0x16];
      if (*(int *)(lVar1 + 0x1c0) != 1) {
        *(undefined4 *)(lVar1 + 0x1c0) = 1;
      }
      if (*(char *)(lVar1 + 0x249) != '\x01') {
        *(undefined1 *)(lVar1 + 0x249) = 1;
      }
    }
    param_2[8] = (long)"NetDestroyNetworkJob::TryPrepareDestroyNetwork";
    param_2[6] = (long)PTR_FUN_04377838;
    param_2[7] = 0;
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


