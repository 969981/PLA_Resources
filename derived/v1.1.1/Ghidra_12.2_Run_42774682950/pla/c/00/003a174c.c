/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a174c; name: FUN_003a174c
 */


bool FUN_003a174c(undefined8 *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  size_t __n;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *__src;
  ulong uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong local_70;
  size_t local_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  undefined1 *local_48;
  
  pbVar6 = *(byte **)*param_1;
  bVar2 = *pbVar6;
  __src = *(byte **)(pbVar6 + 0x10);
  if ((bVar2 & 1) == 0) {
    __src = pbVar6 + 1;
  }
  if ((bVar2 & 1) == 0) {
    uVar7 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(pbVar6 + 8);
    if ((long)uVar7 < 0) {
      FUN_0031f284(uVar7,"size_t to int conversion");
    }
  }
  if ((long)uVar7 <= (long)param_3) {
    return false;
  }
  lVar1 = uVar7 + ~param_3;
  if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= i",
                  "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/stubs/stringpiece.h"
                  ,0x115,"operator[]");
  }
  if ((long)uVar7 <= lVar1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < length_",
                  "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/stubs/stringpiece.h"
                  ,0x116,"operator[]");
  }
  if (__src[lVar1] != 0x2f) {
    return false;
  }
  local_50 = 0;
  local_48 = (undefined1 *)0x0;
  local_58 = 0;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    local_58 = (ulong)(byte)((int)uVar7 << 1);
    puVar9 = (undefined1 *)((ulong)&local_58 | 1);
    if (uVar7 != 0) goto LAB_003a1888;
    *puVar9 = 0;
    if (param_2 == (void *)0x0) goto LAB_003a18a8;
LAB_003a17ec:
    local_60 = (void *)0x0;
    local_68 = 0;
    local_70 = 0;
    if (0xffffffffffffffef < param_3) {
                    /* try { // try from 003a19ec to 003a19f3 has its CatchHandler @ 003a1a34 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_3 < 0x17) {
      local_70 = (ulong)(byte)((int)param_3 << 1);
      pvVar8 = (void *)((ulong)&local_70 | 1);
      if (param_3 != 0) goto LAB_003a18dc;
    }
    else {
      uVar7 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
      local_70 = uVar7 | 1;
      local_68 = param_3;
      local_60 = pvVar8;
LAB_003a18dc:
      memcpy(pvVar8,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar8 + param_3) = 0;
    uVar7 = local_70 & 0xff;
  }
  else {
    uVar10 = uVar7 + 0x10 & 0xfffffffffffffff0;
    puVar9 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_58 = uVar10 | 1;
    local_50 = uVar7;
    local_48 = puVar9;
LAB_003a1888:
    memcpy(puVar9,__src,uVar7);
    puVar9[uVar7] = 0;
    if (param_2 != (void *)0x0) goto LAB_003a17ec;
LAB_003a18a8:
    local_60 = (void *)0x0;
    local_68 = 0;
    local_70 = 0;
    uVar7 = 0;
  }
  uVar3 = local_58;
  uVar10 = local_58 >> 1 & 0x7f;
  if ((local_58 & 1) != 0) {
    uVar10 = local_50;
  }
  __n = uVar7 >> 1;
  if ((uVar7 & 1) != 0) {
    __n = local_68;
  }
  if (uVar10 < __n) {
    bVar4 = false;
    goto joined_r0x003a199c;
  }
  if (__n == 0) {
LAB_003a1990:
    iVar5 = 0;
  }
  else {
    if (__n == 0xffffffffffffffff) {
                    /* try { // try from 003a19f4 to 003a19fb has its CatchHandler @ 003a19fc */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pvVar8 = (void *)((ulong)&local_70 | 1);
    if ((uVar7 & 1) != 0) {
      pvVar8 = local_60;
    }
    puVar9 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      puVar9 = local_48;
    }
    iVar5 = memcmp(puVar9 + (uVar10 - __n),pvVar8,__n);
    if (iVar5 == 0) goto LAB_003a1990;
  }
  bVar4 = iVar5 == 0;
joined_r0x003a199c:
  if ((uVar7 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  if ((uVar3 & 1) == 0) {
    return bVar4;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_48);
  return bVar4;
}


