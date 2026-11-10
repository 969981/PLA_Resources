/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6f40; name: FUN_005a6f40
 */


uint FUN_005a6f40(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (0xffff < param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x197,2,"assertion failed: %s","elem_size < 65536");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *param_1;
  uVar5 = param_1[5];
  if (uVar1 < param_2) {
    while (uVar5 != 0) {
      FUN_005a5220(param_1);
      uVar5 = param_1[5];
    }
    return 0;
  }
  uVar2 = param_1[4];
  uVar3 = param_1[6];
  if ((ulong)uVar1 < uVar5 + param_2) {
    do {
      FUN_005a5220(param_1);
      uVar5 = param_1[5];
    } while ((ulong)*param_1 < uVar5 + param_2);
    uVar6 = param_1[6];
    if (*param_1 <= param_1[6]) {
LAB_005a7018:
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x1a7,2,"assertion failed: %s","c->table_elems < c->max_table_size");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar6 = uVar3;
    if (uVar1 <= uVar3) goto LAB_005a7018;
  }
  uVar4 = param_1[2];
  uVar1 = uVar2 + uVar3 + 1;
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar1 / uVar4;
  }
  *(short *)(*(long *)(param_1 + 8) + (ulong)(uVar1 - uVar2 * uVar4) * 2) = (short)param_2;
  param_1[5] = uVar5 + (int)param_2 & 0xffff;
  param_1[6] = uVar6 + 1;
  return uVar1;
}


