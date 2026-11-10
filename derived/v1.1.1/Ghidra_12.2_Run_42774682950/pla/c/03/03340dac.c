/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03340dac; name: FUN_03340dac
 */


undefined8
FUN_03340dac(ulong *param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
            undefined4 param_6)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    puVar3 = param_1;
    do {
      if (((plVar2[2] == param_2) &&
          (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_4), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_5,param_6), iVar1 != 0)) {
        if ((*param_1 & 3) == 0) {
          *puVar3 = plVar2[1] & 0xfffffffffffffffcU | *puVar3 & 3;
          (**(code **)(*plVar2 + 8))(plVar2);
          return 1;
        }
        plVar2[1] = plVar2[1] & 0xfffffffffffffffcU | 1;
        return 1;
      }
      puVar3 = (ulong *)(plVar2 + 1);
      plVar2 = (long *)(*puVar3 & 0xfffffffffffffffc);
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}


