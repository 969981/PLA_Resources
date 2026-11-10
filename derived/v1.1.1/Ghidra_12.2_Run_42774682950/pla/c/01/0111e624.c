/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111e624; name: FUN_0111e624
 */


undefined8 FUN_0111e624(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 6;
  uVar5 = *(uint *)(param_1 + 0x530);
  while (5 < uVar5) {
LAB_0111e890:
    uVar6 = 0;
    if (uVar5 + 1 < 6) {
      uVar6 = uVar5 + 1;
    }
    iVar7 = iVar7 + -1;
    uVar5 = uVar6;
    if (iVar7 == 0) {
      return 0;
    }
  }
  uVar3 = (ulong)(uVar5 * 0x1e);
  puVar2 = (ushort *)(param_1 + uVar3 * 4 + 0x68);
  if (*puVar2 == param_2) goto LAB_0111e8ac;
  puVar2 = (ushort *)(param_1 + (uVar3 | 1) * 4 + 0x68);
  uVar1 = uVar3 | 1;
  if (*puVar2 != param_2) {
    puVar2 = (ushort *)(param_1 + (uVar3 + 2) * 4 + 0x68);
    uVar1 = uVar3 + 2;
    if (*puVar2 != param_2) {
      puVar2 = (ushort *)(param_1 + (uVar3 + 3) * 4 + 0x68);
      uVar1 = uVar3 + 3;
      if (*puVar2 != param_2) {
        puVar2 = (ushort *)(param_1 + (uVar3 + 4) * 4 + 0x68);
        uVar1 = uVar3 + 4;
        if (*puVar2 != param_2) {
          puVar2 = (ushort *)(param_1 + (uVar3 + 5) * 4 + 0x68);
          uVar1 = uVar3 + 5;
          if (*puVar2 != param_2) {
            puVar2 = (ushort *)(param_1 + (uVar3 + 6) * 4 + 0x68);
            uVar1 = uVar3 + 6;
            if (*puVar2 != param_2) {
              puVar2 = (ushort *)(param_1 + (uVar3 + 7) * 4 + 0x68);
              uVar1 = uVar3 + 7;
              if (*puVar2 != param_2) {
                puVar2 = (ushort *)(param_1 + (uVar3 + 8) * 4 + 0x68);
                uVar1 = uVar3 + 8;
                if (*puVar2 != param_2) {
                  puVar2 = (ushort *)(param_1 + (uVar3 + 9) * 4 + 0x68);
                  uVar1 = uVar3 + 9;
                  if (*puVar2 != param_2) {
                    puVar2 = (ushort *)(param_1 + (uVar3 + 10) * 4 + 0x68);
                    uVar1 = uVar3 + 10;
                    if (*puVar2 != param_2) {
                      puVar2 = (ushort *)(param_1 + (uVar3 + 0xb) * 4 + 0x68);
                      uVar1 = uVar3 + 0xb;
                      if (*puVar2 != param_2) {
                        puVar2 = (ushort *)(param_1 + (uVar3 + 0xc) * 4 + 0x68);
                        uVar1 = uVar3 + 0xc;
                        if (*puVar2 != param_2) {
                          puVar2 = (ushort *)(param_1 + (uVar3 + 0xd) * 4 + 0x68);
                          uVar1 = uVar3 + 0xd;
                          if (*puVar2 != param_2) {
                            puVar2 = (ushort *)(param_1 + (uVar3 + 0xe) * 4 + 0x68);
                            uVar1 = uVar3 + 0xe;
                            if (*puVar2 != param_2) {
                              puVar2 = (ushort *)(param_1 + (uVar3 + 0xf) * 4 + 0x68);
                              uVar1 = uVar3 + 0xf;
                              if (*puVar2 != param_2) {
                                puVar2 = (ushort *)(param_1 + (uVar3 + 0x10) * 4 + 0x68);
                                uVar1 = uVar3 + 0x10;
                                if (*puVar2 != param_2) {
                                  puVar2 = (ushort *)(param_1 + (uVar3 + 0x11) * 4 + 0x68);
                                  uVar1 = uVar3 + 0x11;
                                  if (*puVar2 != param_2) {
                                    puVar2 = (ushort *)(param_1 + (uVar3 + 0x12) * 4 + 0x68);
                                    uVar1 = uVar3 + 0x12;
                                    if (*puVar2 != param_2) {
                                      puVar2 = (ushort *)(param_1 + (uVar3 + 0x13) * 4 + 0x68);
                                      uVar1 = uVar3 + 0x13;
                                      if (*puVar2 != param_2) {
                                        puVar2 = (ushort *)(param_1 + (uVar3 + 0x14) * 4 + 0x68);
                                        uVar1 = uVar3 + 0x14;
                                        if (*puVar2 != param_2) {
                                          puVar2 = (ushort *)(param_1 + (uVar3 + 0x15) * 4 + 0x68);
                                          uVar1 = uVar3 + 0x15;
                                          if (*puVar2 != param_2) {
                                            puVar2 = (ushort *)(param_1 + (uVar3 + 0x16) * 4 + 0x68)
                                            ;
                                            uVar1 = uVar3 + 0x16;
                                            if (*puVar2 != param_2) {
                                              puVar2 = (ushort *)
                                                       (param_1 + (uVar3 + 0x17) * 4 + 0x68);
                                              uVar1 = uVar3 + 0x17;
                                              if (*puVar2 != param_2) {
                                                puVar2 = (ushort *)
                                                         (param_1 + (uVar3 + 0x18) * 4 + 0x68);
                                                uVar1 = uVar3 + 0x18;
                                                if (*puVar2 != param_2) {
                                                  puVar2 = (ushort *)
                                                           (param_1 + (uVar3 + 0x19) * 4 + 0x68);
                                                  uVar1 = uVar3 + 0x19;
                                                  if (*puVar2 != param_2) {
                                                    puVar2 = (ushort *)
                                                             (param_1 + (uVar3 + 0x1a) * 4 + 0x68);
                                                    uVar1 = uVar3 + 0x1a;
                                                    if (*puVar2 != param_2) {
                                                      puVar2 = (ushort *)
                                                               (param_1 + (uVar3 + 0x1b) * 4 + 0x68)
                                                      ;
                                                      uVar1 = uVar3 + 0x1b;
                                                      if (*puVar2 != param_2) {
                                                        puVar2 = (ushort *)
                                                                 (param_1 + (uVar3 + 0x1c) * 4 +
                                                                 0x68);
                                                        uVar1 = uVar3 + 0x1c;
                                                        if (*puVar2 != param_2) {
                                                          uVar3 = uVar3 + 0x1d;
                                                          puVar2 = (ushort *)
                                                                   (param_1 + uVar3 * 4 + 0x68);
                                                          if (*puVar2 == param_2) goto LAB_0111e8ac;
                                                          goto LAB_0111e890;
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
          }
        }
      }
    }
  }
  uVar3 = uVar1;
LAB_0111e8ac:
  puVar4 = (ushort *)(param_1 + (uVar3 & 0xffffffff) * 4 + 0x6a);
  uVar6 = (uint)*puVar4;
  uVar5 = uVar6 - param_3;
  if (uVar6 < param_3) {
    return 0;
  }
  *puVar4 = (ushort)uVar5;
  if ((uVar5 & 0xffff) == 0) {
    *puVar2 = 0;
    return 1;
  }
  return 1;
}


