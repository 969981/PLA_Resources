/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e4a08; name: FUN_031e4a08
 */


long FUN_031e4a08(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_68;
  
  uVar3 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar2 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar2) {
    param_2 = uVar2;
  }
  FUN_032bd100(param_2,0x68,*param_5,&local_68);
  uVar2 = *param_5;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  if (0 < (int)param_4) {
    lVar4 = param_3 + 8;
    lVar5 = lVar1 + 8;
    uVar6 = uVar3;
    do {
      *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(lVar4 + -8);
      FUN_031ced98(lVar5,lVar4);
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + 0x68;
      lVar5 = lVar5 + 0x68;
    } while (uVar6 != 0);
    lVar4 = param_3 + 8;
    do {
      FUN_031cd728(lVar4);
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + 0x68;
    } while (uVar3 != 0);
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0x68);
  }
  if (local_68 < 0x19ffffff98) {
    uVar2 = (uint)(local_68 / 0x68);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return lVar1;
}


