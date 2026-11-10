/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01438e18; name: FUN_01438e18
 */


void FUN_01438e18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  undefined8 *puStack_38;
  
  FUN_00d408b8();
  *param_1 = &PTR_FUN_0420ff40;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[9] = &PTR_LAB_0420ffe0;
  param_1[10] = &PTR_LAB_04210028;
  param_1[0xb8] = 0;
  FUN_01438f24(param_1 + 0xb9);
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  lVar1 = param_1[0xb6];
  if ((ulong)(param_1[0xb8] - lVar1 >> 3) < 0x14) {
    lVar2 = param_1[0xb7];
    local_40 = 0;
    puStack_38 = param_1 + 0xb9;
    local_58 = (**(code **)(*(long *)param_1[0xb9] + 0x10))((long *)param_1[0xb9],0xa0,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[0xb9] + 0xb8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 3) * 8;
    local_40 = local_58 + 0xa0;
    local_48 = lStack_50;
    FUN_0143900c(param_1 + 0xb6,&local_58);
    FUN_014390b4(&local_58);
  }
  return;
}


