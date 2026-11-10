/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ecdf0; name: FUN_003ecdf0
 */


void FUN_003ecdf0(undefined8 *param_1,byte *param_2,long param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  char cVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  char local_74 [4];
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  FUN_002f27f0(&local_70,param_3);
  lVar10 = (long)&uStack_68 + 1;
  if (local_70 != (long *)0x0) {
    lVar10 = local_60;
  }
  local_48 = 0;
  if (param_3 == 0) goto LAB_003ecfdc;
  lVar4 = 0;
  if (param_4 == 0) {
    pbVar13 = param_2 + 1;
    bVar1 = *param_2;
    if (-1 < (char)bVar1) goto LAB_003ecf5c;
    do {
      while( true ) {
        do {
          param_3 = param_3 + -1;
          if (param_3 == 0) goto LAB_003ecfc4;
          pbVar14 = pbVar13 + 1;
          bVar1 = *pbVar13;
          pbVar13 = pbVar14;
        } while ((char)bVar1 < '\0');
LAB_003ecf5c:
        uVar9 = (uint)(char)bVar1;
        if ((&DAT_039fe9a6)[bVar1] == -1) break;
        local_74[lVar4] = (&DAT_039fe9a6)[bVar1];
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          iVar3 = FUN_003ed0e0(local_74,4,lVar10,&local_48);
          if (iVar3 == 0) goto LAB_003ed01c;
          lVar4 = 0;
        }
      }
    } while ((bVar1 == 0xd) || (bVar1 == 10));
  }
  else {
    pbVar13 = param_2 + 1;
    bVar1 = *param_2;
    if (-1 < (char)bVar1) goto LAB_003ece80;
    do {
      while( true ) {
        do {
          param_3 = param_3 + -1;
          if (param_3 == 0) goto LAB_003ecfc4;
          pbVar14 = pbVar13 + 1;
          bVar1 = *pbVar13;
          pbVar13 = pbVar14;
        } while ((char)bVar1 < '\0');
LAB_003ece80:
        uVar7 = (uint)bVar1;
        if (uVar7 < 0x2f) break;
        if (uVar7 != 0x5f) {
          if (uVar7 != 0x2f) goto LAB_003ecf18;
LAB_003ed000:
          pcVar6 = "Invalid character for url safe base64 %c";
          uVar5 = 0xcd;
          goto LAB_003ed014;
        }
        uVar9 = 0x2f;
        cVar11 = DAT_039fe9d5;
        if (DAT_039fe9d5 == -1) goto LAB_003eceec;
LAB_003ecea8:
        local_74[lVar4] = cVar11;
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          iVar3 = FUN_003ed0e0(local_74,4,lVar10,&local_48);
          if (iVar3 == 0) goto LAB_003ed01c;
          lVar4 = 0;
        }
      }
      uVar9 = 0x2b;
      cVar11 = DAT_039fe9d1;
      if (uVar7 != 0x2d) {
        if (uVar7 == 0x2b) goto LAB_003ed000;
LAB_003ecf18:
        cVar11 = (&DAT_039fe9a6)[(ulong)(uint)(int)(char)bVar1 & 0xff];
        uVar9 = (int)(char)bVar1;
      }
      if (cVar11 != -1) goto LAB_003ecea8;
LAB_003eceec:
    } while ((uVar9 == 10) || ((uVar9 & 0xff) == 0xd));
  }
  uVar7 = uVar9 & 0xff;
  pcVar6 = "Invalid character %c";
  uVar5 = 0xd9;
LAB_003ed014:
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/b64.cc",uVar5,2,pcVar6,uVar7);
LAB_003ed01c:
  if ((local_70 != (long *)0x0) && (plVar8 = (long *)*local_70, plVar8 != (long *)0x0)) {
    plVar12 = plVar8 + 1;
    lVar10 = *plVar8;
    do {
      lVar4 = *plVar12;
      cVar11 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar4 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar8,lVar4);
    }
    if (lVar4 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar4 == 1) {
      (*(code *)local_70[3])(local_70[4]);
    }
  }
  FUN_002f2710(param_1);
  return;
LAB_003ecfc4:
  if ((lVar4 == 0) || (iVar3 = FUN_003ed0e0(local_74,lVar4,lVar10,&local_48), iVar3 != 0)) {
LAB_003ecfdc:
    if (local_70 == (long *)0x0) {
      uStack_68 = CONCAT71(uStack_68._1_7_,(char)local_48);
    }
    else {
      uStack_68 = local_48;
    }
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = local_60;
    return;
  }
  goto LAB_003ed01c;
}


