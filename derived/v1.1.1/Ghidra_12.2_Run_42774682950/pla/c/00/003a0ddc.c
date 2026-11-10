/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a0ddc; name: FUN_003a0ddc
 */


void FUN_003a0ddc(byte *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_b0 [8];
  byte local_a8 [16];
  undefined8 local_98;
  uint local_90;
  undefined1 auStack_8c [44];
  
  bVar4 = *param_1;
  uVar15 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8);
  }
  if (uVar15 == 0) {
    FUN_0030f640(&local_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/tokenizer.cc"
                 ,0x411);
                    /* try { // try from 003a0e54 to 003a0e63 has its CatchHandler @ 003a14d4 */
    uVar3 = FUN_0030f3ac(&local_90,
                         " Tokenizer::ParseStringAppend() passed text that could not have been tokenized as a string: "
                        );
                    /* try { // try from 003a0e68 to 003a0e73 has its CatchHandler @ 003a14c0 */
    FUN_003201a0(local_a8,param_1);
                    /* try { // try from 003a0e74 to 003a0e83 has its CatchHandler @ 003a1494 */
    uVar3 = FUN_0030f3e8(uVar3,local_a8);
                    /* try { // try from 003a0e84 to 003a0e8b has its CatchHandler @ 003a1484 */
    FUN_0030f41c(auStack_b0,uVar3);
    if ((local_a8[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_98);
    }
    FUN_0030f658(&local_90);
    return;
  }
  bVar4 = bVar4 & 1;
  if (((byte)*param_2 & 1) == 0) {
    if ((byte)((byte)*param_2 >> 1) + uVar15 < 0x17) goto LAB_003a0ed8;
  }
  else if (param_2[1] + uVar15 <= (*param_2 & 0xfffffffffffffffe) - 1) goto LAB_003a0ed8;
  FUN_0030ff7c(param_2);
  bVar4 = *param_1 & 1;
LAB_003a0ed8:
  pbVar6 = *(byte **)(param_1 + 0x10);
  if (bVar4 == 0) {
    pbVar6 = param_1 + 1;
  }
LAB_003a0f1c:
  while( true ) {
    pbVar12 = pbVar6 + 1;
    bVar4 = *pbVar12;
    if (bVar4 == 0x5c) break;
    if (bVar4 == 0) {
      return;
    }
LAB_003a0fa0:
    pbVar13 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar13 = *(byte **)(param_1 + 0x10);
    }
    if ((bVar4 != *pbVar13) || (pbVar13 = pbVar6 + 2, pbVar6 = pbVar12, *pbVar13 != 0)) {
      FUN_002e6a9c(param_2,bVar4);
      pbVar6 = pbVar12;
    }
  }
  pbVar13 = pbVar6 + 2;
  bVar2 = *pbVar13;
  if (bVar2 == 0) goto LAB_003a0fa0;
  uVar5 = (uint)bVar2;
  if ((bVar2 & 0xf8) == 0x30) {
    uVar8 = uVar5 - 0x30;
    if (uVar8 < 10) {
LAB_003a0f6c:
      uVar5 = (uint)pbVar6[3];
      if ((pbVar6[3] & 0xf8) == 0x30) {
LAB_003a0f7c:
        pbVar13 = pbVar6 + 3;
        uVar7 = uVar5 - 0x30;
        if (9 < uVar7) {
          if (uVar5 - 0x61 < 0x1a) {
            uVar7 = uVar5 - 0x57;
          }
          else {
            uVar7 = uVar5 - 0x37;
            if (0x19 < uVar5 - 0x41) {
              uVar7 = 0xffffffff;
            }
          }
        }
        uVar8 = uVar7 + uVar8 * 8;
      }
    }
    else {
      if (uVar5 - 0x61 < 0x1a) {
        uVar8 = uVar5 - 0x57;
        goto LAB_003a0f6c;
      }
      uVar8 = uVar5 - 0x37;
      if (0x19 < uVar5 - 0x41) {
        uVar8 = 0xffffffff;
      }
      uVar5 = (uint)pbVar6[3];
      if ((uVar5 & 0xf8) == 0x30) goto LAB_003a0f7c;
    }
    bVar4 = pbVar13[1];
    if ((bVar4 & 0xf8) == 0x30) {
      uVar5 = bVar4 - 0x30;
      if (9 < uVar5) {
        uVar7 = (uint)bVar4;
        if (uVar7 - 0x61 < 0x1a) {
          uVar5 = uVar7 - 0x57;
        }
        else {
          uVar5 = uVar7 - 0x37;
          if (0x19 < uVar7 - 0x41) {
            uVar5 = 0xffffffff;
          }
        }
      }
      pbVar13 = pbVar13 + 1;
      uVar8 = uVar5 + uVar8 * 8;
    }
    goto switchD_003a0fe8_caseD_61;
  }
  uVar8 = 7;
  switch(uVar5) {
  case 0x22:
  case 0x27:
  case 0x3f:
  case 0x5c:
    uVar8 = (uint)bVar2;
    break;
  default:
    uVar8 = 0x3f;
    break;
  case 0x55:
  case 0x75:
    uVar8 = 4;
    if (uVar5 != 0x75) {
      uVar8 = (uint)(uVar5 == 0x55) << 3;
    }
    if (uVar8 == 0) {
LAB_003a1154:
      FUN_002e6a9c(param_2);
      pbVar6 = pbVar13;
    }
    else {
      uVar15 = (ulong)(uVar8 | 3);
      uVar5 = 0;
      pbVar12 = pbVar6 + 3;
      pbVar1 = pbVar6 + uVar15;
      do {
        bVar4 = *pbVar12;
        if (bVar4 == 0) goto LAB_003a1154;
        uVar7 = (uint)bVar4;
        uVar8 = uVar7 - 0x37;
        if (0x19 < bVar4 - 0x41) {
          uVar8 = 0xffffffff;
        }
        if (uVar7 - 0x61 < 0x1a) {
          uVar8 = uVar7 - 0x57;
        }
        pbVar12 = pbVar12 + 1;
        if (uVar7 - 0x30 < 10) {
          uVar8 = uVar7 - 0x30;
        }
        uVar5 = uVar8 + uVar5 * 0x10;
      } while (pbVar12 < pbVar1);
      if (((uVar5 >> 10 == 0x36) && (*pbVar1 == 0x5c)) && (pbVar1[1] == 0x75)) {
        bVar4 = pbVar1[2];
        if (bVar4 != 0) {
          uVar8 = bVar4 - 0x30;
          if (uVar8 < 10) {
LAB_003a1270:
            bVar4 = pbVar1[3];
          }
          else {
            uVar7 = (uint)bVar4;
            if (0x19 < uVar7 - 0x61) {
              uVar8 = uVar7 - 0x37;
              if (0x19 < uVar7 - 0x41) {
                uVar8 = 0xffffffff;
              }
              goto LAB_003a1270;
            }
            uVar8 = uVar7 - 0x57;
            bVar4 = pbVar1[3];
          }
          if (bVar4 != 0) {
            uVar9 = (uint)bVar4;
            uVar7 = uVar9 - 0x30;
            if (uVar7 < 10) {
LAB_003a12b0:
              bVar4 = pbVar1[4];
            }
            else {
              if (0x19 < uVar9 - 0x61) {
                uVar7 = uVar9 - 0x37;
                if (0x19 < uVar9 - 0x41) {
                  uVar7 = 0xffffffff;
                }
                goto LAB_003a12b0;
              }
              uVar7 = uVar9 - 0x57;
              bVar4 = pbVar1[4];
            }
            if (bVar4 != 0) {
              uVar10 = (uint)bVar4;
              uVar9 = uVar10 - 0x30;
              if (uVar9 < 10) {
LAB_003a12f0:
                bVar4 = pbVar1[5];
              }
              else {
                if (0x19 < uVar10 - 0x61) {
                  uVar9 = uVar10 - 0x37;
                  if (0x19 < uVar10 - 0x41) {
                    uVar9 = 0xffffffff;
                  }
                  goto LAB_003a12f0;
                }
                uVar9 = uVar10 - 0x57;
                bVar4 = pbVar1[5];
              }
              if (bVar4 != 0) {
                uVar10 = bVar4 - 0x30;
                if (9 < uVar10) {
                  uVar11 = (uint)bVar4;
                  if (bVar4 - 0x61 < 0x1a) {
                    uVar10 = uVar11 - 0x57;
                  }
                  else {
                    uVar10 = uVar11 - 0x37;
                    if (0x19 < uVar11 - 0x41) {
                      uVar10 = 0xffffffff;
                    }
                  }
                }
                uVar10 = uVar10 + (uVar9 + (uVar7 + uVar8 * 0x10) * 0x10) * 0x10;
                if (uVar10 >> 10 == 0x37) {
                  uVar5 = (uVar10 - 0xdc00 | uVar5 * 0x400 + 0xfca00000) + 0x10000;
                  uVar15 = uVar15 + 6;
                }
              }
            }
          }
        }
      }
      local_90 = 0;
      if (uVar5 < 0x80) {
        lVar14 = 1;
        local_90 = uVar5;
LAB_003a1428:
        local_90 = FUN_0030f760(local_90);
        FUN_002e4094(param_2,auStack_8c + -lVar14,lVar14);
      }
      else {
        if (uVar5 < 0x800) {
          local_90 = (uVar5 & 0x7c0) << 2 | uVar5 & 0x3f | 0xc080;
          lVar14 = 2;
          goto LAB_003a1428;
        }
        if (uVar5 >> 0x10 == 0) {
          local_90 = (uVar5 & 0xfc0) << 2 | uVar5 & 0x3f | (uVar5 >> 0xc & 0xf) << 0x10 | 0xe08080;
          lVar14 = 3;
          goto LAB_003a1428;
        }
        if (uVar5 >> 0x15 == 0) {
          local_90 = (uVar5 & 0x3f000) << 4 | (uVar5 >> 0x12 & 7) << 0x18 |
                     uVar5 & 0x3f | (uVar5 >> 6 & 0x3f) << 8 | 0xf0808080;
          lVar14 = 4;
          goto LAB_003a1428;
        }
        FUN_0033b8c0(param_2,"\\U%08x");
      }
      pbVar6 = pbVar6 + (uVar15 - 1);
    }
    goto LAB_003a0f1c;
  case 0x61:
    break;
  case 0x62:
    uVar8 = 8;
    break;
  case 0x66:
    uVar8 = 0xc;
    break;
  case 0x6e:
    uVar8 = 10;
    break;
  case 0x72:
    uVar8 = 0xd;
    break;
  case 0x74:
    uVar8 = 9;
    break;
  case 0x76:
    uVar8 = 0xb;
    break;
  case 0x78:
    bVar4 = pbVar6[3];
    uVar5 = bVar4 - 0x30;
    if (uVar5 < 10) {
LAB_003a11ec:
      pbVar13 = pbVar6 + 3;
    }
    else {
      uVar8 = bVar4 - 0x41;
      uVar5 = 0;
      if ((uVar8 < 0x26) && ((1L << ((ulong)uVar8 & 0x3f) & 0x3f0000003fU) != 0)) {
        uVar5 = (uint)bVar4;
        if ((uVar5 - 0x61 & 0xff) < 0x1a) {
          uVar5 = uVar5 - 0x57;
        }
        else {
          uVar5 = uVar5 - 0x37;
          if (0x19 < uVar8) {
            uVar5 = 0xffffffff;
          }
        }
        goto LAB_003a11ec;
      }
    }
    bVar4 = pbVar13[1];
    uVar8 = bVar4 - 0x30;
    if (uVar8 < 10) {
LAB_003a124c:
      uVar5 = uVar8 + uVar5 * 0x10;
      pbVar13 = pbVar13 + 1;
    }
    else {
      uVar7 = bVar4 - 0x41;
      if ((uVar7 < 0x26) && ((1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) != 0)) {
        uVar8 = (uint)bVar4;
        if ((uVar8 - 0x61 & 0xff) < 0x1a) {
          uVar8 = uVar8 - 0x57;
        }
        else {
          uVar8 = uVar8 - 0x37;
          if (0x19 < uVar7) {
            uVar8 = 0xffffffff;
          }
        }
        goto LAB_003a124c;
      }
    }
    FUN_002e6a9c(param_2,uVar5);
    pbVar6 = pbVar13;
    goto LAB_003a0f1c;
  }
switchD_003a0fe8_caseD_61:
  FUN_002e6a9c(param_2,uVar8);
  pbVar6 = pbVar13;
  goto LAB_003a0f1c;
}


