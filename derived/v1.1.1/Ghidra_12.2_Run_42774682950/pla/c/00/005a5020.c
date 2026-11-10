/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a5020; name: FUN_005a5020
 */


void FUN_005a5020(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__s;
  void *__ptr;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1[3] <= param_2) {
    param_2 = param_1[3];
  }
  if (param_2 == *param_1) {
    return;
  }
  uVar6 = param_1[5];
  while (param_2 < uVar6) {
    FUN_005a5220(param_1);
    uVar6 = param_1[5];
  }
  uVar4 = param_1[2];
  uVar6 = param_2 + 0x1f >> 5;
  *param_1 = param_2;
  param_1[1] = uVar6;
  if (uVar4 < uVar6) {
    if (uVar6 <= uVar4 * 2) {
      uVar6 = uVar4 * 2;
    }
    __s = (void *)FUN_002ebd50((ulong)uVar6 << 1);
    memset(__s,0,(ulong)uVar6 << 1);
    uVar4 = param_1[6];
    if (uVar6 < uVar4) {
LAB_005a51f4:
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x31c,2,"assertion failed: %s","c->table_elems <= new_cap");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar4 == 0) {
      __ptr = *(void **)(param_1 + 8);
      param_1[2] = uVar6;
    }
    else {
      uVar5 = param_1[4];
      __ptr = *(void **)(param_1 + 8);
      uVar1 = param_1[2];
      do {
        uVar5 = uVar5 + 1;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        uVar4 = uVar4 - 1;
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar5 / uVar6;
        }
        *(undefined2 *)((long)__s + (ulong)(uVar5 - uVar3 * uVar6) * 2) =
             *(undefined2 *)((long)__ptr + (ulong)(uVar5 - uVar2 * uVar1) * 2);
      } while (uVar4 != 0);
      param_1[2] = uVar6;
    }
  }
  else {
    if (uVar4 / 3 <= uVar6) goto LAB_005a51a0;
    if (uVar6 < 0x11) {
      uVar6 = 0x10;
    }
    if (uVar6 == uVar4) goto LAB_005a51a0;
    __s = (void *)FUN_002ebd50((ulong)(uVar6 << 1));
    memset(__s,0,(ulong)(uVar6 << 1));
    uVar4 = param_1[6];
    if (uVar6 < uVar4) goto LAB_005a51f4;
    if (uVar4 == 0) {
      __ptr = *(void **)(param_1 + 8);
    }
    else {
      uVar5 = param_1[4];
      __ptr = *(void **)(param_1 + 8);
      uVar1 = param_1[2];
      do {
        uVar5 = uVar5 + 1;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        uVar4 = uVar4 - 1;
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar5 / uVar6;
        }
        *(undefined2 *)((long)__s + (ulong)(uVar5 - uVar3 * uVar6) * 2) =
             *(undefined2 *)((long)__ptr + (ulong)(uVar5 - uVar2 * uVar1) * 2);
      } while (uVar4 != 0);
    }
    param_1[2] = uVar6;
  }
  free(__ptr);
  *(void **)(param_1 + 8) = __s;
LAB_005a51a0:
  *(undefined1 *)(param_1 + 10) = 1;
  if (PTR_DAT_04374f08[0x10] == '\0') {
    return;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
               ,0x33e,1,"set max table size from encoder to %d",param_2);
  return;
}


