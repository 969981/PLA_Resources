/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e043d4; name: FUN_02e043d4
 */


void FUN_02e043d4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[4] = 0;
  }
  FUN_02e06794(param_1 + 1,param_2);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((int)param_1[7] != 0) {
      uVar3 = 1;
      lVar4 = 0x68;
      while( true ) {
        plVar1 = (long *)(lVar2 + lVar4);
        FUN_02e069e4(plVar1 + -6,param_2);
        FUN_02e069e4(plVar1 + -4,param_2);
        FUN_02e069e4(plVar1 + -2,param_2);
        if (*(char *)((long)param_1 + 0x4e) != '\0') {
          FUN_02e07298(plVar1 + -0xd,param_2);
        }
        FUN_02e07298(plVar1 + -10,param_2);
        if (*plVar1 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
        }
        if (*(uint *)(param_1 + 7) <= uVar3) break;
        lVar2 = *param_1;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x78;
      }
      lVar2 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar2);
    *param_1 = 0;
  }
  return;
}


