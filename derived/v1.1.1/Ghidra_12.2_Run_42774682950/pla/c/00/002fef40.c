/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fef40; name: FUN_002fef40
 */


/* WARNING: Removing unreachable block (ram,0x002ff0d8) */

void FUN_002fef40(undefined8 *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined2 local_90 [4];
  undefined8 local_88;
  undefined4 local_80 [2];
  long local_78;
  char local_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_043739a8;
  lVar8 = param_1[3];
  if (PTR_DAT_043739a8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x96,1,
                 "EXECUTOR (%s) SetThreading(%d) begin",*param_1,param_2 & 1);
  }
  if ((param_2 & 1) == 0) {
    if (lVar8 != 0) {
      if (param_1[2] != 0) {
        lVar8 = 0;
        uVar10 = 0;
        do {
          FUN_002ef750(param_1[1] + lVar8);
          lVar9 = param_1[1];
          *(undefined1 *)(lVar9 + lVar8 + 0x68) = 1;
          FUN_002ef970(lVar9 + lVar8 + 0x30);
          FUN_002ef790(param_1[1] + lVar8);
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 0x90;
        } while (uVar10 < (ulong)param_1[2]);
      }
      plVar12 = param_1 + 4;
      lVar8 = *plVar12;
      do {
        if (lVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto code_r0x002ff1dc;
        }
        else {
          ClearExclusiveLocal();
        }
        lVar8 = *plVar12;
      } while( true );
    }
    if (puVar4[0x10] == '\0') {
      return;
    }
    uVar7 = *param_1;
    pcVar6 = "EXECUTOR (%s) SetThreading(false). curr_num_threads == 0";
    uVar5 = 0xb1;
  }
  else {
    if (lVar8 < 1) {
      if (param_1[3] != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x9e,2,
                     "assertion failed: %s","num_threads_ == 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_1[3] = 1;
      lVar8 = FUN_002ebd80(param_1[2] * 0x90);
      param_1[1] = lVar8;
      if (param_1[2] != 0) {
        lVar9 = 0;
        uVar10 = 1;
        while( true ) {
          FUN_002ef6d0(lVar8 + lVar9);
          FUN_002ef7d0(param_1[1] + lVar9 + 0x30);
          lVar8 = param_1[1] + lVar9;
          *(ulong *)(lVar8 + 0x20) = uVar10 - 1;
          *(undefined8 *)(lVar8 + 0x28) = *param_1;
          local_70 = '\x01';
          uStack_6f = 1;
          uStack_68 = 0;
          *(undefined4 *)(lVar8 + 0x70) = 0;
          *(undefined8 *)(lVar8 + 0x78) = 0;
          *(undefined8 *)(lVar8 + 0x88) = 0;
          *(ulong *)(lVar8 + 0x80) = CONCAT62(uStack_6e,0x101);
          lVar8 = param_1[1];
          *(undefined8 *)(lVar8 + lVar9 + 0x50) = 0;
          *(undefined8 *)(lVar8 + lVar9 + 0x58) = 0;
          if ((ulong)param_1[2] <= uVar10) break;
          lVar8 = param_1[1];
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x90;
        }
        lVar8 = param_1[1];
      }
      local_90[0] = 0x101;
      local_88 = 0;
      FUN_002f6abc(local_80,*param_1,PTR_LAB_043739b0,lVar8,0,local_90);
      lVar8 = param_1[1];
      if ((undefined4 *)(lVar8 + 0x70) == local_80) {
        if ((local_70 != '\0') && (local_78 != 0)) {
                    /* try { // try from 002ff400 to 002ff427 has its CatchHandler @ 002ff478 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x7e,2,
                       "assertion failed: %s","!options_.joinable() || impl_ == nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        *(undefined4 *)(lVar8 + 0x70) = local_80[0];
        *(long *)(lVar8 + 0x78) = local_78;
        *(undefined8 *)(lVar8 + 0x88) = uStack_68;
        *(ulong *)(lVar8 + 0x80) = CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70));
        local_80[0] = 5;
        local_78 = 0;
        local_70 = '\x01';
        uStack_6f = 1;
        uStack_68 = 0;
      }
      lVar8 = param_1[1];
      if (*(long **)(lVar8 + 0x78) == (long *)0x0) {
        if (*(int *)(lVar8 + 0x70) != 4) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x8b,2,
                       "assertion failed: %s","state_ == FAILED");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        cVar1 = puVar4[0x10];
      }
      else {
        if (*(int *)(lVar8 + 0x70) != 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x82,2,
                       "assertion failed: %s","state_ == ALIVE");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(lVar8 + 0x70) = 2;
        (**(code **)(**(long **)(lVar8 + 0x78) + 0x10))();
        cVar1 = puVar4[0x10];
      }
      goto joined_r0x002ff320;
    }
    if (puVar4[0x10] == '\0') {
      return;
    }
    uVar7 = *param_1;
    pcVar6 = "EXECUTOR (%s) SetThreading(true). curr_num_threads > 0";
    uVar5 = 0x9a;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",uVar5,1,pcVar6,uVar7);
  return;
code_r0x002ff1dc:
  param_1[4] = 0;
  puVar3 = PTR_LAB_04373088;
  lVar8 = param_1[3];
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      while( true ) {
        lVar11 = param_1[1] + lVar9 * 0x90;
        plVar12 = (long *)(lVar11 + 0x78);
        piVar13 = (int *)(lVar11 + 0x70);
        if ((long *)*plVar12 == (long *)0x0) break;
        (**(code **)(*(long *)*plVar12 + 0x18))();
        puVar14 = (undefined8 *)*plVar12;
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14);
          FUN_002e2ea0(puVar3,puVar14);
        }
        *piVar13 = 3;
        *plVar12 = 0;
        if (puVar4[0x10] == '\0') goto LAB_002ff270;
LAB_002ff280:
        lVar9 = lVar9 + 1;
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0xc5,1,
                     "EXECUTOR (%s) Thread %ld of %ld joined",*param_1,lVar9,lVar8);
        if (lVar9 == lVar8) goto LAB_002ff2b4;
      }
      if (*piVar13 != 4) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x97,2,
                     "assertion failed: %s","state_ == FAILED");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4[0x10] != '\0') goto LAB_002ff280;
LAB_002ff270:
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar8);
  }
LAB_002ff2b4:
  param_1[3] = 0;
  if (param_1[2] != 0) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      FUN_002ef710(param_1[1] + lVar8);
      FUN_002ef860(param_1[1] + lVar8 + 0x30);
      lVar9 = param_1[1] + lVar8;
      FUN_002ff47c(*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x50),
                   *(undefined8 *)(lVar9 + 0x58));
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x90;
    } while (uVar10 < (ulong)param_1[2]);
  }
  free((void *)param_1[1]);
  thunk_FUN_002f8c30();
  cVar1 = puVar4[0x10];
joined_r0x002ff320:
  if (cVar1 != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0xda,1,
                 "EXECUTOR (%s) SetThreading(%d) done",*param_1,param_2 & 1);
  }
  return;
}


