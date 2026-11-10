/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019338a4; name: FUN_019338a4
 */


bool FUN_019338a4(int *param_1,undefined8 *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint *puVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar9 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar9 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_70 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar1 = *(char **)(PTR_DAT_0437a0d8 + 8);
    local_60 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar3 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    pcStack_68 = pcVar1;
    local_58 = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      cVar5 = *pcVar1;
      goto joined_r0x019339e0;
    }
  }
  else {
    puVar2 = (uint *)((long)param_1 + uVar9);
    uVar10 = (ulong)*puVar2;
    pcVar1 = (char *)((long)puVar2 + uVar10 + 4);
    puVar8 = &DAT_cbf29ce484222645;
    local_60 = strlen(pcVar1);
    bVar4 = *(byte *)((long)puVar2 + uVar10 + 4);
    if (bVar4 != 0) {
      pbVar7 = (byte *)((long)param_1 + uVar10 + uVar9 + 5);
      do {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar4 != 0);
    }
    local_58 = (long *)0x0;
    local_70 = puVar8;
    pcStack_68 = pcVar1;
  }
  cVar5 = *pcStack_68;
  plVar3 = local_58;
joined_r0x019339e0:
  if (cVar5 != '\0') {
    FUN_010f4ab0(*param_2,&local_70,param_3);
    plVar3 = local_58;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return cVar5 != '\0';
}


