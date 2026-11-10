/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059be30; name: FUN_0059be30
 */


undefined8 FUN_0059be30(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [32];
  ulong local_38 [3];
  
  uVar2 = *(ulong *)(param_2 + 0x208);
  if (uVar2 == 0) {
    lVar4 = 0;
    uVar3 = *(ulong *)(param_2 + 0x210);
    if (uVar3 != 0) goto LAB_0059be58;
joined_r0x0059be7c:
    if (param_1 == 0) goto LAB_0059bec8;
LAB_0059be80:
    if ((lVar4 == 0) || ((local_38[0] != param_1 && ((lVar4 == 1 || (local_38[1] != param_1)))))) {
      local_38[lVar4] = param_1;
      lVar4 = lVar4 + 1;
      if (lVar4 == 0) {
        uVar1 = 0;
        goto LAB_0059bef8;
      }
    }
  }
  else {
    lVar4 = 1;
    uVar3 = *(ulong *)(param_2 + 0x210);
    local_38[0] = uVar2;
    if (uVar3 == 0) goto joined_r0x0059be7c;
LAB_0059be58:
    if ((lVar4 == 0) || (uVar2 != uVar3)) {
      local_38[lVar4] = uVar3;
      lVar4 = lVar4 + 1;
      goto joined_r0x0059be7c;
    }
    lVar4 = 1;
    if (param_1 != 0) goto LAB_0059be80;
LAB_0059bec8:
    uVar1 = 0;
    if (lVar4 == 0) goto LAB_0059bef8;
  }
  FUN_002f2c60(auStack_58,param_3);
  uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x871,auStack_58,local_38,lVar4);
LAB_0059bef8:
  if (4 < param_1) {
    FUN_002f0430(param_1,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x873);
  }
  return uVar1;
}


