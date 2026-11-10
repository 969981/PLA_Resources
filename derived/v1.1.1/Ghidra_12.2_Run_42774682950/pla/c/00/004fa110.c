/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fa110; name: FUN_004fa110
 */


void FUN_004fa110(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = 2;
  do {
    uVar4 = uVar1;
    uVar1 = uVar4 << 1;
  } while (uVar4 < param_1[1] + 1U);
  lVar2 = FUN_002ebdc0(*param_1,uVar4 << 3);
  *param_1 = lVar2;
  uVar3 = FUN_003e0280(param_2,
                       "external/com_google_grpc_base/src/core/lib/security/credentials/credentials_metadata.cc"
                       ,0x2d);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined8 *)(*param_1 + lVar2 * 8) = uVar3;
  return;
}


