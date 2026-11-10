/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f5da0; name: FUN_006f5da0
 */


void FUN_006f5da0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  void *__dest;
  ulong uVar4;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined1 auStack_78 [56];
  
                    /* try { // try from 006f5dbc to 006f5dc7 has its CatchHandler @ 006f5f34 */
  FUN_006e50b0(auStack_78,0);
  uVar2 = FUN_006dd5f0(param_2,auStack_78);
  if ((uVar2 & 1) != 0) {
    FUN_006dd800(auStack_b0,param_2);
    FUN_006db330(param_1,auStack_78,auStack_b0);
    FUN_02767254(auStack_b0,local_a8);
    goto LAB_006f5ef8;
  }
  uVar1 = *param_2;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  if ((*(ulong *)(param_2 + 2) & 1) == 0) {
    uStack_88 = *(ulong *)(param_2 + 4);
    local_90 = *(ulong *)(param_2 + 2);
    local_80 = *(void **)(param_2 + 6);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 4);
    if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 006f5f18 to 006f5f1f has its CatchHandler @ 006f5f20 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 6);
    if (uVar2 < 0x17) {
      local_90 = (ulong)(byte)((int)uVar2 << 1);
      __dest = (void *)((ulong)&local_90 | 1);
      if (uVar2 != 0) goto LAB_006f5e88;
    }
    else {
      uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      local_90 = uVar4 | 1;
      uStack_88 = uVar2;
      local_80 = __dest;
LAB_006f5e88:
      memcpy(__dest,pvVar3,uVar2);
    }
    *(undefined1 *)((long)__dest + uVar2) = 0;
  }
  pvVar3 = (void *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pvVar3 = local_80;
  }
  FUN_006dd800(auStack_b0,param_2);
  FUN_00294a60(param_1,uVar1,pvVar3,auStack_b0);
  FUN_02767254(auStack_b0,local_a8);
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
LAB_006f5ef8:
  FUN_006e52e0(auStack_78);
  return;
}


