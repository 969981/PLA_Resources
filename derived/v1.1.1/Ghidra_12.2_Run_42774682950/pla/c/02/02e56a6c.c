/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56a6c; name: FUN_02e56a6c
 */


void FUN_02e56a6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_24 [4];
  
  lVar1 = FUN_02e57390(param_1 + 0x18,param_2,auStack_24);
  if (lVar1 != 0) {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(param_4 + 3);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)((long)param_4 + 0x1c);
    uVar3 = *(undefined8 *)((long)param_4 + 0x24);
    *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)((long)param_4 + 0x2c);
    *(undefined8 *)(lVar1 + 0x34) = uVar3;
    *(undefined8 *)(lVar1 + 0x2c) = uVar2;
    FUN_02e437f0(lVar1 + 0x40);
    uVar2 = param_4[6];
    *(undefined1 *)(lVar1 + 0x48) = 1;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    param_4[6] = 0;
    *(undefined1 *)(param_4 + 7) = 0;
    *(undefined8 *)(lVar1 + 8) = param_3;
  }
  return;
}


