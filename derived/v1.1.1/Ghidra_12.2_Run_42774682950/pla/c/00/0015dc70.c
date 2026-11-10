/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015dc70; name: FUN_0015dc70
 */


void FUN_0015dc70(long param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if ((long)*(ulong *)(lVar8 + 0x18) < 1) {
    lVar7 = 0;
    cVar2 = *(char *)(lVar8 + 0x57);
  }
  else {
    lVar7 = (long)*(int *)(lVar8 + 0xb8);
    lVar4 = 0;
    if (lVar7 != 0) {
      lVar4 = 0x7fffffffffffffff / lVar7;
    }
    lVar1 = *(ulong *)(lVar8 + 0x18) / 200 + 1;
    lVar7 = lVar1 * lVar7;
    if (lVar4 <= lVar1) {
      lVar7 = 0x7fffffffffffffff;
    }
    cVar2 = *(char *)(lVar8 + 0x57);
  }
  if (cVar2 == '\0') {
    lVar7 = -24000;
  }
  else {
    do {
      lVar4 = FUN_0015d050(param_1);
      lVar7 = lVar7 - lVar4;
      if (lVar7 < -0x95f) {
        if (*(char *)(lVar8 + 0x55) != '\a') {
          lVar4 = 0;
          if ((long)*(int *)(lVar8 + 0xb8) != 0) {
            lVar4 = lVar7 / (long)*(int *)(lVar8 + 0xb8);
          }
          FUN_0016ca20(lVar8,lVar4 * 200);
          lVar8 = *(long *)(param_1 + 0x18);
          iVar5 = 0;
          if (*(long *)(lVar8 + 0x98) == 0) goto LAB_0015ddc4;
          uVar9 = 0xffffffff;
          goto LAB_0015dd98;
        }
        break;
      }
    } while (*(char *)(lVar8 + 0x55) != '\a');
    uVar6 = *(ulong *)(lVar8 + 0x28) / 100;
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = 0x7fffffffffffffff / uVar6;
    }
    lVar7 = -0x7fffffffffffffff;
    if ((long)*(int *)(lVar8 + 0xb4) < (long)uVar3) {
      lVar7 = -(uVar6 * (long)*(int *)(lVar8 + 0xb4));
    }
    lVar7 = *(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10) + lVar7;
  }
  FUN_0016ca20(lVar8,lVar7);
  return;
  while (FUN_0015df60(param_1,1), *(long *)(lVar8 + 0x98) != 0) {
LAB_0015dd98:
    uVar9 = uVar9 + 1;
    if (*(uint *)(lVar8 + 0xb0) <= uVar9) {
      iVar5 = *(uint *)(lVar8 + 0xb0) << 1;
      goto LAB_0015ddc4;
    }
  }
  iVar5 = 0;
LAB_0015ddc4:
  *(int *)(lVar8 + 0xb0) = iVar5;
  return;
}


