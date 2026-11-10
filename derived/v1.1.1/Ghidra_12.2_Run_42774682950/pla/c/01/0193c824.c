/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193c824; name: FUN_0193c824
 */


void FUN_0193c824(long param_1,int param_2,uint param_3)

{
  uint param5;
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_68;
  char *pcStack_60;
  long local_58;
  long *local_50;
  long *local_48;
  char acStack_40 [32];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379678), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar3 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar3;
  puVar4 = *(ulong **)(lVar3 + 0xd8);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  do {
    uVar7 = uVar5 ^ uVar6;
    iVar2 = (int)uVar6;
    uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
    param5 = (int)uVar5 + iVar2 & 7;
    uVar5 = uVar7 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar7 << 0x10;
  } while (4 < param5);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  snprintf(acStack_40,0x20,"PLAY_PV_%03d_%02d_%02d",param_2,param_3 & 0xffff,param5);
  FUN_01091310(&local_48,acStack_40);
  plVar1 = local_48;
  if (local_48 != (long *)0x0) {
    if (*(char *)local_48[0xc] != '\0') {
      local_68 = local_48[0xb];
      local_58 = local_48[0xd];
      uVar8 = *(undefined8 *)(param_1 + 8);
      pcStack_60 = (char *)local_48[0xc];
      (**(code **)(*local_48 + 0x18))(local_48);
      local_50 = plVar1;
      FUN_0290b66c(uVar8,&local_68,0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (local_48 == (long *)0x0) {
        return;
      }
    }
    (**(code **)(*local_48 + 0x20))(local_48);
  }
  return;
}


