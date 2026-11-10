/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e740; name: FUN_0044e740
 */


int FUN_0044e740(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((param_4 & 0x30000) == 0) {
LAB_0044ea08:
    iVar1 = 0;
  }
  else {
    uVar8 = (uint)param_4;
    if (param_2 == 0) {
      param_2 = FUN_00407970(param_3,0);
      iVar1 = 1;
      if (param_2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_00451f30(*(undefined8 *)(param_2 + 0x50));
      }
    }
    else {
      iVar1 = 0;
      lVar5 = FUN_00451f30(*(undefined8 *)(param_2 + 0x50));
    }
    if (param_3 != 0) {
      lVar6 = FUN_00466c70(param_2);
      uVar9 = param_4;
      if (lVar6 == 2) {
        if ((lVar5 != 0) && (iVar2 = FUN_00423a50(lVar5), iVar2 == 0x198)) {
          FUN_004238d0(lVar5);
          lVar6 = FUN_0042d4f0();
          if (lVar6 != 0) {
            iVar2 = FUN_0042e3e0();
            if (iVar2 == 0x19f) {
              if ((uVar8 >> 0x10 & 1) == 0) {
LAB_0044e8c4:
                iVar2 = 0x3c;
                goto LAB_0044e860;
              }
            }
            else {
              if (iVar2 != 0x2cb) {
                iVar2 = 0x3a;
                goto LAB_0044e860;
              }
              if ((uVar8 >> 0x11 & 1) == 0) goto LAB_0044e8c4;
              uVar9 = param_4 & 0xfffffffffffeffff;
            }
            iVar2 = FUN_00407950(param_3);
            iVar3 = FUN_00460b80(param_2);
            if (iVar1 < iVar2) {
              iVar2 = 0x39;
              do {
                lVar6 = FUN_00407970(param_3,iVar1);
                lVar5 = FUN_00466c70();
                if (lVar5 != 2) {
                  iVar2 = 0x38;
                  goto LAB_0044e864;
                }
                if (((lVar6 == 0) ||
                    (lVar5 = FUN_00451f30(*(undefined8 *)(lVar6 + 0x50)), lVar5 == 0)) ||
                   (iVar4 = FUN_00423a50(), iVar4 != 0x198)) goto LAB_0044e864;
                FUN_004238d0(lVar5);
                lVar7 = FUN_0042d4f0();
                if (lVar7 == 0) goto LAB_0044e864;
                iVar4 = FUN_0042e3e0();
                if (iVar4 == 0x19f) {
                  if ((iVar3 != 0x31a) && (iVar3 != -1)) goto LAB_0044ea54;
                  if (((uint)uVar9 >> 0x10 & 1) == 0) goto LAB_0044ea4c;
                }
                else {
                  if (iVar4 != 0x2cb) {
                    iVar2 = 0x3a;
                    goto LAB_0044e864;
                  }
                  if ((iVar3 != 0x31b) && (iVar3 != -1)) goto LAB_0044ea54;
                  if (((uint)uVar9 >> 0x11 & 1) == 0) goto LAB_0044ea4c;
                  uVar9 = uVar9 & 0xfffffffffffeffff;
                }
                iVar1 = iVar1 + 1;
                iVar4 = FUN_00407950(param_3);
                iVar3 = FUN_00460b80(lVar6);
              } while (iVar1 < iVar4);
            }
            iVar2 = FUN_00423a50(lVar5);
            if (iVar2 == 0x198) {
              FUN_004238d0(lVar5);
              lVar5 = FUN_0042d4f0();
              if (lVar5 != 0) {
                iVar2 = FUN_0042e3e0();
                if (iVar2 == 0x19f) {
                  if ((iVar3 != 0x31a) && (iVar3 != -1)) {
LAB_0044ea54:
                    iVar2 = 0x3b;
                    goto LAB_0044e864;
                  }
                  uVar8 = (uint)uVar9 >> 0x10;
                }
                else {
                  if (iVar2 != 0x2cb) {
                    iVar2 = 0x3a;
                    goto LAB_0044e864;
                  }
                  if ((iVar3 != 0x31b) && (iVar3 != -1)) goto LAB_0044ea54;
                  uVar8 = (uint)uVar9 >> 0x11;
                }
                if ((uVar8 & 1) == 0) {
LAB_0044ea4c:
                  iVar2 = 0x3c;
                  goto LAB_0044e864;
                }
                goto LAB_0044ea08;
              }
            }
            iVar2 = 0x39;
            goto LAB_0044e864;
          }
        }
        iVar2 = 0x39;
      }
      else {
        iVar2 = 0x38;
      }
LAB_0044e860:
      iVar1 = 0;
LAB_0044e864:
      iVar3 = iVar2;
      if (iVar2 == 0x3c && uVar9 != param_4) {
        iVar3 = 0x3d;
      }
      if (param_1 == (int *)0x0) {
        return iVar3;
      }
      *param_1 = iVar1 - (uint)(iVar2 - 0x3bU < 2 && iVar1 != 0);
      return iVar3;
    }
    if ((lVar5 != 0) && (iVar1 = FUN_00423a50(lVar5), iVar1 == 0x198)) {
      FUN_004238d0(lVar5);
      lVar5 = FUN_0042d4f0();
      if (lVar5 != 0) {
        iVar1 = FUN_0042e3e0();
        if (iVar1 == 0x19f) {
          uVar8 = uVar8 >> 0x10;
        }
        else {
          if (iVar1 != 0x2cb) {
            return 0x3a;
          }
          uVar8 = uVar8 >> 0x11;
        }
        if ((uVar8 & 1) == 0) {
          return 0x3c;
        }
        goto LAB_0044ea08;
      }
    }
    iVar1 = 0x39;
  }
  return iVar1;
}


