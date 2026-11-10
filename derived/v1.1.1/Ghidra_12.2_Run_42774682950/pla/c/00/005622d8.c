/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005622d8; name: FUN_005622d8
 */


undefined8 FUN_005622d8(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  
  uVar12 = *param_1;
  if ((uVar12 & 1) != 0) {
    uVar3 = *(uint *)PTR_DAT_04374d38;
    piVar13 = (int *)(PTR_DAT_04374d40 + (long)(int)uVar3 * 0xc);
    piVar9 = (int *)PTR_DAT_04374d40;
    if (0 < (int)uVar3) {
      uVar10 = uVar3;
      do {
        uVar4 = uVar10 >> 1;
        piVar11 = piVar9 + (ulong)uVar4 * 3;
        iVar1 = *piVar11;
        if (iVar1 <= (int)param_2) {
          if ((int)param_2 <= piVar9[(ulong)uVar4 * 3 + 1]) goto joined_r0x00562378;
          piVar9 = piVar9 + (ulong)(uVar4 + 1) * 3;
          uVar4 = uVar10 - (uVar4 + 1);
        }
        uVar10 = uVar4;
      } while (0 < (int)uVar10);
    }
    if (piVar9 < piVar13 && piVar9 != (int *)0x0) {
      iVar1 = *piVar9;
      piVar11 = piVar9;
joined_r0x00562378:
      if (((iVar1 <= (int)param_2) && (iVar2 = piVar11[2], iVar2 != 0)) &&
         (((iVar2 != 0x40000001 && (iVar2 != 0x40000000)) || ((param_2 - iVar1 & 1) == 0)))) {
        lVar6 = FUN_002e2e80(PTR_FUN_04373078,0x28);
        if (lVar6 != 0) {
          FUN_0055da3c(lVar6,0x14,uVar12 & 0x3ffe);
        }
        lVar7 = FUN_002e2e80(PTR_FUN_04373078,0x28);
        if (lVar7 != 0) {
          FUN_0055fb3c(lVar7);
        }
        *(long *)(lVar6 + 0x20) = lVar7;
        puVar5 = PTR_DAT_04374d40;
        if (0 < (int)uVar3) {
          uVar12 = param_2;
          if (param_2 == 10) goto LAB_005624f0;
          do {
            FUN_0055fb58(*(undefined8 *)(lVar6 + 0x20),uVar12,uVar12);
            do {
              piVar9 = (int *)puVar5;
              uVar10 = uVar3;
              do {
                uVar4 = uVar10 >> 1;
                piVar11 = piVar9 + (ulong)uVar4 * 3;
                iVar1 = *piVar11;
                if (iVar1 <= (int)uVar12) {
                  if ((int)uVar12 <= piVar9[(ulong)uVar4 * 3 + 1]) goto joined_r0x00562594;
                  piVar9 = piVar9 + (ulong)(uVar4 + 1) * 3;
                  uVar4 = uVar10 - (uVar4 + 1);
                }
                uVar10 = uVar4;
              } while (0 < (int)uVar10);
              if ((piVar9 < piVar13) && (piVar9 != (int *)0x0)) {
                iVar1 = *piVar9;
                piVar11 = piVar9;
joined_r0x00562594:
                if (iVar1 <= (int)uVar12) {
                  iVar2 = piVar11[2];
                  if (iVar2 < 0x40000000) {
                    if (iVar2 == -1) {
LAB_005625b0:
                      if ((int)uVar12 % 2 == 1) {
LAB_005624dc:
                        uVar12 = uVar12 + 1;
                      }
                      else {
                        uVar12 = uVar12 - 1;
                      }
                    }
                    else if (iVar2 == 1) {
LAB_005625dc:
                      if ((uVar12 & 1) == 0) goto LAB_005624dc;
                      uVar12 = uVar12 - 1;
                    }
                    else {
LAB_005625f0:
                      uVar12 = iVar2 + uVar12;
                    }
                  }
                  else if (iVar2 == 0x40000000) {
                    if ((uVar12 - iVar1 & 1) == 0) goto LAB_005625dc;
                  }
                  else {
                    if (iVar2 != 0x40000001) goto LAB_005625f0;
                    if ((uVar12 - iVar1 & 1) == 0) goto LAB_005625b0;
                  }
                }
              }
              if (uVar12 == param_2) goto LAB_005624b0;
              if (uVar12 != 10) break;
LAB_005624f0:
            } while ((*param_1 >> 0xb & 1) != 0);
          } while( true );
        }
        if ((param_2 != 10) || ((*param_1 >> 0xb & 1) == 0)) {
          FUN_0055fb58(*(undefined8 *)(lVar6 + 0x20),param_2,param_2);
        }
        goto LAB_005624b0;
      }
    }
  }
  if ((param_2 == 10) && ((uVar12 >> 0xb & 1) != 0)) {
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar6 != 0) {
      FUN_0055da3c(lVar6,1,*param_1);
    }
  }
  else {
    uVar8 = FUN_005621a4(param_1,param_2,uVar12);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar6 != 0) {
      FUN_0055da3c(lVar6,3,*param_1);
    }
    *(uint *)(lVar6 + 0x18) = param_2;
  }
LAB_005624b0:
  FUN_00562088(param_1,lVar6);
  return 1;
}


