/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00806350; name: FUN_00806350
 */


void FUN_00806350(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_48[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    piVar3 = local_48;
  }
  else {
    (**(code **)(**(long **)(param_2[0xb] + 0x180) + 0x48))
              (local_48,*(long **)(param_2[0xb] + 0x180),param_2[0xf]);
    if (local_48[0] == 0) {
      lVar2 = FUN_007f2a68(param_4);
      puVar1 = PTR_DAT_043773b8;
      *(undefined8 *)(PTR_DAT_043773b8 + 0x230) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = FUN_007f2a68(param_4);
      *(undefined2 *)(puVar1 + 0x210) = *(undefined2 *)(lVar2 + 0x1a);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[0xe] = param_3;
      FUN_007e5bd8(param_3);
      FUN_007e5c2c(param_2[0xe]);
      FUN_007e5e70(*(undefined8 *)(param_2[0xb] + 0x180),1);
      FUN_007f6f40(param_2[0xb]);
      if (*(char *)(param_2[0xb] + 0x1168) != '\x01') {
        *(char *)(param_2[0xb] + 0x1168) = '\x01';
      }
      param_2[8] = (long)"NetConnectNetworkJob::WaitConnectNetwork";
      param_2[6] = (long)PTR_FUN_04377818;
      param_2[7] = 0;
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
    }
    else {
      piVar3 = local_48;
    }
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


