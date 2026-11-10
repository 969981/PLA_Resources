/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd1d0; name: FUN_032cd1d0
 */


int FUN_032cd1d0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  if (param_2 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - param_2[3];
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) - param_2[3];
      plVar5 = (long *)*param_2;
      plVar1 = *(long **)(param_1 + 0x50);
      if (*(long *)(param_1 + 0x58) == 0) {
        lVar3 = *plVar1;
        uVar2 = *(undefined8 *)(param_1 + 0x28);
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2[1],*(undefined8 *)(param_1 + 0x28));
        plVar1 = *(long **)(param_1 + 0x58);
        uVar2 = 0x20;
        lVar3 = *plVar1;
      }
      (**(code **)(lVar3 + 0x18))(plVar1,param_2,uVar2);
      param_2 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return iVar4;
}


