/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eff00; name: FUN_002eff00
 */


undefined4 FUN_002eff00(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 local_74;
  
  puVar2 = PTR_DAT_04373878;
  local_74 = 0;
  uVar4 = 0;
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) goto LAB_002eff88;
  while (uVar3 = FUN_002f4910(), (uVar3 & 1) != 0) {
    while( true ) {
      if ((~uVar4 & 0x1ff) == 0) {
        auVar7 = FUN_002eec80(0);
        auVar8 = FUN_002ef090(5,3);
        FUN_002ef150(auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_);
        FUN_002eed10();
      }
      uVar4 = uVar4 + 1;
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 == (long *)0x0) break;
LAB_002eff88:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      do {
        *(undefined1 *)(plVar6 + 4) = 0;
        plVar5 = (long *)*plVar6;
        uVar3 = plVar6[3];
        if (puVar2[0x10] != '\0') {
          pcVar1 = "scheduled";
          if (*(char *)((long)plVar6 + 0x21) != '\0') {
            pcVar1 = "run";
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0x23,0,
                       "running closure %p: created [%s:%d]: %s [%s:%d]",plVar6,plVar6[5],
                       (int)plVar6[6],pcVar1,plVar6[7],(int)plVar6[8]);
        }
        (*(code *)plVar6[1])(plVar6[2],uVar3);
        if (puVar2[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0x2c,0,
                       "closure %p finished",plVar6);
        }
        if (4 < uVar3) {
          FUN_002f0430(uVar3,"external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0x2f);
        }
        plVar6 = plVar5;
      } while (plVar5 != (long *)0x0);
      local_74 = 1;
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0xa7,2,
                 "assertion failed: %s","combiner_data_.active_combiner == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return local_74;
}


