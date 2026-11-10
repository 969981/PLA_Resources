/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03100908; name: FUN_03100908
 */


undefined8 *
FUN_03100908(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_032bd100(param_2,0x3c,*param_5,&local_48);
  uVar3 = *param_5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      puVar5 = param_3;
      puVar6 = puVar2;
      do {
        uVar8 = *puVar5;
        uVar9 = puVar5[1];
        lVar4 = lVar4 + 2;
        uVar7 = puVar5[3];
        puVar6[2] = puVar5[2];
        puVar6[3] = uVar7;
        *puVar6 = uVar8;
        puVar6[1] = uVar9;
        uVar7 = puVar5[6];
        uVar8 = puVar5[4];
        uVar9 = puVar5[5];
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar5 + 7);
        puVar6[5] = uVar9;
        puVar6[6] = uVar7;
        puVar6[4] = uVar8;
        uVar8 = *(undefined8 *)((long)puVar5 + 100);
        uVar9 = *(undefined8 *)((long)puVar5 + 0x6c);
        uVar1 = *(undefined4 *)((long)puVar5 + 0x74);
        *(undefined8 *)((long)puVar6 + 0x5c) = *(undefined8 *)((long)puVar5 + 0x5c);
        *(undefined4 *)((long)puVar6 + 0x74) = uVar1;
        *(undefined8 *)((long)puVar6 + 0x6c) = uVar9;
        *(undefined8 *)((long)puVar6 + 100) = uVar8;
        uVar8 = *(undefined8 *)((long)puVar5 + 0x3c);
        uVar9 = *(undefined8 *)((long)puVar5 + 0x44);
        uVar7 = *(undefined8 *)((long)puVar5 + 0x4c);
        *(undefined8 *)((long)puVar6 + 0x54) = *(undefined8 *)((long)puVar5 + 0x54);
        *(undefined8 *)((long)puVar6 + 0x4c) = uVar7;
        *(undefined8 *)((long)puVar6 + 0x44) = uVar9;
        *(undefined8 *)((long)puVar6 + 0x3c) = uVar8;
        puVar6 = puVar6 + 0xf;
        puVar5 = puVar5 + 0xf;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar4);
    }
    if ((param_4 & 1) != 0) {
      puVar6 = (undefined8 *)((long)param_3 + lVar4 * 0x3c);
      puVar5 = (undefined8 *)((long)puVar2 + lVar4 * 0x3c);
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      uVar7 = puVar6[3];
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar7;
      *puVar5 = uVar8;
      puVar5[1] = uVar9;
      uVar7 = puVar6[6];
      uVar8 = puVar6[4];
      uVar9 = puVar6[5];
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar6 + 7);
      puVar5[5] = uVar9;
      puVar5[6] = uVar7;
      puVar5[4] = uVar8;
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) * 0x3c);
  }
  uVar3 = 0x3fffffff;
  if (local_48 < 0xeffffffc4) {
    uVar3 = (uint)(local_48 / 0x3c);
  }
  *param_5 = uVar3;
  return puVar2;
}


