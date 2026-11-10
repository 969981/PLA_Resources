/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a39f0; name: FUN_030a39f0
 */


long FUN_030a39f0(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  FUN_032bd100(param_2,0x40,*param_5,&local_48);
  uVar2 = *param_5;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = (undefined8 *)(lVar1 + 0x40);
      puVar6 = (undefined8 *)(param_3 + 0x40);
      do {
        uVar5 = puVar6[-1];
        lVar3 = lVar3 + 2;
        puVar4[-3] = puVar6[-3];
        puVar4[-1] = uVar5;
        uVar5 = puVar6[-5];
        puVar4[-7] = puVar6[-7];
        puVar4[-5] = uVar5;
        uVar5 = puVar6[-8];
        puVar4[-6] = puVar6[-6];
        puVar4[-8] = uVar5;
        uVar5 = puVar6[-4];
        puVar4[-2] = puVar6[-2];
        puVar4[-4] = uVar5;
        uVar5 = puVar6[7];
        puVar4[5] = puVar6[5];
        puVar4[7] = uVar5;
        uVar5 = puVar6[3];
        puVar4[1] = puVar6[1];
        puVar4[3] = uVar5;
        uVar5 = puVar6[2];
        *puVar4 = *puVar6;
        puVar4[2] = uVar5;
        uVar5 = puVar6[6];
        puVar4[4] = puVar6[4];
        puVar4[6] = uVar5;
        puVar4 = puVar4 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar4 = (undefined8 *)(lVar1 + lVar3 * 0x40);
      puVar6 = (undefined8 *)(param_3 + lVar3 * 0x40);
      uVar5 = puVar6[7];
      puVar4[5] = puVar6[5];
      puVar4[7] = uVar5;
      uVar5 = puVar6[3];
      puVar4[1] = puVar6[1];
      puVar4[3] = uVar5;
      uVar5 = *puVar6;
      puVar4[2] = puVar6[2];
      *puVar4 = uVar5;
      uVar5 = puVar6[4];
      puVar4[6] = puVar6[6];
      puVar4[4] = uVar5;
    }
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
  return lVar1;
}


