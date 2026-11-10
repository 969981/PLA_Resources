/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfc0b0; name: FUN_01bfc0b0
 */


uint FUN_01bfc0b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 local_38;
  
  iVar1 = (**(code **)(*(long *)*param_2 + 0x20))();
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      plVar3 = (long *)(**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,iVar5);
      if (*plVar3 == 0x1eb0b3d9632740fb) {
        uVar2 = 1;
        goto LAB_01bfc160;
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  lVar4 = (**(code **)(*(long *)*param_2 + 0x38))();
  uVar2 = 0;
  if (lVar4 != 0) {
    param_1 = (undefined8 *)*param_1;
    local_38 = (**(code **)(*(long *)*param_2 + 0x38))();
    uVar2 = (*(code *)*param_1)(param_1 + 4,&local_38);
  }
LAB_01bfc160:
  return uVar2 & 1;
}


