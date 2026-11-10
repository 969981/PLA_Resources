/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132ebd0; name: FUN_0132ebd0
 */


long * FUN_0132ebd0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04379c88;
  if (param_1 != param_2) {
    do {
      plVar3 = *(long **)(*param_1 + 0x5a0);
      plVar1 = (long *)puVar2;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 0xb;
      }
      lVar4 = *plVar1;
      if (plVar3 == (long *)0x0) {
        lVar5 = *param_3;
      }
      else {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        lVar5 = *param_3;
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      if (lVar4 == lVar5) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


