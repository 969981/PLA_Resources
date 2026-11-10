/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fa360; name: FUN_003fa360
 */


int FUN_003fa360(undefined8 param_1,int param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined1 *local_90 [6];
  
  lVar4 = FUN_0045e200(param_1,0x55,0,0);
  if (lVar4 == 0) {
    uVar12 = 0;
    iVar2 = 0;
    lVar6 = 2;
    if (param_2 != 0) {
      lVar6 = 3;
    }
  }
  else {
    iVar2 = FUN_00407950(lVar4);
    if (iVar2 < 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x1b2,2,
                   "assertion failed: %s","subject_alt_name_count >= 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = 2;
    if (param_2 != 0) {
      lVar6 = 3;
    }
    uVar12 = (ulong)iVar2;
    lVar6 = lVar6 + uVar12;
    if (iVar2 != 0) {
      iVar3 = 0;
      do {
        piVar5 = (int *)FUN_00407970(lVar4,iVar3);
        iVar3 = iVar3 + 1;
        if (*piVar5 == 6) {
          lVar6 = lVar6 + 1;
        }
      } while (iVar2 != iVar3);
    }
  }
  iVar3 = FUN_003f4c40(lVar6,param_3);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar13 = 0;
  if (param_2 != 0) {
    iVar3 = FUN_003f4b70("certificate_type",&DAT_039374da,*param_3);
    uVar13 = 1;
    uVar10 = 1;
    if (iVar3 != 0) goto joined_r0x003fa7f8;
  }
  lVar14 = *param_3;
  uVar10 = uVar13 + 1;
  lVar6 = FUN_0044e530(param_1);
  if (lVar6 == 0) {
    pcVar8 = "Could not get subject name from certificate.";
    uVar7 = 0x115;
LAB_003fa4dc:
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",uVar7,1,
                 pcVar8);
    lVar6 = 0;
    local_90[0] = (undefined1 *)0x0;
  }
  else {
    iVar3 = FUN_0044a140(lVar6,0xd,0xffffffff);
    if (iVar3 == -1) {
      pcVar8 = "Could not get common name of subject from certificate.";
      uVar7 = 0x11b;
      goto LAB_003fa4dc;
    }
    lVar6 = FUN_0044a0e0(lVar6,iVar3);
    if (lVar6 == 0) {
      pcVar8 = "Could not get common name entry from certificate.";
      uVar7 = 0x120;
LAB_003fa734:
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",uVar7,2,
                   pcVar8);
      iVar3 = 7;
      goto joined_r0x003fa7f8;
    }
    lVar6 = FUN_0044a0d0();
    if (lVar6 == 0) {
      pcVar8 = "Could not get common name entry asn1 from certificate.";
      uVar7 = 0x125;
      goto LAB_003fa734;
    }
    iVar3 = FUN_00448dc0(local_90,lVar6);
    if (iVar3 < 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",299,2,
                   "Could not extract utf8 from asn1 string.");
      iVar3 = 0xc;
      goto joined_r0x003fa7f8;
    }
    lVar6 = (long)iVar3;
  }
  puVar1 = &DAT_03996322;
  if (local_90[0] != (undefined1 *)0x0) {
    puVar1 = local_90[0];
  }
  iVar3 = FUN_003f4be0("x509_subject_common_name",puVar1,lVar6,lVar14 + (ulong)uVar13 * 0x18);
  FUN_00400420(local_90[0],"external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",
               0x145);
  if (iVar3 == 0) {
    lVar6 = *param_3;
    uVar13 = uVar13 | 2;
    FUN_00443d70();
    uVar7 = FUN_00403d80();
    iVar3 = FUN_004e3220(uVar7,param_1);
    if ((iVar3 == 0) || (lVar14 = FUN_00404920(uVar7,3,0,local_90), lVar14 < 1)) {
      FUN_00403ee0(uVar7);
      iVar3 = 7;
      uVar10 = uVar13;
    }
    else {
      iVar3 = FUN_003f4be0("x509_pem_cert",local_90[0],lVar14,lVar6 + (ulong)uVar10 * 0x18);
      FUN_00403ee0(uVar7);
      uVar10 = uVar13;
      if ((iVar2 != 0) && (iVar3 == 0)) {
        uVar9 = 0;
        do {
          piVar5 = (int *)FUN_00407970(lVar4,uVar9 & 0xffffffff);
          iVar2 = *piVar5;
          if (iVar2 - 1U < 2) {
LAB_003fa668:
            local_90[0] = (undefined1 *)0x0;
            iVar2 = FUN_00448dc0(local_90,*(undefined8 *)(piVar5 + 2));
            if (iVar2 < 0) {
              pcVar8 = "Could not get utf8 from asn1 string.";
              uVar7 = 0x175;
              goto LAB_003fa734;
            }
            uVar11 = (long)(int)uVar10 + 1;
            iVar3 = FUN_003f4be0("x509_subject_alternative_name",local_90[0],(long)iVar2,
                                 *param_3 + (long)(int)uVar10 * 0x18);
            if (iVar3 != 0) {
              FUN_00400420(local_90[0],
                           "external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",
                           0x17e);
              uVar10 = (uint)uVar11;
              break;
            }
            if (*piVar5 == 6) {
              iVar3 = FUN_003f4be0("x509_uri",local_90[0],(long)iVar2,*param_3 + uVar11 * 0x18);
              uVar11 = (ulong)(uVar10 + 2);
            }
            else {
              iVar3 = 0;
            }
            FUN_00400420(local_90[0],
                         "external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",
                         0x187);
            uVar10 = (uint)uVar11;
joined_r0x003fa718:
            if (iVar3 != 0) break;
          }
          else {
            if (iVar2 == 7) {
              iVar2 = **(int **)(piVar5 + 2);
              if (iVar2 == 4) {
                iVar2 = 2;
              }
              else {
                if (iVar2 != 0x10) {
                  pcVar8 = "SAN IP Address contained invalid IP";
                  uVar7 = 0x191;
                  goto LAB_003fa734;
                }
                iVar2 = 0x1c;
              }
              pcVar8 = inet_ntop(iVar2,*(void **)(*(int **)(piVar5 + 2) + 2),(char *)local_90,0x2e);
              if (pcVar8 != (char *)0x0) {
                lVar6 = (long)(int)uVar10;
                uVar10 = uVar10 + 1;
                iVar3 = FUN_003f4b70("x509_subject_alternative_name",pcVar8,*param_3 + lVar6 * 0x18)
                ;
                goto joined_r0x003fa718;
              }
              pcVar8 = "Could not get IP string from asn1 octet.";
              uVar7 = 0x198;
              goto LAB_003fa734;
            }
            if (iVar2 == 6) goto LAB_003fa668;
          }
          uVar9 = uVar9 + 1;
          iVar3 = 0;
        } while (uVar12 != uVar9);
      }
    }
  }
joined_r0x003fa7f8:
  if (lVar4 != 0) {
    FUN_004078c0(lVar4,PTR_FUN_04374170);
  }
  if (iVar3 != 0) {
    FUN_003f4ae0(param_3);
  }
  if (uVar10 != *(uint *)(param_3 + 1)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x1dc,2,
                 "assertion failed: %s","(int)peer->property_count == current_insert_index");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return iVar3;
}


