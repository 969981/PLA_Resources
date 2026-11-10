/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e0b90; name: FUN_004e0b90
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_004e0b90(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int local_3c;
  int local_38;
  int local_34;
  
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_2 + 0x18);
  }
  if (8 < param_3) {
    return false;
  }
  if (*(long *)(*(long *)(param_1 + 0x488) + (long)(int)param_3 * 0x28 + 0x20) == 0) {
    return false;
  }
  lVar5 = (long)(int)param_3;
  if (*(long *)(*(long *)(param_1 + 0x488) + lVar5 * 0x28 + 0x28) == 0) {
    return false;
  }
  FUN_00402390();
  iVar2 = FUN_00423a60(*(undefined8 *)(*(long *)(param_1 + 0x488) + lVar5 * 0x28 + 0x28),&local_3c);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      bVar1 = true;
      lVar4 = *(long *)(param_1 + 0xa8);
      puVar3 = *(undefined2 **)(lVar4 + 0x2f0);
      goto joined_r0x004e0c54;
    }
    FUN_004023e0();
  }
  bVar1 = false;
  lVar4 = *(long *)(param_1 + 0xa8);
  puVar3 = *(undefined2 **)(lVar4 + 0x2f0);
joined_r0x004e0c54:
  if (puVar3 == (undefined2 *)0x0) {
    if (bVar1) {
      return *(int *)(param_2 + 0xc) == local_3c;
    }
    return true;
  }
  if (*(long *)(lVar4 + 0x300) != 0) {
    uVar6 = 0;
    if (bVar1) {
      lVar4 = FUN_004dcbd0(*puVar3);
      while( true ) {
        if (((lVar4 != 0) &&
            (iVar2 = FUN_00466cc0(*(undefined8 *)(*(long *)(param_1 + 0x488) + lVar5 * 0x28 + 0x20),
                                  &local_34,&local_38,0,0), iVar2 != 0)) &&
           ((local_34 == local_3c &&
            ((local_34 == *(int *)(lVar4 + 0xc) && (local_38 == *(int *)(lVar4 + 0x14))))))) {
          return true;
        }
        uVar6 = uVar6 + 1;
        if (*(ulong *)(*(long *)(param_1 + 0xa8) + 0x300) <= uVar6) break;
        lVar4 = FUN_004dcbd0(*(undefined2 *)
                              (*(long *)(*(long *)(param_1 + 0xa8) + 0x2f0) + uVar6 * 2));
      }
    }
    else {
      while( true ) {
        lVar4 = FUN_004dcbd0(puVar3[uVar6]);
        if ((((lVar4 != 0) &&
             (iVar2 = FUN_00466cc0(*(undefined8 *)(*(long *)(param_1 + 0x488) + lVar5 * 0x28 + 0x20)
                                   ,&local_34,&local_38,0,0), iVar2 != 0)) &&
            (local_34 == *(int *)(lVar4 + 0xc))) && (local_38 == *(int *)(lVar4 + 0x14))) {
          return true;
        }
        uVar6 = uVar6 + 1;
        if (*(ulong *)(*(long *)(param_1 + 0xa8) + 0x300) <= uVar6) break;
        puVar3 = *(undefined2 **)(*(long *)(param_1 + 0xa8) + 0x2f0);
      }
    }
  }
  return false;
}


