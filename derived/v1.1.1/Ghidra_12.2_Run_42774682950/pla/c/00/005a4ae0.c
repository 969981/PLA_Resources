/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a4ae0; name: FUN_005a4ae0
 */


long FUN_005a4ae0(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = param_1[2];
  if (uVar5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                 ,0x6b,2,"assertion failed: %s","!strict_find || max_idx > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = 0;
  uVar8 = uVar5;
  do {
    uVar1 = uVar7 + (uVar8 - uVar7 >> 1);
    uVar3 = *(uint *)(*param_1 + uVar1 * 4);
    if (uVar3 < param_2) {
      uVar7 = uVar1 + 1;
    }
    else {
      uVar8 = uVar1;
      if (uVar3 <= param_2) {
        plVar2 = (long *)(param_1[1] + uVar1 * 8);
        if (plVar2 == (long *)0x0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                       ,0x83,2,"assertion failed: %s","pvalue != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = *plVar2;
        if (lVar4 == 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                       ,0x85,2,"assertion failed: %s","out != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *plVar2 = 0;
        lVar6 = param_1[3];
        param_1[3] = lVar6 + 1U;
        if (lVar6 + 1U == uVar5) {
          param_1[2] = 0;
          param_1[3] = 0;
          return lVar4;
        }
        uVar7 = 0;
        do {
          uVar8 = uVar7 + (uVar5 - uVar7 >> 1);
          uVar3 = *(uint *)(*param_1 + uVar8 * 4);
          if (uVar3 < param_2) {
            uVar7 = uVar8 + 1;
          }
          else {
            uVar5 = uVar8;
            if (uVar3 <= param_2) {
              plVar2 = (long *)(param_1[1] + uVar8 * 8);
              if (plVar2 == (long *)0x0) {
                return lVar4;
              }
              if (*plVar2 != 0) {
                FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                             ,0x8d,2,"assertion failed: %s",
                             "grpc_chttp2_stream_map_find(map, key) == nullptr");
                    /* WARNING: Subroutine does not return */
                abort();
              }
              return lVar4;
            }
          }
          if (uVar5 <= uVar7) {
            return lVar4;
          }
        } while( true );
      }
    }
    if (uVar8 <= uVar7) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                   ,0x7d,2,"assertion failed: %s","!strict_find");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  } while( true );
}


