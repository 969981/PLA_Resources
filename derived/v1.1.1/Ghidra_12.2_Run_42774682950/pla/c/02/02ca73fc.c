/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ca73fc; name: FUN_02ca73fc
 */


void FUN_02ca73fc(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = *(long **)(param_2 + 0x158);
  while( true ) {
    if (plVar3 == (long *)(param_2 + 0x160)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = (long)&DAT_cbf29ce484222645;
      param_1[1] = (long)&DAT_03996322;
      return;
    }
    if (plVar3[5] == param_3) break;
    plVar4 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      plVar4 = plVar3 + 2;
      bVar2 = *(long **)*plVar4 != plVar3;
      plVar3 = (long *)*plVar4;
      if (bVar2) {
        do {
          lVar6 = *plVar4;
          plVar4 = (long *)(lVar6 + 0x10);
          plVar3 = (long *)*plVar4;
        } while (*(long *)*plVar4 != lVar6);
      }
    }
    else {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)*plVar3;
      } while (plVar4 != (long *)0x0);
    }
  }
  plVar4 = (long *)plVar3[4];
  plVar3 = (long *)PTR_DAT_04379c88;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 0xb;
  }
  plVar1 = (long *)PTR_PTR_04379d00;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 0xc;
  }
  lVar6 = *plVar1;
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = plVar4[0xd];
  }
  *param_1 = *plVar3;
  param_1[1] = lVar6;
  param_1[2] = lVar5;
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  param_1[3] = (long)plVar4;
  return;
}


