/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008510f4; name: FUN_008510f4
 */


void FUN_008510f4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    plVar1 = param_1 + 3;
    for (plVar3 = (long *)param_1[4]; plVar3 != plVar1; plVar3 = (long *)plVar3[1]) {
      if (plVar3[2] == param_2) {
        if ((int)param_1[0x10] == 0) {
          return;
        }
        lVar2 = FUN_007e9088(param_1 + 0xe);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = lVar2 - *(int *)((long)param_1 + 0x84);
        }
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FUN_007e8fa0(param_1 + 0xb,param_1 + 0xb,lVar2);
        *(long *)(lVar2 + 0x10) = param_2;
        plVar3 = (long *)param_1[4];
        while( true ) {
          if (plVar3 == plVar1) {
            return;
          }
          if (plVar3[2] == param_2) break;
          plVar3 = (long *)plVar3[1];
        }
        FUN_007e8fec(plVar1,plVar3);
        FUN_007e8fc4(param_1 + 6,param_1 + 6,(long)plVar3 + (long)*(int *)((long)param_1 + 0x44));
        if (param_1[0x13] == param_2) {
          param_1[0x13] = 0;
        }
        local_38 = 0;
        local_40 = 0x20000000;
        (**(code **)(*param_1 + 0x98))(param_1,&local_40);
        return;
      }
    }
  }
  return;
}


