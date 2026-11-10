/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e51c; name: FUN_00d2e51c
 */


undefined1  [16] FUN_00d2e51c(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  undefined8 uVar6;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  undefined8 uStack_38;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_40 = strlen((char *)param_2);
  bVar1 = *param_2;
  local_50 = &DAT_cbf29ce484222645;
  pbVar2 = param_2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar2;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x148) == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    pbStack_48 = param_2;
    FUN_0283b914(*(long *)(param_1 + 0x148),&local_50);
    uVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_00;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}


