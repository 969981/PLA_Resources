/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02579ebc; name: FUN_02579ebc
 */


void FUN_02579ebc(long param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  short *psVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  long lVar12;
  
  psVar6 = *(short **)(param_1 + 0x5c0);
  lVar4 = *(long *)(param_1 + 0x5c8) - (long)psVar6;
  if (lVar4 != 0) {
    uVar10 = (lVar4 >> 1) * -0x5555555555555555;
    if (*(short *)(param_1 + 0x5b6) == 0) {
      uVar9 = (ulong)*(uint *)(param_1 + 0x6f8);
      uVar1 = uVar9;
joined_r0x0257a0e0:
      if (uVar10 <= uVar1) {
LAB_0257a0e4:
        iVar8 = (int)uVar10;
        goto LAB_0257a094;
      }
    }
    else {
      uVar9 = 0;
      psVar11 = psVar6;
      do {
        if (*psVar11 == *(short *)(param_1 + 0x5b6)) {
          *(int *)(param_1 + 0x6f8) = (int)uVar9;
          uVar1 = uVar9 & 0xffffffff;
          goto joined_r0x0257a0e0;
        }
        uVar9 = uVar9 + 1;
        psVar11 = psVar11 + 3;
      } while (uVar9 < uVar10);
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x6f8) = 0;
      if (uVar10 == 0) goto LAB_0257a0e4;
    }
    do {
      iVar8 = (int)uVar9;
      if (psVar6[(uVar9 & 0xffffffff) * 3] == 0) {
        if (iVar8 == 0) goto LAB_02579f30;
      }
      else if ((iVar8 == 0) || (psVar6[(uVar9 & 0xffffffff) * 3 + 1] != 0)) goto LAB_02579f30;
LAB_0257a094:
      uVar9 = (ulong)(iVar8 - 1U);
      *(uint *)(param_1 + 0x6f8) = iVar8 - 1U;
    } while( true );
  }
  bVar2 = false;
  goto LAB_02579f44;
LAB_02579f30:
  if (*(char *)(param_1 + 0x745) != '\0') {
    *(undefined4 *)(param_1 + 0x6f8) = 0;
  }
  bVar2 = *(int *)(param_1 + 0x5ac) == 0;
LAB_02579f44:
  lVar7 = *(long *)(param_1 + 0x630);
  lVar4 = *(long *)(param_1 + 0x638) - lVar7;
  if (lVar4 == 0) {
    if (!bVar2) goto LAB_0257a100;
  }
  else {
    if (*(long *)(param_1 + 0x748) == 0) {
      *(undefined4 *)(param_1 + 0x6fc) = 0;
    }
    else {
      lVar12 = 0;
      uVar10 = 0;
      lVar3 = param_1;
      do {
        lVar3 = FUN_025788d4(lVar3,*(undefined4 *)(lVar7 + lVar12));
        if ((lVar3 != 0) && (*(long *)(param_1 + 0x748) == lVar3)) {
          *(int *)(param_1 + 0x6fc) = (int)uVar10;
          goto LAB_02579fd8;
        }
        lVar7 = *(long *)(param_1 + 0x630);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 8;
      } while (uVar10 < (ulong)(lVar4 >> 3));
      lVar4 = FUN_025788d4(lVar3,*(undefined4 *)(lVar7 + (ulong)*(uint *)(param_1 + 0x6fc) * 8));
      if (lVar4 == 0) {
        iVar8 = *(int *)(param_1 + 0x6fc);
        do {
          *(uint *)(param_1 + 0x6fc) = iVar8 - 1U;
          lVar4 = FUN_025788d4(0,*(undefined4 *)
                                  (*(long *)(param_1 + 0x630) + (ulong)(iVar8 - 1U) * 8));
          if (lVar4 != 0) break;
          iVar8 = *(int *)(param_1 + 0x6fc);
        } while (iVar8 != 0);
      }
    }
LAB_02579fd8:
    if (!bVar2 && *(int *)(param_1 + 0x5ac) != 1) {
LAB_0257a100:
      FUN_0257c55c(param_1,0);
      goto LAB_0257a030;
    }
  }
  FUN_0257c55c(param_1,1);
  FUN_02577adc(param_1);
  FUN_025786c0(param_1);
  if (*(int *)(param_1 + 0x5ac) == 0) {
    FUN_02577d38(param_1);
  }
  else {
    FUN_02578a10(param_1);
  }
  FUN_02579328(param_1);
  FUN_0257a184(param_1);
  FUN_0257a418(param_1);
LAB_0257a030:
  lVar4 = 0x742;
  if (*(int *)(param_1 + 0x5ac) != 0) {
    lVar4 = 0x743;
  }
  uVar5 = FUN_0257c6a4(param_1,*(undefined1 *)(param_1 + lVar4));
  if (*(long *)(param_1 + 0x630) != *(long *)(param_1 + 0x638)) {
    uVar5 = FUN_025788d4(uVar5,*(undefined4 *)
                                (*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8)
                        );
    *(undefined8 *)(param_1 + 0x748) = uVar5;
  }
  return;
}


