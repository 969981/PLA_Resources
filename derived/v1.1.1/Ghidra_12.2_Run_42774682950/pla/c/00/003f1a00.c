/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1a00; name: FUN_003f1a00
 */


undefined4 FUN_003f1a00(int param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_2c [3];
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/compression_internal.cc",
                 0xc5,1,"grpc_message_compression_algorithm_for_level(level=%d)",param_1);
  }
  if (3 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/compression_internal.cc",
                 199,2,"Unknown message compression level %d.",param_1);
    goto switchD_003f1af4_caseD_0;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((param_2 - (param_2 >> 1 & 0x77777777)) - (param_2 >> 2 & 0x33333333)) -
          (param_2 >> 3 & 0x11111111);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = ~((uVar1 / 0xff) * 0xff) + uVar1;
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  if (param_1 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/compression_internal.cc",
                 0xd2,2,"assertion failed: %s","level > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_2 >> 2 & 1) == 0) {
    lVar3 = 0;
    if (uVar2 != 0 && (param_2 & 2) != 0) {
LAB_003f1ac4:
      local_2c[lVar3] = 1;
    }
  }
  else {
    local_2c[0] = 2;
    lVar3 = 1;
    if (uVar2 != 1 && (param_2 & 2) != 0) goto LAB_003f1ac4;
  }
  uVar4 = 0;
  switch(param_1) {
  default:
switchD_003f1af4_caseD_0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    break;
  case 2:
    uVar4 = (ulong)(uVar1 >> 1);
    break;
  case 3:
    uVar4 = uVar2 - 1;
  }
  return local_2c[uVar4];
}


