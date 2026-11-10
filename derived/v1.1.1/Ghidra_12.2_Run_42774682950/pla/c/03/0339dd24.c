/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339dd24; name: FUN_0339dd24
 */


long FUN_0339dd24(long *param_1,uint param_2,long *param_3,ulong param_4,uint *param_5)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong local_48;
  
  uVar6 = param_4 & 0xffffffff;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar3 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar3) {
    param_2 = uVar3;
  }
  FUN_032bd100(param_2,8,*param_5,&local_48);
  uVar3 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      plVar5 = param_3 + 1;
      do {
        plVar1 = (long *)(lVar2 + lVar4 * 8);
        lVar4 = lVar4 + 2;
        *plVar1 = plVar5[-1];
        plVar5[-1] = 0;
        plVar1[1] = *plVar5;
        *plVar5 = 0;
        plVar5 = plVar5 + 2;
      } while (uVar6 - (param_4 & 1) != lVar4);
    }
    if ((param_4 & 1) != 0) {
      *(long *)(lVar2 + lVar4 * 8) = param_3[lVar4];
      param_3[lVar4] = 0;
    }
    lVar4 = *param_3;
    plVar5 = param_3;
    while( true ) {
      if (lVar4 != 0) {
        FUN_032d647c();
      }
      uVar6 = uVar6 - 1;
      plVar5 = plVar5 + 1;
      if (uVar6 == 0) break;
      lVar4 = *plVar5;
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) << 3);
  }
  if (local_48 < 0x1fffffff8) {
    uVar3 = (uint)(local_48 >> 3);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


