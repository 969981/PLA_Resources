/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047fbc0; name: FUN_0047fbc0
 */


undefined8 FUN_0047fbc0(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long local_f8;
  undefined1 local_e8 [136];
  
  if (param_2 == 0) {
    lVar14 = 0;
    lVar15 = 0;
    lVar7 = 0;
    lVar13 = 0;
    lVar5 = 0;
    uVar6 = 0x43;
  }
  else {
    lVar5 = FUN_0040de30();
    if (lVar5 == 0) {
      lVar14 = 0;
      lVar15 = 0;
      lVar13 = 0;
    }
    else {
      iVar2 = FUN_0042e400(param_2);
      if (iVar2 != 0) {
        iVar2 = FUN_004048a0(param_1,param_3,0x80);
        if ((iVar2 != 0) && (iVar2 = FUN_0042e3e0(param_2), iVar2 != 0)) {
          uVar6 = FUN_00407d80();
          iVar3 = FUN_00402590(param_1,"ASN1 OID: %s",uVar6);
          if ((0 < iVar3) && (iVar3 = FUN_00402590(param_1,&DAT_0396725e), 0 < iVar3)) {
            lVar7 = FUN_00430ac0(iVar2);
            if (lVar7 == 0) {
              lVar7 = 0;
              lVar15 = 0;
              lVar14 = 0;
              uVar6 = 1;
              lVar13 = 0;
              goto LAB_0047fdf4;
            }
            iVar2 = FUN_004048a0(param_1,param_3,0x80);
            if (iVar2 != 0) {
              iVar2 = FUN_00402590(param_1,"NIST CURVE: %s\n",lVar7);
              lVar13 = 0;
              if (0 < iVar2) {
                uVar6 = 1;
                lVar7 = 0;
                lVar15 = 0;
                lVar14 = 0;
                goto LAB_0047fdf4;
              }
              uVar6 = 0x20;
              lVar14 = 0;
              lVar15 = 0;
              lVar7 = 0;
              goto LAB_0047fdd8;
            }
          }
        }
        lVar14 = 0;
        lVar15 = 0;
        lVar7 = 0;
        lVar13 = 0;
        goto LAB_0047fcf8;
      }
      FUN_0042e180(param_2);
      iVar2 = FUN_0042e190();
      lVar13 = FUN_0040c260();
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = FUN_0040c260();
        if (lVar14 != 0) {
          lVar15 = FUN_0040c260();
          if (lVar15 == 0) goto LAB_0047fdd4;
          iVar3 = FUN_0042e540(param_2,lVar13,lVar14,lVar15,lVar5);
          if (iVar3 == 0) {
LAB_0047fe40:
            lVar7 = 0;
            uVar6 = 0x10;
          }
          else {
            lVar8 = FUN_0042e340(param_2);
            lVar7 = 0;
            if (lVar8 != 0) {
              lVar9 = FUN_0042e350(param_2);
              lVar10 = FUN_0042e3c0(param_2);
              if (lVar9 == 0) goto LAB_0047fe40;
              iVar3 = FUN_0042e420(param_2);
              lVar7 = FUN_00480180(param_2,lVar8,iVar3,0,lVar5);
              if (lVar7 != 0) {
                puVar11 = (undefined1 *)FUN_0042e4e0(param_2);
                if (puVar11 == (undefined1 *)0x0) {
                  local_f8 = 0;
                }
                else {
                  local_f8 = FUN_0042e4f0(param_2);
                }
                iVar4 = FUN_004048a0(param_1,param_3,0x80);
                if (iVar4 != 0) {
                  uVar6 = FUN_00407d80(iVar2);
                  iVar4 = FUN_00402590(param_1,"Field Type: %s\n",uVar6);
                  if (0 < iVar4) {
                    if (iVar2 == 0x197) {
                      iVar2 = FUN_0043a710(param_2);
                      if ((iVar2 != 0) && (iVar4 = FUN_004048a0(param_1,param_3,0x80), iVar4 != 0))
                      {
                        uVar6 = FUN_00407d80(iVar2);
                        iVar2 = FUN_00402590(param_1,"Basis Type: %s\n",uVar6);
                        if (0 < iVar2) {
                          pcVar12 = "Polynomial:";
                          goto LAB_0047ff1c;
                        }
                      }
                    }
                    else {
                      pcVar12 = "Prime:";
LAB_0047ff1c:
                      iVar2 = FUN_00440090(param_1,pcVar12,lVar13,0,param_3);
                      if (((iVar2 != 0) &&
                          (iVar2 = FUN_00440090(param_1,"A:   ",lVar14,0,param_3), iVar2 != 0)) &&
                         (iVar2 = FUN_00440090(param_1,"B:   ",lVar15,0,param_3), iVar2 != 0)) {
                        if (iVar3 == 4) {
                          pcVar12 = "Generator (uncompressed):";
                        }
                        else if (iVar3 == 2) {
                          pcVar12 = "Generator (compressed):";
                        }
                        else {
                          pcVar12 = "Generator (hybrid):";
                        }
                        iVar2 = FUN_00440090(param_1,pcVar12,lVar7,0,param_3);
                        if (((iVar2 != 0) &&
                            (iVar2 = FUN_00440090(param_1,"Order: ",lVar9,0,param_3), iVar2 != 0))
                           && ((lVar10 == 0 ||
                               (iVar2 = FUN_00440090(param_1,"Cofactor: ",lVar10,0,param_3),
                               iVar2 != 0)))) {
                          if (puVar11 == (undefined1 *)0x0) {
                            uVar6 = 1;
                            goto LAB_0047fdf4;
                          }
                          if (param_3 < 1) {
                            param_3 = 0;
                          }
                          else {
                            if (0x7f < param_3) {
                              param_3 = 0x80;
                            }
                            memset(local_e8,0x20,(long)param_3);
                            iVar2 = FUN_004042b0(param_1,local_e8,param_3);
                            if (iVar2 < 1) goto LAB_0047fcf8;
                          }
                          iVar2 = FUN_00402590(param_1,&DAT_038bd9bd,"Seed:");
                          if (0 < iVar2) {
                            lVar8 = 0;
                            uVar16 = 0;
                            do {
                              if (local_f8 == 0) {
                                uVar6 = 1;
                                iVar2 = FUN_004042b0(param_1,&DAT_0396725e,1);
                                if (0 < iVar2) goto LAB_0047fdf4;
                                break;
                              }
                              if (lVar8 + (uVar16 / 0xf) * 0xf == 0) {
                                local_e8[0] = 10;
                                memset((void *)((ulong)local_e8 | 1),0x20,(long)(param_3 + 4));
                                iVar2 = FUN_004042b0(param_1,local_e8,param_3 + 5);
                                if (iVar2 < 1) break;
                              }
                              local_f8 = local_f8 + -1;
                              puVar1 = &DAT_03996322;
                              if (local_f8 != 0) {
                                puVar1 = &DAT_039b07fe;
                              }
                              uVar16 = uVar16 + 1;
                              iVar2 = FUN_00402590(param_1,"%02x%s",*puVar11,puVar1);
                              lVar8 = lVar8 + -1;
                              puVar11 = puVar11 + 1;
                            } while (0 < iVar2);
                          }
                        }
                      }
                    }
                  }
                }
LAB_0047fcf8:
                uVar6 = 0x20;
                goto LAB_0047fdd8;
              }
            }
            uVar6 = 0x10;
          }
          goto LAB_0047fdd8;
        }
      }
      lVar15 = 0;
    }
LAB_0047fdd4:
    lVar7 = 0;
    uVar6 = 0x41;
  }
LAB_0047fdd8:
  FUN_004014b0(0x10,0x95,uVar6,"external/openssl/crypto/ec/eck_prn.c",0xd6);
  uVar6 = 0;
LAB_0047fdf4:
  FUN_0040c1e0(lVar13);
  FUN_0040c1e0(lVar14);
  FUN_0040c1e0(lVar15);
  FUN_0040c1e0(lVar7);
  FUN_0040def0(lVar5);
  return uVar6;
}


