/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054f2e0; name: FUN_0054f2e0
 */


void FUN_0054f2e0(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  void *__dest;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  
  uVar2 = param_2[1];
  if (uVar2 < 100) {
    pvVar3 = (void *)*param_2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (pvVar3 == (void *)0x0) {
      return;
    }
    if (uVar2 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
      if (uVar2 == 0) goto LAB_0054f3ac;
    }
    else {
      uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      param_1[1] = uVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar4 | 1;
    }
    memcpy(__dest,pvVar3,uVar2);
LAB_0054f3ac:
    *(undefined1 *)((long)__dest + uVar2) = 0;
    return;
  }
  auVar5 = FUN_0056a648(param_2,0,100);
  uVar2 = auVar5._8_8_;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  if (auVar5._0_8_ == (void *)0x0) goto LAB_0054f3f0;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    local_48 = (ulong)(byte)(auVar5._8_4_ << 1);
    pvVar3 = (void *)((ulong)&local_48 | 1);
    if (uVar2 != 0) goto LAB_0054f3dc;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_48 = uVar4 | 1;
    uStack_40 = uVar2;
    local_38 = pvVar3;
LAB_0054f3dc:
    memcpy(pvVar3,auVar5._0_8_,uVar2);
  }
  *(undefined1 *)((long)pvVar3 + uVar2) = 0;
LAB_0054f3f0:
                    /* try { // try from 0054f3f0 to 0054f403 has its CatchHandler @ 0054f450 */
  puVar1 = (ulong *)FUN_002e4094(&local_48,&DAT_03952e17,3);
  uVar4 = puVar1[1];
  uVar2 = *puVar1;
  param_1[2] = puVar1[2];
  param_1[1] = uVar4;
  *param_1 = uVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((local_48 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_38);
  return;
}


