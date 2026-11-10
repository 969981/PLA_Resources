/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e903c0; name: FUN_02e903c0
 */


int FUN_02e903c0(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int local_34;
  
  puVar4 = (undefined8 *)(param_1 + 8);
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(uint *)(param_2 + 0x18) >> 0x10;
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0xc) & 1;
  }
  iVar2 = FUN_02e9b58c(puVar4,*(undefined4 *)(param_2 + 4),0,uVar1,0,uVar3);
  local_34 = 0;
  if (((iVar2 == 1) &&
      (iVar2 = FUN_02e9b7a4(puVar4,param_3,*(undefined4 *)(param_2 + 8),&local_34), iVar2 == 1)) &&
     (iVar2 = 1, *(int *)(param_2 + 8) != local_34)) {
    iVar2 = 2;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return iVar2;
}


