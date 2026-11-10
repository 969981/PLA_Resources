/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ccc60; name: FUN_003ccc60
 */


void FUN_003ccc60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  char *local_80;
  undefined4 local_78;
  
  plVar1 = param_1 + 0x2e;
  do {
    lVar13 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar13 + -1 != 0) {
    return;
  }
  lVar13 = *param_1;
  uVar14 = param_1[0x2f];
  if (uVar14 < 5) {
    bVar3 = *(byte *)(param_1 + 3);
    if ((bVar3 & 1) != 0) goto LAB_003ccd34;
LAB_003cccd4:
    if ((bVar3 >> 2 & 1) != 0) goto LAB_003ccd44;
LAB_003cccd8:
    if ((bVar3 >> 1 & 1) != 0) goto LAB_003ccd9c;
LAB_003cccdc:
    if ((bVar3 >> 5 & 1) != 0) goto LAB_003ccdac;
LAB_003ccce0:
    if (((uVar14 != 0) && ((bVar3 >> 4 & 1) != 0)) && (**(long **)(lVar13 + 0x810) != 0)) {
      FUN_003c8500();
      **(undefined8 **)(lVar13 + 0x810) = 0;
      uVar9 = param_1[0x2f];
      goto joined_r0x003ccf28;
    }
  }
  else {
    uVar14 = FUN_002f03c0(uVar14,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x49a)
    ;
    bVar3 = *(byte *)(param_1 + 3);
    if ((bVar3 & 1) == 0) goto LAB_003cccd4;
LAB_003ccd34:
    FUN_003de350(lVar13 + 0x198);
    bVar3 = *(byte *)(param_1 + 3);
    if ((bVar3 >> 2 & 1) == 0) goto LAB_003cccd8;
LAB_003ccd44:
    if ((uVar14 == 0) && (*(char *)(param_1[2] + 0x30) != '\0')) {
      FUN_002f2c60(&local_80,"Attempt to send message after stream was closed.");
      uVar10 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x4a5,
                            &local_80,0,0);
      uVar14 = FUN_002f13f0(0,uVar10);
    }
    *(undefined1 *)(lVar13 + 0xb4) = 0;
    bVar3 = *(byte *)(param_1 + 3);
    if ((bVar3 >> 1 & 1) == 0) goto LAB_003cccdc;
LAB_003ccd9c:
    FUN_003de350(lVar13 + 0x280);
    bVar3 = *(byte *)(param_1 + 3);
    if ((bVar3 >> 5 & 1) == 0) goto LAB_003ccce0;
LAB_003ccdac:
    *(undefined8 *)(lVar13 + 200) = 1;
    lVar15 = *(long *)(lVar13 + 0xa0);
    if (lVar15 != 0) {
      FUN_002ef750(lVar15);
      puVar8 = PTR_DAT_04373fd8;
      lVar11 = *(long *)(lVar15 + 0x20);
      if (lVar11 != 0) {
        cVar4 = *(char *)(lVar11 + 0xb2);
        lVar6 = lVar11;
        lVar7 = *(long *)(*(long *)(lVar11 + 0xa8) + 8);
        while( true ) {
          if (cVar4 != '\0') {
            plVar1 = (long *)(lVar6 + 0x9e0);
            if (puVar8[0x10] != '\0') {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,
                           0,"%s %p:%p REF %s",*(undefined8 *)(lVar6 + 0xa38),plVar1,
                           *(undefined8 *)(lVar6 + 0xa00),"propagate_cancel");
            }
            plVar2 = (long *)(lVar6 + 0x9e8);
            do {
              lVar11 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar12 = *plVar1;
            if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                           "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar12 + 8),plVar1,
                           "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,
                           lVar11,lVar11 + 1,"propagate_cancel");
            }
            if (lVar11 < 1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("prior > 0",
                            "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89,
                            "RefNonZero");
            }
            FUN_003c9ab0(lVar6,4);
            FUN_003c9ce0(plVar1,"propagate_cancel");
            lVar11 = *(long *)(lVar15 + 0x20);
          }
          if (lVar7 == lVar11) break;
          cVar4 = *(char *)(lVar7 + 0xb2);
          lVar6 = lVar7;
          lVar7 = *(long *)(*(long *)(lVar7 + 0xa8) + 8);
        }
      }
      FUN_002ef790(lVar15);
    }
    if (4 < uVar14) {
      FUN_002f0430(uVar14,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x4c2);
      uVar14 = 0;
      uVar9 = param_1[0x2f];
      goto joined_r0x003ccf28;
    }
    uVar14 = 0;
  }
  uVar9 = param_1[0x2f];
joined_r0x003ccf28:
  if (4 < uVar9) {
    FUN_002f0430(uVar9,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x491);
  }
  param_1[0x2f] = 0;
  if ((char)param_1[0xf] == '\0') {
    FUN_003ceba0(*(undefined8 *)(*param_1 + 0x78),param_1[0xe],uVar14,&LAB_003cd9b0,param_1,
                 param_1 + 0xe,0);
  }
  else {
    *param_1 = 0;
    local_80 = "external/com_google_grpc_base/src/core/lib/surface/call.cc";
    local_78 = 0x4cf;
    FUN_00302c34(&local_80,param_1[0xe],uVar14);
    FUN_003c9ce0(lVar13 + 0x9e0,"completion");
  }
  return;
}


