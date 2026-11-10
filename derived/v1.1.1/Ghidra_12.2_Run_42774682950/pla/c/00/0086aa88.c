/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086aa88; name: FUN_0086aa88
 */


undefined8 FUN_0086aa88(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong local_30 [2];
  undefined4 local_18 [2];
  
  uVar1 = FUN_0086a904();
  if (((uVar1 & 1) != 0) && (*(char *)(param_1 + 0x90) == '\0')) {
    local_30[0] = 0;
    FUN_007ecf14(local_30);
    if (local_30[0] < *(ulong *)(param_1 + 0xe0)) {
      thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
      lVar2 = FUN_008473ec();
      puVar4 = PTR_DAT_04377550;
      if (lVar2 == 0) {
        return 5;
      }
      FUN_0082abe0(local_30,*(undefined8 *)PTR_DAT_04377550);
      if ((int)local_30[0] == 0) {
        pcVar3 = "AttachMeshJob::PostConnectNetwork";
        puVar4 = PTR_FUN_04378318;
      }
      else {
        FUN_0082a238(*(undefined8 *)puVar4);
        FUN_007ee660(param_1 + 0xc0,local_30);
        pcVar3 = "AttachMeshJob::CompleteFailure";
        puVar4 = PTR_LAB_04378310;
      }
      *(undefined **)(param_1 + 0x30) = puVar4;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_0086ab70;
    }
    FUN_0082a238(*(undefined8 *)PTR_DAT_04377550);
    local_18[0] = 0;
    local_30[0] = CONCAT44(local_30[0]._4_4_,0x8c52);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
    FUN_007ee660(param_1 + 0xc0,local_30);
  }
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04378310;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "AttachMeshJob::CompleteFailure";
LAB_0086ab70:
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


