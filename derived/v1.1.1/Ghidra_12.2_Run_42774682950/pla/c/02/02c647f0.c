/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c647f0; name: FUN_02c647f0
 */


undefined8
FUN_02c647f0(undefined8 param_1,uint *param_2,uint *param_3,long param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint *puVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_78;
  undefined1 local_74;
  undefined **local_70;
  undefined4 local_68;
  undefined2 local_64;
  
  uVar5 = FUN_02c6849c(*(undefined8 *)(param_4 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_4 + 0x98));
  *param_2 = uVar5;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar9 = FUN_02c6cf3c(*(undefined8 *)(param_4 + 0x98));
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_4 + 0x98) + 0x10) + 4) >> 2 & 1) != 0) {
    return 0;
  }
  sVar3 = FUN_02c687d4(*(long *)(param_4 + 0x98));
  if (sVar3 == 0xe5) {
    return 0;
  }
  iVar6 = FUN_02c6849c(*(undefined8 *)(param_4 + 0x98));
  if ((iVar6 == 0x29e) && (sVar3 = FUN_02c6f924(*(undefined8 *)(param_4 + 0x98)), sVar3 == 5)) {
    return 0;
  }
  if (((int)uVar5 < 0x38a) && (uVar2 < 0x1c)) {
    lVar11 = *(&DAT_043f9500)[(ulong)uVar5 * 4];
    uVar9 = (&DAT_043f9500)[(ulong)uVar5 * 4][1] - lVar11 >> 3;
    if ((uVar2 < uVar9) && (*(long *)(lVar11 + (ulong)uVar2 * 8) != 0)) goto LAB_02c64904;
  }
  uVar2 = 0;
  lVar11 = *DAT_043f9500;
  uVar9 = DAT_043f9500[1] - lVar11 >> 3;
LAB_02c64904:
  if (uVar9 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar12 = *(int **)(lVar11 + (ulong)uVar2 * 8);
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (8 - (long)*piVar12)));
  uVar5 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1);
  if (uVar5 != 0) {
    uVar13 = 0;
    do {
      uVar7 = FUN_02c6849c(*(undefined8 *)(param_4 + 0x98));
      uVar4 = FUN_02c6f924(*(undefined8 *)(param_4 + 0x98));
      local_70 = &PTR_LAB_0428aca8;
      local_68 = uVar7;
      local_64 = uVar4;
      local_80 = FUN_02c551b0(&local_70,uVar13);
      local_70 = &PTR_LAB_0428aca8;
      local_68 = uVar7;
      local_64 = uVar4;
      local_7c = FUN_02c55304(&local_70,uVar13);
      local_70 = &PTR_LAB_0428aca8;
      local_68 = uVar7;
      local_64 = uVar4;
      uVar8 = FUN_02c55458(&local_70,uVar13);
      local_70 = &PTR_LAB_0428aca8;
      local_78 = uVar8;
      local_68 = uVar7;
      local_64 = uVar4;
      uVar10 = FUN_02c55700(&local_70,uVar13);
      local_74 = (undefined1)uVar10;
      uVar9 = FUN_02c64a30(uVar10,param_4,param_5,param_6,&local_80);
      if ((uVar9 & 1) != 0) {
        *param_2 = uVar8;
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar13;
        }
        return 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
  }
  return 0;
}


