/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041f3a0; name: FUN_0041f3a0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0041f3a0(long *******param_1,long *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long *__base;
  void *pvVar11;
  uint uVar12;
  long *plVar13;
  long ******pppppplVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 local_80;
  long *******local_78;
  void *local_70;
  long local_68;
  
  uVar4 = *param_3;
  if ((uVar4 >> 0xc & 1) != 0) {
    local_78 = param_1;
    param_1 = (long *******)&local_78;
  }
  if ((uVar4 & 0x18) == 0) {
    uVar15 = param_5 & 0xc0;
    if (param_4 == 0xffffffff) {
      uVar15 = 0;
    }
LAB_0041f40c:
    uVar1 = param_5 & uVar4 & 0x800;
    uVar2 = param_5 & 0xffffff3f;
    uVar10 = 1;
    if ((param_5 & uVar4 & 0x800) != 0) {
      uVar10 = 2;
    }
    if ((uVar4 & 6) == 0) {
      if ((uVar4 >> 4 & 1) == 0) {
        iVar8 = FUN_0041f030(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,uVar15 | uVar2);
        return iVar8;
      }
      iVar8 = FUN_0041f030(param_1,0,*(undefined8 *)(param_3 + 8),0xffffffff,uVar2);
      if (iVar8 != 0) {
        iVar6 = FUN_0040a0e0(uVar10,iVar8,param_4);
        if (param_2 == (long *)0x0) {
          return iVar6;
        }
        if (iVar6 == -1) {
          return -1;
        }
        FUN_00409f20(param_2,uVar10,iVar8,param_4,uVar15);
        FUN_0041f030(param_1,param_2,*(undefined8 *)(param_3 + 8),0xffffffff,uVar2);
joined_r0x0041f67c:
        if (uVar1 == 0) {
          return iVar6;
        }
        FUN_0040a0c0(param_2);
        return iVar6;
      }
    }
    else {
      pppppplVar14 = *param_1;
      if (pppppplVar14 != (long ******)0x0) {
        if ((uVar4 >> 1 & 1) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = 1;
          if ((uVar4 & 4) != 0) {
            iVar8 = 2;
          }
        }
        uVar12 = 0x10;
        if (iVar8 != 0) {
          uVar12 = 0x11;
        }
        uVar3 = uVar15;
        uVar5 = param_4;
        if ((uVar4 & 0x10) != 0 || param_4 == 0xffffffff) {
          uVar3 = 0;
          uVar5 = uVar12;
        }
        iVar6 = FUN_00407950(pppppplVar14);
        iVar9 = 0;
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            local_80 = FUN_00407970(pppppplVar14,iVar6);
            iVar7 = FUN_0041f030(&local_80,0,*(undefined8 *)(param_3 + 8),0xffffffff,uVar2);
            if (iVar7 == -1 || 0x7fffffff - iVar7 < iVar9) {
              return -1;
            }
            iVar9 = iVar7 + iVar9;
            iVar6 = iVar6 + 1;
            iVar7 = FUN_00407950(pppppplVar14);
          } while (iVar6 < iVar7);
        }
        iVar7 = FUN_0040a0e0(uVar10,iVar9,uVar5);
        if (iVar7 != -1) {
          iVar6 = iVar7;
          if ((uVar4 >> 4 & 1) != 0) {
            iVar6 = FUN_0040a0e0(uVar10,iVar7,param_4);
          }
          if (param_2 == (long *)0x0) {
            return iVar6;
          }
          if (iVar6 == -1) {
            return -1;
          }
          if ((uVar4 >> 4 & 1) != 0) {
            FUN_00409f20(param_2,uVar10,iVar7,param_4,uVar15);
          }
          FUN_00409f20(param_2,uVar10,iVar9,uVar5,uVar3);
          uVar16 = *(undefined8 *)(param_3 + 8);
          local_70 = (void *)0x0;
          if ((iVar8 == 0) || (iVar7 = FUN_00407950(pppppplVar14), iVar7 < 2)) {
            iVar8 = FUN_00407950(pppppplVar14);
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                local_68 = FUN_00407970(pppppplVar14,iVar8);
                FUN_0041f030(&local_68,param_2,uVar16,0xffffffff,uVar2);
                iVar8 = iVar8 + 1;
                iVar9 = FUN_00407950(pppppplVar14);
              } while (iVar8 < iVar9);
            }
          }
          else {
            iVar7 = FUN_00407950(pppppplVar14);
            __base = (long *)FUN_00400260((long)iVar7 * 0x18,
                                          "external/openssl/crypto/asn1/tasn_enc.c",0x180);
            if (__base != (long *)0x0) {
              pvVar11 = (void *)FUN_00400260((long)iVar9,"external/openssl/crypto/asn1/tasn_enc.c",
                                             0x183);
              if (pvVar11 == (void *)0x0) {
                FUN_00400420(__base,"external/openssl/crypto/asn1/tasn_enc.c",0x185);
              }
              else {
                local_70 = pvVar11;
                iVar9 = FUN_00407950(pppppplVar14);
                if (0 < iVar9) {
                  iVar9 = 0;
                  plVar13 = __base;
                  do {
                    local_68 = FUN_00407970(pppppplVar14,iVar9);
                    *plVar13 = (long)local_70;
                    uVar10 = FUN_0041f030(&local_68,&local_70,uVar16,0xffffffff,uVar2);
                    *(undefined4 *)(plVar13 + 1) = uVar10;
                    plVar13[2] = local_68;
                    iVar9 = iVar9 + 1;
                    iVar7 = FUN_00407950(pppppplVar14);
                    plVar13 = plVar13 + 3;
                  } while (iVar9 < iVar7);
                }
                iVar9 = FUN_00407950(pppppplVar14);
                qsort(__base,(long)iVar9,0x18,FUN_0041f9d0);
                local_70 = (void *)*param_2;
                iVar9 = FUN_00407950(pppppplVar14);
                if (0 < iVar9) {
                  iVar9 = 0;
                  plVar13 = __base;
                  do {
                    memcpy(local_70,(void *)*plVar13,(long)(int)plVar13[1]);
                    iVar9 = iVar9 + 1;
                    local_70 = (void *)((long)local_70 + (long)(int)plVar13[1]);
                    iVar7 = FUN_00407950(pppppplVar14);
                    plVar13 = plVar13 + 3;
                  } while (iVar9 < iVar7);
                }
                *param_2 = (long)local_70;
                if ((iVar8 == 2) && (iVar8 = FUN_00407950(pppppplVar14), 0 < iVar8)) {
                  iVar8 = 0;
                  plVar13 = __base + 2;
                  do {
                    FUN_004079a0(pppppplVar14,iVar8,*plVar13);
                    iVar8 = iVar8 + 1;
                    iVar9 = FUN_00407950(pppppplVar14);
                    plVar13 = plVar13 + 3;
                  } while (iVar8 < iVar9);
                }
                FUN_00400420(__base,"external/openssl/crypto/asn1/tasn_enc.c",0x1aa);
                FUN_00400420(pvVar11,"external/openssl/crypto/asn1/tasn_enc.c",0x1ab);
              }
            }
          }
          if (uVar1 == 0) {
            return iVar6;
          }
          FUN_0040a0c0(param_2);
          uVar1 = uVar4 >> 4 & 1;
          goto joined_r0x0041f67c;
        }
        goto LAB_0041f3ec;
      }
    }
    iVar8 = 0;
  }
  else {
    if (param_4 == 0xffffffff) {
      param_4 = param_3[2];
      uVar15 = uVar4 & 0xc0;
      goto LAB_0041f40c;
    }
LAB_0041f3ec:
    iVar8 = -1;
  }
  return iVar8;
}


