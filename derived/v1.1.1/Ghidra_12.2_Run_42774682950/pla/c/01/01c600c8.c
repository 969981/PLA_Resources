/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c600c8; name: FUN_01c600c8
 */


void FUN_01c600c8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  int local_244;
  int local_240 [128];
  
  uVar7 = **(uint **)(param_1 + 0x240);
  if (0x7f < uVar7) {
    uVar7 = 0x80;
  }
  uVar1 = *(uint *)(param_1 + 0x238);
  if (uVar7 < uVar1) {
    *(uint *)(param_1 + 0x238) = uVar7;
    uVar1 = uVar7;
  }
  if (uVar7 != 0) {
    uVar5 = (ulong)uVar7;
    uVar2 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      piVar6 = local_240 + 2;
      do {
        iVar3 = (int)lVar4;
        piVar6[-2] = iVar3;
        piVar6[-1] = iVar3 + 1;
        lVar4 = lVar4 + 4;
        *piVar6 = iVar3 + 2;
        piVar6[1] = iVar3 + 3;
        piVar6 = piVar6 + 4;
      } while (uVar5 - uVar2 != lVar4);
    }
    if ((uVar7 & 3) != 0) {
      do {
        local_240[lVar4] = (int)lVar4;
        lVar4 = lVar4 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f8);
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      uVar7 = uVar7 - 1;
      uVar2 = FUN_01c61c60(uVar7);
      local_244 = local_240[uVar2 & 0xffffffff];
      local_240[uVar2 & 0xffffffff] = local_240[uVar7];
      FUN_01c61d94(param_1 + 0x2f8,&local_244);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x238));
  }
  return;
}


