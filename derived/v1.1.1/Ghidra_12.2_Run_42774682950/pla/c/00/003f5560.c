/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5560; name: FUN_003f5560
 */


void FUN_003f5560(long param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  undefined8 *puVar4;
  long lVar5;
  
  if (PTR_DAT_04373fe8[0x10] == '\0') {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != *(long *)(param_1 + 0x28)) {
LAB_003f5610:
      lVar2 = *(long *)(param_1 + 0x18);
      goto LAB_003f5614;
    }
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0xf9,1,
                 "grpc_auth_context_add_property(ctx=%p, name=%s, value=%*.*s, value_length=%lu)",
                 param_1,param_2,param_4 & 0xffffffff,param_4 & 0xffffffff,param_3,param_4);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != *(long *)(param_1 + 0x28)) goto LAB_003f5610;
  }
  uVar1 = lVar5 + 8U;
  if (lVar5 + 8U <= (ulong)(lVar5 * 2)) {
    uVar1 = lVar5 * 2;
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  lVar2 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x18),uVar1 * 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
LAB_003f5614:
  *(long *)(param_1 + 0x20) = lVar5 + 1;
  uVar3 = FUN_002ec2d0(param_2);
  puVar4 = (undefined8 *)(lVar2 + lVar5 * 0x18);
  *puVar4 = uVar3;
  __dest = (void *)FUN_002ebd50(param_4 + 1);
  puVar4[1] = __dest;
  memcpy(__dest,param_3,param_4);
  *(undefined1 *)(puVar4[1] + param_4) = 0;
  puVar4[2] = param_4;
  return;
}


