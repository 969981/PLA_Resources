/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f0980; name: FUN_002f0980
 */


void FUN_002f0980(long *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  void *__ptr;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = (ulong)param_2;
  bVar3 = *(byte *)(*param_1 + uVar9 + 0x20);
  uVar10 = (ulong)bVar3;
  if (uVar10 == 0xff) {
    bVar3 = FUN_002f1ea0(param_1,0x20);
    if (bVar3 == 0xff) {
      uStack_58 = param_3[1];
      local_60 = *param_3;
      uStack_48 = param_3[3];
      uStack_50 = param_3[2];
      __ptr = (void *)FUN_002f2680(&local_60);
      if (0xc < param_2) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x71,2,
                     "Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pcVar5 = "key";
      switch(uVar9) {
      case 0:
        pcVar5 = "description";
        break;
      case 1:
        pcVar5 = "file";
        break;
      case 2:
        pcVar5 = "os_error";
        break;
      case 3:
        pcVar5 = "syscall";
        break;
      case 4:
        pcVar5 = "target_address";
        break;
      case 5:
        pcVar5 = "grpc_message";
        break;
      case 6:
        pcVar5 = "raw_bytes";
        break;
      case 7:
        pcVar5 = "tsi_error";
        break;
      case 8:
        pcVar5 = "filename";
        break;
      case 9:
        pcVar5 = "queued_buffers";
        break;
      case 0xb:
        pcVar5 = "value";
        break;
      case 0xc:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x6f,2,
                     "Should never reach here.",*param_1,&DAT_038c8164);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xf1,2,
                   "Error %p is full, dropping string {\"%s\":\"%s\"}",*param_1,pcVar5,__ptr);
      free(__ptr);
      return;
    }
    uVar10 = (ulong)bVar3;
  }
  else {
    plVar11 = *(long **)(*param_1 + uVar10 * 8 + 0x38);
    if ((plVar11 != (long *)0x0) && (plVar4 = (long *)*plVar11, plVar4 != (long *)0x0)) {
      plVar7 = plVar4 + 1;
      lVar6 = *plVar4;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar4,lVar8);
      }
      if (lVar8 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar8 == 1) {
        (*(code *)plVar11[3])(plVar11[4]);
      }
    }
  }
  *(byte *)(*param_1 + uVar9 + 0x20) = bVar3;
  lVar6 = *param_1 + uVar10 * 8;
  uVar13 = param_3[1];
  uVar12 = *param_3;
  uVar14 = param_3[2];
  *(undefined8 *)(lVar6 + 0x50) = param_3[3];
  *(undefined8 *)(lVar6 + 0x48) = uVar14;
  *(undefined8 *)(lVar6 + 0x40) = uVar13;
  *(undefined8 *)(lVar6 + 0x38) = uVar12;
  return;
}


