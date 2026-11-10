/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00596ab0; name: FUN_00596ab0
 */


void FUN_00596ab0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char *local_70;
  undefined4 local_68;
  
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x687,2,"assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar4 = (long *)(param_1 + 0xeb8);
  if (param_2 < 5) {
    for (plVar3 = (long *)*plVar4; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3[3] == 0) {
        plVar3[3] = param_2;
      }
    }
    local_70 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_68 = 0x68a;
    FUN_002f02b4(&local_70,plVar4);
    for (plVar4 = *(long **)(param_1 + 0xec8); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4[3] == 0) {
        plVar4[3] = param_2;
      }
    }
    local_70 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_68 = 0x68a;
    FUN_002f02b4(&local_70,param_1 + 0xec8);
    for (plVar4 = *(long **)(param_1 + 0xed8); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4[3] == 0) {
        plVar4[3] = param_2;
      }
    }
  }
  else {
    uVar1 = FUN_002f03c0(param_2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x689);
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      if (uVar1 < 5) {
        do {
          if (plVar3[3] == 0) {
            plVar3[3] = uVar1;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        lVar2 = plVar3[3];
        while( true ) {
          if (lVar2 == 0) {
            lVar2 = FUN_002f03c0(uVar1,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h"
                                 ,200);
            plVar3[3] = lVar2;
            plVar3 = (long *)*plVar3;
          }
          else {
            plVar3 = (long *)*plVar3;
          }
          if (plVar3 == (long *)0x0) break;
          lVar2 = plVar3[3];
        }
      }
    }
    if (4 < uVar1) {
      FUN_002f0430(uVar1,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xcb);
    }
    local_70 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_68 = 0x68a;
    FUN_002f02b4(&local_70,plVar4);
    uVar1 = FUN_002f03c0(param_2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x689);
    plVar4 = *(long **)(param_1 + 0xec8);
    if (plVar4 != (long *)0x0) {
      if (uVar1 < 5) {
        do {
          if (plVar4[3] == 0) {
            plVar4[3] = uVar1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        lVar2 = plVar4[3];
        while( true ) {
          if (lVar2 == 0) {
            lVar2 = FUN_002f03c0(uVar1,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h"
                                 ,200);
            plVar4[3] = lVar2;
            plVar4 = (long *)*plVar4;
          }
          else {
            plVar4 = (long *)*plVar4;
          }
          if (plVar4 == (long *)0x0) break;
          lVar2 = plVar4[3];
        }
      }
    }
    if (4 < uVar1) {
      FUN_002f0430(uVar1,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xcb);
    }
    local_70 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_68 = 0x68a;
    FUN_002f02b4(&local_70,param_1 + 0xec8);
    uVar1 = FUN_002f03c0(param_2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x689);
    plVar4 = *(long **)(param_1 + 0xed8);
    if (plVar4 != (long *)0x0) {
      if (uVar1 < 5) {
        do {
          if (plVar4[3] == 0) {
            plVar4[3] = uVar1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        lVar2 = plVar4[3];
        while( true ) {
          if (lVar2 == 0) {
            lVar2 = FUN_002f03c0(uVar1,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h"
                                 ,200);
            plVar4[3] = lVar2;
            plVar4 = (long *)*plVar4;
          }
          else {
            plVar4 = (long *)*plVar4;
          }
          if (plVar4 == (long *)0x0) break;
          lVar2 = plVar4[3];
        }
      }
    }
    if (4 < uVar1) {
      FUN_002f0430(uVar1,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xcb);
    }
  }
  local_70 = 
  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  local_68 = 0x68a;
  FUN_002f02b4(&local_70,param_1 + 0xed8);
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x68c);
  }
  return;
}


