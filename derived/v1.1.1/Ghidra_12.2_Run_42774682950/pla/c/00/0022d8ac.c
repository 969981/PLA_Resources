/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d8ac; name: FUN_0022d8ac
 */


void FUN_0022d8ac(long *param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != param_1) {
    cVar1 = (char)plVar4[0x13];
    while( true ) {
      if ((cVar1 != '\0') && (plVar2 = (long *)plVar4[0x12], plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        plVar2 = (long *)plVar4[0x12];
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2);
          FUN_00232674(plVar2);
        }
        plVar4[0x12] = 0;
      }
      if (param_1 != plVar4) {
        plVar2 = (long *)plVar4[1];
        lVar3 = *plVar2;
        *(long **)(*plVar4 + 8) = plVar2;
        *plVar2 = *plVar4;
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
      }
      FUN_00232674(plVar4);
      plVar4 = (long *)param_1[1];
      if (plVar4 == param_1) break;
      cVar1 = (char)plVar4[0x13];
    }
  }
  return;
}


