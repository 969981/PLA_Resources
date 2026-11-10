/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b1f20; name: FUN_005b1f20
 */


ulong FUN_005b1f20(long param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_60 [32];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  puVar7 = PTR_DAT_043738c0;
  puVar6 = PTR___tls_init_043737c8;
  if (5 < *(byte *)(param_1 + 0xd2)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                 ,0x558,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  switch(*(byte *)(param_1 + 0xd2)) {
  case 0:
    break;
  case 1:
    if (param_2 == param_3) {
      uVar11 = 1;
LAB_005b21ac:
      *(undefined1 *)(param_1 + 0xd2) = uVar11;
      return 0;
    }
    lVar15 = tpidr_el0;
    if (*param_2 != 0) {
      lVar14 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar15 = *(long *)(lVar15 + 0x30);
      uVar8 = *(uint *)(lVar15 + 0x30);
      if (uVar8 == 0xffffffff) {
        uVar8 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar15 + 0x30) = uVar8;
      }
      plVar1 = (long *)(lVar14 + (ulong)uVar8 * 0x1d50 + 0x218);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto switchD_005b1f64_caseD_2;
    }
    *(undefined1 *)(param_1 + 0xd2) = 0;
    lVar14 = *(long *)puVar7;
    if (puVar6 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    param_2 = param_2 + 1;
    lVar15 = *(long *)(lVar15 + 0x30);
    uVar8 = *(uint *)(lVar15 + 0x30);
    if (uVar8 == 0xffffffff) {
      uVar8 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar15 + 0x30) = uVar8;
    }
    plVar1 = (long *)(lVar14 + (ulong)uVar8 * 0x1d50 + 0x210);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 2:
switchD_005b1f64_caseD_2:
    do {
      pbVar13 = param_2;
      do {
        if (param_3 == pbVar13) {
          uVar11 = 2;
          goto LAB_005b21ac;
        }
        param_2 = pbVar13 + 1;
        bVar2 = *pbVar13;
        if ((&DAT_03a376bc)[bVar2] == 0xff) {
          FUN_002f2c60(auStack_60,"Illegal base64 character");
          uVar12 = 0x51b;
          goto LAB_005b2230;
        }
        pbVar13 = param_2;
      } while (bVar2 == 0x3d);
      *(uint *)(param_1 + 0xd8) = (uint)(byte)(&DAT_03a376bc)[bVar2] << 0x12;
switchD_005b1f64_caseD_3:
      pbVar13 = param_2;
      do {
        if (param_3 == pbVar13) {
          uVar11 = 3;
          goto LAB_005b21ac;
        }
        param_2 = pbVar13 + 1;
        bVar2 = *pbVar13;
        if ((byte)(&DAT_03a376bc)[bVar2] == 0xff) {
          FUN_002f2c60(auStack_60,"Illegal base64 character");
          uVar12 = 0x52b;
          goto LAB_005b2230;
        }
        pbVar13 = param_2;
      } while (bVar2 == 0x3d);
      *(uint *)(param_1 + 0xd8) =
           *(uint *)(param_1 + 0xd8) | (uint)(byte)(&DAT_03a376bc)[bVar2] << 0xc;
switchD_005b1f64_caseD_4:
      pbVar13 = param_2;
      do {
        if (param_3 == pbVar13) {
          uVar11 = 4;
          goto LAB_005b21ac;
        }
        param_2 = pbVar13 + 1;
        bVar2 = *pbVar13;
        if ((byte)(&DAT_03a376bc)[bVar2] == 0xff) {
          FUN_002f2c60(auStack_60,"Illegal base64 character");
          uVar12 = 0x53b;
          goto LAB_005b2230;
        }
        pbVar13 = param_2;
      } while (bVar2 == 0x3d);
      *(uint *)(param_1 + 0xd8) =
           *(uint *)(param_1 + 0xd8) | (uint)(byte)(&DAT_03a376bc)[bVar2] << 6;
switchD_005b1f64_caseD_5:
      pbVar13 = param_2;
      do {
        if (param_3 == pbVar13) {
          uVar11 = 5;
          goto LAB_005b21ac;
        }
        param_2 = pbVar13 + 1;
        bVar2 = *pbVar13;
        if ((byte)(&DAT_03a376bc)[bVar2] == 0xff) {
          FUN_002f2c60(auStack_60,"Illegal base64 character");
          uVar12 = 0x54b;
LAB_005b2230:
          uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,uVar12,auStack_60,0,0);
          if (uVar9 == 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                         ,0x433,2,"assertion failed: %s","err != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*(long *)(param_1 + 0x10) == 0) {
            uVar10 = uVar9;
            if (4 < uVar9) {
              uVar10 = FUN_002f03c0(uVar9,
                                    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                    ,0x435);
            }
            *(ulong *)(param_1 + 0x10) = uVar10;
          }
          *(undefined1 **)(param_1 + 0x18) = &LAB_005b1110;
          return uVar9;
        }
        pbVar13 = param_2;
      } while (bVar2 == 0x3d);
      uVar8 = *(uint *)(param_1 + 0xd8);
      uVar3 = uVar8 | (byte)(&DAT_03a376bc)[bVar2];
      *(uint *)(param_1 + 0xd8) = uVar3;
      local_34 = (undefined1)(uVar8 >> 0x10);
      local_33 = (undefined1)(uVar8 >> 8);
      local_32 = (undefined1)uVar3;
      FUN_005b22d0(uVar12,&local_34,3);
    } while( true );
  case 3:
    goto switchD_005b1f64_caseD_3;
  case 4:
    goto switchD_005b1f64_caseD_4;
  case 5:
    goto switchD_005b1f64_caseD_5;
  }
  FUN_005b22d0(uVar12,param_2,(long)param_3 - (long)param_2);
  return 0;
}


