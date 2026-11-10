/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7070; name: FUN_005a7070
 */


void FUN_005a7070(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar3 = param_4 >> 6 & 0x3f;
  uVar10 = (ulong)uVar3;
  lVar6 = *(long *)(param_1 + uVar10 * 0x10 + 0x470);
  if (lVar6 == param_2) {
    param_1 = param_1 + uVar10 * 0x10;
  }
  else {
    if (lVar6 == 0) {
      FUN_005a7204(param_2);
      uVar11 = uVar10;
    }
    else {
      uVar4 = param_4 >> 0xc & 0x3f;
      uVar11 = (ulong)uVar4;
      lVar6 = param_1 + uVar11 * 0x10;
      if (*(long *)(lVar6 + 0x470) == param_2) {
        param_1 = param_1 + uVar11 * 0x10;
        goto LAB_005a719c;
      }
      FUN_005a7204(param_2);
      if (*(long *)(lVar6 + 0x470) != 0) {
        param_1 = param_1 + 0x470;
        if (*(uint *)(param_1 + uVar11 * 0x10 + 8) <= *(uint *)(param_1 + uVar10 * 0x10 + 8)) {
          uVar3 = uVar4;
        }
        plVar5 = (long *)(param_1 + (ulong)uVar3 * 0x10);
        plVar9 = (long *)*plVar5;
        *plVar5 = param_2;
        *(undefined4 *)(plVar5 + 1) = param_3;
        if (plVar9 == (long *)0x0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                       ,100,2,"assertion failed: %s","sref != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar5 = (long *)*plVar9;
        if (plVar5 == (long *)0x0) {
          return;
        }
        plVar7 = plVar5 + 1;
        lVar6 = *plVar5;
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
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar8);
        }
        if (lVar8 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x005a7170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar9[3])(plVar9[4]);
          return;
        }
        return;
      }
    }
    param_1 = param_1 + uVar11 * 0x10;
    *(long *)(param_1 + 0x470) = param_2;
  }
LAB_005a719c:
  *(undefined4 *)(param_1 + 0x478) = param_3;
  return;
}


