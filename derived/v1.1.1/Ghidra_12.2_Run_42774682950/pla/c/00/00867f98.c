/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867f98; name: FUN_00867f98
 */


void FUN_00867f98(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  long *plStack_60;
  byte local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  long *plStack_40;
  
  FUN_00868234(&local_78,"nn::pia::npln::NplnPlugin",param_2,param_3,param_4 & 1);
  lVar9 = *(long *)(param_1 + 0x698);
  if (lVar9 != *(long *)(param_1 + 0x6a0)) {
    FUN_00868aa0(lVar9,&local_78);
    *(long *)(param_1 + 0x698) = *(long *)(param_1 + 0x698) + 0x48;
    goto joined_r0x00868160;
  }
  lVar9 = lVar9 - *(long *)(param_1 + 0x690) >> 3;
  uVar15 = 0x38e38e38e38e38e;
  uVar1 = lVar9 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(param_1 + 0x6a0) - *(long *)(param_1 + 0x690) >> 3;
  if ((ulong)(lVar10 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
    uVar11 = lVar10 * 0x1c71c71c71c71c72;
    uVar15 = uVar1;
    if (uVar1 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar15 != 0) goto LAB_0086806c;
    lVar10 = 0;
  }
  else {
LAB_0086806c:
    lVar10 = (**(code **)(**(long **)(param_1 + 0x6a8) + 0x10))
                       (*(long **)(param_1 + 0x6a8),uVar15 * 0x48,8);
  }
  lVar14 = lVar10 + lVar9 * 8;
  FUN_00868aa0(lVar14,&local_78);
  lVar16 = *(long *)(param_1 + 0x690);
  lVar9 = lVar14 + 0x48;
  lVar13 = *(long *)(param_1 + 0x698);
  if (lVar13 == lVar16) {
    lVar13 = lVar16;
  }
  else {
    lVar12 = 0;
    do {
      lVar2 = lVar13 + lVar12;
      uVar4 = *(undefined8 *)(lVar2 + -0x48);
      uVar5 = *(undefined8 *)(lVar2 + -0x40);
      uVar6 = *(undefined8 *)(lVar2 + -0x30);
      lVar3 = lVar14 + lVar12;
      lVar12 = lVar12 + -0x48;
      *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar2 + -0x38);
      *(undefined8 *)(lVar3 + -0x30) = uVar6;
      *(undefined8 *)(lVar3 + -0x48) = uVar4;
      *(undefined8 *)(lVar3 + -0x40) = uVar5;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      uVar4 = *(undefined8 *)(lVar2 + -0x28);
      uVar5 = *(undefined8 *)(lVar2 + -0x20);
      uVar6 = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar2 + -0x48) = 0;
      *(undefined8 *)(lVar2 + -0x40) = 0;
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(lVar3 + -0x10) = uVar6;
      *(undefined8 *)(lVar3 + -0x28) = uVar4;
      *(undefined8 *)(lVar3 + -0x20) = uVar5;
      uVar7 = *(undefined4 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -0x28) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined1 *)(lVar3 + -4) = *(undefined1 *)(lVar2 + -4);
      *(undefined4 *)(lVar3 + -8) = uVar7;
    } while (lVar16 - lVar13 != lVar12);
    lVar16 = *(long *)(param_1 + 0x690);
    lVar14 = lVar14 + lVar12;
    lVar13 = *(long *)(param_1 + 0x698);
  }
  *(long *)(param_1 + 0x690) = lVar14;
  lVar14 = *(long *)(param_1 + 0x6a0);
  *(long *)(param_1 + 0x698) = lVar9;
  *(ulong *)(param_1 + 0x6a0) = lVar10 + uVar15 * 0x48;
  for (; lVar13 != lVar16; lVar13 = lVar13 + -0x48) {
    if ((*(byte *)(lVar13 + -0x28) & 1) == 0) {
      bVar8 = *(byte *)(lVar13 + -0x48);
    }
    else {
      (**(code **)(**(long **)(lVar13 + -0x10) + 0x18))
                (*(long **)(lVar13 + -0x10),*(undefined8 *)(lVar13 + -0x18),
                 *(ulong *)(lVar13 + -0x28) & 0xfffffffffffffffe,1);
      bVar8 = *(byte *)(lVar13 + -0x48);
    }
    if ((bVar8 & 1) != 0) {
      (**(code **)(**(long **)(lVar13 + -0x30) + 0x18))
                (*(long **)(lVar13 + -0x30),*(undefined8 *)(lVar13 + -0x38),
                 *(ulong *)(lVar13 + -0x48) & 0xfffffffffffffffe,1);
    }
  }
  if (lVar16 != 0) {
    (**(code **)(**(long **)(param_1 + 0x6a8) + 0x18))
              (*(long **)(param_1 + 0x6a8),lVar16,lVar14 - lVar16,8);
  }
joined_r0x00868160:
  if ((local_58 & 1) != 0) {
    (**(code **)(*plStack_40 + 0x18))
              (plStack_40,local_48,CONCAT71(uStack_57,local_58) & 0xfffffffffffffffe,1);
  }
  if ((local_78 & 1) != 0) {
    (**(code **)(*plStack_60 + 0x18))
              (plStack_60,local_68,CONCAT71(uStack_77,local_78) & 0xfffffffffffffffe,1);
  }
  return;
}


