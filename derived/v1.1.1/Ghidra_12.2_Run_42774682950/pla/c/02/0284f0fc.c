/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284f0fc; name: FUN_0284f0fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0284f0fc(long *param_1,byte *param_2,int param_3,undefined4 param_4,undefined2 param_5,
                 undefined4 param_6,byte param_7,byte param_8,byte param_9)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long *local_3b0;
  long local_3a8;
  long local_3a0;
  long local_398;
  long local_390;
  undefined4 local_388;
  undefined4 local_380;
  undefined2 local_37c;
  undefined4 local_378;
  byte local_374;
  byte local_373;
  undefined8 local_370;
  char acStack_368 [776];
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar6 = *(long **)(lVar8 + 0xd0);
  if (plVar6 == (long *)0x0) {
    lVar8 = _DAT_00000168;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = plVar6[0x2d];
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  memset(acStack_368,0,0x300);
  local_370 = 0xffffffff00000000;
  iVar5 = *(int *)(&DAT_03a7e7b8 + (long)param_3 * 4);
  local_380 = param_4;
  local_37c = param_5;
  local_378 = param_6;
  local_374 = param_7 & 1;
  local_373 = param_8 & 1;
  piVar7 = (int *)FUN_00d3e4a0(lVar8,param_2,&local_380,param_9 & 1,0);
  if (piVar7 == (int *)0x0) {
    snprintf(acStack_368,0x300,"bin/appli/res_pokemon/icon_%s_dummy/%s_dummy.bntx",
             (&PTR_s_pokemon_s_041eadf8)[iVar5],(&PTR_s_pokeicon_s_041eae10)[iVar5]);
    *param_2 = param_9 & 1;
  }
  else {
    if (*(ushort *)((long)piVar7 - (long)*piVar7) < 7) {
      lVar8 = 0;
    }
    else {
      uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
      lVar8 = 0;
      if (uVar9 != 0) {
        puVar2 = (uint *)((long)piVar7 + uVar9);
        lVar8 = (long)puVar2 + (ulong)*puVar2;
      }
    }
    snprintf(acStack_368,0x300,"bin/appli/res_pokemon/icon_%s/%s_%s.bntx",
             (&PTR_s_pokemon_s_041eadf8)[iVar5],(&PTR_s_pokeicon_s_041eae10)[iVar5],
             (char *)(lVar8 + 4));
  }
  FUN_013d33bc(&local_3b0,acStack_368);
  plVar6 = (long *)*param_1;
  *param_1 = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = local_3b0;
  local_3b0 = (long *)0x0;
  *param_1 = (long)plVar6;
  param_1[1] = local_3a8;
  param_1[2] = local_3a0;
  plVar6 = (long *)param_1[4];
  param_1[3] = local_398;
  param_1[4] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  lVar8 = local_390;
  local_390 = 0;
  param_1[4] = lVar8;
  *(undefined4 *)(param_1 + 5) = local_388;
  if (local_3b0 != (long *)0x0) {
    (**(code **)(*local_3b0 + 0x20))();
  }
  return;
}


