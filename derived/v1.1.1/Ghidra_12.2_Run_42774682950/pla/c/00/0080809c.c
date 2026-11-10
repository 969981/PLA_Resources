/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080809c; name: FUN_0080809c
 */


void FUN_0080809c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = local_50;
  (**(code **)(**(long **)(param_2[0xb] + 0x180) + 0x38))
            (local_40,*(long **)(param_2[0xb] + 0x180),param_2[0xf]);
  puVar2 = PTR_DAT_043773b8;
  if (local_40[0] == 0) {
    *(undefined8 *)(PTR_DAT_043773b8 + 0x230) = *(undefined8 *)(param_4 + 8);
    *(undefined2 *)(puVar2 + 0x210) = *(undefined2 *)(param_4 + 0x10);
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[0xe] = param_3;
    FUN_007e5bd8(param_3);
    FUN_007e5c2c(param_2[0xe]);
    lVar4 = param_2[0xb];
    pcVar1 = (char *)(lVar4 + 0x1168);
    if (*pcVar1 != '\x01') {
      *pcVar1 = '\x01';
    }
    FUN_007e5e70(*(undefined8 *)(lVar4 + 0x180),1);
    FUN_007f6f40(param_2[0xb]);
    param_2[8] = (long)"NetAutoConnectNetworkJob::WaitAutoConnectNetwork";
    param_2[6] = (long)PTR_FUN_043778b8;
    param_2[7] = 0;
    local_50[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar3 = local_40;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


