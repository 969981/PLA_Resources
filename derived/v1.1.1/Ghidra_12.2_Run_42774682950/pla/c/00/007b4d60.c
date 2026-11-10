/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b4d60; name: FUN_007b4d60
 */


long FUN_007b4d60(long param_1,long param_2)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_80;
  undefined1 local_68 [8];
  long local_60;
  long local_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if (param_1 != param_2) {
    lStack_48 = *(long *)(param_1 + 0x10);
    FUN_007b17a0(&local_50,*(undefined8 *)(lStack_48 + 0x18));
    local_80 = lStack_48;
    while (local_50 != 0) {
      local_60 = local_80;
      lStack_48 = local_80;
      FUN_007b1258(&local_50,param_1,local_68);
      local_80 = lStack_48;
    }
    lStack_48 = *(long *)(param_2 + 0x10);
    FUN_007b17a0(&local_50,*(undefined8 *)(lStack_48 + 0x18));
    local_90 = uStack_40;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    lStack_98 = lStack_48;
    local_a0 = local_50;
    FUN_007b4e34(param_1,&local_a0,&local_b8);
  }
  return param_1;
}


