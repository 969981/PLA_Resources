/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0c94; name: FUN_001e0c94
 */


undefined8 FUN_001e0c94(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
    for (plVar3 = *(long **)(lVar2 + lVar1 * 0x20); plVar3 != (long *)0x0;
        plVar3 = (long *)plVar3[2]) {
      lVar1 = *plVar3;
      lVar2 = (*(code *)param_1[2])(lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20),param_2,param_3);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar1 + 0x18);
      }
    }
  }
  return 0;
}


