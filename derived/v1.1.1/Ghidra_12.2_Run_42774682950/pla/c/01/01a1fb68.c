/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1fb68; name: FUN_01a1fb68
 */


void FUN_01a1fb68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  
  auVar6 = FUN_01a168cc(param_1,1);
  puVar1 = PTR_DAT_04379578;
  if ((*PTR_DAT_04379578 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379578);
    if (iVar4 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  puVar3 = PTR_DAT_04379588;
  puVar2 = PTR_DAT_04379580;
  lVar5 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar5;
  lVar5 = *(long *)(lVar5 + 200);
  uVar8 = *(undefined8 *)(lVar5 + 0x538);
  uVar7 = *(undefined8 *)(lVar5 + 0x530);
  *(ulong *)(param_1 + 0xee28) =
       CONCAT44(auVar6._12_4_ - (float)((ulong)uVar8 >> 0x20),auVar6._8_4_ - (float)uVar8);
  *(ulong *)(param_1 + 0xee20) =
       CONCAT44(auVar6._4_4_ - (float)((ulong)uVar7 >> 0x20),auVar6._0_4_ - (float)uVar7);
  auVar6 = FUN_01a168cc(param_1,0);
  if ((*puVar1 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379578);
    if (iVar4 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  lVar5 = *(long *)puVar2;
  *(long *)puVar3 = lVar5;
  lVar5 = *(long *)(lVar5 + 200);
  uVar8 = *(undefined8 *)(lVar5 + 0x538);
  uVar7 = *(undefined8 *)(lVar5 + 0x530);
  *(ulong *)(param_1 + 0xee38) =
       CONCAT44(auVar6._12_4_ - (float)((ulong)uVar8 >> 0x20),auVar6._8_4_ - (float)uVar8);
  *(ulong *)(param_1 + 0xee30) =
       CONCAT44(auVar6._4_4_ - (float)((ulong)uVar7 >> 0x20),auVar6._0_4_ - (float)uVar7);
  return;
}


