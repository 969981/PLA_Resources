/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0029175c; name: FUN_0029175c
 */


void FUN_0029175c(undefined8 *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 uVar3;
  void *__src;
  ulong uVar4;
  void *__dest;
  ulong uVar5;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  if (param_3 == (ulong *)0x0) {
    FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/arenastring.h",
                 0x173);
                    /* try { // try from 002917e0 to 002917f3 has its CatchHandler @ 002918d4 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: initial_value != NULL: ");
                    /* try { // try from 002917f4 to 002917fb has its CatchHandler @ 002918d0 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    if (param_2 == 0) goto LAB_00291808;
LAB_00291784:
    if (*(long *)(param_2 + 0x70) != 0) {
      FUN_0032cf88(param_2,0,0x18);
    }
    puVar2 = (ulong *)FUN_0032c850(param_2,0x18,PTR_LAB_043730d0);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    bVar1 = (byte)*param_3;
  }
  else {
    if (param_2 != 0) goto LAB_00291784;
LAB_00291808:
    puVar2 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar2 == (ulong *)0x0) goto LAB_00291898;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    bVar1 = (byte)*param_3;
  }
  if ((bVar1 & 1) == 0) {
    uVar5 = param_3[1];
    uVar4 = *param_3;
    puVar2[2] = param_3[2];
    puVar2[1] = uVar5;
    *puVar2 = uVar4;
    goto LAB_00291898;
  }
  uVar4 = param_3[1];
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_3[2];
  if (uVar4 < 0x17) {
    __dest = (void *)((long)puVar2 + 1);
    *(char *)puVar2 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_00291884;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    *puVar2 = uVar5 | 1;
    puVar2[1] = uVar4;
    puVar2[2] = (ulong)__dest;
LAB_00291884:
    memcpy(__dest,__src,uVar4);
  }
  *(undefined1 *)((long)__dest + uVar4) = 0;
LAB_00291898:
  *param_1 = puVar2;
  return;
}


