/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204720; name: FUN_00204720
 */


/* WARNING: Removing unreachable block (ram,0x00204818) */

int FUN_00204720(long *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *__s;
  long lVar13;
  undefined1 local_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined4 uStack_114;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  int local_80;
  uint local_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined3 uStack_70;
  uint local_6c [3];
  
  if (param_1 == (long *)0x0) {
    return 0x62;
  }
  if (param_3 == (undefined1 *)0x0) {
    return 0x62;
  }
  if ((int)param_1[(long)param_2 * 3 + 0x52] == 2) {
    *param_3 = 1;
    return 0;
  }
  lVar13 = (long)param_2;
  puVar1 = (undefined4 *)((long)param_1 + lVar13 * 0x18 + 0x294);
  if (*(int *)((long)param_1 + lVar13 * 0x18 + 0x294) == 0) {
    local_98 = 0;
    lVar10 = param_1[lVar13 * 3 + 0x53];
    if (lVar10 == 0) goto LAB_0020496c;
    lVar11 = *param_1;
    lVar12 = *(long *)(lVar11 + 0xa98);
    if (lVar12 == 0) {
      *(undefined1 *)(lVar10 + 0x108) = 0;
      *(long *)(lVar10 + 0x100) = lVar10 + 0x80;
      uVar6 = nnsslContextGetContextId(lVar10 + 0x80,&local_98);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) == 0) {
        if (local_98 != 0) {
          uVar6 = nnsslContextDestroy(*(undefined8 *)(lVar10 + 0x100));
          uVar7 = nnResultIsFailure(uVar6);
          if ((uVar7 & 1) != 0) goto LAB_00204a28;
        }
        if ((*(code **)(lVar11 + 0xae0) == (code *)0x0) && (*(long *)(lVar11 + 0xa98) == 0)) {
          iVar4 = 0x5e;
          goto LAB_00204b0c;
        }
        iVar4 = (**(code **)(lVar11 + 0xae0))
                          (lVar11,*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar11 + 0xae8));
        if (iVar4 == 0) {
          lVar12 = *(long *)(lVar10 + 0x100);
          goto LAB_00204848;
        }
LAB_00204a78:
        iVar4 = 0x2a;
        goto LAB_00204b0c;
      }
LAB_00204a28:
      iVar4 = 0x60;
      goto LAB_00204b0c;
    }
    *(long *)(lVar10 + 0x100) = lVar12;
    *(undefined1 *)(lVar10 + 0x108) = 1;
LAB_00204848:
    uVar6 = nnsslContextGetContextId(lVar12,&local_98);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204a28;
    if (local_98 == 0) {
      iVar4 = 0x5f;
      goto LAB_00204b0c;
    }
    uVar6 = nnsslConnectionCreate(lVar10,*(undefined8 *)(lVar10 + 0x100));
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) {
LAB_00204964:
      iVar4 = 0x23;
      goto LAB_00204b0c;
    }
    nnsocketFcntl(*(undefined4 *)((long)param_1 + lVar13 * 4 + 600),4,0);
    uVar6 = nnsslConnectionSetOption(lVar10,0,1);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204964;
    uVar6 = nnsslConnectionSetSocketDescriptor
                      (lVar10,*(undefined4 *)((long)param_1 + lVar13 * 4 + 600));
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204964;
    __s = (char *)param_1[0x1b];
    sVar9 = strlen(__s);
    uVar6 = nnsslConnectionSetHostName(lVar10,__s,sVar9);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204964;
    uVar6 = nnsslConnectionSetOption(lVar10,2,*(undefined1 *)(*param_1 + 0xac0));
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204964;
    bVar3 = *(byte *)(*param_1 + 0xac1);
    bVar2 = bVar3 & 3;
    if (*(char *)(*param_1 + 0xa90) != '\0') {
      bVar2 = bVar3 & 3 | 4;
    }
    uVar6 = nnsslConnectionSetVerifyOption(lVar10,bVar2);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204964;
    uVar6 = nnsslConnectionSetSessionCacheMode(lVar10,*(byte *)(*param_1 + 0xac1) >> 3 & 1);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00204964;
    if ((*(byte *)((long)param_1 + 0x3ff) >> 5 & 1) != 0) {
      memset(&local_118,0,0x80);
      uVar6 = nnsslConnectionSetOption(lVar10,3,1);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar11 + 0xa40) < 3) {
          uVar7 = 0;
        }
        else {
          local_118 = 2;
          uStack_117 = 0x68;
          uStack_116 = 0x32;
          uVar7 = 3;
        }
        *(undefined1 *)(uVar7 | (ulong)&local_118) = 8;
        *(undefined8 *)((undefined1 *)(uVar7 | (ulong)&local_118) + 1) = 0x312e312f70747468;
        uVar6 = nnsslConnectionSetNextAlpnProto(lVar10,&local_118,(int)uVar7 + 9);
        uVar7 = nnResultIsFailure(uVar6);
        if ((uVar7 & 1) == 0) goto LAB_00204cdc;
      }
      goto LAB_00204964;
    }
LAB_00204cdc:
    lVar12 = *param_1;
    if ((*(code **)(lVar12 + 0xaa8) != (code *)0x0) &&
       (iVar4 = (**(code **)(lVar12 + 0xaa8))(lVar12,lVar10,*(undefined8 *)(lVar12 + 0xab8)),
       iVar4 != 0)) goto LAB_00204a78;
    if (param_1[lVar13 * 3 + 0x53] != 0) {
      uVar6 = nnsslConnectionSetIoMode(param_1[lVar13 * 3 + 0x53],2);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) != 0) {
        iVar4 = 0x23;
        goto LAB_00204d24;
      }
      *puVar1 = 1;
      goto LAB_00204790;
    }
  }
  else {
LAB_00204790:
    lVar10 = param_1[lVar13 * 3 + 0x53];
    local_6c[0] = 4;
    if (lVar10 == 0) {
LAB_0020496c:
      iVar4 = 0x62;
    }
    else {
      lVar12 = *param_1;
      iVar4 = FUN_001ddbec(lVar12,0,1);
      if (iVar4 < 0) {
        iVar4 = 0x1c;
      }
      else {
        *(undefined8 *)(lVar12 + 0xaa0) = 0;
        *(undefined8 *)(lVar12 + 0xac8) = 0;
        uStack_70 = 0;
        local_78 = 0;
        uStack_74 = 0;
        local_7c = 0;
        uVar7 = nnsslConnectionDoHandshakeWithCertBuffer(lVar10,&local_78,&local_7c);
        uVar7 = uVar7 & 0xffffffff;
        uVar8 = nnResultIsFailure(uVar7);
        if ((uVar8 & 1) == 0) {
          if ((*(byte *)((long)param_1 + 0x3ff) >> 5 & 1) != 0) {
            local_80 = 0;
            uVar6 = nnsslConnectionGetNextAlpnProto(lVar10,local_6c,&local_118,&local_80,0x32);
            uVar7 = nnResultIsSuccess(uVar6);
            if (((uVar7 & 1) != 0) && ((local_6c[0] | 2) == 3)) {
              if ((*(long *)(lVar12 + 0xa40) < 3) || (local_80 != 2)) {
                if ((local_80 == 8) &&
                   (CONCAT44(uStack_114,
                             CONCAT13(uStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))
                                     )) == 0x312e312f70747468)) {
                  uVar6 = 2;
                  goto LAB_00204ab0;
                }
              }
              else if (CONCAT11(uStack_117,local_118) == 0x3268) {
                uVar6 = 3;
LAB_00204ab0:
                *(undefined4 *)(param_1 + 0xcd) = uVar6;
              }
            }
          }
          iVar4 = 0;
        }
        else {
          uVar8 = FUN_00204e08(uVar7,0x1987b);
          if ((uVar8 & 1) != 0) {
            iVar4 = 0x51;
            goto LAB_00204b0c;
          }
          *(ulong *)(lVar12 + 0xaa0) = uVar7;
          uVar7 = FUN_00204e08(uVar7,0x19e7b);
          iVar4 = 0x3c;
          if ((uVar7 & 1) == 0) {
            iVar4 = 0x23;
          }
        }
        if (*(code **)(lVar12 + 0xab0) != (code *)0x0) {
          local_98._0_5_ = CONCAT41(uStack_74,iVar4 == 0);
          local_90 = (ulong)local_78;
          local_98 = CONCAT44(CONCAT31(uStack_70,uStack_74._3_1_),(undefined4)local_98);
          uStack_88 = (ulong)local_7c;
          iVar5 = (**(code **)(lVar12 + 0xab0))
                            (*param_1,lVar10,*(undefined8 *)(*param_1 + 0xab8),&local_98);
          if (iVar5 != 0) {
            iVar4 = 0x2a;
          }
        }
        if (iVar4 == 0) {
          *param_3 = 1;
          param_1[lVar13 + 0x4e] = (long)FUN_00204e74;
          param_1[lVar13 + 0x50] = (long)FUN_00204f14;
          *(undefined4 *)(param_1 + (long)param_2 * 3 + 0x52) = 2;
          *puVar1 = 0;
          return 0;
        }
      }
    }
LAB_00204b0c:
    if (iVar4 == 0x51) {
      return 0;
    }
    if (iVar4 != 0x3c) goto LAB_00204d24;
    if (param_1[lVar13 * 3 + 0x53] != 0) {
      uVar6 = nnsslConnectionGetVerifyCertError(param_1[lVar13 * 3 + 0x53],&local_118);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) == 0) {
        uVar7 = (ulong)CONCAT13(uStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,local_118)));
        *(ulong *)(*param_1 + 0xac8) = uVar7;
        uVar7 = FUN_00204e08(uVar7,0x25a7b);
        if (((((uVar7 & 1) == 0) &&
             (uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                            CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                   0x2607b), (uVar7 & 1) == 0)) &&
            (uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                           CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                  0x25e7b), (uVar7 & 1) == 0)) &&
           ((uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                           CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                  0x2867b), (uVar7 & 1) != 0 ||
            ((uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                            CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                   0x2687b), (uVar7 & 1) == 0 &&
             (((uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                              CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                     0xbca7b), (uVar7 & 1) != 0 ||
               (uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                              CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                     0xbd07b), (uVar7 & 1) != 0)) ||
              (uVar7 = FUN_00204e08(CONCAT13(uStack_115,
                                             CONCAT12(uStack_116,CONCAT11(uStack_117,local_118))),
                                    0xbce7b), (uVar7 & 1) != 0)))))))) {
          iVar4 = 0x3a;
          goto LAB_00204d24;
        }
      }
      iVar4 = 0x3c;
      goto LAB_00204d24;
    }
  }
  iVar4 = 0x62;
LAB_00204d24:
  lVar10 = param_1[lVar13 * 3 + 0x53];
  if (lVar10 != 0) {
    FUN_00204fb4(param_1 + lVar13 * 3 + 0x52);
    if (*(char *)(lVar10 + 0x108) == '\0') {
      FUN_0020500c(param_1 + lVar13 * 3 + 0x52);
    }
  }
  return iVar4;
}


