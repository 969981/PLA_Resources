/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318a008; name: FUN_0318a008
 */


long FUN_0318a008(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_48;
  
  uVar7 = (ulong)param_4;
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
  FUN_032bd100(param_2,0x30,*param_5,&local_48);
  uVar3 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    puVar4 = (undefined1 *)(param_3 + 0x28);
    puVar5 = (undefined1 *)(lVar2 + 0x28);
    do {
      uVar6 = *(undefined8 *)(puVar4 + -0x10);
      uVar7 = uVar7 - 1;
      uVar1 = *(undefined4 *)(puVar4 + -8);
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar5 + -0x10) = uVar6;
      *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
      uVar6 = *(undefined8 *)(puVar4 + -0x18);
      *(undefined4 *)(puVar5 + -8) = uVar1;
      *(undefined8 *)(puVar5 + -0x18) = uVar6;
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar4 + -4);
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 0x30;
      puVar5 = puVar5 + 0x30;
    } while (uVar7 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) * 0x30);
  }
  if (local_48 < 0xbffffffd0) {
    uVar3 = (uint)(local_48 / 0x30);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


