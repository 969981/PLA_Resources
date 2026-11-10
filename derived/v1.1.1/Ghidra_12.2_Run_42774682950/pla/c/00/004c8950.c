/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c8950; name: FUN_004c8950
 */


undefined8
FUN_004c8950(undefined4 *param_1,uint param_2,undefined4 *param_3,void *param_4,ulong param_5,
            int param_6,size_t *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t __n;
  uint uVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  char local_b8 [88];
  
  if ((*(long *)(param_1 + 0x206) != 0) || (iVar5 = FUN_004c97a0(param_1), iVar5 != 0)) {
    if (((param_2 < 0x18) && ((1 << (ulong)(param_2 & 0x1f) & 0xc00001U) != 0)) &&
       ((param_2 == 0x17 || (param_6 == 0)))) {
      iVar5 = FUN_004c9a40(param_1);
      if ((iVar5 == 0) && (iVar5 = FUN_004c9920(param_1), iVar5 != 0)) {
        uVar7 = (**(code **)(param_1 + 0xc))(param_1);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        if ((int)uVar7 == 0) {
          return 0xffffffff;
        }
      }
      pcVar12 = (code *)0x0;
LAB_004c8a3c:
      param_1[10] = 1;
      iVar5 = FUN_004c9930(param_1);
      do {
        if (((iVar5 != 0) && (*(long *)(param_1 + 0x352) == 0)) &&
           (lVar6 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0x5ea) + 0x50)), lVar6 != 0)) {
          plVar11 = *(long **)(lVar6 + 8);
          FUN_004c9560(param_1 + 0x206);
          lVar14 = *plVar11;
          *(long *)(param_1 + 0x5d2) = plVar11[1];
          *(long *)(param_1 + 0x5d0) = lVar14;
          lVar15 = plVar11[3];
          lVar14 = plVar11[2];
          lVar17 = plVar11[5];
          lVar16 = plVar11[4];
          *(long *)(param_1 + 0x20e) = plVar11[6];
          *(long *)(param_1 + 0x208) = lVar15;
          *(long *)(param_1 + 0x206) = lVar14;
          *(long *)(param_1 + 0x20c) = lVar17;
          *(long *)(param_1 + 0x20a) = lVar16;
          lVar15 = plVar11[0xc];
          lVar14 = plVar11[0xb];
          lVar16 = plVar11[0xd];
          lVar18 = plVar11[0x10];
          lVar17 = plVar11[0xf];
          lVar20 = plVar11[10];
          lVar19 = plVar11[9];
          *(long *)(param_1 + 0x35e) = plVar11[0xe];
          *(long *)(param_1 + 0x35c) = lVar16;
          *(long *)(param_1 + 0x362) = lVar18;
          *(long *)(param_1 + 0x360) = lVar17;
          *(long *)(param_1 + 0x356) = lVar20;
          *(long *)(param_1 + 0x354) = lVar19;
          *(long *)(param_1 + 0x35a) = lVar15;
          *(long *)(param_1 + 0x358) = lVar14;
          lVar14 = plVar11[7];
          *(long *)(param_1 + 0x352) = plVar11[8];
          *(long *)(param_1 + 0x350) = lVar14;
          uVar2 = *(undefined4 *)(*plVar11 + 5);
          *(undefined2 *)((long)param_1 + 0x1796) = *(undefined2 *)(*plVar11 + 9);
          *(undefined4 *)((long)param_1 + 0x1792) = uVar2;
          FUN_00400420(*(undefined8 *)(lVar6 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x193
                      );
          FUN_004f5be0(lVar6);
        }
        iVar5 = FUN_004cdcc0(param_1);
        if (iVar5 < 1) {
          iVar5 = FUN_004c9a20(param_1);
          if (iVar5 != 0) {
            return 0xffffffff;
          }
          if ((*(long *)(param_1 + 0x352) == 0) || (param_1[0x201] == 0xf1)) {
            *(undefined8 *)(param_1 + 0x202) = 0;
            iVar5 = FUN_004d0720(param_1);
            if (iVar5 < 1) {
              uVar7 = FUN_004ccb00(param_1,iVar5);
              if ((int)uVar7 < 1) {
                return uVar7;
              }
              goto LAB_004c8a74;
            }
            *(undefined8 *)(param_1 + 0x202) = 1;
          }
          uVar10 = param_1[0x351];
          if ((uVar10 != 0x15) && (*(long *)(param_1 + 0x352) != 0)) {
            param_1[0x5e9] = 0;
          }
          if ((uVar10 == 0x16) || (*(int *)(*(long *)(param_1 + 0x2a) + 0xf0) == 0)) {
            if (((uint)param_1[0x11] >> 1 & 1) != 0) {
              *(undefined8 *)(param_1 + 0x352) = 0;
              param_1[0x35e] = 1;
              param_1[10] = 1;
              return 0;
            }
            if ((uVar10 == param_2) ||
               (((param_3 != (undefined4 *)0x0 && (param_2 == 0x16)) && (uVar10 == 0x14)))) {
              iVar5 = FUN_004c9920(param_1);
              if (((param_2 != 0x17) || (iVar5 == 0)) || (*(long *)(param_1 + 0x10e) != 0)) {
                if (param_3 != (undefined4 *)0x0) {
                  *param_3 = param_1[0x351];
                }
                __n = *(size_t *)(param_1 + 0x352);
                if (param_5 == 0) {
                  if (__n == 0) {
                    param_1[0x35e] = 1;
                    return 0;
                  }
                  return 0;
                }
                if (param_5 <= __n) {
                  __n = param_5;
                }
                memcpy(param_4,(void *)(*(long *)(param_1 + 0x358) + *(long *)(param_1 + 0x356)),__n
                      );
                if (param_6 == 0) {
                  lVar6 = *(long *)(param_1 + 0x352) - __n;
                  *(long *)(param_1 + 0x352) = lVar6;
                  *(size_t *)(param_1 + 0x356) = *(long *)(param_1 + 0x356) + __n;
                  if (lVar6 != 0) goto LAB_004c8e9c;
                  param_1[0x201] = 0xf0;
                  *(undefined8 *)(param_1 + 0x356) = 0;
                }
                else if (*(long *)(param_1 + 0x352) != 0) goto LAB_004c8e9c;
                param_1[0x35e] = 1;
LAB_004c8e9c:
                *param_7 = __n;
                return 1;
              }
              uVar7 = 10;
              uVar8 = 100;
              uVar9 = 0x1e9;
              goto LAB_004c89e0;
            }
            if (uVar10 == 0x15) goto LAB_004c8c9c;
            if ((param_1[0x11] & 1) != 0) {
              *(undefined8 *)(param_1 + 0x352) = 0;
              param_1[10] = 1;
              param_1[0x35e] = 1;
              return 0;
            }
            if (uVar10 != 0x14) {
              if (uVar10 == 0x16) {
                iVar5 = FUN_004c9a40(param_1);
                if (iVar5 == 0) {
                  if ((*(ulong *)(param_1 + 0x360) == (ulong)**(ushort **)(param_1 + 0x5ea)) &&
                     (0xb < *(ulong *)(param_1 + 0x352))) {
                    FUN_004cd140(*(undefined8 *)(param_1 + 0x358),local_b8);
                    if (local_b8[0] == '\x14') {
                      iVar5 = FUN_004ce0c0();
                      if (iVar5 < 0) {
                        return 0xffffffff;
                      }
                      iVar5 = FUN_004ccba0(param_1);
                      if ((iVar5 < 1) && (iVar5 = FUN_004c9a20(param_1), iVar5 != 0)) {
                        return 0xffffffff;
                      }
                      bVar3 = *(byte *)(param_1 + 0x174);
                      *(undefined8 *)(param_1 + 0x352) = 0;
                      param_1[0x35e] = 1;
                    }
                    else {
                      iVar5 = FUN_004c9930(param_1);
                      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00404dd0("Assertion failed: SSL_is_init_finished(s)",
                                     "external/openssl/ssl/record/rec_layer_d1.c",0x2c0);
                      }
                      FUN_004c9a30(param_1,1);
                      uVar7 = (**(code **)(param_1 + 0xc))(param_1);
                      if ((int)uVar7 < 0) {
                        return uVar7;
                      }
                      if ((int)uVar7 == 0) {
                        return 0xffffffff;
                      }
                      bVar3 = *(byte *)(param_1 + 0x174);
                    }
                    if (((bVar3 >> 2 & 1) == 0) && (*(long *)(param_1 + 0x20e) == 0)) {
                      param_1[10] = 3;
                      uVar7 = FUN_004c3370(param_1);
                      FUN_00404040(uVar7,0xf);
                      FUN_00404060(uVar7,9);
                      return 0xffffffff;
                    }
                    goto LAB_004c8a74;
                  }
                  goto LAB_004c8a6c;
                }
                uVar10 = param_1[0x351];
              }
              if (uVar10 - 0x14 < 3) {
                uVar7 = 10;
                uVar8 = 0x44;
                uVar9 = 0x2f2;
              }
              else if (uVar10 == 0x17) {
                if (((*(int *)(*(long *)(param_1 + 0x2a) + 0x110) != 0) &&
                    (*(int *)(*(long *)(param_1 + 0x2a) + 0x108) != 0)) &&
                   (iVar5 = FUN_004ca8b0(param_1), iVar5 != 0)) {
                  *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0x110) = 2;
                  return 0xffffffff;
                }
                uVar7 = 10;
                uVar8 = 0xf5;
                uVar9 = 0x303;
              }
              else {
                uVar7 = 10;
                uVar8 = 0xf5;
                uVar9 = 0x2e7;
              }
              goto LAB_004c89e0;
            }
          }
          else {
            iVar5 = FUN_004c8430(param_1,*(long *)(param_1 + 0x5ea) + 0x48,param_1 + 0x362);
            if (iVar5 < 0) {
              return 0xffffffff;
            }
          }
LAB_004c8a6c:
          *(undefined8 *)(param_1 + 0x352) = 0;
          param_1[0x35e] = 1;
        }
LAB_004c8a74:
        param_1[10] = 1;
        iVar5 = FUN_004c9930(param_1);
      } while( true );
    }
    uVar7 = 0x50;
    uVar8 = 0x44;
    uVar9 = 0x167;
LAB_004c89e0:
    FUN_004c99a0(param_1,uVar7,0x102,uVar8,"external/openssl/ssl/record/rec_layer_d1.c",uVar9);
  }
  return 0xffffffff;
LAB_004c8c9c:
  lVar6 = *(long *)(param_1 + 0x352);
  if (((lVar6 < 1) || (lVar6 == 1)) || (lVar6 != 2)) {
    uVar7 = 10;
    uVar8 = 0xcd;
    uVar9 = 0x22e;
    goto LAB_004c89e0;
  }
  pcVar1 = (char *)(*(long *)(param_1 + 0x358) + *(long *)(param_1 + 0x356));
  cVar4 = *pcVar1;
  bVar3 = pcVar1[1];
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))(0,*param_1,0x15,pcVar1,2,param_1,*(undefined8 *)(param_1 + 0x30));
  }
  pcVar13 = *(code **)(param_1 + 0x15a);
  uVar10 = (uint)bVar3;
  if (pcVar13 == (code *)0x0) {
    pcVar13 = pcVar12;
    if (*(code **)(*(long *)(param_1 + 0x166) + 0x110) != (code *)0x0) {
      pcVar13 = *(code **)(*(long *)(param_1 + 0x166) + 0x110);
    }
    if (pcVar13 == (code *)0x0) goto LAB_004c8d34;
  }
  (*pcVar13)(param_1,0x4004,CONCAT11(cVar4,bVar3));
LAB_004c8d34:
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      param_1[10] = 1;
      *(uint *)(*(long *)(param_1 + 0x2a) + 0xf8) = uVar10;
      FUN_004c99a0(param_1,0xffffffff,0x102,uVar10 + 1000,
                   "external/openssl/ssl/record/rec_layer_d1.c",0x264);
      FUN_00403120(local_b8,0x10,&DAT_0388ad61,uVar10);
      FUN_00402170(2,"SSL alert number ",local_b8);
      param_1[0x35e] = 1;
      param_1[0x11] = param_1[0x11] | 2;
      FUN_003ffc50(*(undefined8 *)(param_1 + 0x1ca),*(undefined8 *)(param_1 + 0x142));
      return 0;
    }
    uVar7 = 0x2f;
    uVar8 = 0xf6;
    uVar9 = 0x26d;
    goto LAB_004c89e0;
  }
  *(uint *)(*(long *)(param_1 + 0x2a) + 0xf4) = uVar10;
  iVar5 = param_1[0x5e9];
  param_1[0x35e] = 1;
  param_1[0x5e9] = iVar5 + 1;
  if (iVar5 + 1 == 5) {
    uVar7 = 10;
    uVar8 = 0x199;
    uVar9 = 0x247;
    goto LAB_004c89e0;
  }
  pcVar12 = pcVar13;
  if (uVar10 == 0) {
    param_1[0x11] = param_1[0x11] | 2;
    return 0;
  }
  goto LAB_004c8a3c;
}


