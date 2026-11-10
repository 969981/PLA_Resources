/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f8400; name: FUN_002f8400
 */


long FUN_002f8400(long param_1,long param_2,long *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  char *local_80;
  undefined4 local_78;
  
  FUN_002ef750();
  puVar6 = PTR_DAT_043738f0;
  puVar5 = PTR_DAT_043738d8;
  lVar13 = 0;
  lVar12 = param_1 + 0x70;
  if (PTR_DAT_043738d8[0x10] == '\0') goto LAB_002f848c;
LAB_002f8540:
  uVar9 = param_1 - DAT_04399700;
  uVar7 = FUN_002f8ab0(lVar12);
  pcVar3 = "true";
  if ((uVar7 & 1) == 0) {
    pcVar3 = "false";
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x219,1,
               "  .. shard[%d]: heap_empty=%s",(int)(uVar9 >> 3) * -0x1642c859,pcVar3);
  uVar7 = FUN_002f8ab0(lVar12);
  do {
    if ((uVar7 & 1) != 0) {
      if (param_2 < *(long *)(param_1 + 0x58)) goto LAB_002f8728;
      dVar14 = (double)FUN_002f8b20(param_1 + 0x20);
      dVar14 = dVar14 * 0.33;
      if (0.01 <= dVar14) {
        if (1.0 < dVar14) {
          dVar14 = 1.0;
        }
        lVar11 = (long)(dVar14 * 1000.0);
      }
      else {
        lVar11 = 10;
      }
      lVar1 = param_2;
      if (param_2 <= *(long *)(param_1 + 0x58)) {
        lVar1 = *(long *)(param_1 + 0x58);
      }
      lVar2 = 0x7fffffffffffffff;
      if (lVar1 <= 0x7fffffffffffffff - lVar11) {
        lVar2 = lVar1 + lVar11;
      }
      *(long *)(param_1 + 0x58) = lVar2;
      if (puVar5[0x10] == '\0') {
        plVar8 = *(long **)(param_1 + 0x90);
      }
      else {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x200,1,
                     "  .. shard[%d]->queue_deadline_cap --> %ld",
                     (int)((ulong)(param_1 - DAT_04399700) >> 3) * -0x1642c859);
        plVar8 = *(long **)(param_1 + 0x90);
      }
      while (plVar4 = plVar8, plVar4 != (long *)(param_1 + 0x80)) {
        plVar8 = (long *)plVar4[2];
        if (*plVar4 < *(long *)(param_1 + 0x58)) {
          plVar10 = plVar8;
          if (puVar5[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x208,1
                         ,"  .. add timer with deadline %ld to heap");
            plVar10 = (long *)plVar4[2];
          }
          plVar10[3] = plVar4[3];
          *(long **)(plVar4[3] + 0x10) = plVar10;
          FUN_002f8840(lVar12,plVar4);
        }
      }
      uVar7 = FUN_002f8ab0(lVar12);
      if ((uVar7 & 1) != 0) goto LAB_002f8728;
    }
    plVar8 = (long *)FUN_002f8ac0(lVar12);
    if (puVar5[0x10] == '\0') {
      lVar11 = *plVar8;
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x223,1,
                   "  .. check top timer deadline=%ld now=%ld",*plVar8,param_2);
      lVar11 = *plVar8;
    }
    if (param_2 < lVar11) {
LAB_002f8728:
      uVar7 = FUN_002f8ab0(lVar12);
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)FUN_002f8ac0(lVar12);
        lVar12 = *plVar8;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x58);
        if (lVar12 != 0x7fffffffffffffff) {
          lVar12 = lVar12 + 1;
        }
      }
      *param_3 = lVar12;
      FUN_002ef790(param_1);
      if (puVar5[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x241,1,
                     "  .. shard[%d] popped %ld",
                     (int)((ulong)(param_1 - DAT_04399700) >> 3) * -0x1642c859,lVar13);
      }
      return lVar13;
    }
    if (puVar6[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x229,1,
                   "TIMER %p: FIRE %ldms late",plVar8,param_2 - lVar11);
    }
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    FUN_002f8ad0(lVar12);
    FUN_002f7eb0(plVar8);
    local_80 = "external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc";
    local_78 = 0x23a;
    lVar11 = plVar8[4];
    uVar7 = param_4;
    if (4 < param_4) {
      uVar7 = FUN_002f03c0(param_4,
                           "external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x23b
                          );
    }
    FUN_002f019c(&local_80,lVar11,uVar7);
    lVar13 = lVar13 + 1;
    if (puVar5[0x10] != '\0') goto LAB_002f8540;
LAB_002f848c:
    uVar7 = FUN_002f8ab0(lVar12);
  } while( true );
}


