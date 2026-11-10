/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc128c; name: FUN_02bc128c
 */


void FUN_02bc128c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_02b7f040(&local_50,*(undefined8 *)(param_1 + 8));
  lVar2 = local_50;
  local_50 = 0;
  lVar4 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar2;
  if (lVar4 != 0) {
    FUN_02bc1db0((undefined8 *)(param_1 + 0xb0));
  }
  *(undefined8 *)(param_1 + 0xb8) = uStack_40;
  *(undefined8 *)(param_1 + 0xc0) = local_38;
  *(undefined8 *)(param_1 + 0xb0) = local_48;
  FUN_02b7f040(&local_50,*(undefined8 *)(param_1 + 8));
  lVar2 = local_50;
  local_50 = 0;
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  lVar4 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar2;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0xd8) = uStack_40;
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *puVar1 = local_48;
    local_50 = 0;
  }
  else {
    FUN_02bc1db0(puVar1);
    lVar2 = local_50;
    *(undefined8 *)(param_1 + 0xd8) = uStack_40;
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *puVar1 = local_48;
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_02bc1db0(&local_48);
    }
  }
  uVar3 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_02bc1384(param_1);
  nn::os::GetSystemTick();
  uVar3 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  return;
}


