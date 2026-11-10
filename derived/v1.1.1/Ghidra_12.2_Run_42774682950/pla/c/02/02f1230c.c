/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1230c; name: FUN_02f1230c
 */


undefined8 FUN_02f1230c(uint *param_1,long *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = param_3 + 1U;
  uVar1 = (param_3 + 1U) * 2;
  if (uVar1 != 0) {
    lVar2 = FUN_02f59e30(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 != 0) {
      param_1[5] = uVar1;
    }
  }
  uVar1 = *param_1 << 1;
  if (uVar1 != 0) {
    lVar2 = FUN_02f59e30(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 6) = lVar2;
    if (lVar2 != 0) {
      param_1[9] = uVar1;
    }
  }
  uVar1 = *param_1 << 1;
  if (uVar1 != 0) {
    lVar2 = FUN_02f59e30(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 10) = lVar2;
    if (lVar2 != 0) {
      param_1[0xd] = uVar1;
    }
  }
  uVar1 = *param_1 << 1;
  if (uVar1 != 0) {
    lVar2 = FUN_02f59e30(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 0xe) = lVar2;
    if (lVar2 != 0) {
      param_1[0x11] = uVar1;
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*param_1 * 0xc);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*param_1 << 3);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*param_1 << 3);
  *(long *)(param_1 + 0x16) = lVar2;
  if (((*(long *)(param_1 + 0x12) == 0) || (lVar2 == 0)) || (*(long *)(param_1 + 0x14) == 0)) {
    FUN_02f1245c(param_1,param_2);
    uVar3 = 0x34;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


