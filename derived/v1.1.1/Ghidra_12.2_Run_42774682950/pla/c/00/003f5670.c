/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5670; name: FUN_003f5670
 */


void FUN_003f5670(long param_1,undefined8 param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (PTR_DAT_04373fe8[0x10] == '\0') {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 != *(long *)(param_1 + 0x28)) {
LAB_003f570c:
      lVar2 = *(long *)(param_1 + 0x18);
      goto LAB_003f5710;
    }
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0x10b,1,"grpc_auth_context_add_cstring_property(ctx=%p, name=%s, value=%s)",param_1
                 ,param_2,param_3);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 != *(long *)(param_1 + 0x28)) goto LAB_003f570c;
  }
  uVar1 = lVar6 + 8U;
  if (lVar6 + 8U <= (ulong)(lVar6 * 2)) {
    uVar1 = lVar6 * 2;
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  lVar2 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x18),uVar1 * 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
LAB_003f5710:
  *(long *)(param_1 + 0x20) = lVar6 + 1;
  uVar3 = FUN_002ec2d0(param_2);
  puVar5 = (undefined8 *)(lVar2 + lVar6 * 0x18);
  *puVar5 = uVar3;
  uVar3 = FUN_002ec2d0(param_3);
  puVar5[1] = uVar3;
  sVar4 = strlen(param_3);
  puVar5[2] = sVar4;
  return;
}


