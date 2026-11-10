/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d01c48; name: FUN_00d01c48
 */


void FUN_00d01c48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_2 + 0x30);
  puVar3 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,0x2a0,0x10);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar5 + 0xb8))();
  }
  *param_1 = puVar3;
  param_1[1] = puVar5;
  puVar3[2] = *param_4;
  uVar4 = *param_5;
  uVar1 = *(undefined4 *)(param_5 + 1);
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar4;
  puVar3[6] = 0;
  FUN_008c4b3c(puVar3 + 6,param_5 + 2);
  uVar4 = param_5[7];
  uVar1 = *(undefined4 *)(param_5 + 8);
  puVar3[9] = param_5[5];
  puVar3[0xb] = uVar4;
  puVar3[8] = param_5[4];
  uVar4 = param_5[6];
  *(undefined4 *)(puVar3 + 0xc) = uVar1;
  puVar3[10] = uVar4;
  memcpy(puVar3 + 0xe,param_5 + 10,0x200);
  puVar3[0x4e] = 0;
  puVar3[0x4f] = 0;
  FUN_008c4b3c(puVar3 + 0x4e,param_5 + 0x4a);
  uVar2 = *(undefined1 *)(param_5 + 0x4c);
  puVar3[0x52] = 0;
  *(undefined1 *)(puVar3 + 0x50) = uVar2;
  puVar3[0x51] = 0;
  FUN_00d00a64(puVar3 + 0x51,param_5 + 0x4d);
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = param_3;
  return;
}


