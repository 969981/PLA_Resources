/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9ef68; name: FUN_00d9ef68
 */


void FUN_00d9ef68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_00da0070(&local_40,param_2);
  uVar1 = local_40;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (lVar2 != 0) {
    FUN_00d3c0e0(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x28) = local_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_30;
  *(undefined8 *)(param_1 + 0x38) = local_28;
  return;
}


