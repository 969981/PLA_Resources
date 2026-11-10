/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037835c; name: FUN_0037835c
 */


undefined8 FUN_0037835c(long param_1,long param_2,undefined8 param_3)

{
  void *__src;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  void *__dest;
  byte local_f8 [16];
  undefined8 local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined1 auStack_90 [64];
  
  FUN_003800dc(auStack_90);
                    /* try { // try from 00378388 to 00378393 has its CatchHandler @ 0037868c */
  plVar1 = (long *)FUN_003803e0(auStack_90,param_2);
  if (plVar1 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_00378590;
  }
                    /* try { // try from 003783a0 to 003783a3 has its CatchHandler @ 00378668 */
  plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
  uStack_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = 0;
                    /* try { // try from 003783b0 to 003783bb has its CatchHandler @ 0037866c */
  uVar2 = FUN_0037ac2c(param_1,&local_a8);
  __src = local_98;
  uVar3 = uStack_a0;
  if ((uVar2 & 1) == 0) {
LAB_00378550:
    uVar5 = 0;
  }
  else {
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
    local_c0 = 0;
    if ((local_a8 & 1) == 0) {
      local_b0 = local_98;
      uStack_b8 = uStack_a0;
      local_c0 = local_a8;
    }
    else {
      if (0xffffffffffffffef < uStack_a0) {
                    /* try { // try from 003785b8 to 003785bf has its CatchHandler @ 0037866c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_a0 < 0x17) {
        local_c0 = (ulong)(byte)((int)uStack_a0 << 1);
        __dest = (void *)((ulong)&local_c0 | 1);
        if (uStack_a0 != 0) goto LAB_00378444;
      }
      else {
        uVar2 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
        local_c0 = uVar2 | 1;
        uStack_b8 = uVar3;
        local_b0 = __dest;
LAB_00378444:
        memcpy(__dest,__src,uVar3);
      }
      *(undefined1 *)((long)__dest + uVar3) = 0;
    }
                    /* try { // try from 00378458 to 00378467 has its CatchHandler @ 00378600 */
    uVar3 = FUN_0037ad74(param_1,plVar1,&local_c0);
    if ((local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    if ((uVar3 & 1) == 0) goto LAB_00378550;
    if (*(char *)(param_1 + 0xe9) == '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 003784d4 to 003784e3 has its CatchHandler @ 003785fc */
        FUN_0034b2f0(local_f8,"Value of type \"",*(undefined8 *)(param_2 + 8));
                    /* try { // try from 003784e4 to 003784f7 has its CatchHandler @ 003785e8 */
        puVar4 = (ulong *)FUN_002e4094(local_f8,
                                       "\" stored in google.protobuf.Any has missing required fields"
                                       ,0x3b);
        uStack_d8 = puVar4[1];
        local_e0 = *puVar4;
        local_d0 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
                    /* try { // try from 00378514 to 0037851f has its CatchHandler @ 003785c0 */
        FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_e0);
        if ((local_e0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
        if ((local_f8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_e8);
        }
        goto LAB_00378550;
      }
      FUN_0031ec90(plVar1,param_3);
    }
    else {
                    /* try { // try from 00378490 to 003784cb has its CatchHandler @ 0037866c */
      FUN_0031edb0(plVar1,param_3);
    }
    uVar5 = 1;
  }
  if ((local_a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
LAB_00378590:
  FUN_0038013c(auStack_90);
  return uVar5;
}


