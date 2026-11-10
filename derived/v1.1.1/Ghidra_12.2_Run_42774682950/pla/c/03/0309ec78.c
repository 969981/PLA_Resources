/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309ec78; name: FUN_0309ec78
 */


undefined8 *
FUN_0309ec78(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
  FUN_032bd100(param_2,0xc,*param_5,&local_48);
  uVar2 = *param_5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar5 = param_3;
      puVar6 = puVar1;
      do {
        uVar4 = *puVar5;
        lVar3 = lVar3 + 2;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar6 = uVar4;
        uVar4 = *(undefined8 *)((long)puVar5 + 0xc);
        *(undefined4 *)((long)puVar6 + 0x14) = *(undefined4 *)((long)puVar5 + 0x14);
        *(undefined8 *)((long)puVar6 + 0xc) = uVar4;
        puVar6 = puVar6 + 3;
        puVar5 = puVar5 + 3;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar6 = (undefined8 *)((long)puVar1 + lVar3 * 0xc);
      puVar5 = (undefined8 *)((long)param_3 + lVar3 * 0xc);
      uVar4 = *puVar5;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
      *puVar6 = uVar4;
    }
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0xc);
  }
  uVar2 = 0x3fffffff;
  if (local_48 < 0x2fffffff4) {
    uVar2 = (uint)(local_48 / 0xc);
  }
  *param_5 = uVar2;
  return puVar1;
}


