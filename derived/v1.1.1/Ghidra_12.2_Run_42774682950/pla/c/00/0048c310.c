/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048c310; name: FUN_0048c310
 */


void FUN_0048c310(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  uVar5 = 0;
  do {
    *(byte *)(param_1 + uVar5) =
         *(byte *)(param_2 + (uVar5 >> 3 & 0x1fffffff)) >> (ulong)((uint)uVar5 & 7) & 1;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x100);
  lVar6 = 0x100;
  lVar7 = 1;
  uVar5 = 0;
  do {
    cVar4 = *(char *)(param_1 + uVar5);
    uVar1 = uVar5 + 1;
    if (cVar4 != 0 && lVar6 != 1) {
      iVar9 = (int)*(char *)(param_1 + uVar1);
      if (iVar9 != 0) {
        iVar3 = iVar9 * 2 + (int)cVar4;
        if (iVar3 < 0x10) {
          *(char *)(param_1 + uVar5) = (char)iVar3;
          *(undefined1 *)(param_1 + uVar1) = 0;
        }
        else {
          iVar9 = (int)cVar4 + iVar9 * -2;
          if (iVar9 < -0xf) goto joined_r0x0048c654;
          *(char *)(param_1 + uVar5) = (char)iVar9;
          if (uVar1 < 0x100) {
            lVar8 = lVar7;
            do {
              if (*(char *)(param_1 + lVar8) == '\0') {
                *(undefined1 *)(param_1 + lVar8) = 1;
                break;
              }
              *(undefined1 *)(param_1 + lVar8) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0x100);
          }
        }
      }
      if (lVar6 != 2) {
        uVar2 = uVar5 + 2;
        iVar9 = (int)*(char *)(param_1 + uVar2);
        if (iVar9 != 0) {
          iVar3 = iVar9 * 4 + (int)*(char *)(param_1 + uVar5);
          if (iVar3 < 0x10) {
            *(char *)(param_1 + uVar5) = (char)iVar3;
            *(undefined1 *)(param_1 + uVar2) = 0;
          }
          else {
            iVar9 = (int)*(char *)(param_1 + uVar5) + iVar9 * -4;
            if (iVar9 < -0xf) goto joined_r0x0048c654;
            *(char *)(param_1 + uVar5) = (char)iVar9;
            if (uVar2 < 0x100) {
              lVar8 = lVar7 + 1;
              do {
                if (*(char *)(param_1 + lVar8) == '\0') {
                  *(undefined1 *)(param_1 + lVar8) = 1;
                  break;
                }
                *(undefined1 *)(param_1 + lVar8) = 0;
                lVar8 = lVar8 + 1;
              } while (lVar8 != 0x100);
            }
          }
        }
        if (lVar6 != 3) {
          uVar2 = uVar5 + 3;
          iVar9 = (int)*(char *)(param_1 + uVar2);
          if (iVar9 != 0) {
            iVar3 = iVar9 * 8 + (int)*(char *)(param_1 + uVar5);
            if (iVar3 < 0x10) {
              *(char *)(param_1 + uVar5) = (char)iVar3;
              *(undefined1 *)(param_1 + uVar2) = 0;
            }
            else {
              iVar9 = (int)*(char *)(param_1 + uVar5) + iVar9 * -8;
              if (iVar9 < -0xf) goto joined_r0x0048c654;
              *(char *)(param_1 + uVar5) = (char)iVar9;
              if (uVar2 < 0x100) {
                lVar8 = lVar7 + 2;
                do {
                  if (*(char *)(param_1 + lVar8) == '\0') {
                    *(undefined1 *)(param_1 + lVar8) = 1;
                    break;
                  }
                  *(undefined1 *)(param_1 + lVar8) = 0;
                  lVar8 = lVar8 + 1;
                } while (lVar8 != 0x100);
              }
            }
          }
          if (lVar6 != 4) {
            uVar2 = uVar5 + 4;
            iVar9 = (int)*(char *)(param_1 + uVar2);
            if (iVar9 != 0) {
              iVar3 = iVar9 * 0x10 + (int)*(char *)(param_1 + uVar5);
              if (iVar3 < 0x10) {
                *(char *)(param_1 + uVar5) = (char)iVar3;
                *(undefined1 *)(param_1 + uVar2) = 0;
              }
              else {
                iVar9 = (int)*(char *)(param_1 + uVar5) + iVar9 * -0x10;
                if (iVar9 < -0xf) goto joined_r0x0048c654;
                *(char *)(param_1 + uVar5) = (char)iVar9;
                if (uVar2 < 0x100) {
                  lVar8 = lVar7 + 3;
                  do {
                    if (*(char *)(param_1 + lVar8) == '\0') {
                      *(undefined1 *)(param_1 + lVar8) = 1;
                      break;
                    }
                    *(undefined1 *)(param_1 + lVar8) = 0;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 != 0x100);
                }
              }
            }
            if (lVar6 != 5) {
              uVar2 = uVar5 + 5;
              iVar9 = (int)*(char *)(param_1 + uVar2);
              if (iVar9 != 0) {
                iVar3 = iVar9 * 0x20 + (int)*(char *)(param_1 + uVar5);
                if (iVar3 < 0x10) {
                  *(char *)(param_1 + uVar5) = (char)iVar3;
                  *(undefined1 *)(param_1 + uVar2) = 0;
                }
                else {
                  iVar9 = (int)*(char *)(param_1 + uVar5) + iVar9 * -0x20;
                  if (iVar9 < -0xf) goto joined_r0x0048c654;
                  *(char *)(param_1 + uVar5) = (char)iVar9;
                  if (uVar2 < 0x100) {
                    lVar8 = lVar7 + 4;
                    do {
                      if (*(char *)(param_1 + lVar8) == '\0') {
                        *(undefined1 *)(param_1 + lVar8) = 1;
                        break;
                      }
                      *(undefined1 *)(param_1 + lVar8) = 0;
                      lVar8 = lVar8 + 1;
                    } while (lVar8 != 0x100);
                  }
                }
              }
              if (lVar6 != 6) {
                uVar2 = uVar5 + 6;
                iVar9 = (int)*(char *)(param_1 + uVar2);
                if (iVar9 != 0) {
                  iVar3 = iVar9 * 0x40 + (int)*(char *)(param_1 + uVar5);
                  if (iVar3 < 0x10) {
                    *(char *)(param_1 + uVar5) = (char)iVar3;
                    *(undefined1 *)(param_1 + uVar2) = 0;
                  }
                  else {
                    iVar9 = (int)*(char *)(param_1 + uVar5) + iVar9 * -0x40;
                    if ((-0x10 < iVar9) && (*(char *)(param_1 + uVar5) = (char)iVar9, uVar2 < 0x100)
                       ) {
                      lVar8 = lVar7 + 5;
                      do {
                        if (*(char *)(param_1 + lVar8) == '\0') {
                          *(undefined1 *)(param_1 + lVar8) = 1;
                          break;
                        }
                        *(undefined1 *)(param_1 + lVar8) = 0;
                        lVar8 = lVar8 + 1;
                      } while (lVar8 != 0x100);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
joined_r0x0048c654:
    lVar6 = lVar6 + -1;
    lVar7 = lVar7 + 1;
    uVar5 = uVar1;
    if (uVar1 == 0x100) {
      return;
    }
  } while( true );
}


