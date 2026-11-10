/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1dcc0; name: FUN_00b1dcc0
 */


undefined4 FUN_00b1dcc0(int *param_1)

{
  uint *puVar1;
  ushort uVar2;
  size_t sVar3;
  undefined4 uVar4;
  long lVar5;
  ushort *puVar6;
  
  puVar6 = (ushort *)((long)param_1 - (long)*param_1);
  uVar2 = *puVar6;
  if (uVar2 < 0x3b) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if ((ulong)puVar6[0x1d] != 0) {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x1d]);
      lVar5 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  sVar3 = strlen((char *)(lVar5 + 4));
  if (sVar3 < 4) {
    if (uVar2 < 0x3d) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if ((ulong)puVar6[0x1e] != 0) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x1e]);
        lVar5 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    sVar3 = strlen((char *)(lVar5 + 4));
    if (sVar3 < 4) {
      if (uVar2 < 0x3f) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if ((ulong)puVar6[0x1f] != 0) {
          puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x1f]);
          lVar5 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      sVar3 = strlen((char *)(lVar5 + 4));
      if (sVar3 < 4) {
        if (uVar2 < 0x41) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if ((ulong)puVar6[0x20] != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x20]);
            lVar5 = (long)puVar1 + (ulong)*puVar1;
          }
        }
        sVar3 = strlen((char *)(lVar5 + 4));
        if (sVar3 < 4) {
          if (uVar2 < 0x43) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if ((ulong)puVar6[0x21] != 0) {
              puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x21]);
              lVar5 = (long)puVar1 + (ulong)*puVar1;
            }
          }
          sVar3 = strlen((char *)(lVar5 + 4));
          if (sVar3 < 4) {
            if (uVar2 < 0x45) {
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              if ((ulong)puVar6[0x22] != 0) {
                puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x22]);
                lVar5 = (long)puVar1 + (ulong)*puVar1;
              }
            }
            sVar3 = strlen((char *)(lVar5 + 4));
            if (sVar3 < 4) {
              if (uVar2 < 0x47) {
                lVar5 = 0;
              }
              else {
                lVar5 = 0;
                if ((ulong)puVar6[0x23] != 0) {
                  puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x23]);
                  lVar5 = (long)puVar1 + (ulong)*puVar1;
                }
              }
              sVar3 = strlen((char *)(lVar5 + 4));
              if (sVar3 < 4) {
                if (uVar2 < 0x49) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = 0;
                  if ((ulong)puVar6[0x24] != 0) {
                    puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x24]);
                    lVar5 = (long)puVar1 + (ulong)*puVar1;
                  }
                }
                sVar3 = strlen((char *)(lVar5 + 4));
                if (sVar3 < 4) {
                  if (uVar2 < 0x4b) {
                    lVar5 = 0;
                  }
                  else {
                    lVar5 = 0;
                    if ((ulong)puVar6[0x25] != 0) {
                      puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x25]);
                      lVar5 = (long)puVar1 + (ulong)*puVar1;
                    }
                  }
                  sVar3 = strlen((char *)(lVar5 + 4));
                  if (sVar3 < 4) {
                    if (uVar2 < 0x4d) {
                      lVar5 = 0;
                    }
                    else {
                      lVar5 = 0;
                      if ((ulong)puVar6[0x26] != 0) {
                        puVar1 = (uint *)((long)param_1 + (ulong)puVar6[0x26]);
                        lVar5 = (long)puVar1 + (ulong)*puVar1;
                      }
                    }
                    sVar3 = strlen((char *)(lVar5 + 4));
                    uVar4 = 9;
                    if (sVar3 < 4) {
                      uVar4 = 10;
                    }
                  }
                  else {
                    uVar4 = 8;
                  }
                }
                else {
                  uVar4 = 7;
                }
              }
              else {
                uVar4 = 6;
              }
            }
            else {
              uVar4 = 5;
            }
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


