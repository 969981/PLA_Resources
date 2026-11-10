/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a3254; name: FUN_030a3254
 */


undefined8 *
FUN_030a3254(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

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
  FUN_032bd100(param_2,0x70,*param_5,&local_48);
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
        uVar4 = puVar5[0xd];
        lVar3 = lVar3 + 2;
        puVar6[0xb] = puVar5[0xb];
        puVar6[0xd] = uVar4;
        uVar4 = puVar5[9];
        puVar6[7] = puVar5[7];
        puVar6[9] = uVar4;
        uVar4 = puVar5[5];
        puVar6[3] = puVar5[3];
        puVar6[5] = uVar4;
        puVar6[1] = puVar5[1];
        *puVar6 = *puVar5;
        uVar4 = puVar5[2];
        puVar6[4] = puVar5[4];
        puVar6[2] = uVar4;
        uVar4 = puVar5[6];
        puVar6[8] = puVar5[8];
        puVar6[6] = uVar4;
        uVar4 = puVar5[10];
        puVar6[0xc] = puVar5[0xc];
        puVar6[10] = uVar4;
        uVar4 = puVar5[0x1b];
        puVar6[0x19] = puVar5[0x19];
        puVar6[0x1b] = uVar4;
        uVar4 = puVar5[0x17];
        puVar6[0x15] = puVar5[0x15];
        puVar6[0x17] = uVar4;
        uVar4 = puVar5[0x13];
        puVar6[0x11] = puVar5[0x11];
        puVar6[0x13] = uVar4;
        puVar6[0xf] = puVar5[0xf];
        puVar6[0xe] = puVar5[0xe];
        uVar4 = puVar5[0x10];
        puVar6[0x12] = puVar5[0x12];
        puVar6[0x10] = uVar4;
        uVar4 = puVar5[0x14];
        puVar6[0x16] = puVar5[0x16];
        puVar6[0x14] = uVar4;
        uVar4 = puVar5[0x18];
        puVar6[0x1a] = puVar5[0x1a];
        puVar6[0x18] = uVar4;
        puVar6 = puVar6 + 0x1c;
        puVar5 = puVar5 + 0x1c;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar6 = puVar1 + lVar3 * 0xe;
      puVar5 = param_3 + lVar3 * 0xe;
      uVar4 = puVar5[0xd];
      puVar6[0xb] = puVar5[0xb];
      puVar6[0xd] = uVar4;
      uVar4 = puVar5[9];
      puVar6[7] = puVar5[7];
      puVar6[9] = uVar4;
      uVar4 = puVar5[5];
      puVar6[3] = puVar5[3];
      puVar6[5] = uVar4;
      puVar6[1] = puVar5[1];
      *puVar6 = *puVar5;
      uVar4 = puVar5[2];
      puVar6[4] = puVar5[4];
      puVar6[2] = uVar4;
      uVar4 = puVar5[6];
      puVar6[8] = puVar5[8];
      puVar6[6] = uVar4;
      uVar4 = puVar5[10];
      puVar6[0xc] = puVar5[0xc];
      puVar6[10] = uVar4;
    }
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0x70);
  }
  uVar2 = 0x3fffffff;
  if (local_48 < 0x1bffffff90) {
    uVar2 = (uint)(local_48 / 0x70);
  }
  *param_5 = uVar2;
  return puVar1;
}


