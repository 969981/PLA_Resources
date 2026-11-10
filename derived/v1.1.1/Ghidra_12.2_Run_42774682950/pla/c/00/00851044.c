/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851044; name: FUN_00851044
 */


long FUN_00851044(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x58);
    plVar1 = (long *)0x0;
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x10);
    }
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      FUN_007e8fec((long *)(param_1 + 0x58),plVar1 + -2);
      FUN_007e8fc4(param_1 + 0x70,param_1 + 0x70,
                   (long)(plVar1 + -2) + (long)*(int *)(param_1 + 0x84));
      lVar2 = FUN_007e9088(param_1 + 0x30);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 - *(int *)(param_1 + 0x44);
      }
      *(undefined8 *)(lVar2 + 0x10) = 0;
      FUN_007e8fa0(param_1 + 0x18,param_1 + 0x18,lVar2);
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  return lVar3;
}


