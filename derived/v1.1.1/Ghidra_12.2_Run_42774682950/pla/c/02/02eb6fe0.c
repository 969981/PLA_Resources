/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb6fe0; name: FUN_02eb6fe0
 */


int FUN_02eb6fe0(undefined4 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 2) == 0) &&
     (plVar2 = (long *)FUN_02e7d2ec(DAT_0440a120,*param_1,0), plVar2 != (long *)0x0)) {
    if ((*(long *)(param_2 + 0x30) == 0) || (plVar2[0x10] == 0)) {
      iVar1 = 1;
    }
    else if (plVar2[0x10] == *(long *)(param_2 + 0x30)) {
      *(long **)(param_1 + 2) = plVar2;
      iVar1 = FUN_02ed2774(plVar2,param_2);
      if (iVar1 != 1) {
        *(undefined8 *)(param_1 + 2) = 0;
      }
    }
    else {
      iVar1 = 2;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


