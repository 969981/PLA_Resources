/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea677c; name: FUN_02ea677c
 */


/* WARNING: Removing unreachable block (ram,0x02ea6800) */
/* WARNING: Removing unreachable block (ram,0x02ea6808) */
/* WARNING: Removing unreachable block (ram,0x02ea68c0) */
/* WARNING: Removing unreachable block (ram,0x02ea68ec) */

undefined8 FUN_02ea677c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = FUN_02ea6934();
  if (iVar3 == 1) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (puVar5 != *(undefined8 **)(param_1 + 0x30)) {
        FUN_02f59e70(4);
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    uVar2 = *(uint *)(param_2 + 0x38);
    if ((uVar2 < *(uint *)(param_1 + 0x38)) || (uVar2 <= *(uint *)(param_1 + 0x3c))) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x3c) + (uVar2 - *(uint *)(param_1 + 0x38));
      if (1 < uVar1) {
        puVar5 = (undefined8 *)FUN_02f59e40(4,(ulong)uVar1 << 3,8);
      }
      if (puVar5 == (undefined8 *)0x0) goto LAB_02ea681c;
      *(undefined8 **)(param_1 + 0x30) = puVar5;
      *(uint *)(param_1 + 0x3c) = uVar1;
    }
    *(uint *)(param_1 + 0x38) = uVar2;
    if (((*(int *)(param_2 + 0x38) == 0) ||
        (*puVar5 = **(undefined8 **)(param_2 + 0x30), *(uint *)(param_2 + 0x38) < 2)) ||
       (*(undefined8 *)(*(long *)(param_1 + 0x30) + 8) =
             *(undefined8 *)(*(long *)(param_2 + 0x30) + 8), *(uint *)(param_2 + 0x38) < 3)) {
      uVar4 = 1;
    }
    else {
      uVar6 = 2;
      uVar4 = 1;
      do {
        lVar7 = uVar6 * 8;
        uVar6 = uVar6 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar7) =
             *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar7);
      } while (uVar6 < *(uint *)(param_2 + 0x38));
    }
  }
  else {
LAB_02ea681c:
    uVar4 = 2;
  }
  return uVar4;
}


