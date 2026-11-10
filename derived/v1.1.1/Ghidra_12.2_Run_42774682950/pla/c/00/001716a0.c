/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001716a0; name: FUN_001716a0
 */


undefined8 FUN_001716a0(undefined8 param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  
  if ((int)param_3[1] == 0x13) {
    uVar4 = *param_3;
    if ((((uVar4 < 0x80000001) && (0 < (long)uVar4)) && ((uint)uVar4 != 0)) &&
       (uVar7 = *(uint *)(param_2 + 0xc), (uint)uVar4 <= uVar7)) goto LAB_00171778;
  }
  else if ((int)param_3[1] == 0) {
    uVar7 = *(uint *)(param_2 + 0xc);
    uVar4 = 0;
    goto LAB_00171778;
  }
  lVar3 = FUN_001721e0(param_2,param_3);
  while( true ) {
    iVar2 = FUN_00175d10(0,(ulong *)(lVar3 + 0x10),param_3);
    if ((iVar2 != 0) ||
       (((*(int *)(lVar3 + 0x18) == 10 && (((byte)param_3[1] >> 6 & 1) != 0)) &&
        (*(ulong *)(lVar3 + 0x10) == *param_3)))) break;
    if (*(int *)(lVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"invalid key to \'next\'");
    }
    lVar3 = lVar3 + (long)*(int *)(lVar3 + 0x1c) * 0x20;
  }
  uVar7 = *(uint *)(param_2 + 0xc);
  uVar4 = (ulong)(uVar7 + (int)((ulong)(lVar3 - *(long *)(param_2 + 0x18)) >> 5) + 1);
LAB_00171778:
  uVar4 = uVar4 & 0xffffffff;
  uVar8 = uVar4 << 4 | 8;
  do {
    if (uVar7 <= uVar4) {
      uVar4 = -uVar7 + uVar4;
      iVar2 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
      if (iVar2 <= (int)uVar4) {
        return 0;
      }
      while (*(int *)(*(long *)(param_2 + 0x18) + (uVar4 & 0xffffffff) * 0x20 + 8) == 0) {
        uVar7 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar7;
        if (iVar2 <= (int)uVar7) {
          return 0;
        }
      }
      lVar5 = (uVar4 & 0xffffffff) * 0x20;
      lVar3 = *(long *)(param_2 + 0x18) + lVar5;
      uVar4 = *(ulong *)(lVar3 + 0x18);
      *param_3 = *(ulong *)(lVar3 + 0x10);
      param_3[1] = uVar4;
      puVar6 = (ulong *)(*(long *)(param_2 + 0x18) + lVar5);
      goto LAB_00171824;
    }
    uVar4 = uVar4 + 1;
    piVar1 = (int *)(*(long *)(param_2 + 0x10) + uVar8);
    uVar8 = uVar8 + 0x10;
  } while (*piVar1 == 0);
  *param_3 = uVar4 & 0xffffffff;
  *(undefined4 *)(param_3 + 1) = 0x13;
  puVar6 = (ulong *)(*(long *)(param_2 + 0x10) + (ulong)((int)uVar4 - 1) * 0x10);
LAB_00171824:
  uVar4 = puVar6[1];
  param_3[2] = *puVar6;
  param_3[3] = uVar4;
  return 1;
}


