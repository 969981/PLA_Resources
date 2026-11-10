/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01342fb0; name: FUN_01342fb0
 */


void FUN_01342fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_0130f1e8(param_1,0);
  *(undefined8 *)(param_1 + 0x5c0) = param_2;
  FUN_0131c498(param_1 + 0x5d0,*(undefined8 *)(param_1 + 8));
  FUN_0131c498(param_1 + 0x600,*(undefined8 *)(param_1 + 8));
  FUN_01343050(&local_40,param_1);
  uVar1 = local_40;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x640);
  *(undefined8 *)(param_1 + 0x640) = uVar1;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x658) = local_28;
  }
  else {
    FUN_01344d9c(param_1 + 0x648);
    *(undefined8 *)(param_1 + 0x658) = local_28;
    uVar1 = *(undefined8 *)(param_1 + 0x640);
  }
  *(undefined8 *)(param_1 + 0x650) = uStack_30;
  *(undefined8 *)(param_1 + 0x648) = local_38;
  FUN_0134d01c(uVar1,param_2);
  return;
}


