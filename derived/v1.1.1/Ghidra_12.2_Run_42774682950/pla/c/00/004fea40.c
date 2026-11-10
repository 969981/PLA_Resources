/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fea40; name: FUN_004fea40
 */


undefined8 FUN_004fea40(long param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar11 = *(ulong *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uStack_88 = 0;
  local_90 = 0;
  local_80 = &LAB_004fec50;
  puStack_78 = &LAB_004fec60;
  uVar5 = 0xf;
  if (param_3 != 0) {
    uVar5 = 0x1f;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  iVar3 = FUN_00216450(&local_c0,0xffffffff,8,uVar5,8,0,"1.2.11.f-NINTENDO-SDK-v1",0x70);
  if (iVar3 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",0x6a,2
                 ,"assertion failed: %s","r == Z_OK");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar3 = FUN_004fec70(&local_c0,param_1,param_2,PTR_FUN_043749b0);
  if ((iVar3 == 0) || (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_2 + 0x20))) {
    if (uVar11 < *(ulong *)(param_2 + 0x10)) {
      plVar13 = *(long **)(*(long *)(param_2 + 8) + uVar11 * 0x20);
      uVar12 = uVar11;
      do {
        if ((plVar13 == (long *)0x0) || (plVar4 = (long *)*plVar13, plVar4 == (long *)0x0)) {
LAB_004feb30:
          if (*(ulong *)(param_2 + 0x10) <= uVar12 + 1) break;
        }
        else {
          plVar7 = plVar4 + 1;
          lVar6 = *plVar4;
          do {
            lVar9 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar4,lVar9);
          }
          if (lVar9 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar9 != 1) goto LAB_004feb30;
          (*(code *)plVar13[3])(plVar13[4]);
          if (*(ulong *)(param_2 + 0x10) <= uVar12 + 1) break;
        }
        uVar12 = uVar12 + 1;
        plVar13 = *(long **)(*(long *)(param_2 + 8) + uVar12 * 0x20);
      } while( true );
    }
    uVar8 = 0;
    *(ulong *)(param_2 + 0x10) = uVar11;
    *(undefined8 *)(param_2 + 0x20) = uVar10;
  }
  else {
    uVar8 = 1;
  }
  FUN_00216770(&local_c0);
  return uVar8;
}


