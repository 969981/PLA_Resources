/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fec70; name: FUN_004fec70
 */


undefined8 FUN_004fec70(long *param_1,long param_2,undefined8 param_3,code *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *local_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *local_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *local_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  FUN_002f27f0(&local_70,0x400);
  uVar7 = uStack_68 & 0xff;
  if (local_70 != (long *)0x0) {
    uVar7 = uStack_68;
  }
  if (uVar7 >> 0x20 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",0x2b,2
                 ,"assertion failed: %s","GRPC_SLICE_LENGTH(outbuf) <= uint_max");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(int *)(param_1 + 4) = (int)uVar7;
  lVar8 = local_60;
  if (local_70 == (long *)0x0) {
    lVar8 = (long)&uStack_68 + 1;
  }
  param_1[3] = lVar8;
  uVar9 = *(ulong *)(param_2 + 0x10);
  if (uVar9 != 0) {
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar2 = 4;
      if (uVar13 != uVar9 - 1) {
        uVar2 = uVar12;
      }
      plVar1 = (long *)(*(long *)(param_2 + 8) + uVar13 * 0x20);
      if (*plVar1 == 0) {
        *(uint *)(param_1 + 1) = (uint)(byte)plVar1[1];
        *param_1 = (long)plVar1 + 9;
      }
      else {
        uVar9 = plVar1[1];
        if (uVar9 >> 0x20 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",
                       0x31,2,"assertion failed: %s",
                       "GRPC_SLICE_LENGTH(input->slices[i]) <= uint_max");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(int *)(param_1 + 1) = (int)uVar9;
        *param_1 = plVar1[2];
      }
      if ((int)uVar7 != 0) goto LAB_004fedb0;
      do {
        uStack_88 = uStack_68;
        local_90 = local_70;
        uStack_78 = uStack_58;
        lStack_80 = local_60;
        FUN_00305230(param_3,&local_90);
        FUN_002f27f0(&local_b0,0x400);
        uStack_68 = uStack_a8;
        local_70 = local_b0;
        uStack_58 = uStack_98;
        local_60 = lStack_a0;
        uVar7 = uStack_a8 & 0xff;
        if (local_b0 != (long *)0x0) {
          uVar7 = uStack_a8;
        }
        if (uVar7 >> 0x20 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",
                       0x38,2,"assertion failed: %s","GRPC_SLICE_LENGTH(outbuf) <= uint_max");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(int *)(param_1 + 4) = (int)uVar7;
        lVar8 = (long)&uStack_68 + 1;
        if (local_b0 != (long *)0x0) {
          lVar8 = lStack_a0;
        }
        param_1[3] = lVar8;
LAB_004fedb0:
        iVar5 = (*param_4)(param_1,uVar2);
        if ((iVar5 < 0) && (iVar5 != -5)) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",
                       0x3e,1,"zlib error (%d)");
          plVar1 = local_70;
          goto joined_r0x004feeec;
        }
        uVar7 = (ulong)*(uint *)(param_1 + 4);
      } while (*(uint *)(param_1 + 4) == 0);
      if ((int)param_1[1] != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",
                     0x43,1,"zlib: not all input consumed");
        plVar1 = local_70;
        goto joined_r0x004feeec;
      }
      uVar9 = *(ulong *)(param_2 + 0x10);
      uVar13 = uVar13 + 1;
      uVar12 = uVar2;
    } while (uVar13 < uVar9);
    if (iVar5 != 1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",0x48
                   ,1,"zlib: Data error");
      plVar1 = local_70;
joined_r0x004feeec:
      if ((plVar1 != (long *)0x0) && (plVar6 = (long *)*plVar1, plVar6 != (long *)0x0)) {
        plVar10 = plVar6 + 1;
        lVar8 = *plVar6;
        do {
          lVar11 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_70 = plVar1;
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar6,lVar11);
        }
        if (lVar11 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar11 == 1) {
          (*(code *)plVar1[3])(plVar1[4]);
        }
      }
      return 0;
    }
  }
  if (local_70 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",0x4c,2
                 ,"assertion failed: %s","outbuf.refcount");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lStack_c8 = uStack_68 - (uVar7 & 0xffffffff);
  local_d0 = local_70;
  uStack_b8 = uStack_58;
  lStack_c0 = local_60;
  uStack_68 = lStack_c8;
  FUN_00305230(param_3,&local_d0);
  return 1;
}


