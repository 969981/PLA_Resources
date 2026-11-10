/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186b14; name: FUN_03186b14
 */


undefined8 * FUN_03186b14(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_48;
  
  uVar6 = (ulong)param_4;
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
  FUN_032bd100(param_2,0x40,*param_5,&local_48);
  uVar2 = *param_5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    puVar3 = param_3;
    puVar4 = puVar1;
    do {
      uVar5 = puVar3[5];
      uVar6 = uVar6 - 1;
      puVar4[3] = puVar3[3];
      puVar4[5] = uVar5;
      puVar4[1] = puVar3[1];
      *puVar4 = *puVar3;
      uVar5 = puVar3[2];
      puVar4[4] = puVar3[4];
      puVar4[2] = uVar5;
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar3 + 6);
      puVar4 = puVar4 + 8;
      puVar3 = puVar3 + 8;
    } while (uVar6 != 0);
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) << 6);
  }
  if (local_48 < 0xfffffffc0) {
    uVar2 = (uint)(local_48 >> 6);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return puVar1;
}


