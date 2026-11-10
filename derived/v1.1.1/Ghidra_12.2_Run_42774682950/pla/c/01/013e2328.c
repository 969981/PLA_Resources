/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e2328; name: FUN_013e2328
 */


void FUN_013e2328(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x58);
  FUN_013e2520(&local_40,param_2);
  uVar2 = local_40;
  local_40 = 0;
  lVar3 = *(long *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  if (lVar3 == 0) {
    *(undefined8 *)(lVar1 + 0x18) = uStack_30;
    *(undefined8 *)(lVar1 + 0x20) = local_28;
  }
  else {
    FUN_013e288c(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = uStack_30;
    *(undefined8 *)(lVar1 + 0x20) = local_28;
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  *(undefined8 *)(lVar1 + 0x10) = local_38;
  FUN_013f7098(uVar2,param_2);
  FUN_013e2620(&local_40,param_2);
  uVar2 = local_40;
  local_40 = 0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  if (lVar3 == 0) {
    *(undefined8 *)(lVar1 + 0x38) = uStack_30;
    *(undefined8 *)(lVar1 + 0x40) = local_28;
  }
  else {
    FUN_013e2c64(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x38) = uStack_30;
    *(undefined8 *)(lVar1 + 0x40) = local_28;
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
  }
  *(undefined8 *)(lVar1 + 0x30) = local_38;
  FUN_013f6b70(uVar2,param_2);
  FUN_013e2740(&local_40,param_2);
  uVar2 = local_40;
  local_40 = 0;
  lVar3 = *(long *)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  if (lVar3 == 0) {
    *(undefined8 *)(lVar1 + 0x58) = uStack_30;
    *(undefined8 *)(lVar1 + 0x60) = local_28;
  }
  else {
    FUN_013e303c(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x58) = uStack_30;
    *(undefined8 *)(lVar1 + 0x60) = local_28;
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
  }
  *(undefined8 *)(lVar1 + 0x50) = local_38;
  FUN_013f6a80(uVar2,param_2);
  return;
}


