/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f0ee0; name: FUN_002f0ee0
 */


ulong FUN_002f0ee0(ulong param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_78 [32];
  ulong local_58;
  
  if (param_1 < 5) {
    FUN_002f2c60(auStack_78,"unknown");
    local_58 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x18c,
                            auStack_78,0,0);
    if (param_1 == 4) {
      FUN_002f2c60(auStack_78,"cancelled");
      FUN_002f0980(&local_58,0,auStack_78);
      bVar6 = *(byte *)(local_58 + 0x13);
      uVar8 = local_58;
      if ((bVar6 == 0xff) && (bVar6 = FUN_002f1ea0(&local_58,8), uVar8 = local_58, bVar6 == 0xff)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xe1,2,
                     "Error %p is full, dropping int {\"%s\":%li}",local_58,"grpc_status",1);
      }
      else {
        *(byte *)(uVar8 + 0x13) = bVar6;
        *(undefined8 *)(uVar8 + (ulong)bVar6 * 8 + 0x38) = 1;
      }
    }
    else if (param_1 == 2) {
      FUN_002f2c60(auStack_78,&DAT_03970e5e);
      FUN_002f0980(&local_58,0,auStack_78);
      uVar8 = local_58;
    }
    else {
      uVar8 = local_58;
      if (param_1 == 0) {
        FUN_002f2c60(auStack_78,"no error");
        FUN_002f0980(&local_58,0,auStack_78);
        bVar6 = *(byte *)(local_58 + 0x13);
        if ((bVar6 == 0xff) && (bVar6 = FUN_002f1ea0(&local_58,8), uVar8 = local_58, bVar6 == 0xff))
        {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xe1,2,
                       "Error %p is full, dropping int {\"%s\":%li}",local_58,"grpc_status",0);
        }
        else {
          *(byte *)(local_58 + 0x13) = bVar6;
          *(undefined8 *)(local_58 + (ulong)bVar6 * 8 + 0x38) = 0;
          uVar8 = local_58;
        }
      }
    }
  }
  else {
    iVar7 = FUN_002ef6c0(param_1);
    uVar8 = param_1;
    if (iVar7 == 0) {
      bVar6 = *(byte *)(param_1 + 0x30);
      uVar2 = (uint)bVar6 * 3 >> 1;
      if (3 < (int)((uint)bVar6 - (uint)*(byte *)(param_1 + 0x2f))) {
        uVar2 = (uint)bVar6;
      }
      uVar8 = FUN_002ebd50((uVar2 & 0xff) * 8 + 0x38);
      puVar5 = PTR_DAT_04373880;
      local_58 = uVar8;
      if (PTR_DAT_04373880[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x1a7,0,
                     "%p create copying %p",uVar8,param_1);
      }
      memcpy((void *)(uVar8 + 8),(void *)(param_1 + 8),(ulong)*(byte *)(param_1 + 0x2f) * 8 + 0x30);
      *(undefined8 *)(uVar8 + 8) = 0;
      FUN_002ef5c0(uVar8,1);
      lVar12 = 0;
      *(char *)(uVar8 + 0x30) = (char)uVar2;
      bVar6 = *(byte *)(uVar8 + 0x20);
      while( true ) {
        if ((((ulong)bVar6 != 0xff) &&
            (plVar9 = *(long **)(uVar8 + (ulong)bVar6 * 8 + 0x38), plVar9 != (long *)0x0)) &&
           (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          plVar1 = plVar9 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = *plVar9;
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar9,lVar11,lVar11 + 1
                        );
          }
          if (lVar11 < 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("prior > 0",
                          "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                          "RefNonZero");
          }
        }
        lVar12 = lVar12 + 1;
        if (lVar12 == 0xc) break;
        bVar6 = *(byte *)(uVar8 + lVar12 + 0x20);
      }
      if (*(byte *)(uVar8 + 0x2d) != 0xff) {
        puVar13 = (undefined8 *)(uVar8 + (ulong)*(byte *)(uVar8 + 0x2d) * 8 + 0x38);
        plVar9 = (long *)*puVar13;
        while( true ) {
          if (&DAT_00000004 < plVar9) {
            if (puVar5[0x10] != '\0') {
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x81,0,
                           "%p: %ld -> %ld [%s:%d]",plVar9,*plVar9,*plVar9 + 1,
                           "external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x183);
            }
            FUN_002ef5d0(plVar9);
          }
          if (*(byte *)(puVar13 + 1) == 0xff) break;
          puVar13 = (undefined8 *)(uVar8 + (ulong)*(byte *)(puVar13 + 1) * 8 + 0x38);
          plVar9 = (long *)*puVar13;
        }
      }
      FUN_002f0430(param_1,"external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x1b4);
    }
  }
  return uVar8;
}


