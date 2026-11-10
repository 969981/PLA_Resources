/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b412c; name: FUN_005b412c
 */


void FUN_005b412c(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_002ec2d0(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (param_3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (*param_3 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/ssl/ssl_credentials.cc"
                   ,100,2,"assertion failed: %s","pem_key_cert_pair->private_key != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (param_3[1] == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/ssl/ssl_credentials.cc"
                   ,0x65,2,"assertion failed: %s","pem_key_cert_pair->cert_chain != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = FUN_002ebd80(0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = FUN_002ec2d0(param_3[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = uVar1;
    uVar1 = FUN_002ec2d0(*param_3);
    **(undefined8 **)(param_1 + 0x20) = uVar1;
  }
  if (param_4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[2];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


