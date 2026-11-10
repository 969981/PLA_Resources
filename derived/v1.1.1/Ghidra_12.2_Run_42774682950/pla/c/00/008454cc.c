/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008454cc; name: FUN_008454cc
 */


void FUN_008454cc(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  FUN_008459b0("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------",param_1 + 0x602,
               (int)param_1[0x601] / 1000,(int)param_1[0x601] % 1000);
  FUN_008459b0(
              "[Analysis] ProtocolId(EmulationId), TotalNum, TotalSize, AverageSize, Protocol(port)"
              );
  uVar1 = param_1[0x60a];
  uVar2 = param_1[0x60b];
  if (uVar1 == 0) {
    FUN_008459b0("[Analysis]         0xffffffff(---), %8d,  %8d,    %8d, Packet",0,uVar2,0);
  }
  else {
    uVar10 = 0;
    if (uVar1 != 0) {
      uVar10 = uVar2 / uVar1;
    }
    FUN_008459b0("[Analysis]         0xffffffff(---), %8d,  %8d,    %8d, Packet",uVar1,uVar2,uVar10)
    ;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = param_1[0x60c];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if (uVar2 != 0) {
          uVar10 = uVar1 / uVar2;
        }
      }
      FUN_008459b0("[Analysis]                                     %8d,    %8d, NetworkHeader",uVar1
                   ,uVar10);
    }
    uVar1 = param_1[0x60d];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if (uVar2 != 0) {
          uVar10 = uVar1 / uVar2;
        }
      }
      FUN_008459b0("[Analysis]                                     %8d,    %8d, PiaHeader",uVar1,
                   uVar10);
    }
    uVar1 = param_1[0x60e];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if (uVar2 != 0) {
          uVar10 = uVar1 / uVar2;
        }
      }
      FUN_008459b0("[Analysis]                                     %8d,    %8d, Footer",uVar1,uVar10
                  );
    }
    uVar1 = param_1[0x60f];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if (uVar2 != 0) {
          uVar10 = uVar1 / uVar2;
        }
      }
      FUN_008459b0("[Analysis]                                     %8d,    %8d, Crypto",uVar1,uVar10
                  );
    }
  }
  puVar6 = PTR_DAT_04377fe0;
  puVar8 = param_1 + 0x610;
  lVar9 = -0x18;
  uVar1 = *puVar8;
  if (uVar1 != 0) goto LAB_00845640;
  while (lVar9 != -1) {
    while( true ) {
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 1;
      uVar1 = *puVar8;
      if (uVar1 == 0) break;
LAB_00845640:
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = puVar8[0x18] / uVar1;
      }
      FUN_008459b0("[Analysis]         0xffffffff(%3u), %8d,  %8d,    %8d, Packet",
                   (int)lVar9 + (uint)(byte)*puVar6 + 0x18,uVar1,puVar8[0x18],uVar2);
      if (lVar9 == -1) goto LAB_00845668;
    }
  }
LAB_00845668:
  if (0 < (int)param_1[0x600]) {
    lVar9 = 0;
    uVar1 = param_1[1];
    puVar5 = param_1;
    while( true ) {
      if (uVar1 != 0) {
        uVar2 = puVar5[2];
        uVar10 = 0;
        if (uVar1 != 0) {
          uVar10 = uVar2 / uVar1;
        }
        uVar3 = *puVar5;
        cVar4 = *(char *)((long)puVar5 + 2);
        if (cVar4 == '\0') {
          uVar7 = FUN_00847450(uVar3);
          FUN_008459b0("[Analysis]         0x%08x(---), %8d,  %8d,    %8d, %s(%u)",uVar3,uVar1,uVar2
                       ,uVar10,uVar7,*(undefined2 *)puVar5);
        }
        else {
          uVar7 = FUN_00847450(uVar3);
          FUN_008459b0("[Analysis]         0x%08x(%3u), %8d,  %8d,    %8d, %s(%u)",uVar3,cVar4,uVar1
                       ,uVar2,uVar10,uVar7,*(undefined2 *)puVar5);
        }
        if ((param_2 & 1) != 0) {
          uVar1 = puVar5[4];
          if (uVar1 != 0) {
            uVar2 = puVar5[5];
            uVar10 = 0;
            if (uVar1 != 0) {
              uVar10 = uVar2 / uVar1;
            }
            uVar7 = FUN_00847450(*puVar5);
            FUN_008459b0("[Analysis]                          %8d,  %8d,    %8d, %sResend",uVar1,
                         uVar2,uVar10,uVar7);
          }
          uVar1 = puVar5[6];
          if (uVar1 != 0) {
            uVar2 = puVar5[7];
            uVar10 = 0;
            if (uVar1 != 0) {
              uVar10 = uVar2 / uVar1;
            }
            uVar7 = FUN_00847450(*puVar5);
            FUN_008459b0("[Analysis]                          %8d,  %8d,    %8d, %sAck",uVar1,uVar2,
                         uVar10,uVar7);
          }
          uVar1 = puVar5[3];
          uVar2 = puVar5[1];
          if (uVar2 == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = 0;
            if (uVar2 != 0) {
              uVar10 = uVar1 / uVar2;
            }
          }
          uVar7 = FUN_00847450(*puVar5);
          FUN_008459b0("[Analysis]                                     %8d,    %8d, %sHeader",uVar1,
                       uVar10,uVar7);
        }
      }
      lVar9 = lVar9 + 1;
      if ((int)param_1[0x600] <= lVar9) break;
      uVar1 = puVar5[0xd];
      puVar5 = puVar5 + 0xc;
    }
  }
  FUN_008459b0("[Analysis] ---------------------------- END ----------------------------");
  return;
}


