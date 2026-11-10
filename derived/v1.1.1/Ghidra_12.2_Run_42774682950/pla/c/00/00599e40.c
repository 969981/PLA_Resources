/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00599e40; name: FUN_00599e40
 */


void FUN_00599e40(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  char *local_50;
  undefined4 local_48;
  
  puVar4 = (ulong *)*param_3;
  *param_3 = 0;
  if (puVar4 == (ulong *)0x0) {
    if (4 < param_4) {
      FUN_002f0430(param_4,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x4a7);
      return;
    }
  }
  else {
    *puVar4 = *puVar4 - 0x10000;
    if (PTR_DAT_04374f08[0x10] != '\0') {
      uVar2 = FUN_002f1480(param_4);
      if (2 < *(uint *)(param_1 + 0x40)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x316,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x4ae,1,
                   "complete_closure_step: t=%p %p refs=%d flags=0x%04x desc=%s err=%s write_state=%s"
                   ,param_1,puVar4,*puVar4 >> 0x10,(uint)*puVar4 & 0xffff,param_5,uVar2,
                   (&PTR_DAT_0418a6f0)[(int)*(uint *)(param_1 + 0x40)]);
    }
    if (param_4 != 0) {
      uVar1 = puVar4[3];
      if (uVar1 == 0) {
        FUN_002f2c60(&local_50,"Error in HTTP transport completing operation");
        uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x4bb,&local_50,0,0);
        puVar4[3] = uVar1;
        FUN_002f2ff0(&local_50,*(undefined8 *)(param_1 + 0x20));
        uVar1 = FUN_002f1340(uVar1,4,&local_50);
        puVar4[3] = uVar1;
      }
      uVar1 = FUN_002f13f0(uVar1,param_4);
      puVar4[3] = uVar1;
    }
    if (*puVar4 >> 0x10 == 0) {
      if (((*puVar4 & 1) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
        local_50 = 
        "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
        local_48 = 0x4c8;
        FUN_002f019c(&local_50,puVar4,puVar4[3]);
      }
      else {
        *puVar4 = 0;
        if (*(long *)(param_1 + 0x1328) == 0) {
          puVar3 = (undefined8 *)(param_1 + 0x1328);
        }
        else {
          puVar3 = *(undefined8 **)(param_1 + 0x1330);
        }
        *puVar3 = puVar4;
        *(ulong **)(param_1 + 0x1330) = puVar4;
      }
    }
  }
  return;
}


