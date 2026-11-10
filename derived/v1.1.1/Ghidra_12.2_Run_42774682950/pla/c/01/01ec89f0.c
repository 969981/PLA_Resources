/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec89f0; name: FUN_01ec89f0
 */


void FUN_01ec89f0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  bool bVar7;
  long local_50 [3];
  long *local_38;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar6 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar6;
  uVar4 = FUN_010aaed4(uVar6,*(undefined8 *)(param_1 + 0x378),*(undefined1 *)(param_1 + 0x398));
  if (((uVar4 & 1) == 0) ||
     (uVar6 = FUN_010aace4(uVar6,*(undefined8 *)(param_1 + 0x378),*(undefined1 *)(param_1 + 0x398)),
     *(int *)(param_1 + 0x328) != 1)) goto LAB_01ec8a44;
  FUN_0108c59c(local_50);
  bVar7 = false;
  if (local_50[0] != -0x41dba823407a459c) {
    if (local_50[0] < -0x7772ff4b80e1990f) {
      if ((local_50[0] != -0x7773024b80e19e28) && (local_50[0] != -0x7773004b80e19ac2)) {
LAB_01ec8bec:
        bVar7 = true;
      }
    }
    else if ((local_50[0] != -0x7772ff4b80e1990f) && (local_50[0] != -0x41dba523407a4083))
    goto LAB_01ec8bec;
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (!bVar7) {
    FUN_0108c59c(local_50,uVar6);
    FUN_01ec5d6c(param_1,local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
LAB_01ec8a44:
  *(undefined8 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar2 = PTR_DAT_0437a0d8;
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)PTR_DAT_0437a0d8;
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(puVar2 + 8);
  plVar1 = *(long **)(puVar2 + 0x18);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(puVar2 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  plVar5 = *(long **)(param_1 + 0x210);
  *(long **)(param_1 + 0x210) = plVar1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x399) = 0;
  *(undefined4 *)(param_1 + 0x328) = 4;
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  return;
}


