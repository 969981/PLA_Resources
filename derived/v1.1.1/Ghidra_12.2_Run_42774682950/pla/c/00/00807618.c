/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00807618; name: FUN_00807618
 */


void FUN_00807618(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined *puVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((uint)*(byte *)(param_2 + 0x61) != (param_3 & 0xff)) {
    *(char *)(param_2 + 0x61) = (char)param_3;
    uVar1 = FUN_007e5f0c();
    if ((uVar1 & 1) == 0) {
      FUN_00807914(local_38,*(undefined8 *)(param_2 + 0x68),param_3);
      if (local_38[0] == 0) {
        *(char *)(param_2 + 0x60) = (char)param_3;
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x68),1);
        *(char **)(param_2 + 0x40) = "NetUpdatePlayerNumJob::WaitUpdatePlayerNum";
        puVar3 = PTR_FUN_04377878;
      }
      else {
        *(char **)(param_2 + 0x40) = "NetUpdatePlayerNumJob::RetryUpdatePlayerNum";
        puVar3 = PTR_FUN_04377870;
      }
      piVar2 = local_48;
      *(undefined **)(param_2 + 0x30) = puVar3;
      *(undefined8 *)(param_2 + 0x38) = 0;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)piVar2 | 4),(Result *)local_28);
      goto LAB_008076e4;
    }
  }
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  piVar2 = local_38;
LAB_008076e4:
  FUN_007ee578(param_1,piVar2);
  return;
}


