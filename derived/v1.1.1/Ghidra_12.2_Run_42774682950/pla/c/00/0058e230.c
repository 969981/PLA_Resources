/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e230; name: FUN_0058e230
 */


undefined8 FUN_0058e230(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_38;
  void *local_28;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined8 *)0x0)) ||
     (param_4 == (undefined8 *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/alts_frame_protector.cc"
                 ,0x5b,2,"Invalid nullptr arguments to alts_protect_flush().");
    return 2;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  uVar2 = FUN_0058e980(*(undefined8 *)(param_1 + 0x18));
  if ((uVar2 & 1) != 0) {
    local_28 = (void *)0x0;
    local_38 = 0;
    iVar1 = FUN_0058e710(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),&local_38,
                         &local_28);
    *(undefined8 *)(param_1 + 0x38) = local_38;
    if (iVar1 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/alts_frame_protector.cc"
                   ,0x49,2,&DAT_038bd9bd,local_28);
      free(local_28);
      return 7;
    }
    uVar2 = FUN_0058e7f0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
    if ((uVar2 & 1) == 0) {
      pcVar4 = "Couldn\'t reset frame writer.";
      uVar3 = 0x74;
      goto LAB_0058e388;
    }
  }
  local_28 = (void *)*param_3;
  uVar2 = FUN_0058e880(*(undefined8 *)(param_1 + 0x18),param_2,&local_28);
  if ((uVar2 & 1) != 0) {
    *param_3 = local_28;
    uVar3 = FUN_0058e9b0(*(undefined8 *)(param_1 + 0x18));
    *param_4 = uVar3;
    uVar2 = FUN_0058e980(*(undefined8 *)(param_1 + 0x18));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 0;
  }
  pcVar4 = "Couldn\'t write frame bytes.";
  uVar3 = 0x81;
LAB_0058e388:
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/alts_frame_protector.cc"
               ,uVar3,2,pcVar4);
  return 7;
}


