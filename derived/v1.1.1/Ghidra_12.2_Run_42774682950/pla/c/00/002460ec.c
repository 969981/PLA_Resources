/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002460ec; name: FUN_002460ec
 */


void FUN_002460ec(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = *param_1;
  uVar7 = *(undefined8 *)(lVar4 + 0x88);
  uVar11 = *(undefined8 *)(lVar4 + 0x98);
  uVar8 = *(undefined8 *)(lVar4 + 0x78);
  uVar9 = *(undefined8 *)(lVar4 + 0x70);
  uVar10 = *(undefined8 *)(lVar4 + 0x80);
  uVar12 = *(undefined8 *)(lVar4 + 0x90);
  if ((param_1[1] == 0) && (lVar4 = FUN_002424d0(lVar4,3), lVar4 != 0)) {
    lVar4 = FUN_002424d0(*param_1,3);
    param_1[1] = lVar4;
  }
  if ((param_1[0xb] == 0) && (lVar4 = FUN_002424d0(*param_1,4), lVar4 != 0)) {
    lVar4 = FUN_002424d0(*param_1,4);
    param_1[0xb] = lVar4;
  }
  if (param_1[1] != 0) {
    *(undefined8 *)(param_2 + 0x98) = uVar7;
    *(undefined8 *)(param_2 + 0xa8) = uVar11;
    *(undefined8 *)(param_2 + 0x88) = uVar8;
    *(undefined8 *)(param_2 + 0x90) = uVar10;
    *(undefined8 *)(param_2 + 0x80) = uVar9;
    *(undefined8 *)(param_2 + 0xa0) = uVar12;
    *(undefined1 *)(param_2 + 0x18b) = 0;
    FUN_00246308(param_1,param_2);
    if ((long *)param_1[3] == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
      bVar1 = *PTR_DAT_04372ca8;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x48))();
      bVar1 = *PTR_DAT_04372ca8;
    }
    if (((bVar1 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04372ca8), puVar2 = PTR_DAT_04372a60, iVar3 != 0)) {
      if (((*PTR_DAT_04372a58 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04372a58);
      }
      *(undefined **)PTR_DAT_04372ca0 = puVar2;
      __cxa_guard_release(PTR_DAT_04372ca8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar6 = (long *)(**(code **)*puVar5)(puVar5); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)PTR_DAT_04372ca0) {
          *(byte *)(puVar5 + 0x2b) = *(byte *)(puVar5 + 0x2b) | 2;
          break;
        }
      }
    }
  }
  if (param_1[0xb] != 0) {
    *(undefined8 *)(param_2 + 0x98) = uVar7;
    *(undefined8 *)(param_2 + 0xa8) = uVar11;
    *(undefined8 *)(param_2 + 0x88) = uVar8;
    *(undefined8 *)(param_2 + 0x90) = uVar10;
    *(undefined8 *)(param_2 + 0x80) = uVar9;
    *(undefined8 *)(param_2 + 0xa0) = uVar12;
    *(undefined1 *)(param_2 + 0x18b) = 0;
    FUN_00246584(param_1,param_2);
  }
  return;
}


