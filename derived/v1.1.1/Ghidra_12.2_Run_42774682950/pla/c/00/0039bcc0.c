/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039bcc0; name: FUN_0039bcc0
 */


long FUN_0039bcc0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long extraout_x1;
  ulong *puVar3;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [48];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  
  (**(code **)(*param_1 + 0x98))();
  if (extraout_x1 != 0) {
    return extraout_x1;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    uStack_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0x6e776f6e6b6e750e;
    goto LAB_0039bdbc;
  }
  puVar3 = (ulong *)*puVar1;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  if ((*puVar3 & 1) == 0) {
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    local_40 = (void *)puVar3[2];
    goto LAB_0039bdbc;
  }
  __n = puVar3[1];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)puVar3[2];
  if (__n < 0x17) {
    local_50 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_50 | 1);
    if (__n != 0) goto LAB_0039bda8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_50 = uVar4 | 1;
    uStack_48 = __n;
    local_40 = __dest;
LAB_0039bda8:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0039bdbc:
                    /* try { // try from 0039bdbc to 0039bdd3 has its CatchHandler @ 0039be48 */
  FUN_0030f640(auStack_80,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/reflection_ops.cc"
               ,0x3c);
                    /* try { // try from 0039bdd4 to 0039bdfb has its CatchHandler @ 0039be58 */
  uVar2 = FUN_0030f3ac(auStack_80,"Message does not support reflection (type ");
  uVar2 = FUN_0030f3e8(uVar2,&local_50);
  uVar2 = FUN_0030f3ac(uVar2,&DAT_03949cce);
                    /* try { // try from 0039bdfc to 0039be03 has its CatchHandler @ 0039be44 */
  FUN_0030f41c(auStack_88,uVar2);
  FUN_0030f658(auStack_80);
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  return 0;
}


