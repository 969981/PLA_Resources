/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bde124; name: FUN_01bde124
 */


void FUN_01bde124(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00af7e30(&local_38);
  FUN_01bae64c(param_1,&local_38,param_3);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_38[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  *param_1 = &PTR_FUN_04246210;
  param_1[9] = &PTR_LAB_04246608;
  param_1[10] = &PTR_LAB_042466e8;
  param_1[0x182] = *(undefined8 *)(param_3 + 0x520);
  param_1[0x183] = *(undefined8 *)(param_3 + 0x528);
  param_1[0x184] = *(undefined8 *)(param_3 + 0x530);
  param_1[0x185] = *(undefined8 *)(param_3 + 0x538);
  param_1[0x186] = *(undefined8 *)(param_3 + 0x540);
  param_1[0x187] = *(undefined8 *)(param_3 + 0x548);
  param_1[0x188] = *(undefined8 *)(param_3 + 0x550);
  param_1[0x189] = *(undefined8 *)(param_3 + 0x558);
  param_1[0x18a] = *(undefined8 *)(param_3 + 0x560);
  param_1[0x18b] = *(undefined8 *)(param_3 + 0x568);
  param_1[0x18c] = *(undefined8 *)(param_3 + 0x570);
  param_1[0x18d] = *(undefined8 *)(param_3 + 0x578);
  param_1[0x18e] = *(undefined8 *)(param_3 + 0x580);
  param_1[399] = *(undefined8 *)(param_3 + 0x588);
  param_1[400] = *(undefined8 *)(param_3 + 0x590);
  param_1[0x191] = *(undefined8 *)(param_3 + 0x598);
  param_1[0x192] = *(undefined8 *)(param_3 + 0x5a0);
  param_1[0x193] = *(undefined8 *)(param_3 + 0x5a8);
  param_1[0x194] = *(undefined8 *)(param_3 + 0x5b0);
  param_1[0x195] = *(undefined8 *)(param_3 + 0x5b8);
  param_1[0x196] = *(undefined8 *)(param_3 + 0x5c0);
  param_1[0x197] = *(undefined8 *)(param_3 + 0x5c8);
  param_1[0x198] = *(undefined8 *)(param_3 + 0x5d0);
  param_1[0x199] = *(undefined8 *)(param_3 + 0x5d8);
  return;
}


