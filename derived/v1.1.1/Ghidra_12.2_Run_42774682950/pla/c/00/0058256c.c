/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058256c; name: FUN_0058256c
 */


long * FUN_0058256c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_60;
  long *plStack_58;
  long *local_50;
  long local_48;
  long *plStack_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined1 local_32;
  
  lVar5 = *param_1;
  plVar1 = (long *)param_1[1];
  lVar6 = (long)param_2 - lVar5 >> 4;
  if (plVar1 < (long *)param_1[2]) {
    plVar10 = param_2;
    if (param_2 == plVar1) {
      lVar5 = lVar5 + lVar6 * 0x10;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0x7b2;
      *(undefined4 *)(lVar5 + 0x18) = 0x101;
      *(undefined1 *)(lVar5 + 0x1c) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0x7b2;
      *(undefined4 *)(lVar5 + 0x28) = 0x101;
      *(undefined1 *)(lVar5 + 0x2c) = 0;
      param_1[1] = param_1[1] + 0x30;
    }
    else {
      sVar3 = (long)plVar1 + (-0x30 - (long)param_2);
      plVar7 = plVar1 + -6;
      local_60 = 0;
      plStack_58 = (long *)0x0;
      local_34 = 0;
      local_32 = 0;
      local_38 = 0;
      local_36 = 0;
      if (plVar7 < plVar1) {
        plVar8 = plVar1;
        do {
          lVar12 = plVar7[1];
          lVar11 = *plVar7;
          plVar2 = plVar7 + 3;
          lVar13 = plVar7[2];
          lVar15 = plVar7[5];
          lVar14 = plVar7[4];
          plVar7 = plVar7 + 6;
          plVar8[3] = *plVar2;
          plVar8[2] = lVar13;
          plVar8[5] = lVar15;
          plVar8[4] = lVar14;
          plVar8[1] = lVar12;
          *plVar8 = lVar11;
          plVar8 = (long *)(param_1[1] + 0x30);
          param_1[1] = (long)plVar8;
        } while (plVar7 < plVar1);
      }
      if (sVar3 != 0) {
        memmove((void *)((long)plVar1 - sVar3),param_2,sVar3);
      }
      lVar5 = lVar5 + lVar6 * 0x10;
      param_2[1] = (long)plStack_58;
      *param_2 = local_60;
      *(undefined8 *)(lVar5 + 0x10) = 0x7b2;
      *(undefined4 *)(lVar5 + 0x18) = 0x101;
      *(undefined1 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 0x1f) = local_32;
      *(undefined2 *)(lVar5 + 0x1d) = local_34;
      *(undefined8 *)(lVar5 + 0x20) = 0x7b2;
      *(undefined4 *)(lVar5 + 0x28) = 0x101;
      *(undefined1 *)(lVar5 + 0x2c) = 0;
      *(undefined1 *)(lVar5 + 0x2f) = local_36;
      *(undefined2 *)(lVar5 + 0x2d) = local_38;
    }
  }
  else {
    uVar4 = ((long)plVar1 - lVar5 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - lVar5 >> 4;
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    plStack_40 = param_1 + 2;
    uVar9 = 0x555555555555555;
    if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar9 = uVar4;
    }
    local_48 = 0;
    if (uVar9 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = FUN_002e2e80(PTR_FUN_04373078,uVar9 * 0x30);
    }
    plStack_58 = (long *)(local_60 + lVar6 * 0x10);
    local_48 = local_60 + uVar9 * 0x30;
    local_50 = plStack_58;
                    /* try { // try from 00582738 to 0058273f has its CatchHandler @ 0058281c */
    FUN_00586c10(&local_60);
    plVar10 = plStack_58;
    sVar3 = (long)param_2 - *param_1;
    plStack_58 = (long *)((long)plStack_58 - sVar3);
    if (0 < (long)sVar3) {
      memcpy(plStack_58,(void *)*param_1,sVar3);
    }
    lVar5 = param_1[1];
    sVar3 = lVar5 - (long)param_2;
    if (0 < (long)sVar3) {
      memcpy(local_50,param_2,sVar3);
      local_50 = local_50 + (sVar3 / 0x30) * 6;
      lVar5 = param_1[1];
    }
    local_60 = *param_1;
    *param_1 = (long)plStack_58;
    param_1[1] = (long)local_50;
    lVar6 = param_1[2];
    param_1[2] = local_48;
    local_50 = (long *)lVar5;
    if (lVar5 - local_60 != 0) {
      local_50 = (long *)(lVar5 + (((lVar5 - local_60) - 0x30U) / 0x30 ^ 0xffffffffffffffff) * 0x30)
      ;
    }
    if (local_60 != 0) {
      plStack_58 = (long *)local_60;
      local_48 = lVar6;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  return plVar10;
}


