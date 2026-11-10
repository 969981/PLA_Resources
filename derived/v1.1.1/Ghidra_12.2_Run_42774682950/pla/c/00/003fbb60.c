/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fbb60; name: FUN_003fbb60
 */


undefined8 FUN_003fbb60(long *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  size_t sVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  if (param_3 == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    pbVar7 = param_2;
    sVar8 = param_3;
    do {
      bVar1 = *pbVar7;
      if (bVar1 == 0x3a) {
        bVar2 = true;
        uVar6 = param_1[1];
        goto joined_r0x003fbe00;
      }
      if (bVar1 < 0x30) {
        if (bVar1 != 0x2e) {
          bVar2 = false;
          uVar6 = param_1[1];
          goto joined_r0x003fbe00;
        }
        bVar2 = false;
        if ((uVar6 == 0) || (3 < uVar4)) goto LAB_003fbc20;
        uVar6 = 0;
        uVar4 = uVar4 + 1;
      }
      else {
        bVar2 = false;
        if ((3 < uVar6) || (0x39 < bVar1)) goto LAB_003fbc20;
        uVar6 = uVar6 + 1;
      }
      pbVar7 = pbVar7 + 1;
      sVar8 = sVar8 - 1;
    } while (sVar8 != 0);
  }
  bVar2 = 2 < uVar4 && uVar6 != 0;
LAB_003fbc20:
  uVar6 = param_1[1];
joined_r0x003fbe00:
  if (uVar6 != 0) {
    if (bVar2) {
      param_1 = (long *)*param_1;
      uVar4 = 0;
      lVar11 = 0;
      plVar10 = (long *)0x0;
      plVar5 = plVar10;
      if (param_3 == 0) {
        do {
          while( true ) {
            pcVar9 = (char *)*param_1;
            plVar5 = plVar10;
            if (pcVar9 != (char *)0x0) break;
LAB_003fbcd4:
            uVar4 = uVar4 + 1;
            param_1 = param_1 + 3;
            plVar10 = plVar5;
            if (uVar6 <= uVar4) goto LAB_003fbdc8;
          }
          iVar3 = strcmp(pcVar9,"x509_subject_alternative_name");
          if (iVar3 != 0) {
            iVar3 = strcmp(pcVar9,"x509_subject_common_name");
            plVar5 = param_1;
            if (iVar3 != 0) {
              plVar5 = plVar10;
            }
            goto LAB_003fbcd4;
          }
          if (param_1[2] < 0) goto LAB_003fbe38;
          if (param_1[2] == 0) {
            return 1;
          }
          lVar11 = lVar11 + 1;
          uVar4 = uVar4 + 1;
          param_1 = param_1 + 3;
        } while (uVar4 < uVar6);
      }
      else {
        do {
          pcVar9 = (char *)*param_1;
          plVar10 = plVar5;
          if (pcVar9 != (char *)0x0) {
            iVar3 = strcmp(pcVar9,"x509_subject_alternative_name");
            if (iVar3 == 0) {
              if (param_1[2] < 0) goto LAB_003fbe38;
              lVar11 = lVar11 + 1;
              if ((param_3 == param_1[2]) &&
                 (iVar3 = memcmp(param_2,(void *)param_1[1],param_3), iVar3 == 0)) {
                return 1;
              }
            }
            else {
              iVar3 = strcmp(pcVar9,"x509_subject_common_name");
              plVar10 = param_1;
              if (iVar3 != 0) {
                plVar10 = plVar5;
              }
            }
          }
          uVar4 = uVar4 + 1;
          param_1 = param_1 + 3;
          plVar5 = plVar10;
        } while (uVar4 < uVar6);
      }
    }
    else {
      lVar12 = 0;
      uVar4 = 0;
      lVar11 = 0;
      plVar10 = (long *)0x0;
      plVar5 = (long *)*param_1;
      pcVar9 = (char *)*plVar5;
      if (pcVar9 != (char *)0x0) goto LAB_003fbd84;
LAB_003fbd64:
      uVar4 = uVar4 + 1;
      if (uVar4 < uVar6) {
        while( true ) {
          lVar12 = lVar12 + 0x18;
          plVar5 = (long *)(*param_1 + lVar12);
          pcVar9 = (char *)*plVar5;
          if (pcVar9 == (char *)0x0) break;
LAB_003fbd84:
          iVar3 = strcmp(pcVar9,"x509_subject_alternative_name");
          if (iVar3 != 0) {
            iVar3 = strcmp(pcVar9,"x509_subject_common_name");
            if (iVar3 != 0) {
              plVar5 = plVar10;
            }
            plVar10 = plVar5;
            break;
          }
          if (plVar5[2] < 0) goto LAB_003fbe38;
          iVar3 = FUN_003fbe60(plVar5[1],plVar5[2],param_2,param_3);
          if (iVar3 != 0) {
            return 1;
          }
          uVar6 = param_1[1];
          lVar11 = lVar11 + 1;
          uVar4 = uVar4 + 1;
          if (uVar6 <= uVar4) goto LAB_003fbdc8;
        }
        goto LAB_003fbd64;
      }
    }
LAB_003fbdc8:
    if (((!bVar2) && (plVar10 != (long *)0x0)) && (lVar11 == 0)) {
      if (plVar10[2] < 0) {
LAB_003fbe38:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      iVar3 = FUN_003fbe60(plVar10[1],plVar10[2],param_2,param_3);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


