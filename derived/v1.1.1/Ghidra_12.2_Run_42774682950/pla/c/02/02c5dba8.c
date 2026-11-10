/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5dba8; name: FUN_02c5dba8
 */


void FUN_02c5dba8(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar2 = FUN_02c5e31c(param_1);
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = FUN_02c66e84();
  }
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar3 = FUN_02c5e31c(param_1);
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = FUN_02c66b3c();
  }
  uVar4 = FUN_02c5e31c(param_1);
  FUN_02c7858c(*(undefined8 *)(param_1 + 0x98),uVar4);
  if ((uVar3 == 0) && ((param_2 & 1) != 0)) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar5 = FUN_02c5e31c(param_1);
    uVar5 = uVar5 & 0xffff;
  }
  else {
    uVar5 = FUN_02c66e84();
  }
  uVar1 = uVar5;
  if (uVar3 <= uVar5) {
    uVar1 = uVar3;
  }
  if (uVar2 <= uVar5) {
    uVar1 = (uVar3 - uVar2) + uVar5;
  }
  FUN_02c788b4(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


