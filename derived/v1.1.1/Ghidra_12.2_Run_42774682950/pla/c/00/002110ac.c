/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002110ac; name: FUN_002110ac
 */


undefined8 FUN_002110ac(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 3);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(long **)(*param_1 + uVar4 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          uVar1 = (*param_2)(plVar3,param_3);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        uVar2 = *(uint *)(param_1 + 3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}


