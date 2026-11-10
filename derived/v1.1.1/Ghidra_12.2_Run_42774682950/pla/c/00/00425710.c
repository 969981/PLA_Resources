/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00425710; name: FUN_00425710
 */


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00425710(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_1a0 [64];
  long local_160 [32];
  
  iVar3 = FUN_0040c1d0(param_3,4);
  if (((iVar3 != 0) || (iVar3 = FUN_0040c1d0(param_2,4), iVar3 != 0)) ||
     (iVar3 = FUN_0040c1d0(param_4,4), iVar3 != 0)) {
    FUN_004014b0(3,0x7d,0x42,"external/openssl/crypto/bn/bn_exp.c",0xaf);
    return 0;
  }
  iVar3 = FUN_0040c070(param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_0040d1e0(param_4,1);
    if (iVar3 == 0) {
      uVar5 = FUN_0040c6b0(param_1,1);
      return uVar5;
    }
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  FUN_0040e090(param_5);
  lVar7 = FUN_0040e240(param_5);
  lVar8 = FUN_0040e240(param_5);
  local_160[0] = lVar8;
  if (lVar8 != 0) {
    FUN_00426760(auStack_1a0);
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar4 = FUN_004267d0(auStack_1a0,param_4,param_5);
    }
    else {
      lVar9 = FUN_0040c5d0(lVar7,param_4);
      if (lVar9 == 0) goto LAB_00425b68;
      *(undefined4 *)(lVar7 + 0x10) = 0;
      iVar4 = FUN_004267d0(auStack_1a0,lVar7,param_5);
    }
    if ((0 < iVar4) && (iVar4 = FUN_00412c30(lVar8,param_2,param_4,param_5), iVar4 != 0)) {
      iVar4 = FUN_0040c130(lVar8);
      if (iVar4 != 0) {
        FUN_0040c6b0(param_1,0);
LAB_00425898:
        uVar5 = 1;
        goto LAB_00425b6c;
      }
      if (iVar3 < 0x2a0) {
        if (0xef < iVar3) {
          uVar12 = 5;
          goto LAB_004258f0;
        }
        if (0x4f < iVar3) {
          uVar12 = 4;
          goto LAB_004258f0;
        }
        if (0x17 < iVar3) {
          uVar12 = 3;
          goto LAB_004258f0;
        }
        uVar12 = 1;
      }
      else {
        uVar12 = 6;
LAB_004258f0:
        iVar4 = FUN_00426810(lVar7,lVar8,lVar8,auStack_1a0,param_5);
        if (iVar4 == 0) goto LAB_00425b68;
        uVar14 = 1 << (ulong)(uVar12 - 1 & 0x1f);
        if (1 < (int)uVar14) {
          plVar11 = local_160;
          lVar8 = (ulong)uVar14 - 1;
          do {
            plVar11 = plVar11 + 1;
            lVar9 = FUN_0040e240(param_5);
            *plVar11 = lVar9;
            if ((lVar9 == 0) ||
               (iVar4 = FUN_00426810(lVar9,plVar11[-1],lVar7,auStack_1a0,param_5), iVar4 == 0))
            goto LAB_00425b68;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      iVar4 = FUN_0040c6b0(param_1,1);
      lVar7 = local_160[0];
      if (iVar4 != 0) {
        iVar3 = iVar3 + -1;
        if (uVar12 < 2) {
          bVar2 = true;
          uVar5 = 1;
          do {
            iVar4 = FUN_0040cdc0(param_3,iVar3);
            if (iVar4 == 0) {
              if (bVar2) {
                do {
                  if (iVar3 == 0) goto LAB_00425898;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_0040cdc0(param_3,iVar3);
                } while (iVar4 == 0);
              }
              else {
                do {
                  iVar4 = FUN_00426810(param_1,param_1,param_1,auStack_1a0,param_5);
                  if (iVar4 == 0) goto LAB_00425b68;
                  if (iVar3 == 0) goto LAB_00425898;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_0040cdc0(param_3,iVar3);
                } while (iVar4 == 0);
              }
            }
            if (((!bVar2) &&
                (iVar4 = FUN_00426810(param_1,param_1,param_1,auStack_1a0,param_5), iVar4 == 0)) ||
               (iVar4 = FUN_00426810(param_1,param_1,lVar7,auStack_1a0,param_5), iVar4 == 0))
            goto LAB_00425b68;
            bVar2 = false;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        else {
          bVar2 = true;
          do {
            iVar4 = FUN_0040cdc0(param_3,iVar3);
            if (iVar4 == 0) {
              if (bVar2) {
                do {
                  if (iVar3 == 0) goto LAB_00425898;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_0040cdc0(param_3,iVar3);
                } while (iVar4 == 0);
              }
              else {
                do {
                  iVar4 = FUN_00426810(param_1,param_1,param_1,auStack_1a0,param_5);
                  if (iVar4 == 0) goto LAB_00425b68;
                  if (iVar3 == 0) goto LAB_00425898;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_0040cdc0(param_3,iVar3);
                } while (iVar4 == 0);
              }
            }
            uVar10 = 0;
            uVar13 = 1;
            uVar14 = 1;
            iVar4 = iVar3;
            do {
              iVar4 = iVar4 + -1;
              if (iVar4 < 0) break;
              iVar6 = FUN_0040cdc0(param_3,iVar4);
              uVar1 = uVar14 - uVar10;
              if (iVar6 != 0) {
                uVar10 = uVar14;
              }
              uVar14 = uVar14 + 1;
              if (iVar6 != 0) {
                uVar13 = uVar13 << (ulong)(uVar1 & 0x1f) | 1;
              }
            } while (uVar12 != uVar14);
            if ((!bVar2) && (-1 < (int)uVar10)) {
              iVar4 = uVar10 + 1;
              do {
                iVar6 = FUN_00426810(param_1,param_1,param_1,auStack_1a0,param_5);
                if (iVar6 == 0) goto LAB_00425b68;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar4 = FUN_00426810(param_1,param_1,local_160[(int)uVar13 >> 1],auStack_1a0,param_5);
            if (iVar4 == 0) goto LAB_00425b68;
            bVar2 = false;
            iVar3 = iVar3 + ~uVar10;
            uVar5 = 1;
          } while (-1 < iVar3);
        }
        goto LAB_00425b6c;
      }
    }
  }
LAB_00425b68:
  uVar5 = 0;
LAB_00425b6c:
  FUN_0040e1b0(param_5);
  FUN_00426790(auStack_1a0);
  return uVar5;
}


