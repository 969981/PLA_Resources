/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00529580; name: FUN_00529580
 */


void FUN_00529580(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x318) >> 4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) | 0x10;
    puVar1 = PTR_DAT_04374b48;
    if (PTR_DAT_04374b48[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xa45,1,"chand=%p calld=%p: committing retries",uVar2,param_1);
    }
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      if ((*(byte *)(param_3 + 0x5b0) >> 1 & 1) != 0) {
        if (puVar1[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x8e9,1,"chand=%p calld=%p: destroying calld->send_initial_metadata",uVar2,
                       param_1);
        }
        FUN_003de350(param_1 + 0x3a0);
      }
      if (*(long *)(param_3 + 0x598) != 0) {
        uVar5 = 0;
        if (puVar1[0x10] == '\0') goto LAB_00529634;
        while( true ) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x8f2,1,"chand=%p calld=%p: destroying calld->send_messages[%lu]",uVar2,
                       param_1,uVar5);
          uVar3 = *(ulong *)(param_1 + 0x498);
          if (uVar3 >> 1 <= uVar5) break;
          while( true ) {
            lVar4 = param_1 + 0x4a0;
            if ((uVar3 & 1) != 0) {
              lVar4 = *(long *)(param_1 + 0x4a0);
            }
            FUN_004ff270(*(undefined8 *)(lVar4 + uVar5 * 8));
            uVar5 = uVar5 + 1;
            if (*(ulong *)(param_3 + 0x598) <= uVar5) goto LAB_0052969c;
            if (puVar1[0x10] != '\0') break;
LAB_00529634:
            uVar3 = *(ulong *)(param_1 + 0x498);
            if (uVar3 >> 1 <= uVar5) goto LAB_0052967c;
          }
        }
LAB_0052967c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136
                      ,"operator[]");
      }
LAB_0052969c:
      if ((*(byte *)(param_3 + 0x5b0) >> 3 & 1) != 0) {
        if (puVar1[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x8fb,1,"chand=%p calld=%p: destroying calld->send_trailing_metadata",uVar2,
                       param_1);
        }
        FUN_003de350(param_1 + 0x4c8);
        return;
      }
    }
  }
  return;
}


