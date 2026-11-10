/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00343b54; name: FUN_00343b54
 */


long FUN_00343b54(long param_1,long param_2)

{
  long lVar1;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar1 = FUN_0036ae4c(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_2 + 0xb0));
  if (lVar1 == 0) {
    uStack_e0 = *(undefined8 *)(param_1 + 0x20);
    local_d8 = *(undefined8 *)(param_1 + 0x10);
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_b8 = 0;
    local_28 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    local_88 = &local_80;
    puStack_70 = &local_68;
    local_78 = 0;
    uStack_30 = 0;
    local_38 = 0;
    uStack_40 = 0;
    local_48 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    local_58 = 0;
                    /* try { // try from 00343bd4 to 00343bdf has its CatchHandler @ 00343c14 */
    local_e8 = param_1;
    lVar1 = FUN_0034d240(&local_e8,param_2);
    FUN_0034d9d0(&local_e8);
    if (lVar1 == 0) {
      FUN_00343c28(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_2 + 0xb0));
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


