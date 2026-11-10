/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082d2f0; name: FUN_0082d2f0
 */


undefined8 FUN_0082d2f0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48 [4];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_04377550;
  local_28 = 0;
  uVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x38))
                    (*(long **)(*(long *)PTR_DAT_04377550 + 0x18),&local_28);
  if ((uVar2 & 1) == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x60) == 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    FUN_007ee578(auStack_38,param_1 + 100);
    FUN_007e5cac(uVar5,auStack_38);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  FUN_0082b398(*(undefined8 *)puVar1,local_28);
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xe0))();
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xf0))();
      uVar4 = 1;
      if ((uVar2 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_0082b294(*(undefined8 *)puVar1,uVar4);
      *(undefined **)(param_1 + 0x30) = PTR_FUN_04377dc8;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar3 = "CreateSessionJob::MeshStartup";
      goto LAB_0082d434;
    }
    local_48[0] = 0xc406;
  }
  else {
    local_48[0] = 0x6c57;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0x94,local_48);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377dd0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "CreateSessionJob::DestroyNetwork";
LAB_0082d434:
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


