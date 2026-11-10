/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dcbe0; name: FUN_031dcbe0
 */


long FUN_031dcbe0(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
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
  FUN_032bd100(param_2,0x10,*param_5,&local_48);
  uVar2 = *param_5;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    puVar3 = (undefined1 *)(param_3 + 0xc);
    puVar4 = (undefined1 *)(lVar1 + 0xc);
    do {
      *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(puVar3 + -0xc);
      *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(puVar3 + -8);
      *(undefined2 *)(puVar4 + -4) = *(undefined2 *)(puVar3 + -4);
      *(undefined2 *)(puVar4 + -2) = *(undefined2 *)(puVar3 + -2);
      uVar5 = uVar5 - 1;
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (uVar5 != 0);
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) << 4);
  }
  uVar2 = (uint)(local_48 >> 4);
  if (0x3ffffffef < local_48) {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return lVar1;
}


