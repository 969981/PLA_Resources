/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3dac0; name: FUN_02f3dac0
 */


void FUN_02f3dac0(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *param_2;
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 1) {
      FUN_02f38320(*(undefined8 *)(lVar2 + 0x10));
    }
    else if (*(int *)(lVar2 + 8) == 0) {
      plVar4 = *(long **)(lVar2 + 0x10);
      lVar5 = plVar4[2];
      cVar1 = *(char *)((long)plVar4 + 0x2c);
      plVar3 = (long *)plVar4[1];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xe0))
                  (plVar3,*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68));
      }
      plVar3 = *(long **)(param_1 + 0x40);
      if ((plVar3 != (long *)0x0) && (plVar4 != plVar3)) {
        do {
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0 && plVar4 != plVar3);
      }
      if (plVar3 != (long *)0x0) {
        *(undefined4 *)(plVar3 + 2) = 0;
      }
      if (cVar1 != '\0') {
        FUN_02f3dbc0(param_1,(int)lVar5,1);
      }
    }
    lVar5 = *(long *)(lVar2 + 0x18);
    plVar3 = param_2;
    if (*param_2 != lVar2) {
      plVar3 = (long *)&DAT_00000018;
    }
    *plVar3 = lVar5;
    (*DAT_0442d150)(0,lVar2);
    lVar2 = lVar5;
  }
  return;
}


