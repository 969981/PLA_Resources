/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a16c4; name: FUN_032a16c4
 */


void FUN_032a16c4(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  
  puVar5 = PTR_PTR_0434a080;
  uVar4 = *(int *)(param_1 + 0x1b0) * param_2;
  uVar6 = *(uint *)(param_1 + 0x1ac);
  uVar1 = uVar4 + 0xf & 0xfffffff0;
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar1) {
    uVar7 = *(undefined8 *)(param_1 + 0x1a0);
    uVar3 = *(undefined4 *)(param_1 + 0x1a8);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar6 = *(uint *)(param_1 + 0x1ac);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar6) {
      uVar2 = uVar6;
    }
    uVar7 = FUN_032bd1d4(puVar5,uVar2,1,uVar7,uVar3,(uint *)(param_1 + 0x1ac));
    *(undefined8 *)(param_1 + 0x1a0) = uVar7;
  }
  uVar6 = *(uint *)(param_1 + 0x1a8);
  if (uVar6 != uVar1) {
    *(uint *)(param_1 + 0x1a8) = uVar1;
    uVar6 = uVar1;
  }
  if (0 < (int)uVar4) {
    memset(*(void **)(param_1 + 0x1a0),0,(ulong)(uint)((int)(uVar4 + 0xf) >> 4) << 4);
    uVar6 = *(uint *)(param_1 + 0x1a8);
  }
  if (uVar6 != uVar4) {
    *(uint *)(param_1 + 0x1a8) = uVar4;
  }
  *(int *)(param_1 + 0x1e0) = param_2;
  return;
}


