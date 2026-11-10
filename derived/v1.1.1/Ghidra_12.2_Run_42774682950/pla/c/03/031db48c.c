/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031db48c; name: FUN_031db48c
 */


long FUN_031db48c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong local_48;
  
  uVar5 = (ulong)param_4;
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
  FUN_032bd100(param_2,0xc,*param_5,&local_48);
  uVar2 = *param_5;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    puVar3 = (undefined4 *)(param_3 + 8);
    puVar4 = (undefined4 *)(lVar1 + 8);
    do {
      *(undefined1 *)(puVar4 + -2) = *(undefined1 *)(puVar3 + -2);
      puVar4[-1] = puVar3[-1];
      uVar5 = uVar5 - 1;
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 3;
      puVar4 = puVar4 + 3;
    } while (uVar5 != 0);
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0xc);
  }
  if (local_48 < 0x2fffffff4) {
    uVar2 = (uint)(local_48 / 0xc);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return lVar1;
}


