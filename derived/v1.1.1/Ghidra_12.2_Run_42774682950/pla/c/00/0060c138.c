/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060c138; name: FUN_0060c138
 */


undefined8 FUN_0060c138(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  size_t __n;
  undefined8 uVar10;
  void *__dest;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong local_a0;
  size_t local_98;
  void *local_90;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined4 uStack_5f;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  long local_58;
  long *local_48;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  local_70 = 0x28;
  uStack_5a = 0;
  uStack_67 = 0x30303030303030;
  local_60 = 0x30;
  uStack_6f = 0x30303030303030;
  local_68 = 0x30;
  uStack_5f = 0x30303030;
  uStack_5b = 0;
  plVar7 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  puVar5 = PTR_DAT_04375360;
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 8;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[2] = 0;
    puVar11 = (undefined8 *)((ulong)&local_70 | 1);
    puVar8 = (undefined8 *)FUN_002e2ec0(PTR_FUN_04373078,0x14);
    uVar13 = puVar11[1];
    uVar10 = *puVar11;
    *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar11 + 2);
    puVar8[1] = uVar13;
    *puVar8 = uVar10;
    lVar12 = plVar7[2];
    if (lVar12 != 0) {
      FUN_002e2f10(lVar12);
      FUN_002e2ef0(PTR_LAB_04373088,lVar12);
    }
    plVar7[2] = (long)puVar8;
    *(undefined2 *)((long)plVar7 + 10) = 0x14;
  }
                    /* try { // try from 0060c22c to 0060c237 has its CatchHandler @ 0060c508 */
  local_48 = plVar7;
  FUN_0060bd68(param_1,&local_48);
  plVar6 = local_48;
  local_48 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)*plVar6)(plVar6);
    FUN_002e2ea0(PTR_LAB_04373088,plVar6);
  }
                    /* try { // try from 0060c264 to 0060c26b has its CatchHandler @ 0060c504 */
  FUN_0060b4d4(&local_70);
                    /* try { // try from 0060c26c to 0060c277 has its CatchHandler @ 0060c4d4 */
  uVar9 = FUN_0060c548(param_1,&local_70);
  if ((uVar9 & 1) == 0) {
    uVar10 = 0;
    lVar12 = local_58;
    goto joined_r0x0060c2e4;
  }
  uVar9 = CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT41(uStack_5f,local_60)));
  if (((local_58 == 0) && (uVar9 != 0)) || (uVar4 = CONCAT71(uStack_67,local_68), uVar9 < uVar4)) {
                    /* try { // try from 0060c434 to 0060c453 has its CatchHandler @ 0060c4a4 */
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x8e,"IsConsistent()",PTR_DAT_043752a0);
  }
  uVar3 = *(ushort *)((long)plVar7 + 10);
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  __n = strlen(PTR_s_sha_1_04375368);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0060c474 to 0060c47b has its CatchHandler @ 0060c4a0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_a0 | 1);
    if (__n != 0) goto LAB_0060c348;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
    local_a0 = uVar9 | 1;
    local_98 = __n;
    local_90 = __dest;
LAB_0060c348:
    memcpy(__dest,PTR_s_sha_1_04375368,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  uVar9 = CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT41(uStack_5f,local_60)));
  if ((local_58 == 0 && uVar9 != 0) || (uVar9 < CONCAT71(uStack_67,local_68))) {
                    /* try { // try from 0060c454 to 0060c473 has its CatchHandler @ 0060c4a8 */
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x7c,"IsConsistent()",PTR_DAT_043752a0);
  }
                    /* try { // try from 0060c398 to 0060c3af has its CatchHandler @ 0060c4a8 */
  lVar12 = FUN_0060f590(&local_a0,pbVar2,uVar1,local_58,(long)(int)(((int)uVar4 - (uint)uVar3) + -4)
                        ,&local_84,0x14);
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if (lVar12 != 0x14) {
                    /* try { // try from 0060c47c to 0060c49b has its CatchHandler @ 0060c49c */
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/p2p/base/stun.cc",0x107,"ret == sizeof(hmac)",PTR_DAT_043752a0);
  }
  puVar8 = (undefined8 *)FUN_002e2ec0(PTR_FUN_04373078,0x14);
  *(undefined4 *)(puVar8 + 2) = local_74;
  puVar8[1] = uStack_7c;
  *puVar8 = local_84;
  lVar12 = plVar7[2];
  if (lVar12 != 0) {
    FUN_002e2f10(lVar12);
    FUN_002e2ef0(PTR_LAB_04373088,lVar12);
  }
  plVar7[2] = (long)puVar8;
  uVar10 = 1;
  *(undefined2 *)((long)plVar7 + 10) = 0x14;
  lVar12 = local_58;
joined_r0x0060c2e4:
  if (lVar12 != 0) {
    local_58 = 0;
    FUN_002e2f10(lVar12);
    FUN_002e2ef0(PTR_LAB_04373088,lVar12);
  }
  return uVar10;
}


