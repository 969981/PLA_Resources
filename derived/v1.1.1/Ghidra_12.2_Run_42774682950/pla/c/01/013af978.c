/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013af978; name: FUN_013af978
 */


void FUN_013af978(long param_1)

{
  bool bVar1;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60;
  undefined1 auStack_5c [20];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  
  if (*(int *)(param_1 + 0xac) != 0x45) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    FUN_02784bc0(local_68);
  }
  else {
    local_68[0] = *(char *)(param_1 + 0x4c8) != '\0';
    if ((bool)local_68[0]) {
      local_64 = *(undefined4 *)(param_1 + 0x4cc);
    }
    local_60 = 0;
    bVar1 = *(char *)(param_1 + 0x4d0) != '\0';
    if (bVar1) {
      FUN_007ee578(auStack_5c,param_1 + 0x4d4);
    }
    local_48 = *(char *)(param_1 + 0x4e8) != '\0';
    if ((bool)local_48) {
      local_40 = *(undefined8 *)(param_1 + 0x4f0);
    }
    local_38 = *(char *)(param_1 + 0x4f8) != '\0';
    if ((bool)local_38) {
      local_34 = *(undefined8 *)(param_1 + 0x4fc);
    }
    local_2c = *(undefined8 *)(param_1 + 0x504);
    local_60 = bVar1;
    if (*(char *)(param_1 + 0x4c0) != '\0') {
      FUN_02727c1c(param_1 + 0x4c8);
      *(undefined1 *)(param_1 + 0x4c0) = 0;
    }
  }
  FUN_02728014(local_68);
  FUN_02727c1c(local_68);
  return;
}


