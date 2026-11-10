/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008032b0; name: FUN_008032b0
 */


void FUN_008032b0(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_007e5da4(*(undefined8 *)(param_1 + 0x78));
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    if (**(int **)(param_1 + 0x70) == 1) {
      FUN_007ee578(local_38,*(long *)(param_1 + 0x58) + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      if (local_38[0] == 0) {
        local_28[0] = 0;
        local_38[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
        FUN_007ee578(auStack_58,local_38);
        puVar1 = auStack_58;
      }
      else {
        FUN_007ee578(auStack_48,*(long *)(param_1 + 0x58) + 0x198);
        puVar1 = auStack_48;
      }
      FUN_007e5cac(uVar2,puVar1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_007f6f50(*(undefined8 *)(param_1 + 0x58));
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee660(param_1 + 0x60,local_38);
  return;
}


