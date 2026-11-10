/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004de470; name: FUN_004de470
 */


undefined8 FUN_004de470(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  ushort local_44 [2];
  
  if (param_3 != 0) {
    if ((*(int *)(param_3 + 0xc) != 0) &&
       (lVar6 = FUN_004bda40(*(undefined4 *)(param_3 + 0x10)), lVar6 == 0)) {
      return 0;
    }
    uVar3 = *(uint *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60);
    if ((((uVar3 >> 3 & 1) != 0) ||
        ((((iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304 || (iVar4 == 0x10000)) ||
          (*(int *)(param_3 + 0x14) != 0x74)) &&
         (((*(int *)(param_1 + 0x38) != 0 || (uVar3 & 8) != 0 ||
           (*(int *)(*(long *)(param_1 + 0xa8) + 0x33c) < 0x304)) ||
          ((*(int *)(param_3 + 0x14) != 0x74 &&
           ((10 < *(uint *)(param_3 + 0x10) ||
            ((1 << (ulong)(*(uint *)(param_3 + 0x10) & 0x1f) & 0x403U) == 0)))))))))) &&
       (iVar4 = FUN_004bf8e0((long)*(int *)(param_3 + 0x18)), iVar4 == 0)) {
      if ((*(int *)(param_3 + 0x14) - 0x3d3U < 2) || (*(int *)(param_3 + 0x14) == 0x32b)) {
        piVar9 = *(int **)(param_1 + 8);
        if (*(int *)(param_1 + 0x38) == 0) {
          if ((*piVar9 == 0x10000) && (0x303 < *(int *)(*(long *)(param_1 + 0xa8) + 0x340))) {
            if (0x303 < *(int *)(*(long *)(param_1 + 0xa8) + 0x33c)) {
              return 0;
            }
            lVar6 = FUN_004c40f0(param_1);
            if (lVar6 == 0) {
              return 0;
            }
            iVar4 = FUN_00407950();
            if (0 < iVar4) {
              iVar11 = 0;
              do {
                lVar7 = FUN_00407970(lVar6,iVar11);
                lVar10 = *(long *)(param_1 + 0xa8);
                if ((((*(uint *)(lVar10 + 0x334) & *(uint *)(lVar7 + 0x1c)) == 0) &&
                    ((*(uint *)(lVar10 + 0x338) & *(uint *)(lVar7 + 0x20)) == 0)) &&
                   (iVar5 = *(int *)(lVar10 + 0x340), iVar5 != 0)) {
                  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
                    if ((*(int *)(lVar7 + 0x2c) <= iVar5) &&
                       (*(int *)(lVar10 + 0x33c) <= *(int *)(lVar7 + 0x30))) {
LAB_004de6a0:
                      iVar5 = FUN_004e2fc0(param_1,0x10001,*(undefined4 *)(lVar7 + 0x44),0,lVar7);
                      if ((iVar5 != 0) && ((*(byte *)(lVar7 + 0x1c) >> 4 & 1) != 0))
                      goto LAB_004de6cc;
                    }
                  }
                  else {
                    iVar2 = 0xff00;
                    if (*(int *)(lVar7 + 0x34) != 0x100) {
                      iVar2 = *(int *)(lVar7 + 0x34);
                    }
                    iVar1 = 0xff00;
                    if (iVar5 != 0x100) {
                      iVar1 = iVar5;
                    }
                    if (iVar1 <= iVar2) {
                      iVar5 = 0xff00;
                      if (*(int *)(lVar7 + 0x38) != 0x100) {
                        iVar5 = *(int *)(lVar7 + 0x38);
                      }
                      iVar2 = 0xff00;
                      if (*(int *)(lVar10 + 0x33c) != 0x100) {
                        iVar2 = *(int *)(lVar10 + 0x33c);
                      }
                      if (iVar5 <= iVar2) goto LAB_004de6a0;
                    }
                  }
                }
                iVar11 = iVar11 + 1;
                if (iVar4 == iVar11) {
                  return 0;
                }
              } while( true );
            }
            iVar11 = 0;
LAB_004de6cc:
            if (iVar11 == iVar4) {
              return 0;
            }
          }
        }
        else if ((((*(byte *)(*(long *)(piVar9 + 0x30) + 0x60) >> 3 & 1) == 0) && (0x303 < *piVar9))
                && (*piVar9 != 0x10000)) {
          return 0;
        }
      }
      if (*(int *)(param_3 + 0xc) == 0) {
        return 1;
      }
      FUN_004bda40(*(undefined4 *)(param_3 + 0x10));
      iVar4 = FUN_0041ccc0();
      local_44[0] = *(ushort *)(param_3 + 8) >> 8 | *(ushort *)(param_3 + 8) << 8;
      uVar8 = FUN_004e2fc0(param_1,param_2,iVar4 << 2,*(undefined4 *)(param_3 + 0xc),local_44);
      return uVar8;
    }
  }
  return 0;
}


