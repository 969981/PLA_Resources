/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22960; name: FUN_02e22960
 */


undefined8 FUN_02e22960(int param_1,int param_2,int param_3,uint param_4,undefined8 *param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = 2;
  if (param_2 != 1) {
    iVar4 = 4;
  }
  iVar1 = (param_4 & 0xff) * iVar4;
  *param_5 = 0xffffffff46464952;
  param_5[1] = 0x20746d6645564157;
  uVar2 = (undefined2)(param_4 & 0xff);
  if (param_3 == 0) {
    *(undefined4 *)(param_5 + 2) = 0x28;
    *(undefined2 *)((long)param_5 + 0x16) = uVar2;
    *(undefined2 *)((long)param_5 + 0x14) = 0xfffe;
    *(short *)(param_5 + 4) = (short)iVar1;
    *(short *)((long)param_5 + 0x22) = (short)(iVar4 << 3);
    *(int *)(param_5 + 3) = param_1;
    *(int *)((long)param_5 + 0x1c) = iVar1 * param_1;
    *(undefined4 *)((long)param_5 + 0x24) = 0x16;
    *(uint *)(param_5 + 5) = param_4 >> 0xc;
    FUN_02e22e10(param_4,(long)param_5 + 0x2c);
    *(undefined4 *)((long)param_5 + 0x3c) = 0x61746164;
    puVar5 = param_5 + 8;
    uVar3 = 0x44;
  }
  else {
    *(undefined4 *)(param_5 + 2) = 0x18;
    *(undefined2 *)((long)param_5 + 0x16) = uVar2;
    *(undefined2 *)((long)param_5 + 0x14) = 0xfffe;
    *(undefined4 *)((long)param_5 + 0x24) = 0;
    *(uint *)(param_5 + 5) = param_4;
    *(int *)(param_5 + 3) = param_1;
    *(int *)((long)param_5 + 0x1c) = iVar1 * param_1;
    uVar3 = 0x34;
    *(short *)((long)param_5 + 0x22) = (short)(iVar4 << 3);
    puVar5 = param_5 + 6;
    *(short *)(param_5 + 4) = (short)iVar1;
    *(undefined4 *)((long)param_5 + 0x2c) = 0x61746164;
  }
  *(undefined4 *)puVar5 = 0;
  return uVar3;
}


