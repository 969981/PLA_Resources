/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173a20; name: FUN_00173a20
 */


void FUN_00173a20(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,int param_6)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = param_2[1];
  lVar5 = *(long *)(param_1 + 0x38);
  *puVar3 = *param_2;
  puVar3[1] = uVar1;
  uVar1 = param_3[1];
  puVar3[2] = *param_3;
  puVar3[3] = uVar1;
  uVar1 = param_4[1];
  puVar3[4] = *param_4;
  puVar3[5] = uVar1;
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(lVar4 + 0x30);
  if (param_6 == 0) {
    *(long *)(param_1 + 0x10) = lVar4 + 0x40;
    uVar1 = param_5[1];
    *(undefined8 *)(lVar4 + 0x30) = *param_5;
    *(undefined8 *)(lVar4 + 0x38) = uVar1;
    bVar2 = *(byte *)(*(long *)(param_1 + 0x20) + 0x42);
  }
  else {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x20) + 0x42);
  }
  if ((bVar2 >> 1 & 1) == 0) {
    FUN_0015b160(param_1,puVar3,param_6);
  }
  else {
    FUN_0015b0e0(param_1,puVar3,param_6);
  }
  if (param_6 != 0) {
    param_5 = (undefined8 *)((long)param_5 + (*(long *)(param_1 + 0x38) - lVar5));
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar4 + -0x10;
    uVar1 = *(undefined8 *)(lVar4 + -8);
    *param_5 = *(undefined8 *)(lVar4 + -0x10);
    param_5[1] = uVar1;
  }
  return;
}


