/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00826b64; name: FUN_00826b64
 */


void FUN_00826b64(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    plVar2 = *(long **)(param_1 + 0xb0);
    plVar1 = (long *)(param_1 + 0xa8);
    if (plVar2 != plVar1) {
      do {
        (**(code **)(plVar2[2] + 0x10))(plVar2 + 2);
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != plVar1);
      if (*(int *)(param_1 + 0xb8) == 0) goto LAB_00826bf4;
    }
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) break;
      (*(code *)**(undefined8 **)(lVar3 + 0x10))();
      FUN_007e8fec(plVar1,lVar3);
      FUN_007e8fc4(param_1 + 0xc0,param_1 + 0xc0,lVar3 + *(int *)(param_1 + 0xd4));
    } while (*(int *)(param_1 + 0xb8) != 0);
  }
LAB_00826bf4:
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}


