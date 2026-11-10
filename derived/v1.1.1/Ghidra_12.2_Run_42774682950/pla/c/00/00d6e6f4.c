/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6e6f4; name: FUN_00d6e6f4
 */


void FUN_00d6e6f4(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  puVar3 = *(uint **)(*(long *)(param_1 + 0x60) + 0x250);
  uVar5 = *puVar3;
  *(undefined4 *)(param_1 + 0x90) = 0;
  puVar3 = (uint *)((long)puVar3 + (ulong)uVar5);
  *(uint **)(param_1 + 0x88) = puVar3;
  uVar4 = (ulong)(int)*puVar3;
  uVar2 = ((ushort *)((long)puVar3 - uVar4))[2];
  if ((*(ushort *)((long)puVar3 - uVar4) < 5) || (uVar2 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)puVar3 + (ulong)uVar2);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  puVar1 = (uint *)((long)puVar3 + (ulong)uVar2);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  if (puVar6 != puVar1 + *puVar1) {
    uVar5 = 0;
    do {
      puVar6 = puVar6 + 1;
      uVar7 = (ulong)*puVar6;
      lVar8 = uVar7 - (long)*(int *)((long)puVar6 + uVar7);
      if (((*(ushort *)((long)puVar6 + lVar8) < 5) ||
          (uVar9 = (ulong)*(ushort *)((long)puVar6 + lVar8 + 4), uVar9 == 0)) ||
         (*(long *)((long)puVar6 + uVar7 + uVar9) != -0x5098ffb379f8bd48)) {
        uVar5 = uVar5 + 1;
        *(uint *)(param_1 + 0x90) = uVar5;
        uVar4 = (ulong)*puVar3;
      }
      puVar1 = (uint *)((long)puVar3 + (ulong)*(ushort *)((long)puVar3 + (4 - (long)(int)uVar4)));
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    } while (puVar6 != puVar1 + *puVar1);
    if (0x100 < uVar5) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


