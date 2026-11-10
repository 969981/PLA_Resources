/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fec00; name: FUN_002fec00
 */


uint FUN_002fec00(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  void *pvVar1;
  ulong uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  char local_64 [4];
  void *local_60;
  ulong local_58;
  void *local_50;
  ulong local_48;
  
  if (param_3 == (ulong *)0x0) {
LAB_002fee40:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gprpp/host_port.cc",0x5e,2,
                 "assertion failed: %s","host != nullptr && host->empty()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((byte)*param_3 & 1) == 0) {
    if ((byte)((byte)*param_3 >> 1) != 0) goto LAB_002fee40;
  }
  else if (param_3[1] != 0) goto LAB_002fee40;
  if (param_4 == (ulong *)0x0) {
LAB_002fee68:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gprpp/host_port.cc",0x5f,2,
                 "assertion failed: %s","port != nullptr && port->empty()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((byte)*param_4 & 1) == 0) {
    if ((byte)((byte)*param_4 >> 1) != 0) goto LAB_002fee68;
  }
  else if (param_4[1] != 0) goto LAB_002fee68;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  uVar3 = FUN_002fea00(param_1,param_2,&local_50,&local_60,local_64);
  uVar2 = local_48;
  pvVar1 = local_50;
  if ((uVar3 & 1) == 0) goto LAB_002fee24;
  if (local_50 == (void *)0x0) {
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    if ((*param_3 & 1) == 0) goto LAB_002fed38;
LAB_002fecc8:
    *(undefined1 *)param_3[2] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_3[2]);
      *param_3 = 0;
    }
  }
  else {
    local_70 = (void *)0x0;
    local_80 = 0;
    uStack_78 = 0;
    if (0xffffffffffffffef < local_48) goto LAB_002fee90;
    if (local_48 < 0x17) {
      local_80 = (ulong)(byte)((int)local_48 << 1);
      pvVar4 = (void *)((ulong)&local_80 | 1);
      if (local_48 != 0) goto LAB_002fed1c;
    }
    else {
      uVar5 = local_48 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      local_80 = uVar5 | 1;
      uStack_78 = uVar2;
      local_70 = pvVar4;
LAB_002fed1c:
      memcpy(pvVar4,pvVar1,uVar2);
    }
    *(undefined1 *)((long)pvVar4 + uVar2) = 0;
    if ((*param_3 & 1) != 0) goto LAB_002fecc8;
LAB_002fed38:
    *(undefined2 *)param_3 = 0;
  }
  uVar2 = local_58;
  pvVar1 = local_60;
  param_3[2] = (ulong)local_70;
  param_3[1] = uStack_78;
  *param_3 = local_80;
  if (local_64[0] == '\0') goto LAB_002fee24;
  if (local_60 == (void *)0x0) {
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    if ((*param_4 & 1) == 0) goto LAB_002fee10;
LAB_002feda0:
    *(undefined1 *)param_4[2] = 0;
    param_4[1] = 0;
    if ((*param_4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_4[2]);
      *param_4 = 0;
    }
  }
  else {
    local_70 = (void *)0x0;
    local_80 = 0;
    uStack_78 = 0;
    if (0xffffffffffffffef < local_58) {
LAB_002fee90:
      local_70 = (void *)0x0;
      uStack_78 = 0;
      local_80 = 0;
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_58 < 0x17) {
      local_80 = (ulong)(byte)((int)local_58 << 1);
      pvVar4 = (void *)((ulong)&local_80 | 1);
      if (local_58 != 0) goto LAB_002fedf4;
    }
    else {
      uVar5 = local_58 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      local_80 = uVar5 | 1;
      uStack_78 = uVar2;
      local_70 = pvVar4;
LAB_002fedf4:
      memcpy(pvVar4,pvVar1,uVar2);
    }
    *(undefined1 *)((long)pvVar4 + uVar2) = 0;
    if ((*param_4 & 1) != 0) goto LAB_002feda0;
LAB_002fee10:
    *(undefined2 *)param_4 = 0;
  }
  param_4[2] = (ulong)local_70;
  param_4[1] = uStack_78;
  *param_4 = local_80;
LAB_002fee24:
  return uVar3 & 1;
}


