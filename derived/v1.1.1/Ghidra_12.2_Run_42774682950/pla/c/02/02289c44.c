/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02289c44; name: FUN_02289c44
 */


void FUN_02289c44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0214fe70();
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  uVar2 = param_3[3];
  param_3[3] = 0;
  puVar1[3] = uVar2;
  uVar2 = param_3[0xd];
  puVar1[0xf] = param_3[0xf];
  puVar1[0xd] = uVar2;
  uVar2 = param_3[9];
  puVar1[0xb] = param_3[0xb];
  puVar1[9] = uVar2;
  uVar2 = param_3[5];
  puVar1[7] = param_3[7];
  puVar1[5] = uVar2;
  uVar2 = param_3[4];
  puVar1[6] = param_3[6];
  puVar1[4] = uVar2;
  uVar2 = param_3[8];
  puVar1[10] = param_3[10];
  puVar1[8] = uVar2;
  uVar2 = param_3[0xc];
  puVar1[0xe] = param_3[0xe];
  puVar1[0xc] = uVar2;
  puVar1[0x10] = param_3[0x10];
  puVar1[0x11] = param_3[0x11];
  puVar1[0x12] = param_3[0x12];
  uVar2 = param_3[0x13];
  param_3[0x13] = 0;
  puVar1[0x13] = uVar2;
  puVar1[0x14] = param_3[0x14];
  FUN_0215000c(param_2);
  return;
}


