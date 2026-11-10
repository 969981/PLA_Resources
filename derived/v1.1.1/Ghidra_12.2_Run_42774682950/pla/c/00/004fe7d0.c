/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fe7d0; name: FUN_004fe7d0
 */


int FUN_004fe7d0(int param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 2) {
    bVar2 = true;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 0) {
        FUN_004fe6b0(param_2,param_3);
        return 1;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",0xbe
                   ,2,"invalid compression algorithm %d");
      return 0;
    }
    bVar2 = false;
  }
  uVar10 = *(ulong *)(param_3 + 0x10);
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = &LAB_004fec50;
  puStack_88 = &LAB_004fec60;
  uVar5 = 0xf;
  if (bVar2) {
    uVar5 = 0x1f;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  iVar3 = FUN_00212de0(&local_d0,uVar5,"1.2.11.f-NINTENDO-SDK-v1",0x70);
  if (iVar3 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",0x82,2
                 ,"assertion failed: %s","r == Z_OK");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar3 = FUN_004fec70(&local_d0,param_2,param_3,PTR_FUN_043749a8);
  if (iVar3 == 0) {
    if (uVar10 < *(ulong *)(param_3 + 0x10)) {
      plVar12 = *(long **)(*(long *)(param_3 + 8) + uVar10 * 0x20);
      uVar11 = uVar10;
      do {
        if ((plVar12 == (long *)0x0) || (plVar4 = (long *)*plVar12, plVar4 == (long *)0x0)) {
LAB_004fe920:
          if (*(ulong *)(param_3 + 0x10) <= uVar11 + 1) break;
        }
        else {
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
          if (lVar8 != 1) goto LAB_004fe920;
          (*(code *)plVar12[3])(plVar12[4]);
          if (*(ulong *)(param_3 + 0x10) <= uVar11 + 1) break;
        }
        uVar11 = uVar11 + 1;
        plVar12 = *(long **)(*(long *)(param_3 + 8) + uVar11 * 0x20);
      } while( true );
    }
    *(ulong *)(param_3 + 0x10) = uVar10;
    *(undefined8 *)(param_3 + 0x20) = uVar9;
  }
  FUN_00214ef0(&local_d0);
  return iVar3;
}


