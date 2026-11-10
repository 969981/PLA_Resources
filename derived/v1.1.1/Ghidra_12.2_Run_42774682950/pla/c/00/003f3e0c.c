/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f3e0c; name: FUN_003f3e0c
 */


undefined8 FUN_003f3e0c(long param_1,int param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    FUN_002f2c60(&local_50,"Handshaker shutdown");
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                         ,0x123,&local_50,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    if (param_5 != 0) {
      if (*(long *)(param_1 + 0x288) != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                     ,0x137,2,"assertion failed: %s","handshaker_result_ == nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(param_1 + 0x288) = param_5;
    }
    if (param_4 != 0) {
      FUN_002f2f40(&local_50,param_3,param_4);
      lVar1 = param_1 + 0x80;
      FUN_00305050(lVar1);
      uStack_68 = uStack_48;
      local_70 = local_50;
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      FUN_003052c0(lVar1,&local_70);
      uVar2 = **(undefined8 **)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined1 **)(param_1 + 0x1b0) = &LAB_003f411c;
      *(long *)(param_1 + 0x1b8) = param_1;
      *(undefined2 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(char **)(param_1 + 0x1d0) =
           "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0x145;
      FUN_003082d0(uVar2,lVar1,param_1 + 0x1a8,0);
      return 0;
    }
    if (param_5 != 0) {
      param_2 = FUN_003f4a00(*(undefined8 *)(param_1 + 0x288),&local_30);
      if (param_2 == 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                  (*(long **)(param_1 + 0x20),local_30,uStack_28,**(undefined8 **)(param_1 + 0x60),
                   param_1 + 0x280,param_1 + 0x238);
        return 0;
      }
      FUN_002f2c60(&local_50,"Peer extraction failed");
      uVar2 = 0x116;
      goto LAB_003f3f7c;
    }
    uVar3 = (*(undefined8 **)(param_1 + 0x60))[2];
    uVar2 = **(undefined8 **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined1 **)(param_1 + 0x1f8) = &LAB_003f4094;
    *(long *)(param_1 + 0x200) = param_1;
    *(undefined2 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(char **)(param_1 + 0x218) =
         "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
    uVar4 = 0x14e;
  }
  else {
    if (param_2 != 4) {
      FUN_002f2c60(&local_50,"Handshake failed");
      uVar2 = 0x133;
LAB_003f3f7c:
      uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                           ,uVar2,&local_50,0,0);
      uVar2 = FUN_003f5aa0(uVar2,param_2);
      return uVar2;
    }
    if (param_4 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                   ,0x127,2,"assertion failed: %s","bytes_to_send_size == 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (*(undefined8 **)(param_1 + 0x60))[2];
    uVar2 = **(undefined8 **)(param_1 + 0x60);
    *(undefined1 **)(param_1 + 0x1f8) = &LAB_003f4094;
    *(long *)(param_1 + 0x200) = param_1;
    *(char **)(param_1 + 0x218) =
         "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
    uVar4 = 0x12d;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined2 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  *(undefined4 *)(param_1 + 0x220) = uVar4;
  FUN_003082c0(uVar2,uVar3,param_1 + 0x1f0,1);
  return 0;
}


