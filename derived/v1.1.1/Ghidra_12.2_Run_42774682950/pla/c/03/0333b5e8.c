/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333b5e8; name: FUN_0333b5e8
 */


uint FUN_0333b5e8(long param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  puVar3 = PTR_PTR_0434a080;
  uVar7 = *(uint *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar1 = uVar2 + 1;
  if ((int)uVar2 < (int)(uVar7 & 0x3fffffff)) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar7 = uVar2;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (0x3ffffffe < (int)uVar2) {
      FUN_032bd0a8(iVar1);
      uVar7 = *(uint *)(param_1 + 0x24);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    if ((int)uVar7 < iVar1) {
      uVar7 = uVar2 + 1;
    }
    lVar4 = FUN_032bd1d4(puVar3,uVar7,0x18,uVar5,uVar2);
    uVar7 = *(uint *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar4;
  }
  puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar7 * 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  *puVar6 = param_2;
  *(undefined2 *)(puVar6 + 1) = param_3;
  *(undefined1 *)((long)puVar6 + 0xb) = param_4;
  *(undefined1 *)((long)puVar6 + 10) = param_5;
  puVar6[2] = 0;
  return uVar2 & 0xffff;
}


