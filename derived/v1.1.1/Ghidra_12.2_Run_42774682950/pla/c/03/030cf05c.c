/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030cf05c; name: FUN_030cf05c
 */


undefined8 *
FUN_030cf05c(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_48;
  
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
  FUN_032bd100(param_2,0x1c,*param_5,&local_48);
  uVar2 = *param_5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = param_3;
      puVar5 = puVar1;
      do {
        uVar7 = *puVar4;
        uVar8 = puVar4[1];
        lVar3 = lVar3 + 2;
        uVar6 = puVar4[2];
        *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar4 + 3);
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        *puVar5 = uVar7;
        uVar7 = *(undefined8 *)((long)puVar4 + 0x1c);
        uVar8 = *(undefined8 *)((long)puVar4 + 0x24);
        uVar6 = *(undefined8 *)((long)puVar4 + 0x2c);
        *(undefined4 *)((long)puVar5 + 0x34) = *(undefined4 *)((long)puVar4 + 0x34);
        *(undefined8 *)((long)puVar5 + 0x2c) = uVar6;
        *(undefined8 *)((long)puVar5 + 0x24) = uVar8;
        *(undefined8 *)((long)puVar5 + 0x1c) = uVar7;
        puVar5 = puVar5 + 7;
        puVar4 = puVar4 + 7;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar5 = (undefined8 *)((long)param_3 + lVar3 * 0x1c);
      puVar4 = (undefined8 *)((long)puVar1 + lVar3 * 0x1c);
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      uVar6 = puVar5[2];
      *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar5 + 3);
      puVar4[1] = uVar8;
      puVar4[2] = uVar6;
      *puVar4 = uVar7;
    }
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0x1c);
  }
  uVar2 = 0x3fffffff;
  if (local_48 < 0x6ffffffe4) {
    uVar2 = (uint)(local_48 / 0x1c);
  }
  *param_5 = uVar2;
  return puVar1;
}


