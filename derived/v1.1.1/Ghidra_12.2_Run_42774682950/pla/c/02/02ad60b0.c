/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad60b0; name: FUN_02ad60b0
 */


void FUN_02ad60b0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  
  switch(param_2) {
  case 0:
    pcVar5 = "Shadow";
    puVar7 = &DAT_e7d5621586e83d61;
    goto LAB_02ad618c;
  case 1:
    pcVar5 = "ShadowCascaded1";
    uVar6 = 0x538c14eaa7d2;
    break;
  case 2:
    pcVar5 = "ShadowCascaded2";
    uVar6 = 0x528c14eaa61f;
    break;
  case 3:
    pcVar5 = "ShadowCascaded3";
    uVar6 = 0x518c14eaa46c;
    break;
  default:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar3 = PTR_DAT_0437a0d8;
    uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
    param_1[1] = uVar1;
    plVar2 = *(long **)(puVar3 + 0x18);
    param_1[2] = *(undefined8 *)(puVar3 + 0x10);
    param_1[3] = plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x02ad6100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
  puVar7 = (undefined1 *)(uVar6 | 0xeed0000000000000);
LAB_02ad618c:
  *param_1 = puVar7;
  param_1[1] = pcVar5;
  param_1[2] = 0x1f;
  param_1[3] = 0;
  return;
}


