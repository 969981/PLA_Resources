/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031022dc; name: FUN_031022dc
 */


undefined8 * FUN_031022dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  uVar5 = param_2[5];
  uVar1 = param_2[6];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  param_1[5] = uVar5;
  param_1[6] = uVar1;
  uVar5 = param_2[9];
  uVar1 = param_2[10];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  param_1[9] = uVar5;
  param_1[10] = uVar1;
  lVar3 = param_1[0xd];
  lVar4 = param_2[0xd];
  if (lVar3 != lVar4) {
    uVar5 = 0;
    if (lVar4 != 0) {
      FUN_032d645c(lVar4);
      lVar3 = param_1[0xd];
      uVar5 = param_2[0xd];
    }
    param_1[0xd] = uVar5;
    if (lVar3 != 0) {
      FUN_032d647c();
    }
  }
  lVar3 = param_1[0xe];
  lVar4 = param_2[0xe];
  if (lVar3 != lVar4) {
    uVar5 = 0;
    if (lVar4 != 0) {
      FUN_032d645c(lVar4);
      lVar3 = param_1[0xe];
      uVar5 = param_2[0xe];
    }
    param_1[0xe] = uVar5;
    if (lVar3 != 0) {
      FUN_032d647c();
    }
  }
  uVar5 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar5;
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  uVar5 = *(undefined8 *)((long)param_2 + 0x8c);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  *(undefined8 *)((long)param_1 + 0x8c) = uVar5;
  uVar5 = param_2[0x13];
  uVar1 = param_2[0x14];
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar2;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar1;
  return param_1;
}


