/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024f9dc; name: FUN_0024f9dc
 */


void FUN_0024f9dc(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 != param_1) {
    cVar1 = (char)plVar3[0x13];
    while( true ) {
      if (cVar1 != '\0') {
        (**(code **)(*(long *)plVar3[0x12] + 0x18))((long *)plVar3[0x12],param_2);
      }
      plVar4 = (long *)plVar3[0x12];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        FUN_00232674(plVar4);
      }
      if (param_1 != plVar3) {
        plVar4 = (long *)plVar3[1];
        lVar2 = *plVar4;
        *(long **)(*plVar3 + 8) = plVar4;
        *plVar4 = *plVar3;
        *(long **)(lVar2 + 8) = plVar3;
        *plVar3 = lVar2;
      }
      FUN_00232674(plVar3);
      plVar3 = (long *)param_1[1];
      if (plVar3 == param_1) break;
      cVar1 = (char)plVar3[0x13];
    }
  }
  return;
}


