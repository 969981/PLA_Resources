/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003755dc; name: FUN_003755dc
 */


void FUN_003755dc(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong in_x5;
  long *in_x6;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulong local_40;
  void *local_38;
  
  if (*(char *)(param_1 + 5) == '\0') {
    plVar4 = (long *)(param_1 + 0x28);
    plVar5 = (long *)*plVar4;
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar4;
      do {
        if ((ulong)plVar5[4] >= in_x5) {
          plVar3 = plVar5;
        }
        plVar5 = (long *)plVar5[(ulong)plVar5[4] < in_x5];
      } while (plVar5 != (long *)0x0);
      if ((plVar3 != plVar4) && ((ulong)plVar3[4] <= in_x5)) {
        plVar3 = plVar3 + 5;
        goto LAB_0037568c;
      }
    }
    plVar3 = (long *)(param_1 + 0x18);
LAB_0037568c:
                    /* WARNING: Could not recover jumptable at 0x003756ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar3 + 0x60))();
    return;
  }
  lVar2 = FUN_00320570(*(undefined4 *)(in_x5 + 0x44),auStack_68);
  uVar6 = lVar2 - (long)auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = (void *)0x0;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    local_48 = (ulong)(byte)((int)uVar6 << 1);
    pvVar7 = (void *)((ulong)&local_48 | 1);
    if (uVar6 == 0) goto LAB_003756ec;
  }
  else {
    uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
    local_48 = uVar8 | 1;
    local_40 = uVar6;
    local_38 = pvVar7;
  }
  memcpy(pvVar7,auStack_68,uVar6);
LAB_003756ec:
  *(undefined1 *)((long)pvVar7 + uVar6) = 0;
  bVar1 = (local_48 & 1) == 0;
  pvVar7 = local_38;
  if (bVar1) {
    pvVar7 = (void *)((long)&local_48 + 1);
  }
  uVar6 = local_48 >> 1 & 0x7f;
  if (!bVar1) {
    uVar6 = local_40;
  }
                    /* try { // try from 00375710 to 00375717 has its CatchHandler @ 00375754 */
  (**(code **)(*in_x6 + 0x28))(in_x6,pvVar7,uVar6);
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return;
}


