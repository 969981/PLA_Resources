/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ffdc; name: FUN_0329ffdc
 */


long FUN_0329ffdc(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_48;
  
  uVar8 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar5 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar5) {
    param_2 = uVar5;
  }
  FUN_032bd100(param_2,0x10,*param_5,&local_48);
  uVar5 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    puVar4 = (undefined4 *)(lVar2 + 8);
    plVar6 = param_3;
    uVar7 = uVar8;
    do {
      *(long *)(puVar4 + -2) = *plVar6;
      plVar1 = plVar6 + 1;
      *plVar6 = 0;
      uVar7 = uVar7 - 1;
      plVar6 = plVar6 + 2;
      *puVar4 = (int)*plVar1;
      puVar4 = puVar4 + 4;
    } while (uVar7 != 0);
    lVar3 = *param_3;
    plVar6 = param_3;
    while( true ) {
      if (lVar3 != 0) {
        FUN_032d647c();
      }
      uVar8 = uVar8 - 1;
      plVar6 = plVar6 + 2;
      if (uVar8 == 0) break;
      lVar3 = *plVar6;
    }
  }
  if (-1 < (int)uVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar5 & 0x3fffffff) << 4);
  }
  if (local_48 < 0x3fffffff0) {
    uVar5 = (uint)(local_48 >> 4);
  }
  else {
    uVar5 = 0x3fffffff;
  }
  *param_5 = uVar5;
  return lVar2;
}


