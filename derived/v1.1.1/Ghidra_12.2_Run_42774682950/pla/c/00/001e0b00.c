/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0b00; name: FUN_001e0b00
 */


undefined8 FUN_001e0b00(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar1 = (long *)(lVar3 + lVar2 * 0x20);
  plVar4 = (long *)*plVar1;
  do {
    if (plVar4 == (long *)0x0) {
LAB_001e0b8c:
      lVar3 = FUN_002044c4(param_3 + 0x30);
      if (lVar3 == 0) {
        param_4 = 0;
      }
      else {
        memcpy((void *)(lVar3 + 0x28),param_2,param_3);
        *(undefined8 *)(lVar3 + 0x18) = param_4;
        *(size_t *)(lVar3 + 0x20) = param_3;
        FUN_001e3718(plVar1,plVar1[1],lVar3,lVar3);
        param_1[5] = param_1[5] + 1;
      }
      return param_4;
    }
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3);
    if (lVar3 != 0) {
      FUN_001e3790(plVar1,plVar4,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_001e0b8c;
    }
    plVar4 = (long *)plVar4[2];
  } while( true );
}


