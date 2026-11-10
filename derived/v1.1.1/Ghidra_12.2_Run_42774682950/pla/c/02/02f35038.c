/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f35038; name: FUN_02f35038
 */


undefined8
FUN_02f35038(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,
            undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  HardwareOpusDecoder *this;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  
  pcVar11 = (char *)(param_1 + 8);
  if (*pcVar11 == '\0') {
    lVar10 = 0;
  }
  else {
    pcVar11 = (char *)(param_1 + 9);
    if (*pcVar11 == '\0') {
      lVar10 = 1;
    }
    else {
      pcVar11 = (char *)(param_1 + 10);
      if (*pcVar11 == '\0') {
        lVar10 = 2;
      }
      else {
        pcVar11 = (char *)(param_1 + 0xb);
        if (*pcVar11 == '\0') {
          lVar10 = 3;
        }
        else {
          pcVar11 = (char *)(param_1 + 0xc);
          if (*pcVar11 == '\0') {
            lVar10 = 4;
          }
          else {
            pcVar11 = (char *)(param_1 + 0xd);
            if (*pcVar11 == '\0') {
              lVar10 = 5;
            }
            else {
              pcVar11 = (char *)(param_1 + 0xe);
              if (*pcVar11 == '\0') {
                lVar10 = 6;
              }
              else {
                pcVar11 = (char *)(param_1 + 0xf);
                if (*pcVar11 == '\0') {
                  lVar10 = 7;
                }
                else {
                  pcVar11 = (char *)(param_1 + 0x10);
                  if (*pcVar11 == '\0') {
                    lVar10 = 8;
                  }
                  else {
                    pcVar11 = (char *)(param_1 + 0x11);
                    if (*pcVar11 == '\0') {
                      lVar10 = 9;
                    }
                    else {
                      pcVar11 = (char *)(param_1 + 0x12);
                      if (*pcVar11 == '\0') {
                        lVar10 = 10;
                      }
                      else {
                        pcVar11 = (char *)(param_1 + 0x13);
                        if (*pcVar11 == '\0') {
                          lVar10 = 0xb;
                        }
                        else {
                          pcVar11 = (char *)(param_1 + 0x14);
                          if (*pcVar11 == '\0') {
                            lVar10 = 0xc;
                          }
                          else {
                            pcVar11 = (char *)(param_1 + 0x15);
                            if (*pcVar11 == '\0') {
                              lVar10 = 0xd;
                            }
                            else {
                              pcVar11 = (char *)(param_1 + 0x16);
                              if (*pcVar11 == '\0') {
                                lVar10 = 0xe;
                              }
                              else {
                                pcVar11 = (char *)(param_1 + 0x17);
                                if (*pcVar11 == '\0') {
                                  lVar10 = 0xf;
                                }
                                else {
                                  pcVar11 = (char *)(param_1 + 0x18);
                                  if (*pcVar11 == '\0') {
                                    lVar10 = 0x10;
                                  }
                                  else {
                                    pcVar11 = (char *)(param_1 + 0x19);
                                    if (*pcVar11 == '\0') {
                                      lVar10 = 0x11;
                                    }
                                    else {
                                      pcVar11 = (char *)(param_1 + 0x1a);
                                      if (*pcVar11 == '\0') {
                                        lVar10 = 0x12;
                                      }
                                      else {
                                        pcVar11 = (char *)(param_1 + 0x1b);
                                        if (*pcVar11 == '\0') {
                                          lVar10 = 0x13;
                                        }
                                        else {
                                          pcVar11 = (char *)(param_1 + 0x1c);
                                          if (*pcVar11 == '\0') {
                                            lVar10 = 0x14;
                                          }
                                          else {
                                            pcVar11 = (char *)(param_1 + 0x1d);
                                            if (*pcVar11 == '\0') {
                                              lVar10 = 0x15;
                                            }
                                            else {
                                              pcVar11 = (char *)(param_1 + 0x1e);
                                              if (*pcVar11 == '\0') {
                                                lVar10 = 0x16;
                                              }
                                              else {
                                                pcVar11 = (char *)(param_1 + 0x1f);
                                                if (*pcVar11 != '\0') {
                                                  return 2;
                                                }
                                                lVar10 = 0x17;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar7 = param_1 + lVar10 * 0x58;
  *(uint *)(lVar7 + 0x70) = param_4;
  *(int *)(lVar7 + 0x68) = param_2;
  *(int *)(lVar7 + 0x6c) = param_3;
  plVar12 = (long *)(lVar7 + 0x20);
  this = (HardwareOpusDecoder *)(*DAT_0442d138)(5,0x40);
  if (this == (HardwareOpusDecoder *)0x0) {
    *plVar12 = 0;
  }
  else {
    nn::codec::HardwareOpusDecoder::HardwareOpusDecoder(this,0);
    *plVar12 = (long)this;
    uVar6 = *(undefined8 *)(&DAT_0440bd38 + (long)param_3 * 8);
    lVar9 = param_1 + lVar10 * 0x58;
    *(undefined8 *)(lVar9 + 0x30) = uVar6;
    lVar4 = (*DAT_0442d140)(5,uVar6,0x1000);
    *(long *)(lVar9 + 0x28) = lVar4;
    if (lVar4 == 0) {
      uVar6 = 0x34;
      goto LAB_02f352e0;
    }
    uVar2 = 0;
    if (DAT_042ab258 != 0) {
      uVar2 = ((uint)DAT_042ab268 * param_2) / DAT_042ab258;
    }
    uVar1 = *(uint *)(lVar7 + 0x70);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = ((uVar1 + uVar2 * 5) - 1) / uVar1;
    }
    lVar7 = (*DAT_0442d138)(5,(ulong)uVar3 * 0x5f0);
    *(long *)(param_1 + lVar10 * 0x58 + 0x38) = lVar7;
    if (lVar7 != 0) {
      lVar4 = param_1 + lVar10 * 0x58;
      *(undefined4 *)(lVar4 + 0x40) = 0;
      *(undefined4 *)(lVar4 + 0x44) = 0;
      *(uint *)(lVar4 + 0x48) = uVar3;
      lVar7 = (*DAT_0442d138)(5,(ulong)uVar3 * 0xf08);
      *(long *)(lVar4 + 0x50) = lVar7;
      if (lVar7 != 0) {
        param_1 = param_1 + lVar10 * 0x58;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(uint *)(param_1 + 0x60) = uVar3;
        *param_5 = (int)lVar10;
        *param_6 = plVar12;
        *pcVar11 = '\x01';
        return 1;
      }
    }
  }
  uVar6 = 2;
LAB_02f352e0:
  if ((long *)*plVar12 != (long *)0x0) {
    uVar5 = (**(code **)(*(long *)*plVar12 + 0x18))();
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(long *)*plVar12 + 0x28))();
    }
    puVar8 = (undefined8 *)*plVar12;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      (*DAT_0442d150)(5,puVar8);
    }
    *plVar12 = 0;
  }
  plVar12 = (long *)(param_1 + lVar10 * 0x58 + 0x28);
  if (*plVar12 != 0) {
    (*DAT_0442d158)(5);
    *plVar12 = 0;
  }
  plVar12 = (long *)(param_1 + lVar10 * 0x58 + 0x38);
  if (*plVar12 != 0) {
    (*DAT_0442d150)(5);
    *plVar12 = 0;
  }
  lVar7 = param_1 + lVar10 * 0x58;
  plVar12 = (long *)(lVar7 + 0x50);
  *(undefined4 *)(lVar7 + 0x48) = 0;
  if (*plVar12 != 0) {
    (*DAT_0442d150)(5);
    *plVar12 = 0;
  }
  *(undefined4 *)(param_1 + lVar10 * 0x58 + 0x60) = 0;
  return uVar6;
}


