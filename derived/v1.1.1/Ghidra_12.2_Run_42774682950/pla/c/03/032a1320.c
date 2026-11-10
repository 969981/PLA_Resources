/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a1320; name: FUN_032a1320
 */


undefined4 *
FUN_032a1320(long *param_1,uint param_2,undefined4 *param_3,ulong param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong local_48;
  
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
  FUN_032bd100(param_2,7,*param_5,&local_48);
  uVar3 = *param_5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      puVar5 = param_3;
      puVar6 = puVar2;
      do {
        uVar1 = *puVar5;
        lVar4 = lVar4 + 2;
        *(undefined4 *)((long)puVar6 + 3) = *(undefined4 *)((long)puVar5 + 3);
        *puVar6 = uVar1;
        uVar1 = *(undefined4 *)((long)puVar5 + 7);
        *(undefined4 *)((long)puVar6 + 10) = *(undefined4 *)((long)puVar5 + 10);
        *(undefined4 *)((long)puVar6 + 7) = uVar1;
        puVar6 = (undefined4 *)((long)puVar6 + 0xe);
        puVar5 = (undefined4 *)((long)puVar5 + 0xe);
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar4);
    }
    if ((param_4 & 1) != 0) {
      puVar6 = (undefined4 *)((long)puVar2 + lVar4 * 7);
      puVar5 = (undefined4 *)((long)param_3 + lVar4 * 7);
      uVar1 = *puVar5;
      *(undefined4 *)((long)puVar6 + 3) = *(undefined4 *)((long)puVar5 + 3);
      *puVar6 = uVar1;
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) * 7);
  }
  uVar3 = 0x3fffffff;
  if (local_48 < 0x1bffffff9) {
    uVar3 = (uint)(local_48 / 7);
  }
  *param_5 = uVar3;
  return puVar2;
}


