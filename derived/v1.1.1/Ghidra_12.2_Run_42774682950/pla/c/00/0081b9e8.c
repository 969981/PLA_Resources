/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081b9e8; name: FUN_0081b9e8
 */


undefined8 * FUN_0081b9e8(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)FUN_0081bed8();
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar1 = (long)puVar3 + (ulong)*(ushort *)((long)puVar3 + 0x12) + 0x20;
  param_2 = (ulong)(((int)puVar3[3] - (int)param_2) + (int)lVar1 & param_3 - 1U) + param_2;
  uVar4 = puVar3[3] - param_2;
  if (uVar4 < 0x21) {
    *(short *)((long)puVar3 + 0x12) = (short)uVar4;
    if ((uVar4 & 0xffff) != 0) {
      *(long *)((long)puVar3 + (uVar4 & 0xffff) + 0x18) = (long)puVar3 + 1;
    }
    puVar3[3] = param_2;
    FUN_0081aac8((long)*(int *)(param_1 + 0xec) + (long)puVar3);
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    lVar1 = (long)*(int *)(param_1 + 0x104) + (long)puVar3;
  }
  else {
    puVar3[3] = uVar4 - 0x20;
    puVar3 = (undefined8 *)((uVar4 - 0x20) + lVar1);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = param_2;
    iVar2 = *(int *)(param_1 + 0x88);
    lVar1 = (long)puVar3 + (long)*(int *)(param_1 + 0x104);
  }
  if (iVar2 == 1) {
    FUN_0081aab0();
  }
  else {
    FUN_0081aa98(param_1 + 0xf0,lVar1);
  }
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return puVar3;
}


