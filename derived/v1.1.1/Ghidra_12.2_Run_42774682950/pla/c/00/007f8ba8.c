/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8ba8; name: FUN_007f8ba8
 */


void FUN_007f8ba8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auStack_68 [16];
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar1 = FUN_007f0ee4(param_1 + 0xb8);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_007f0ee4(param_1 + 0x98);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_007f0f48(param_1 + 0x98,param_1 + 0xb8), (uVar1 & 1) != 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x1118) != 1) {
    local_48 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_50 = *param_2;
    local_38 = 0;
    local_44 = '@';
    local_58 = PTR_DAT_043775c0 + 0x10;
    local_40 = 4;
    uVar1 = FUN_007fd53c(&local_58);
    if ((uVar1 & 1) != 0) {
      if ((*(int *)((long)param_2 + 0xc) == local_40._4_4_ + (int)local_40) && (local_44 == '@')) {
        FUN_007f6ce4(auStack_68,param_1);
      }
    }
  }
  return;
}


