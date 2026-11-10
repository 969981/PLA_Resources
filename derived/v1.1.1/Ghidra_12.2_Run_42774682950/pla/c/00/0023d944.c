/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023d944; name: FUN_0023d944
 */


void FUN_0023d944(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  
  puVar5 = PTR_DAT_04372cd0;
  puVar4 = PTR_DAT_04372cc8;
  puVar3 = PTR_DAT_04372cc0;
  puVar2 = PTR_DAT_04372cb8;
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    uVar10 = 0;
    puVar9 = *(ushort **)(param_1 + 0x18);
    lVar11 = 0;
    uVar1 = *puVar9;
    if ((uVar1 >> 8 & 1) == 0) goto LAB_0023da14;
LAB_0023da54:
    plVar8 = (long *)(**(code **)(**(long **)(puVar9 + uVar10 * 8 + 4) + 0x48))();
    if (plVar8 == (long *)0x0) goto LAB_0023d9d8;
LAB_0023d9ac:
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
    (**(code **)(*plVar8 + 8))(plVar8);
    FUN_00232674(plVar8);
LAB_0023d9d8:
    while( true ) {
      FUN_0024bc28(*(long *)(param_1 + 0x18) + lVar11);
      FUN_0024bc24(*(long *)(param_1 + 0x18) + lVar11);
      uVar10 = uVar10 + 1;
      if (((ulong)*(uint *)(param_1 + 0x10) & 3) <= uVar10) break;
      puVar9 = *(ushort **)(param_1 + 0x18);
      lVar11 = uVar10 * 0x10;
      uVar1 = puVar9[uVar10 * 8];
      if ((uVar1 >> 8 & 1) != 0) goto LAB_0023da54;
LAB_0023da14:
      if ((uVar1 >> 0xc & 1) != 0) {
        plVar8 = *(long **)(puVar9 + uVar10 * 8 + 4);
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            *(undefined8 *)puVar5 = 0;
            __cxa_guard_release(puVar4);
            *(undefined **)puVar2 = puVar5;
            __cxa_guard_release(puVar3);
          }
          else {
            *(undefined **)puVar2 = puVar5;
            __cxa_guard_release(puVar3);
          }
        }
        if (plVar8 != (long *)0x0) {
          for (plVar7 = (long *)(**(code **)*plVar8)(plVar8); plVar7 != (long *)0x0;
              plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar2) goto LAB_0023d9ac;
          }
        }
      }
    }
  }
  return;
}


