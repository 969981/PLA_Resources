/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f8cc0; name: FUN_003f8cc0
 */


undefined8
FUN_003f8cc0(void *param_1,size_t param_2,void *param_3,size_t param_4,undefined8 param_5,
            long param_6,undefined8 param_7,undefined8 *param_8)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_80;
  ulong local_78;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = FUN_003f8e10(param_7);
  local_80 = 0;
  local_78 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_002fe9e0(param_1,param_2,&local_80,&local_50);
  if (local_78 == 0) {
LAB_003f8d88:
    bVar1 = true;
    if (param_6 == 0) goto LAB_003f8d90;
LAB_003f8d60:
    if (param_2 != param_4) goto LAB_003f8d90;
    if (param_2 == 0) goto LAB_003f8dc4;
    iVar2 = memcmp(param_1,param_3,param_2);
    if ((!bVar1) || (iVar2 == 0)) goto LAB_003f8dc4;
  }
  else {
    uVar3 = FUN_002fee98(&local_80,0x25,0);
    if (uVar3 != 0xffffffffffffffff) {
      if (local_78 < uVar3) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("n <= length_","external/com_google_absl\\absl/strings/string_view.h",0x156,
                      "remove_suffix");
      }
      local_78 = uVar3;
    }
    iVar2 = FUN_003fbb60(local_60,local_80,local_78);
    if (iVar2 == 0) goto LAB_003f8d88;
    bVar1 = false;
    if (param_6 != 0) goto LAB_003f8d60;
LAB_003f8d90:
    if (!bVar1) goto LAB_003f8dc4;
  }
  FUN_002f2c60(&local_80,"call host does not match SSL server name");
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                       ,0xc5,&local_80,0,0);
  *param_8 = uVar4;
LAB_003f8dc4:
  if ((void *)local_60._0_8_ != (void *)0x0) {
    free((void *)local_60._0_8_);
  }
  return 1;
}


