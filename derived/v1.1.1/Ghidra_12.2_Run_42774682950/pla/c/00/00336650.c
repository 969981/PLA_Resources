/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00336650; name: FUN_00336650
 */


/* WARNING: Type propagation algorithm not settling */

ulong * FUN_00336650(ulong *param_1,uint param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  int *piVar17;
  long *plVar18;
  ulong *puVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong *puVar29;
  byte *pbVar30;
  ulong *puVar31;
  int iVar32;
  size_t sVar33;
  undefined1 auStack_90 [48];
  undefined1 auStack_58 [8];
  
  if (*(byte *)((long)param_1 + 9) != 0) {
    if (*(byte *)((long)param_1 + 0xb) != 0) {
      if (*(int *)((long)param_1 + 0xc) == 0) {
        return param_3;
      }
      if ((ulong *)*param_4 <= param_3) {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      }
      uVar10 = param_2 << 3 | 2;
      uVar8 = (undefined1)uVar10;
      if ((uint)uVar10 < 0x80) {
        pbVar28 = (byte *)((long)param_3 + 1);
        *(undefined1 *)param_3 = uVar8;
        uVar12 = *(uint *)((long)param_1 + 0xc);
      }
      else {
        *(byte *)param_3 = uVar8 | 0x80;
        if ((param_2 & 0x1fffffff) >> 0xb == 0) {
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          pbVar28 = (byte *)((long)param_3 + 2);
          uVar12 = *(uint *)((long)param_1 + 0xc);
        }
        else {
          pbVar28 = (byte *)((long)param_3 + 2);
          uVar12 = param_2 >> 4 & 0x1ffffff;
          do {
            pbVar30 = pbVar28;
            uVar11 = uVar12 >> 7;
            pbVar30[-1] = (byte)uVar12 | 0x80;
            pbVar28 = pbVar30 + 1;
            uVar20 = uVar12 >> 0xe;
            uVar12 = uVar11;
          } while (uVar20 != 0);
          *pbVar30 = (byte)uVar11;
          uVar12 = *(uint *)((long)param_1 + 0xc);
        }
      }
      if (uVar12 < 0x80) {
        puVar29 = (ulong *)((long)pbVar28 + 1);
        *pbVar28 = (char)uVar12;
        bVar7 = (byte)param_1[1];
      }
      else {
        *pbVar28 = (char)uVar12 | 0x80;
        uVar23 = (ulong)(long)(int)uVar12 >> 7;
        if (((ulong)(long)(int)uVar12 >> 0xe & 0x3ffff) == 0) {
          *(byte *)((long)pbVar28 + 1) = (byte)uVar23;
          puVar29 = (ulong *)((long)pbVar28 + 2);
          bVar7 = (byte)param_1[1];
        }
        else {
          puVar29 = (ulong *)((long)pbVar28 + 2);
          do {
            puVar19 = puVar29;
            uVar25 = uVar23 >> 7;
            *(byte *)((long)puVar19 + -1) = (byte)uVar23 | 0x80;
            puVar29 = (ulong *)((long)puVar19 + 1);
            uVar27 = uVar23 >> 0xe;
            uVar23 = uVar25;
          } while (uVar27 != 0);
          *(byte *)puVar19 = (byte)uVar25;
          bVar7 = (byte)param_1[1];
        }
      }
      if (0x11 < bVar7 - 1) {
        FUN_0030f640(auStack_90,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x3c);
                    /* try { // try from 00338c94 to 00338ca7 has its CatchHandler @ 00339d44 */
        uVar15 = FUN_0030f3ac(auStack_90,
                              "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00338ca8 to 00338caf has its CatchHandler @ 00339d40 */
        FUN_0030f41c(auStack_58,uVar15);
        FUN_0030f658(auStack_90);
      }
      switch(bVar7 - 1) {
      case 0:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          puVar19 = (ulong *)FUN_0032ae50(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar31 = puVar29 + 1;
          *puVar29 = *puVar19;
          piVar17 = (int *)*param_1;
          puVar29 = puVar31;
        } while (iVar32 < *piVar17);
        return puVar31;
      case 1:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          piVar17 = (int *)FUN_0032a0d0(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar19 = (ulong *)((long)puVar29 + 4);
          *(int *)puVar29 = *piVar17;
          piVar17 = (int *)*param_1;
          puVar29 = puVar19;
        } while (iVar32 < *piVar17);
        return puVar19;
      case 2:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_003390bc;
        do {
          puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
          piVar17 = (int *)*param_1;
LAB_003390bc:
          do {
            puVar29 = (ulong *)FUN_003285d0(piVar17,iVar32);
            uVar23 = *puVar29;
            if (uVar23 < 0x80) {
              puVar29 = (ulong *)((long)puVar19 + 1);
              *(byte *)puVar19 = (byte)uVar23;
            }
            else {
              *(byte *)puVar19 = (byte)uVar23 | 0x80;
              if (uVar23 >> 0xe == 0) {
                *(byte *)((long)puVar19 + 1) = (byte)(uVar23 >> 7);
                puVar29 = (ulong *)((long)puVar19 + 2);
              }
              else {
                uVar23 = uVar23 >> 7;
                puVar29 = (ulong *)((long)puVar19 + 2);
                do {
                  puVar19 = puVar29;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar19 + -1) = (byte)uVar23 | 0x80;
                  puVar29 = (ulong *)((long)puVar19 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar19 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return puVar29;
            }
            puVar19 = puVar29;
          } while (puVar29 < (ulong *)*param_4);
        } while( true );
      case 3:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_00339178;
        do {
          puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
          piVar17 = (int *)*param_1;
LAB_00339178:
          do {
            puVar29 = (ulong *)FUN_00329350(piVar17,iVar32);
            uVar23 = *puVar29;
            if (uVar23 < 0x80) {
              puVar29 = (ulong *)((long)puVar19 + 1);
              *(byte *)puVar19 = (byte)uVar23;
            }
            else {
              *(byte *)puVar19 = (byte)uVar23 | 0x80;
              if (uVar23 >> 0xe == 0) {
                *(byte *)((long)puVar19 + 1) = (byte)(uVar23 >> 7);
                puVar29 = (ulong *)((long)puVar19 + 2);
              }
              else {
                uVar23 = uVar23 >> 7;
                puVar29 = (ulong *)((long)puVar19 + 2);
                do {
                  puVar19 = puVar29;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar19 + -1) = (byte)uVar23 | 0x80;
                  puVar29 = (ulong *)((long)puVar19 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar19 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return puVar29;
            }
            puVar19 = puVar29;
          } while (puVar29 < (ulong *)*param_4);
        } while( true );
      case 4:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_00338d60;
        do {
          puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
          piVar17 = (int *)*param_1;
LAB_00338d60:
          do {
            puVar16 = (uint *)FUN_00326ad0(piVar17,iVar32);
            uVar12 = *puVar16;
            if (uVar12 < 0x80) {
              puVar29 = (ulong *)((long)puVar19 + 1);
              *(byte *)puVar19 = (byte)uVar12;
            }
            else {
              *(byte *)puVar19 = (byte)uVar12 | 0x80;
              uVar23 = (ulong)(long)(int)uVar12 >> 7;
              if (((ulong)(long)(int)uVar12 >> 0xe & 0x3ffff) == 0) {
                *(byte *)((long)puVar19 + 1) = (byte)uVar23;
                puVar29 = (ulong *)((long)puVar19 + 2);
              }
              else {
                puVar29 = (ulong *)((long)puVar19 + 2);
                do {
                  puVar19 = puVar29;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar19 + -1) = (byte)uVar23 | 0x80;
                  puVar29 = (ulong *)((long)puVar19 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar19 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return puVar29;
            }
            puVar19 = puVar29;
          } while (puVar29 < (ulong *)*param_4);
        } while( true );
      case 5:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          puVar19 = (ulong *)FUN_00329350(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar31 = puVar29 + 1;
          *puVar29 = *puVar19;
          piVar17 = (int *)*param_1;
          puVar29 = puVar31;
        } while (iVar32 < *piVar17);
        return puVar31;
      case 6:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          piVar17 = (int *)FUN_00327850(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar19 = (ulong *)((long)puVar29 + 4);
          *(int *)puVar29 = *piVar17;
          piVar17 = (int *)*param_1;
          puVar29 = puVar19;
        } while (iVar32 < *piVar17);
        return puVar19;
      case 7:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          pbVar28 = (byte *)FUN_00325d58(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar19 = (ulong *)((long)puVar29 + 1);
          *(byte *)puVar29 = *pbVar28;
          piVar17 = (int *)*param_1;
          puVar29 = puVar19;
        } while (iVar32 < *piVar17);
        return puVar19;
      case 8:
      case 9:
      case 10:
      case 0xb:
        FUN_0030f640(auStack_90,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x7b2);
                    /* try { // try from 00338cf0 to 00338d03 has its CatchHandler @ 00339d2c */
        uVar15 = FUN_0030f3ac(auStack_90,"Non-primitive types can\'t be packed.");
                    /* try { // try from 00338d04 to 00338d0b has its CatchHandler @ 00339d28 */
        FUN_0030f41c(auStack_58,uVar15);
        FUN_0030f658(auStack_90);
        return puVar29;
      case 0xc:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_00338e1c;
        break;
      case 0xd:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_00339354;
        do {
          puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
          piVar17 = (int *)*param_1;
LAB_00339354:
          do {
            puVar16 = (uint *)FUN_00326ad0(piVar17,iVar32);
            uVar12 = *puVar16;
            if (uVar12 < 0x80) {
              puVar29 = (ulong *)((long)puVar19 + 1);
              *(byte *)puVar19 = (byte)uVar12;
            }
            else {
              *(byte *)puVar19 = (byte)uVar12 | 0x80;
              uVar23 = (ulong)(long)(int)uVar12 >> 7;
              if (((ulong)(long)(int)uVar12 >> 0xe & 0x3ffff) == 0) {
                *(byte *)((long)puVar19 + 1) = (byte)uVar23;
                puVar29 = (ulong *)((long)puVar19 + 2);
              }
              else {
                puVar29 = (ulong *)((long)puVar19 + 2);
                do {
                  puVar19 = puVar29;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar19 + -1) = (byte)uVar23 | 0x80;
                  puVar29 = (ulong *)((long)puVar19 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar19 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return puVar29;
            }
            puVar19 = puVar29;
          } while (puVar29 < (ulong *)*param_4);
        } while( true );
      case 0xe:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          piVar17 = (int *)FUN_00326ad0(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar19 = (ulong *)((long)puVar29 + 4);
          *(int *)puVar29 = *piVar17;
          piVar17 = (int *)*param_1;
          puVar29 = puVar19;
        } while (iVar32 < *piVar17);
        return puVar19;
      case 0xf:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= puVar29) {
            puVar29 = (ulong *)FUN_00310ec4(param_4,puVar29);
            piVar17 = (int *)*param_1;
          }
          puVar19 = (ulong *)FUN_003285d0(piVar17,iVar32);
          iVar32 = iVar32 + 1;
          puVar31 = puVar29 + 1;
          *puVar29 = *puVar19;
          piVar17 = (int *)*param_1;
          puVar29 = puVar31;
        } while (iVar32 < *piVar17);
        return puVar31;
      case 0x10:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_00338f38;
        do {
          puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
          piVar17 = (int *)*param_1;
LAB_00338f38:
          do {
            piVar17 = (int *)FUN_00326ad0(piVar17,iVar32);
            uVar12 = *piVar17 << 1 ^ *piVar17 >> 0x1f;
            if (uVar12 < 0x80) {
              puVar29 = (ulong *)((long)puVar19 + 1);
              *(byte *)puVar19 = (byte)uVar12;
            }
            else {
              *(byte *)puVar19 = (byte)uVar12 | 0x80;
              if (uVar12 >> 0xe == 0) {
                *(byte *)((long)puVar19 + 1) = (byte)(uVar12 >> 7);
                puVar29 = (ulong *)((long)puVar19 + 2);
              }
              else {
                puVar29 = (ulong *)((long)puVar19 + 2);
                uVar12 = uVar12 >> 7;
                do {
                  puVar19 = puVar29;
                  uVar11 = uVar12 >> 7;
                  *(byte *)((long)puVar19 + -1) = (byte)uVar12 | 0x80;
                  puVar29 = (ulong *)((long)puVar19 + 1);
                  uVar20 = uVar12 >> 0xe;
                  uVar12 = uVar11;
                } while (uVar20 != 0);
                *(byte *)puVar19 = (byte)uVar11;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return puVar29;
            }
            puVar19 = puVar29;
          } while (puVar29 < (ulong *)*param_4);
        } while( true );
      case 0x11:
        piVar17 = (int *)*param_1;
        if (*piVar17 < 1) {
          return puVar29;
        }
        iVar32 = 0;
        puVar19 = puVar29;
        if (puVar29 < (ulong *)*param_4) goto LAB_00339470;
        do {
          puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
          piVar17 = (int *)*param_1;
LAB_00339470:
          do {
            plVar18 = (long *)FUN_003285d0(piVar17,iVar32);
            uVar23 = *plVar18 << 1 ^ *plVar18 >> 0x3f;
            if (uVar23 < 0x80) {
              puVar29 = (ulong *)((long)puVar19 + 1);
              *(byte *)puVar19 = (byte)uVar23;
            }
            else {
              *(byte *)puVar19 = (byte)uVar23 | 0x80;
              if (uVar23 >> 0xe == 0) {
                *(byte *)((long)puVar19 + 1) = (byte)(uVar23 >> 7);
                puVar29 = (ulong *)((long)puVar19 + 2);
              }
              else {
                uVar23 = uVar23 >> 7;
                puVar29 = (ulong *)((long)puVar19 + 2);
                do {
                  puVar19 = puVar29;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar19 + -1) = (byte)uVar23 | 0x80;
                  puVar29 = (ulong *)((long)puVar19 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar19 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return puVar29;
            }
            puVar19 = puVar29;
          } while (puVar29 < (ulong *)*param_4);
        } while( true );
      default:
        return puVar29;
      }
      do {
        puVar19 = (ulong *)FUN_00310ec4(param_4,puVar29);
        piVar17 = (int *)*param_1;
LAB_00338e1c:
        do {
          puVar16 = (uint *)FUN_00327850(piVar17,iVar32);
          uVar12 = *puVar16;
          if (uVar12 < 0x80) {
            puVar29 = (ulong *)((long)puVar19 + 1);
            *(byte *)puVar19 = (byte)uVar12;
          }
          else {
            *(byte *)puVar19 = (byte)uVar12 | 0x80;
            if (uVar12 >> 0xe == 0) {
              *(byte *)((long)puVar19 + 1) = (byte)(uVar12 >> 7);
              puVar29 = (ulong *)((long)puVar19 + 2);
            }
            else {
              puVar29 = (ulong *)((long)puVar19 + 2);
              uVar12 = uVar12 >> 7;
              do {
                puVar19 = puVar29;
                uVar11 = uVar12 >> 7;
                *(byte *)((long)puVar19 + -1) = (byte)uVar12 | 0x80;
                puVar29 = (ulong *)((long)puVar19 + 1);
                uVar20 = uVar12 >> 0xe;
                uVar12 = uVar11;
              } while (uVar20 != 0);
              *(byte *)puVar19 = (byte)uVar11;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return puVar29;
          }
          puVar19 = puVar29;
        } while (puVar29 < (ulong *)*param_4);
      } while( true );
    }
    switch((byte)param_1[1]) {
    case 1:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 1;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar14 = (undefined8 *)FUN_0032ae50(piVar17,iVar32);
          uVar15 = *puVar14;
          *(byte *)param_3 = (byte)uVar12;
          *(undefined8 *)((long)param_3 + 1) = uVar15;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 9);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)(param_2 << 3) | 0x81;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar14 = (undefined8 *)FUN_0032ae50(piVar17,iVar32);
          uVar15 = *puVar14;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(undefined8 *)((long)param_3 + 2) = uVar15;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 10);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        puVar14 = (undefined8 *)FUN_0032ae50(piVar17,iVar32);
        uVar15 = *puVar14;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 10);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -9) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)(puVar29 + -1) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(undefined8 *)((long)puVar29 + -7) = uVar15;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 2:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 5;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar13 = (undefined4 *)FUN_0032a0d0(piVar17,iVar32);
          uVar10 = *puVar13;
          *(byte *)param_3 = (byte)uVar12;
          *(undefined4 *)((long)param_3 + 1) = uVar10;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 5);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)(param_2 << 3) | 0x85;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar13 = (undefined4 *)FUN_0032a0d0(piVar17,iVar32);
          uVar10 = *puVar13;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(undefined4 *)((long)param_3 + 2) = uVar10;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 6);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        puVar13 = (undefined4 *)FUN_0032a0d0(piVar17,iVar32);
        uVar10 = *puVar13;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 6);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -5) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)((long)puVar29 + -4) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(undefined4 *)((long)puVar29 + -3) = uVar10;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 3:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00336958;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_00336958:
          do {
            puVar29 = (ulong *)FUN_003285d0(piVar17,iVar32);
            uVar23 = *puVar29;
            *(byte *)param_3 = (byte)uVar12;
            if (uVar23 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar23;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar23 | 0x80;
              if (uVar23 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar23 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar23 = uVar23 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar29 = param_3;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar29 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_00337b54;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_00337b54:
        do {
          puVar29 = (ulong *)FUN_003285d0(piVar17,iVar32);
          uVar23 = *puVar29;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (0x7f < uVar23) goto LAB_00337ba4;
LAB_00337b2c:
            *(byte *)((long)param_3 + 2) = (byte)uVar23;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar11 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar20 = uVar11 >> 7;
              uVar21 = uVar11 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar11 | 0x80;
              uVar11 = uVar20;
            } while (uVar21 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar20;
            if (uVar23 < 0x80) goto LAB_00337b2c;
LAB_00337ba4:
            *(byte *)((long)param_3 + 2) = (byte)uVar23 | 0x80;
            if (uVar23 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar23 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              uVar23 = uVar23 >> 7;
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar29 = param_3;
                uVar25 = uVar23 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar27 = uVar23 >> 0xe;
                uVar23 = uVar25;
              } while (uVar27 != 0);
              *(byte *)puVar29 = (byte)uVar25;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 4:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00336a28;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_00336a28:
          do {
            puVar29 = (ulong *)FUN_00329350(piVar17,iVar32);
            uVar23 = *puVar29;
            *(byte *)param_3 = (byte)uVar12;
            if (uVar23 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar23;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar23 | 0x80;
              if (uVar23 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar23 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar23 = uVar23 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar29 = param_3;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar29 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_00337c4c;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_00337c4c:
        do {
          puVar29 = (ulong *)FUN_00329350(piVar17,iVar32);
          uVar23 = *puVar29;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (0x7f < uVar23) goto LAB_00337c9c;
LAB_00337c24:
            *(byte *)((long)param_3 + 2) = (byte)uVar23;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar11 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar20 = uVar11 >> 7;
              uVar21 = uVar11 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar11 | 0x80;
              uVar11 = uVar20;
            } while (uVar21 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar20;
            if (uVar23 < 0x80) goto LAB_00337c24;
LAB_00337c9c:
            *(byte *)((long)param_3 + 2) = (byte)uVar23 | 0x80;
            if (uVar23 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar23 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              uVar23 = uVar23 >> 7;
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar29 = param_3;
                uVar25 = uVar23 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar27 = uVar23 >> 0xe;
                uVar23 = uVar25;
              } while (uVar27 != 0);
              *(byte *)puVar29 = (byte)uVar25;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 5:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00336af8;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_00336af8:
          do {
            puVar16 = (uint *)FUN_00326ad0(piVar17,iVar32);
            uVar11 = *puVar16;
            *(byte *)param_3 = (byte)uVar12;
            if (uVar11 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar11;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)((ulong)(long)(int)uVar11 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar23 = (ulong)(long)(int)uVar11 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar29 = param_3;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar29 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_00337d44;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_00337d44:
        do {
          puVar16 = (uint *)FUN_00326ad0(piVar17,iVar32);
          uVar11 = *puVar16;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (0x7f < uVar11) goto LAB_00337d94;
LAB_00337d1c:
            *(byte *)((long)param_3 + 2) = (byte)uVar11;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar20 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar21 = uVar20 >> 7;
              uVar5 = uVar20 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar20 | 0x80;
              uVar20 = uVar21;
            } while (uVar5 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar21;
            if (uVar11 < 0x80) goto LAB_00337d1c;
LAB_00337d94:
            *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
            uVar23 = (ulong)(long)(int)uVar11 >> 7;
            if (((ulong)(long)(int)uVar11 >> 0xe & 0x3ffff) == 0) {
              *(byte *)((long)param_3 + 3) = (byte)uVar23;
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar29 = param_3;
                uVar25 = uVar23 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar27 = uVar23 >> 0xe;
                uVar23 = uVar25;
              } while (uVar27 != 0);
              *(byte *)puVar29 = (byte)uVar25;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 6:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 1;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar14 = (undefined8 *)FUN_00329350(piVar17,iVar32);
          uVar15 = *puVar14;
          *(byte *)param_3 = (byte)uVar12;
          *(undefined8 *)((long)param_3 + 1) = uVar15;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 9);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)(param_2 << 3) | 0x81;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar14 = (undefined8 *)FUN_00329350(piVar17,iVar32);
          uVar15 = *puVar14;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(undefined8 *)((long)param_3 + 2) = uVar15;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 10);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        puVar14 = (undefined8 *)FUN_00329350(piVar17,iVar32);
        uVar15 = *puVar14;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 10);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -9) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)(puVar29 + -1) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(undefined8 *)((long)puVar29 + -7) = uVar15;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 7:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 5;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar13 = (undefined4 *)FUN_00327850(piVar17,iVar32);
          uVar10 = *puVar13;
          *(byte *)param_3 = (byte)uVar12;
          *(undefined4 *)((long)param_3 + 1) = uVar10;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 5);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)(param_2 << 3) | 0x85;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar13 = (undefined4 *)FUN_00327850(piVar17,iVar32);
          uVar10 = *puVar13;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(undefined4 *)((long)param_3 + 2) = uVar10;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 6);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        puVar13 = (undefined4 *)FUN_00327850(piVar17,iVar32);
        uVar10 = *puVar13;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 6);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -5) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)((long)puVar29 + -4) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(undefined4 *)((long)puVar29 + -3) = uVar10;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 8:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 * 8;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          pbVar28 = (byte *)FUN_00325d58(piVar17,iVar32);
          bVar7 = *pbVar28;
          *(byte *)param_3 = (byte)uVar12;
          *(byte *)((long)param_3 + 1) = bVar7;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 2);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)uVar12 | 0x80;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          pbVar28 = (byte *)FUN_00325d58(piVar17,iVar32);
          bVar3 = *pbVar28;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(byte *)((long)param_3 + 2) = bVar3;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 3);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        pbVar28 = (byte *)FUN_00325d58(piVar17,iVar32);
        bVar3 = *pbVar28;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 3);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -2) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)((long)puVar29 + -1) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(byte *)puVar29 = bVar3;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 9:
      uVar23 = *param_1;
      if (*(int *)(uVar23 + 8) < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 2;
      uVar11 = param_2 << 3;
      lVar22 = -6;
      if ((param_2 >> 0x19 & 0xf) == 0) {
        lVar22 = -5;
      }
      lVar26 = -3;
      if (uVar11 < 0x80) {
        lVar26 = -2;
      }
      lVar1 = -4;
      if (0x1fffff < uVar11) {
        lVar1 = lVar22;
      }
      iVar32 = 0;
      if (0x3fff < uVar11) {
        lVar26 = lVar1;
      }
      break;
    case 10:
      uVar23 = *param_1;
      if (*(int *)(uVar23 + 8) < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 3;
      uVar11 = param_2 << 3 | 4;
      uVar20 = param_2 >> 4 & 0x1ffffff;
      bVar3 = (byte)(param_2 << 3);
      bVar7 = bVar3 | 0x84;
      if (0x7f < uVar12) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00337f80;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          uVar23 = *param_1;
LAB_00337f80:
          do {
            plVar18 = (long *)FUN_0033b104(uVar23,iVar32);
            *(byte *)param_3 = bVar3 | 0x83;
            bVar6 = (byte)(param_2 >> 4);
            if (uVar12 < 0x4000) {
              *(byte *)((long)param_3 + 1) = bVar6;
            }
            else {
              uVar21 = uVar20;
              do {
                puVar29 = param_3;
                uVar5 = uVar21 >> 7;
                uVar4 = uVar21 >> 0xe;
                param_3 = (ulong *)((long)puVar29 + 1);
                *(byte *)param_3 = (byte)uVar21 | 0x80;
                uVar21 = uVar5;
              } while (uVar4 != 0);
              *(byte *)((long)puVar29 + 2) = (byte)uVar5;
            }
            pbVar28 = (byte *)(**(code **)(*plVar18 + 0x60))
                                        (plVar18,(byte *)((long)param_3 + 2),param_4);
            if (pbVar28 < (byte *)*param_4) {
              if (0x7f < uVar11) goto LAB_00337fe8;
LAB_00337f5c:
              param_3 = (ulong *)(pbVar28 + 1);
              *pbVar28 = (byte)uVar11;
            }
            else {
              pbVar28 = (byte *)FUN_00310ec4(param_4,pbVar28);
              if (uVar11 < 0x80) goto LAB_00337f5c;
LAB_00337fe8:
              *pbVar28 = bVar7;
              if (uVar11 < 0x4000) {
                pbVar28[1] = bVar6;
                param_3 = (ulong *)(pbVar28 + 2);
              }
              else {
                param_3 = (ulong *)(pbVar28 + 2);
                uVar21 = uVar20;
                do {
                  puVar29 = param_3;
                  uVar5 = uVar21 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar21 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar4 = uVar21 >> 0xe;
                  uVar21 = uVar5;
                } while (uVar4 != 0);
                *(byte *)puVar29 = (byte)uVar5;
              }
            }
            uVar23 = *param_1;
            iVar32 = iVar32 + 1;
            if (*(int *)(uVar23 + 8) <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_00336eb0;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        uVar23 = *param_1;
LAB_00336eb0:
        do {
          plVar18 = (long *)FUN_0033b104(uVar23,iVar32);
          *(byte *)param_3 = (byte)uVar12;
          pbVar28 = (byte *)(**(code **)(*plVar18 + 0x60))
                                      (plVar18,(byte *)((long)param_3 + 1),param_4);
          if (pbVar28 < (byte *)*param_4) {
            if (0x7f < uVar11) goto LAB_00336ee8;
LAB_00336e8c:
            param_3 = (ulong *)(pbVar28 + 1);
            *pbVar28 = (byte)uVar11;
          }
          else {
            pbVar28 = (byte *)FUN_00310ec4(param_4,pbVar28);
            if (uVar11 < 0x80) goto LAB_00336e8c;
LAB_00336ee8:
            *pbVar28 = bVar7;
            if (uVar11 < 0x4000) {
              pbVar28[1] = (byte)(param_2 >> 4);
              param_3 = (ulong *)(pbVar28 + 2);
            }
            else {
              param_3 = (ulong *)(pbVar28 + 2);
              uVar21 = uVar20;
              do {
                puVar29 = param_3;
                uVar5 = uVar21 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar21 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar4 = uVar21 >> 0xe;
                uVar21 = uVar5;
              } while (uVar4 != 0);
              *(byte *)puVar29 = (byte)uVar5;
            }
          }
          uVar23 = *param_1;
          iVar32 = iVar32 + 1;
          if (*(int *)(uVar23 + 8) <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 0xb:
      uVar23 = *param_1;
      if (*(int *)(uVar23 + 8) < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 2;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00336fd4;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          uVar23 = *param_1;
LAB_00336fd4:
          do {
            plVar18 = (long *)FUN_0033b104(uVar23,iVar32);
            *(byte *)param_3 = (byte)uVar12;
            uVar11 = (**(code **)(*plVar18 + 0x50))();
            if (uVar11 < 0x80) {
              pbVar28 = (byte *)((long)param_3 + 2);
              *(byte *)((long)param_3 + 1) = (byte)uVar11;
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar11 >> 7);
                pbVar28 = (byte *)((long)param_3 + 3);
              }
              else {
                pbVar28 = (byte *)((long)param_3 + 3);
                uVar11 = uVar11 >> 7;
                do {
                  pbVar30 = pbVar28;
                  uVar20 = uVar11 >> 7;
                  pbVar30[-1] = (byte)uVar11 | 0x80;
                  pbVar28 = pbVar30 + 1;
                  uVar21 = uVar11 >> 0xe;
                  uVar11 = uVar20;
                } while (uVar21 != 0);
                *pbVar30 = (byte)uVar20;
              }
            }
            param_3 = (ulong *)(**(code **)(*plVar18 + 0x60))(plVar18,pbVar28,param_4);
            uVar23 = *param_1;
            iVar32 = iVar32 + 1;
            if (*(int *)(uVar23 + 8) <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_003380c4;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        uVar23 = *param_1;
LAB_003380c4:
        do {
          plVar18 = (long *)FUN_0033b104(uVar23,iVar32);
          *(byte *)param_3 = (byte)(param_2 << 3) | 0x82;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          }
          else {
            uVar11 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar20 = uVar11 >> 7;
              uVar21 = uVar11 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar11 | 0x80;
              uVar11 = uVar20;
            } while (uVar21 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar20;
          }
          uVar11 = (**(code **)(*plVar18 + 0x50))(plVar18);
          if (uVar11 < 0x80) {
            *(byte *)((long)param_3 + 2) = (byte)uVar11;
            pbVar28 = (byte *)((long)param_3 + 3);
          }
          else {
            *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
            if (uVar11 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar11 >> 7);
              pbVar28 = (byte *)((long)param_3 + 4);
            }
            else {
              pbVar28 = (byte *)((long)param_3 + 4);
              uVar11 = uVar11 >> 7;
              do {
                pbVar30 = pbVar28;
                uVar20 = uVar11 >> 7;
                pbVar30[-1] = (byte)uVar11 | 0x80;
                pbVar28 = pbVar30 + 1;
                uVar21 = uVar11 >> 0xe;
                uVar11 = uVar20;
              } while (uVar21 != 0);
              *pbVar30 = (byte)uVar20;
            }
          }
          param_3 = (ulong *)(**(code **)(*plVar18 + 0x60))(plVar18,pbVar28,param_4);
          uVar23 = *param_1;
          iVar32 = iVar32 + 1;
          if (*(int *)(uVar23 + 8) <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 0xc:
      uVar23 = *param_1;
      if (*(int *)(uVar23 + 8) < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 2;
      uVar11 = param_2 << 3;
      lVar22 = -6;
      if ((param_2 >> 0x19 & 0xf) == 0) {
        lVar22 = -5;
      }
      lVar26 = -3;
      if (uVar11 < 0x80) {
        lVar26 = -2;
      }
      lVar1 = -4;
      if (0x1fffff < uVar11) {
        lVar1 = lVar22;
      }
      iVar32 = 0;
      if (0x3fff < uVar11) {
        lVar26 = lVar1;
      }
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          uVar23 = *param_1;
        }
        pbVar28 = (byte *)FUN_0032b79c(uVar23,iVar32);
        if ((*pbVar28 & 1) == 0) {
          sVar33 = (size_t)(*pbVar28 >> 1);
LAB_003370e8:
          if ((*param_4 - (long)param_3) + lVar26 + 0x10 < (long)sVar33) goto LAB_00337190;
          if (uVar12 < 0x80) {
            pbVar30 = (byte *)((long)param_3 + 1);
            *(byte *)param_3 = (byte)uVar12;
          }
          else {
            *(byte *)param_3 = (byte)uVar11 | 0x82;
            if (uVar12 < 0x4000) {
              *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
              pbVar30 = (byte *)((long)param_3 + 2);
            }
            else {
              pbVar30 = (byte *)((long)param_3 + 2);
              uVar20 = param_2 >> 4 & 0x1ffffff;
              do {
                pbVar24 = pbVar30;
                uVar21 = uVar20 >> 7;
                pbVar24[-1] = (byte)uVar20 | 0x80;
                pbVar30 = pbVar24 + 1;
                uVar5 = uVar20 >> 0xe;
                uVar20 = uVar21;
              } while (uVar5 != 0);
              *pbVar24 = (byte)uVar21;
            }
          }
          *pbVar30 = (byte)sVar33;
          pbVar24 = *(byte **)(pbVar28 + 0x10);
          if ((*pbVar28 & 1) == 0) {
            pbVar24 = pbVar28 + 1;
          }
          memcpy(pbVar30 + 1,pbVar24,sVar33);
          param_3 = (ulong *)(pbVar30 + 1 + sVar33);
        }
        else {
          sVar33 = *(size_t *)(pbVar28 + 8);
          if ((long)sVar33 < 0x80) goto LAB_003370e8;
LAB_00337190:
          param_3 = (ulong *)FUN_00311488(param_4,param_2,pbVar28,param_3);
        }
        uVar23 = *param_1;
        iVar32 = iVar32 + 1;
        if (*(int *)(uVar23 + 8) <= iVar32) {
          return param_3;
        }
      } while( true );
    case 0xd:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00337218;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_00337218:
          do {
            puVar16 = (uint *)FUN_00327850(piVar17,iVar32);
            uVar11 = *puVar16;
            *(byte *)param_3 = (byte)uVar12;
            if (uVar11 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar11;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar11 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                param_3 = (ulong *)((long)param_3 + 3);
                uVar11 = uVar11 >> 7;
                do {
                  puVar29 = param_3;
                  uVar20 = uVar11 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar11 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar21 = uVar11 >> 0xe;
                  uVar11 = uVar20;
                } while (uVar21 != 0);
                *(byte *)puVar29 = (byte)uVar20;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_003381c4;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_003381c4:
        do {
          puVar16 = (uint *)FUN_00327850(piVar17,iVar32);
          uVar11 = *puVar16;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (0x7f < uVar11) goto LAB_00338214;
LAB_0033819c:
            *(byte *)((long)param_3 + 2) = (byte)uVar11;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar20 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar21 = uVar20 >> 7;
              uVar5 = uVar20 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar20 | 0x80;
              uVar20 = uVar21;
            } while (uVar5 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar21;
            if (uVar11 < 0x80) goto LAB_0033819c;
LAB_00338214:
            *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
            if (uVar11 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar11 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              param_3 = (ulong *)((long)param_3 + 4);
              uVar11 = uVar11 >> 7;
              do {
                puVar29 = param_3;
                uVar20 = uVar11 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar11 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar21 = uVar11 >> 0xe;
                uVar11 = uVar20;
              } while (uVar21 != 0);
              *(byte *)puVar29 = (byte)uVar20;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 0xe:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_003372e8;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_003372e8:
          do {
            puVar16 = (uint *)FUN_00326ad0(piVar17,iVar32);
            uVar11 = *puVar16;
            *(byte *)param_3 = (byte)uVar12;
            if (uVar11 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar11;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)((ulong)(long)(int)uVar11 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar23 = (ulong)(long)(int)uVar11 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar29 = param_3;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar29 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_003382bc;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_003382bc:
        do {
          puVar16 = (uint *)FUN_00326ad0(piVar17,iVar32);
          uVar11 = *puVar16;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (0x7f < uVar11) goto LAB_0033830c;
LAB_00338294:
            *(byte *)((long)param_3 + 2) = (byte)uVar11;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar20 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar21 = uVar20 >> 7;
              uVar5 = uVar20 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar20 | 0x80;
              uVar20 = uVar21;
            } while (uVar5 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar21;
            if (uVar11 < 0x80) goto LAB_00338294;
LAB_0033830c:
            *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
            uVar23 = (ulong)(long)(int)uVar11 >> 7;
            if (((ulong)(long)(int)uVar11 >> 0xe & 0x3ffff) == 0) {
              *(byte *)((long)param_3 + 3) = (byte)uVar23;
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar29 = param_3;
                uVar25 = uVar23 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar27 = uVar23 >> 0xe;
                uVar23 = uVar25;
              } while (uVar27 != 0);
              *(byte *)puVar29 = (byte)uVar25;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 0xf:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 5;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar13 = (undefined4 *)FUN_00326ad0(piVar17,iVar32);
          uVar10 = *puVar13;
          *(byte *)param_3 = (byte)uVar12;
          *(undefined4 *)((long)param_3 + 1) = uVar10;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 5);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)(param_2 << 3) | 0x85;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar13 = (undefined4 *)FUN_00326ad0(piVar17,iVar32);
          uVar10 = *puVar13;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(undefined4 *)((long)param_3 + 2) = uVar10;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 6);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        puVar13 = (undefined4 *)FUN_00326ad0(piVar17,iVar32);
        uVar10 = *puVar13;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 6);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -5) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)((long)puVar29 + -4) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(undefined4 *)((long)puVar29 + -3) = uVar10;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 0x10:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3 | 1;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar14 = (undefined8 *)FUN_003285d0(piVar17,iVar32);
          uVar15 = *puVar14;
          *(byte *)param_3 = (byte)uVar12;
          *(undefined8 *)((long)param_3 + 1) = uVar15;
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          param_3 = (ulong *)((long)param_3 + 9);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      bVar7 = (byte)(param_2 << 3) | 0x81;
      if (uVar12 < 0x4000) {
        iVar32 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
            piVar17 = (int *)*param_1;
          }
          puVar14 = (undefined8 *)FUN_003285d0(piVar17,iVar32);
          uVar15 = *puVar14;
          *(byte *)param_3 = bVar7;
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          iVar32 = iVar32 + 1;
          *(undefined8 *)((long)param_3 + 2) = uVar15;
          piVar17 = (int *)*param_1;
          param_3 = (ulong *)((long)param_3 + 10);
        } while (iVar32 < *piVar17);
        return param_3;
      }
      iVar32 = 0;
      do {
        if ((ulong *)*param_4 <= param_3) {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
        }
        puVar14 = (undefined8 *)FUN_003285d0(piVar17,iVar32);
        uVar15 = *puVar14;
        *(byte *)param_3 = bVar7;
        param_3 = (ulong *)((long)param_3 + 10);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          puVar29 = param_3;
          uVar11 = uVar12 >> 7;
          *(byte *)((long)puVar29 + -9) = (byte)uVar12 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *(byte *)(puVar29 + -1) = (byte)uVar11;
        iVar32 = iVar32 + 1;
        *(undefined8 *)((long)puVar29 + -7) = uVar15;
        piVar17 = (int *)*param_1;
      } while (iVar32 < *piVar17);
      return param_3;
    case 0x11:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_003374a8;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_003374a8:
          do {
            piVar17 = (int *)FUN_00326ad0(piVar17,iVar32);
            iVar2 = *piVar17;
            *(byte *)param_3 = (byte)uVar12;
            uVar11 = iVar2 << 1 ^ iVar2 >> 0x1f;
            if (uVar11 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar11;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar11 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                param_3 = (ulong *)((long)param_3 + 3);
                uVar11 = uVar11 >> 7;
                do {
                  puVar29 = param_3;
                  uVar20 = uVar11 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar11 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar21 = uVar11 >> 0xe;
                  uVar11 = uVar20;
                } while (uVar21 != 0);
                *(byte *)puVar29 = (byte)uVar20;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_00338494;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_00338494:
        do {
          piVar17 = (int *)FUN_00326ad0(piVar17,iVar32);
          iVar2 = *piVar17;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            uVar11 = iVar2 << 1 ^ iVar2 >> 0x1f;
            if (0x7f < uVar11) goto LAB_003384f4;
LAB_0033846c:
            *(byte *)((long)param_3 + 2) = (byte)uVar11;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar11 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar20 = uVar11 >> 7;
              uVar21 = uVar11 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar11 | 0x80;
              uVar11 = uVar20;
            } while (uVar21 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar20;
            uVar11 = iVar2 << 1 ^ iVar2 >> 0x1f;
            if (uVar11 < 0x80) goto LAB_0033846c;
LAB_003384f4:
            *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
            if (uVar11 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar11 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              param_3 = (ulong *)((long)param_3 + 4);
              uVar11 = uVar11 >> 7;
              do {
                puVar29 = param_3;
                uVar20 = uVar11 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar11 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar21 = uVar11 >> 0xe;
                uVar11 = uVar20;
              } while (uVar21 != 0);
              *(byte *)puVar29 = (byte)uVar20;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    case 0x12:
      piVar17 = (int *)*param_1;
      if (*piVar17 < 1) {
        return param_3;
      }
      uVar12 = param_2 << 3;
      if (uVar12 < 0x80) {
        iVar32 = 0;
        if (param_3 < (ulong *)*param_4) goto LAB_00337580;
        do {
          param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
          piVar17 = (int *)*param_1;
LAB_00337580:
          do {
            plVar18 = (long *)FUN_003285d0(piVar17,iVar32);
            lVar22 = *plVar18;
            *(byte *)param_3 = (byte)uVar12;
            uVar23 = lVar22 << 1 ^ lVar22 >> 0x3f;
            if (uVar23 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar23;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar23 | 0x80;
              if (uVar23 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar23 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar23 = uVar23 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar29 = param_3;
                  uVar25 = uVar23 >> 7;
                  *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                  param_3 = (ulong *)((long)puVar29 + 1);
                  uVar27 = uVar23 >> 0xe;
                  uVar23 = uVar25;
                } while (uVar27 != 0);
                *(byte *)puVar29 = (byte)uVar25;
              }
            }
            piVar17 = (int *)*param_1;
            iVar32 = iVar32 + 1;
            if (*piVar17 <= iVar32) {
              return param_3;
            }
          } while (param_3 < (ulong *)*param_4);
        } while( true );
      }
      iVar32 = 0;
      if (param_3 < (ulong *)*param_4) goto LAB_0033859c;
      do {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        piVar17 = (int *)*param_1;
LAB_0033859c:
        do {
          plVar18 = (long *)FUN_003285d0(piVar17,iVar32);
          lVar22 = *plVar18;
          *(byte *)param_3 = (byte)uVar12 | 0x80;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            uVar23 = lVar22 << 1 ^ lVar22 >> 0x3f;
            if (0x7f < uVar23) goto LAB_003385fc;
LAB_00338574:
            *(byte *)((long)param_3 + 2) = (byte)uVar23;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          else {
            uVar11 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar29 = param_3;
              uVar20 = uVar11 >> 7;
              uVar21 = uVar11 >> 0xe;
              param_3 = (ulong *)((long)puVar29 + 1);
              *(byte *)param_3 = (byte)uVar11 | 0x80;
              uVar11 = uVar20;
            } while (uVar21 != 0);
            *(byte *)((long)puVar29 + 2) = (byte)uVar20;
            uVar23 = lVar22 << 1 ^ lVar22 >> 0x3f;
            if (uVar23 < 0x80) goto LAB_00338574;
LAB_003385fc:
            *(byte *)((long)param_3 + 2) = (byte)uVar23 | 0x80;
            if (uVar23 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar23 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              uVar23 = uVar23 >> 7;
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar29 = param_3;
                uVar25 = uVar23 >> 7;
                *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
                param_3 = (ulong *)((long)puVar29 + 1);
                uVar27 = uVar23 >> 0xe;
                uVar23 = uVar25;
              } while (uVar27 != 0);
              *(byte *)puVar29 = (byte)uVar25;
            }
          }
          piVar17 = (int *)*param_1;
          iVar32 = iVar32 + 1;
          if (*piVar17 <= iVar32) {
            return param_3;
          }
        } while (param_3 < (ulong *)*param_4);
      } while( true );
    default:
      FUN_0030f640(auStack_90,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003367cc to 003367df has its CatchHandler @ 00339d3c */
      uVar15 = FUN_0030f3ac(auStack_90,
                            "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003367e0 to 003367e7 has its CatchHandler @ 00339d38 */
      FUN_0030f41c(auStack_58,uVar15);
      FUN_0030f658(auStack_90);
      return param_3;
    }
    do {
      if ((ulong *)*param_4 <= param_3) {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
        uVar23 = *param_1;
      }
      pbVar28 = (byte *)FUN_0032b79c(uVar23,iVar32);
      if ((*pbVar28 & 1) == 0) {
        sVar33 = (size_t)(*pbVar28 >> 1);
LAB_00336d64:
        if ((*param_4 - (long)param_3) + lVar26 + 0x10 < (long)sVar33) goto LAB_00336e0c;
        if (uVar12 < 0x80) {
          pbVar30 = (byte *)((long)param_3 + 1);
          *(byte *)param_3 = (byte)uVar12;
        }
        else {
          *(byte *)param_3 = (byte)uVar11 | 0x82;
          if (uVar12 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            pbVar30 = (byte *)((long)param_3 + 2);
          }
          else {
            pbVar30 = (byte *)((long)param_3 + 2);
            uVar20 = param_2 >> 4 & 0x1ffffff;
            do {
              pbVar24 = pbVar30;
              uVar21 = uVar20 >> 7;
              pbVar24[-1] = (byte)uVar20 | 0x80;
              pbVar30 = pbVar24 + 1;
              uVar5 = uVar20 >> 0xe;
              uVar20 = uVar21;
            } while (uVar5 != 0);
            *pbVar24 = (byte)uVar21;
          }
        }
        *pbVar30 = (byte)sVar33;
        pbVar24 = *(byte **)(pbVar28 + 0x10);
        if ((*pbVar28 & 1) == 0) {
          pbVar24 = pbVar28 + 1;
        }
        memcpy(pbVar30 + 1,pbVar24,sVar33);
        param_3 = (ulong *)(pbVar30 + 1 + sVar33);
      }
      else {
        sVar33 = *(size_t *)(pbVar28 + 8);
        if ((long)sVar33 < 0x80) goto LAB_00336d64;
LAB_00336e0c:
        param_3 = (ulong *)FUN_00311488(param_4,param_2,pbVar28,param_3);
      }
      uVar23 = *param_1;
      iVar32 = iVar32 + 1;
      if (*(int *)(uVar23 + 8) <= iVar32) {
        return param_3;
      }
    } while( true );
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return param_3;
  }
  cVar9 = (char)param_2;
  switch((byte)param_1[1]) {
  case 1:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    uVar23 = *param_1;
    uVar12 = param_2 << 3 | 1;
    if (uVar12 < 0x80) {
LAB_00337928:
      *(byte *)param_3 = (byte)uVar12;
      *(ulong *)((long)param_3 + 1) = uVar23;
      return (ulong *)((long)param_3 + 9);
    }
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x81;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) {
LAB_00337a18:
      *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
      *(ulong *)((long)param_3 + 2) = uVar23;
      return (ulong *)((long)param_3 + 10);
    }
    puVar29 = (ulong *)((long)param_3 + 2);
    uVar12 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar11 = uVar12 >> 7;
      *(byte *)((long)puVar29 + -1) = (byte)uVar12 | 0x80;
      puVar29 = (ulong *)((long)puVar29 + 1);
      uVar20 = uVar12 >> 0xe;
      uVar12 = uVar11;
    } while (uVar20 != 0);
    goto LAB_00338734;
  case 2:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    iVar32 = (int)*param_1;
    uVar12 = param_2 << 3 | 5;
    if (uVar12 < 0x80) {
LAB_003378fc:
      *(byte *)param_3 = (byte)uVar12;
      *(int *)((long)param_3 + 1) = iVar32;
      return (ulong *)((long)param_3 + 5);
    }
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x85;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) {
LAB_003379f4:
      *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
      *(int *)((long)param_3 + 2) = iVar32;
      return (ulong *)((long)param_3 + 6);
    }
    pbVar28 = (byte *)((long)param_3 + 2);
    uVar12 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar11 = uVar12 >> 7;
      pbVar28[-1] = (byte)uVar12 | 0x80;
      pbVar28 = pbVar28 + 1;
      uVar20 = uVar12 >> 0xe;
      uVar12 = uVar11;
    } while (uVar20 != 0);
    goto LAB_00338704;
  case 3:
    if (param_3 < (ulong *)*param_4) {
      uVar23 = *param_1;
      if (param_2 * 8 < 0x80) goto LAB_00337674;
LAB_00339534:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *pbVar30 = (byte)uVar11;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      uVar23 = *param_1;
      if (0x7f < param_2 * 8) goto LAB_00339534;
LAB_00337674:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    if (uVar23 < 0x80) {
LAB_00339a54:
      *pbVar28 = (byte)uVar23;
      return (ulong *)(pbVar28 + 1);
    }
    *pbVar28 = (byte)uVar23 | 0x80;
    uVar25 = uVar23 >> 7;
    if (uVar23 >> 0xe == 0) goto LAB_00339aa0;
    param_3 = (ulong *)(pbVar28 + 2);
    do {
      uVar23 = uVar25 >> 7;
      *(byte *)((long)param_3 + -1) = (byte)uVar25 | 0x80;
      param_3 = (ulong *)((long)param_3 + 1);
      uVar27 = uVar25 >> 0xe;
      uVar25 = uVar23;
    } while (uVar27 != 0);
    goto LAB_00339acc;
  case 4:
    if (param_3 < (ulong *)*param_4) {
      uVar23 = *param_1;
      if (param_2 * 8 < 0x80) goto LAB_003376a0;
LAB_003395e4:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *pbVar30 = (byte)uVar11;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      uVar23 = *param_1;
      if (0x7f < param_2 * 8) goto LAB_003395e4;
LAB_003376a0:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    if (uVar23 < 0x80) goto LAB_00339a54;
    *pbVar28 = (byte)uVar23 | 0x80;
    uVar25 = uVar23 >> 7;
    if (uVar23 >> 0xe == 0) goto LAB_00339aa0;
    param_3 = (ulong *)(pbVar28 + 2);
    do {
      uVar23 = uVar25 >> 7;
      *(byte *)((long)param_3 + -1) = (byte)uVar25 | 0x80;
      param_3 = (ulong *)((long)param_3 + 1);
      uVar27 = uVar25 >> 0xe;
      uVar25 = uVar23;
    } while (uVar27 != 0);
    goto LAB_00339acc;
  case 5:
    if (param_3 < (ulong *)*param_4) {
      uVar23 = (ulong)(int)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_003376cc;
LAB_00339694:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      uVar12 = (uint)uVar23;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar20 = uVar11 >> 7;
          pbVar30[-1] = (byte)uVar11 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar20;
        } while (uVar21 != 0);
        *pbVar30 = (byte)uVar20;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      uVar23 = (ulong)(int)*param_1;
      if (0x7f < param_2 * 8) goto LAB_00339694;
LAB_003376cc:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
      uVar12 = (uint)uVar23;
    }
    if (uVar12 < 0x80) goto LAB_00339a54;
    *pbVar28 = (byte)uVar23 | 0x80;
    uVar25 = uVar23 >> 7;
    if ((uVar23 >> 0xe & 0x3ffff) != 0) {
      param_3 = (ulong *)(pbVar28 + 2);
      do {
        uVar23 = uVar25 >> 7;
        *(byte *)((long)param_3 + -1) = (byte)uVar25 | 0x80;
        param_3 = (ulong *)((long)param_3 + 1);
        uVar27 = uVar25 >> 0xe;
        uVar25 = uVar23;
      } while (uVar27 != 0);
      goto LAB_00339acc;
    }
LAB_00339aa0:
    pbVar28[1] = (byte)uVar25;
    param_3 = (ulong *)(pbVar28 + 2);
    break;
  case 6:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    uVar23 = *param_1;
    uVar12 = param_2 << 3 | 1;
    if (uVar12 < 0x80) goto LAB_00337928;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x81;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_00337a18;
    puVar29 = (ulong *)((long)param_3 + 2);
    uVar12 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar11 = uVar12 >> 7;
      *(byte *)((long)puVar29 + -1) = (byte)uVar12 | 0x80;
      puVar29 = (ulong *)((long)puVar29 + 1);
      uVar20 = uVar12 >> 0xe;
      uVar12 = uVar11;
    } while (uVar20 != 0);
    goto LAB_00338734;
  case 7:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    iVar32 = (int)*param_1;
    uVar12 = param_2 << 3 | 5;
    if (uVar12 < 0x80) goto LAB_003378fc;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x85;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_003379f4;
    pbVar28 = (byte *)((long)param_3 + 2);
    uVar12 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar11 = uVar12 >> 7;
      pbVar28[-1] = (byte)uVar12 | 0x80;
      pbVar28 = pbVar28 + 1;
      uVar20 = uVar12 >> 0xe;
      uVar12 = uVar11;
    } while (uVar20 != 0);
    goto LAB_00338704;
  case 8:
    if (param_3 < (ulong *)*param_4) {
      bVar7 = (byte)*param_1;
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      bVar7 = (byte)*param_1;
    }
    if (param_2 * 8 < 0x80) {
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
      param_3 = (ulong *)((long)param_3 + 2);
      *pbVar28 = bVar7;
    }
    else {
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
        param_3 = (ulong *)((long)param_3 + 3);
        *pbVar28 = bVar7;
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          uVar20 = uVar12 >> 0xe;
          pbVar28 = pbVar30 + 1;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *pbVar30 = (byte)uVar11;
        param_3 = (ulong *)(pbVar30 + 2);
        pbVar30[1] = bVar7;
      }
    }
    break;
  case 9:
    if (param_3 < (ulong *)*param_4) {
      pbVar28 = (byte *)*param_1;
      bVar7 = *pbVar28;
      if ((bVar7 & 1) == 0) goto LAB_003377cc;
LAB_003397dc:
      sVar33 = *(size_t *)(pbVar28 + 8);
      if (0x7f < (long)sVar33) goto LAB_0033993c;
      lVar22 = *param_4;
      if (param_2 << 3 < 0x80) goto LAB_003397f8;
LAB_003377e0:
      if (param_2 << 3 < 0x4000) {
        lVar26 = -3;
      }
      else if (param_2 << 3 < 0x200000) {
        lVar26 = -4;
      }
      else {
        lVar26 = -6;
        if ((param_2 & 0x1fffffff) >> 0x19 == 0) {
          lVar26 = -5;
        }
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      pbVar28 = (byte *)*param_1;
      bVar7 = *pbVar28;
      if ((bVar7 & 1) != 0) goto LAB_003397dc;
LAB_003377cc:
      sVar33 = (size_t)(bVar7 >> 1);
      lVar22 = *param_4;
      if (0x7f < param_2 << 3) goto LAB_003377e0;
LAB_003397f8:
      lVar26 = -2;
    }
    if ((long)sVar33 <= (lVar22 - (long)param_3) + lVar26 + 0x10) {
      uVar12 = param_2 << 3 | 2;
      if (uVar12 < 0x80) {
LAB_003398c4:
        pbVar30 = (byte *)((long)param_3 + 1);
        *(byte *)param_3 = (byte)uVar12;
        goto LAB_00339914;
      }
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x82;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
LAB_003398dc:
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar30 = (byte *)((long)param_3 + 2);
        goto LAB_00339914;
      }
      pbVar30 = (byte *)((long)param_3 + 2);
      uVar12 = param_2 >> 4 & 0x1ffffff;
      do {
        uVar11 = uVar12 >> 7;
        pbVar30[-1] = (byte)uVar12 | 0x80;
        pbVar30 = pbVar30 + 1;
        uVar20 = uVar12 >> 0xe;
        uVar12 = uVar11;
      } while (uVar20 != 0);
LAB_00339910:
      pbVar30[-1] = (byte)uVar11;
LAB_00339914:
      *pbVar30 = (byte)sVar33;
      pbVar24 = *(byte **)(pbVar28 + 0x10);
      if ((*pbVar28 & 1) == 0) {
        pbVar24 = pbVar28 + 1;
      }
      memcpy(pbVar30 + 1,pbVar24,sVar33);
      return (ulong *)(pbVar30 + 1 + sVar33);
    }
    goto LAB_0033993c;
  case 10:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    plVar18 = (long *)*param_1;
    uVar12 = param_2 << 3 | 3;
    if (uVar12 < 0x80) {
      pbVar28 = (byte *)((long)param_3 + 1);
      *(byte *)param_3 = (byte)uVar12;
    }
    else {
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x83;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *pbVar30 = (byte)uVar11;
      }
    }
    pbVar28 = (byte *)(**(code **)(*plVar18 + 0x60))(plVar18,pbVar28,param_4);
    if ((byte *)*param_4 <= pbVar28) {
      pbVar28 = (byte *)FUN_00310ec4(param_4,pbVar28);
    }
    uVar12 = param_2 << 3 | 4;
    if (uVar12 < 0x80) goto LAB_003386d8;
    *pbVar28 = (byte)(param_2 << 3) | 0x84;
    if ((param_2 & 0x1fffffff) >> 0xb != 0) {
      puVar29 = (ulong *)(pbVar28 + 2);
      uVar11 = param_2 >> 4 & 0x1ffffff;
      do {
        uVar12 = uVar11 >> 7;
        *(byte *)((long)puVar29 + -1) = (byte)uVar11 | 0x80;
        puVar29 = (ulong *)((long)puVar29 + 1);
        uVar20 = uVar11 >> 0xe;
        uVar11 = uVar12;
      } while (uVar20 != 0);
      goto LAB_00339cec;
    }
    param_2 = param_2 >> 4;
    goto LAB_00339cbc;
  case 0xb:
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
      if ((ulong *)*param_4 <= param_3) {
        param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      }
      plVar18 = (long *)*param_1;
      uVar12 = param_2 << 3 | 2;
      if (uVar12 < 0x80) {
        pbVar28 = (byte *)((long)param_3 + 1);
        *(byte *)param_3 = (byte)uVar12;
      }
      else {
        *(byte *)param_3 = (byte)(param_2 << 3) | 0x82;
        if ((param_2 & 0x1fffffff) >> 0xb == 0) {
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          pbVar28 = (byte *)((long)param_3 + 2);
        }
        else {
          pbVar28 = (byte *)((long)param_3 + 2);
          uVar12 = param_2 >> 4 & 0x1ffffff;
          do {
            pbVar30 = pbVar28;
            uVar11 = uVar12 >> 7;
            pbVar30[-1] = (byte)uVar12 | 0x80;
            pbVar28 = pbVar30 + 1;
            uVar20 = uVar12 >> 0xe;
            uVar12 = uVar11;
          } while (uVar20 != 0);
          *pbVar30 = (byte)uVar11;
        }
      }
      uVar12 = (**(code **)(*plVar18 + 0x50))(plVar18);
      if (uVar12 < 0x80) {
        pbVar30 = pbVar28 + 1;
        *pbVar28 = (byte)uVar12;
      }
      else {
        *pbVar28 = (byte)uVar12 | 0x80;
        if (uVar12 >> 0xe == 0) {
          pbVar28[1] = (byte)(uVar12 >> 7);
          pbVar30 = pbVar28 + 2;
        }
        else {
          pbVar30 = pbVar28 + 2;
          uVar12 = uVar12 >> 7;
          do {
            pbVar28 = pbVar30;
            uVar11 = uVar12 >> 7;
            pbVar28[-1] = (byte)uVar12 | 0x80;
            pbVar30 = pbVar28 + 1;
            uVar20 = uVar12 >> 0xe;
            uVar12 = uVar11;
          } while (uVar20 != 0);
          *pbVar28 = (byte)uVar11;
        }
      }
      param_3 = (ulong *)(**(code **)(*plVar18 + 0x60))(plVar18,pbVar30,param_4);
    }
    else {
      param_3 = (ulong *)(**(code **)(*(long *)*param_1 + 0x88))
                                   ((long *)*param_1,param_2,param_3,param_4);
    }
    break;
  case 0xc:
    if (param_3 < (ulong *)*param_4) {
      pbVar28 = (byte *)*param_1;
      bVar7 = *pbVar28;
      if ((bVar7 & 1) == 0) goto LAB_00337860;
LAB_00339884:
      sVar33 = *(size_t *)(pbVar28 + 8);
      if ((long)sVar33 < 0x80) {
        lVar22 = *param_4;
        if (param_2 << 3 < 0x80) goto LAB_003398a0;
LAB_00337874:
        if (param_2 << 3 < 0x4000) {
          lVar26 = -3;
        }
        else if (param_2 << 3 < 0x200000) {
          lVar26 = -4;
        }
        else {
          lVar26 = -6;
          if ((param_2 & 0x1fffffff) >> 0x19 == 0) {
            lVar26 = -5;
          }
        }
        goto LAB_003398a4;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      pbVar28 = (byte *)*param_1;
      bVar7 = *pbVar28;
      if ((bVar7 & 1) != 0) goto LAB_00339884;
LAB_00337860:
      sVar33 = (size_t)(bVar7 >> 1);
      lVar22 = *param_4;
      if (0x7f < param_2 << 3) goto LAB_00337874;
LAB_003398a0:
      lVar26 = -2;
LAB_003398a4:
      if ((long)sVar33 <= (lVar22 - (long)param_3) + lVar26 + 0x10) {
        uVar12 = param_2 << 3 | 2;
        if (uVar12 < 0x80) goto LAB_003398c4;
        *(byte *)param_3 = (byte)(param_2 << 3) | 0x82;
        if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_003398dc;
        pbVar30 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          pbVar30 = pbVar30 + 1;
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        goto LAB_00339910;
      }
    }
LAB_0033993c:
    param_3 = (ulong *)FUN_00311488(param_4,param_2,pbVar28,param_3);
    break;
  case 0xd:
    if (param_3 < (ulong *)*param_4) {
      uVar12 = (uint)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_003378a0;
LAB_00339970:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar20 = uVar11 >> 7;
          pbVar30[-1] = (byte)uVar11 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar20;
        } while (uVar21 != 0);
        *pbVar30 = (byte)uVar20;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      uVar12 = (uint)*param_1;
      if (0x7f < param_2 * 8) goto LAB_00339970;
LAB_003378a0:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    if (0x7f < uVar12) {
      *pbVar28 = (byte)uVar12 | 0x80;
      if (uVar12 >> 0xe == 0) {
        pbVar28[1] = (byte)(uVar12 >> 7);
        return (ulong *)(pbVar28 + 2);
      }
      puVar29 = (ulong *)(pbVar28 + 2);
      uVar12 = uVar12 >> 7;
      do {
        puVar19 = puVar29;
        uVar11 = uVar12 >> 7;
        *(byte *)((long)puVar19 + -1) = (byte)uVar12 | 0x80;
        uVar20 = uVar12 >> 0xe;
        puVar29 = (ulong *)((long)puVar19 + 1);
        uVar12 = uVar11;
      } while (uVar20 != 0);
      *(byte *)puVar19 = (byte)uVar11;
      return (ulong *)((long)puVar19 + 1);
    }
LAB_003386d8:
    param_3 = (ulong *)(pbVar28 + 1);
    *pbVar28 = (byte)uVar12;
    break;
  case 0xe:
    if (param_3 < (ulong *)*param_4) {
      uVar23 = (ulong)(int)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_003378cc;
LAB_00339a30:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      uVar12 = (uint)uVar23;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar20 = uVar11 >> 7;
          pbVar30[-1] = (byte)uVar11 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar20;
        } while (uVar21 != 0);
        *pbVar30 = (byte)uVar20;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      uVar23 = (ulong)(int)*param_1;
      if (0x7f < param_2 * 8) goto LAB_00339a30;
LAB_003378cc:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
      uVar12 = (uint)uVar23;
    }
    if (uVar12 < 0x80) goto LAB_00339a54;
    *pbVar28 = (byte)uVar23 | 0x80;
    uVar25 = uVar23 >> 7;
    if ((uVar23 >> 0xe & 0x3ffff) == 0) goto LAB_00339aa0;
    param_3 = (ulong *)(pbVar28 + 2);
    do {
      uVar23 = uVar25 >> 7;
      *(byte *)((long)param_3 + -1) = (byte)uVar25 | 0x80;
      param_3 = (ulong *)((long)param_3 + 1);
      uVar27 = uVar25 >> 0xe;
      uVar25 = uVar23;
    } while (uVar27 != 0);
LAB_00339acc:
    *(byte *)((long)param_3 + -1) = (byte)uVar23;
    break;
  case 0xf:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    iVar32 = (int)*param_1;
    uVar12 = param_2 << 3 | 5;
    if (uVar12 < 0x80) goto LAB_003378fc;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x85;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_003379f4;
    pbVar28 = (byte *)((long)param_3 + 2);
    uVar12 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar11 = uVar12 >> 7;
      pbVar28[-1] = (byte)uVar12 | 0x80;
      pbVar28 = pbVar28 + 1;
      uVar20 = uVar12 >> 0xe;
      uVar12 = uVar11;
    } while (uVar20 != 0);
LAB_00338704:
    pbVar28[-1] = (byte)uVar11;
    param_3 = (ulong *)(pbVar28 + 4);
    *(int *)pbVar28 = iVar32;
    break;
  case 0x10:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
    }
    uVar23 = *param_1;
    uVar12 = param_2 << 3 | 1;
    if (uVar12 < 0x80) goto LAB_00337928;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x81;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_00337a18;
    puVar29 = (ulong *)((long)param_3 + 2);
    uVar12 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar11 = uVar12 >> 7;
      *(byte *)((long)puVar29 + -1) = (byte)uVar12 | 0x80;
      puVar29 = (ulong *)((long)puVar29 + 1);
      uVar20 = uVar12 >> 0xe;
      uVar12 = uVar11;
    } while (uVar20 != 0);
LAB_00338734:
    *(byte *)((long)puVar29 + -1) = (byte)uVar11;
    param_3 = puVar29 + 1;
    *puVar29 = uVar23;
    break;
  case 0x11:
    if (param_3 < (ulong *)*param_4) {
      iVar32 = (int)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_00337950;
LAB_00339b1c:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = iVar32 << 1 ^ iVar32 >> 0x1f;
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *pbVar30 = (byte)uVar11;
        uVar12 = iVar32 << 1 ^ iVar32 >> 0x1f;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      iVar32 = (int)*param_1;
      if (0x7f < param_2 * 8) goto LAB_00339b1c;
LAB_00337950:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
      uVar12 = iVar32 << 1 ^ iVar32 >> 0x1f;
    }
    if (uVar12 < 0x80) {
      *pbVar28 = (byte)uVar12;
      return (ulong *)(pbVar28 + 1);
    }
    *pbVar28 = (byte)uVar12 | 0x80;
    param_2 = uVar12 >> 7;
    if (uVar12 >> 0xe != 0) {
      puVar29 = (ulong *)(pbVar28 + 2);
      do {
        uVar12 = param_2 >> 7;
        *(byte *)((long)puVar29 + -1) = (byte)param_2 | 0x80;
        puVar29 = (ulong *)((long)puVar29 + 1);
        uVar11 = param_2 >> 0xe;
        param_2 = uVar12;
      } while (uVar11 != 0);
LAB_00339cec:
      *(byte *)((long)puVar29 + -1) = (byte)uVar12;
      return puVar29;
    }
LAB_00339cbc:
    pbVar28[1] = (byte)param_2;
    param_3 = (ulong *)(pbVar28 + 2);
    break;
  case 0x12:
    if (param_3 < (ulong *)*param_4) {
      uVar23 = *param_1;
      if (param_2 * 8 < 0x80) goto LAB_00337988;
LAB_00339bdc:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar23 = uVar23 << 1 ^ (long)uVar23 >> 0x3f;
      }
      else {
        pbVar28 = (byte *)((long)param_3 + 2);
        uVar12 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar30 = pbVar28;
          uVar11 = uVar12 >> 7;
          pbVar30[-1] = (byte)uVar12 | 0x80;
          pbVar28 = pbVar30 + 1;
          uVar20 = uVar12 >> 0xe;
          uVar12 = uVar11;
        } while (uVar20 != 0);
        *pbVar30 = (byte)uVar11;
        uVar23 = uVar23 << 1 ^ (long)uVar23 >> 0x3f;
      }
    }
    else {
      param_3 = (ulong *)FUN_00310ec4(param_4,param_3);
      uVar23 = *param_1;
      if (0x7f < param_2 * 8) goto LAB_00339bdc;
LAB_00337988:
      pbVar28 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
      uVar23 = uVar23 << 1 ^ (long)uVar23 >> 0x3f;
    }
    if (uVar23 < 0x80) {
      param_3 = (ulong *)(pbVar28 + 1);
      *pbVar28 = (byte)uVar23;
    }
    else {
      *pbVar28 = (byte)uVar23 | 0x80;
      if (uVar23 >> 0xe == 0) {
        pbVar28[1] = (byte)(uVar23 >> 7);
        param_3 = (ulong *)(pbVar28 + 2);
      }
      else {
        uVar23 = uVar23 >> 7;
        param_3 = (ulong *)(pbVar28 + 2);
        do {
          puVar29 = param_3;
          uVar25 = uVar23 >> 7;
          *(byte *)((long)puVar29 + -1) = (byte)uVar23 | 0x80;
          param_3 = (ulong *)((long)puVar29 + 1);
          uVar27 = uVar23 >> 0xe;
          uVar23 = uVar25;
        } while (uVar27 != 0);
        *(byte *)puVar29 = (byte)uVar25;
      }
    }
    break;
  default:
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 00336708 to 0033671b has its CatchHandler @ 00339d34 */
    uVar15 = FUN_0030f3ac(auStack_90,
                          "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0033671c to 00336723 has its CatchHandler @ 00339d30 */
    FUN_0030f41c(auStack_58,uVar15);
    FUN_0030f658(auStack_90);
  }
  return param_3;
}


