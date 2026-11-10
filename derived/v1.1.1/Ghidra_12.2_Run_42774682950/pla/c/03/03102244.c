/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03102244; name: FUN_03102244
 */


void FUN_03102244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  lVar4 = param_2[0xd];
  param_1[0xd] = lVar4;
  if (lVar4 != 0) {
    FUN_032d645c();
  }
  lVar4 = param_2[0xe];
  param_1[0xe] = lVar4;
  if (lVar4 != 0) {
    FUN_032d645c();
  }
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar3;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  uVar1 = param_2[0x13];
  uVar2 = param_2[0x14];
  uVar3 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar3;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  return;
}


