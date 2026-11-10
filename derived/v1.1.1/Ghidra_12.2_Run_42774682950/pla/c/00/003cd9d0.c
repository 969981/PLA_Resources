/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cd9d0; name: FUN_003cd9d0
 */


void FUN_003cd9d0(long param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  if (PTR_DAT_04374010[0x10] == '\0') {
    cVar3 = *(char *)(param_1 + 0xb0);
  }
  else {
    puVar2 = &DAT_0392e934;
    if (*(char *)(param_1 + 0xb0) != '\0') {
      puVar2 = &DAT_039372b9;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2e3,0,
                 "set_final_status %s",puVar2);
    uVar5 = FUN_002f1480(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2e4,0,&DAT_038bd9bd,
                 uVar5);
    cVar3 = *(char *)(param_1 + 0xb0);
  }
  if (cVar3 == '\0') {
    if (param_2 == 0) {
      uVar7 = *(byte *)(param_1 + 0x95c) ^ 1;
    }
    else {
      uVar7 = 1;
    }
    **(uint **)(param_1 + 0x9b0) = uVar7;
    lVar9 = FUN_003e0400(*(undefined8 *)(param_1 + 0x9b8));
    if (lVar9 != 0) {
      if ((**(int **)(param_1 + 0x9b0) == 0) && (*(long *)(param_1 + 0x9c8) == 0)) {
        FUN_003e4e40(lVar9 + 0x40);
      }
      else {
        FUN_003e4d94(lVar9 + 0x40);
      }
    }
    if (4 < param_2) {
      FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x305);
      return;
    }
  }
  else {
    FUN_003d7cb0(param_2,*(undefined8 *)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x9b0),
                 *(undefined8 *)(param_1 + 0x9b8),0,*(undefined8 *)(param_1 + 0x9c0));
    if (((long *)**(undefined8 **)(param_1 + 0x9b8) != (long *)0x0) &&
       (plVar6 = *(long **)**(undefined8 **)(param_1 + 0x9b8), plVar6 != (long *)0x0)) {
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = *plVar6;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar6,lVar9,lVar9 + 1);
      }
      if (lVar9 < 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x7c,"RefNonZero");
      }
    }
    *(ulong *)(param_1 + 0x9c8) = param_2;
    lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x68);
    if (lVar9 != 0) {
      if (**(int **)(param_1 + 0x9b0) == 0) {
        FUN_003e4e40(lVar9 + 0x58);
        return;
      }
      FUN_003e4d94();
      return;
    }
  }
  return;
}


