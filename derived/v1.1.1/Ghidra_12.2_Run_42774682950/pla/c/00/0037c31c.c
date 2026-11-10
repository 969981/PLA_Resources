/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037c31c; name: FUN_0037c31c
 */


void FUN_0037c31c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0037c31c(param_1,*param_2);
  FUN_0037c31c(param_1,param_2[1]);
  puVar1 = PTR_LAB_04373088;
  plVar4 = (long *)param_2[5];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_2[6] == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = (long *)param_2[6] + -1;
      lVar3 = *plVar2;
      *plVar2 = 0;
      if (lVar3 != 0) goto LAB_0037c384;
      while (plVar4 != plVar2) {
        while( true ) {
          plVar2 = plVar2 + -1;
          lVar3 = *plVar2;
          *plVar2 = 0;
          if (lVar3 == 0) break;
LAB_0037c384:
          FUN_0037c31c(lVar3 + 0x18,*(undefined8 *)(lVar3 + 0x20));
          FUN_0037c3ec(lVar3,*(undefined8 *)(lVar3 + 8));
          FUN_002e2ea0(puVar1,lVar3);
          if (plVar4 == plVar2) goto LAB_0037c3b0;
        }
      }
LAB_0037c3b0:
      plVar2 = (long *)param_2[5];
    }
    param_2[6] = plVar4;
    FUN_002e2ea0(PTR_LAB_04373088,plVar2);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


