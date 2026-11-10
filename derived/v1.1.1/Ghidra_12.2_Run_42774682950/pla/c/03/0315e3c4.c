/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e3c4; name: FUN_0315e3c4
 */


void FUN_0315e3c4(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  puVar5 = PTR_PTR_0434a080;
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    puVar7 = (uint *)(param_1 + 0x6c);
    uVar6 = *puVar7;
    uVar4 = *(uint *)(param_1 + 0x68);
    uVar1 = uVar4 + param_2;
    if ((int)(uVar6 & 0x3fffffff) < (int)uVar1) {
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar6 = *puVar7;
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar6) {
        uVar3 = uVar6;
      }
      uVar8 = FUN_032bd1d4(puVar5,uVar3,1,uVar8,uVar4,puVar7);
      uVar4 = *(uint *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar8;
      iVar2 = uVar4 - uVar1;
    }
    else {
      iVar2 = uVar4 - uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      *(uint *)(param_1 + 0x68) = uVar1;
      memset((void *)(*(long *)(param_1 + 0x60) + (long)(int)uVar4),0xff,(ulong)(uVar1 + ~uVar4) + 1
            );
      return;
    }
    if (uVar4 != uVar1 && iVar2 < 0 == SBORROW4(uVar4,uVar1)) {
      *(uint *)(param_1 + 0x68) = uVar1;
    }
  }
  return;
}


