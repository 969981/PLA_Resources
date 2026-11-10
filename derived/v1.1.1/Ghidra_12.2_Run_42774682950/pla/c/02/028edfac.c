/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028edfac; name: FUN_028edfac
 */


undefined8 FUN_028edfac(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*(long *)*param_1 + 0x20))();
  if ((int)uVar1 != 0) {
    iVar3 = 0;
    do {
      plVar2 = (long *)(**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,iVar3);
      if (*param_2 == *plVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while ((int)uVar1 != iVar3);
    uVar1 = 0;
  }
  return uVar1;
}


