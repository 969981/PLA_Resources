/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f0430; name: FUN_002f0430
 */


void FUN_002f0430(long *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if (PTR_DAT_04373880[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xb0,0,
                 "%p: %ld -> %ld [%s:%d]",param_1,*param_1,*param_1 + -1,param_2,param_3);
  }
  iVar6 = FUN_002ef660(param_1);
  if (iVar6 == 0) {
    return;
  }
  if (param_1 < (long *)0x5) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xa6,2,
                 "assertion failed: %s","!grpc_error_is_special(err)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar2 = *(byte *)((long)param_1 + 0x2d);
  while (bVar2 != 0xff) {
    if (4 < (ulong)param_1[(ulong)bVar2 + 7]) {
      FUN_002f0430(param_1[(ulong)bVar2 + 7],
                   "external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x94);
    }
    bVar1 = *(byte *)(param_1 + (ulong)bVar2 + 8);
    bVar4 = bVar1 == 0xff;
    if (*(byte *)((long)param_1 + 0x2e) != bVar2) {
      bVar4 = bVar1 != 0xff;
    }
    bVar2 = bVar1;
    if (!bVar4) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x96,2,
                   "assertion failed: %s",
                   "err->last_err == slot ? lerr->next == UINT8_MAX : lerr->next != UINT8_MAX");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  bVar2 = *(byte *)(param_1 + 4);
  lVar5 = 0;
  do {
    if ((((ulong)bVar2 != 0xff) &&
        (plVar11 = (long *)param_1[(ulong)bVar2 + 7], plVar11 != (long *)0x0)) &&
       (plVar7 = (long *)*plVar11, plVar7 != (long *)0x0)) {
      plVar9 = plVar7 + 1;
      lVar8 = *plVar7;
      do {
        lVar10 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar7,lVar10);
      }
      if (lVar10 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar10 == 1) {
        (*(code *)plVar11[3])(plVar11[4]);
      }
    }
    if (lVar5 + 1 == 0xc) {
      free((void *)param_1[1]);
      free(param_1);
      return;
    }
    bVar2 = *(byte *)((long)param_1 + lVar5 + 0x21);
    lVar5 = lVar5 + 1;
  } while( true );
}


