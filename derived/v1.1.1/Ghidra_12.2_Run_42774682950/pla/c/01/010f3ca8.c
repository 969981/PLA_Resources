/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f3ca8; name: FUN_010f3ca8
 */


void FUN_010f3ca8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_68 [2];
  long *local_58;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  puVar2 = PTR_DAT_04379c88;
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x278) - *(long *)(lVar9 + 0x270), lVar9 != 0)) {
    lVar10 = *(long *)(lVar8 + 0x100);
    lVar8 = 0;
    do {
      FUN_010f5a90(&local_58,param_1,lVar8);
      plVar3 = local_58;
      plVar1 = (long *)puVar2;
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 0xb;
      }
      local_68[0] = (undefined4)*plVar1;
      uVar5 = FUN_010d9140(lVar10,local_68);
      if (((uVar5 & 0xff) == 0) && (plVar7 = *(long **)(lVar10 + 0x60), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x50))(plVar7,local_68);
      }
      puVar6 = (undefined4 *)FUN_010f8318(param_2,plVar1);
      *puVar6 = (int)(uVar5 >> 0x20);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      lVar8 = lVar8 + 1;
    } while (lVar9 >> 3 != lVar8);
  }
  return;
}


