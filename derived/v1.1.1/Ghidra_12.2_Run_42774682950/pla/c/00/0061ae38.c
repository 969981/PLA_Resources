/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061ae38; name: FUN_0061ae38
 */


/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_0061ae38(long *param_1,ulong *******param_2,byte *param_3,ulong *param_4,ulong *param_5)

{
  ulong __n;
  ulong *******pppppppuVar1;
  byte bVar2;
  ulong *******pppppppuVar3;
  long *plVar4;
  ulong *******pppppppuVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong *******pppppppuVar9;
  ulong uVar10;
  byte *__dest;
  ulong uVar11;
  ulong uVar12;
  ulong ******ppppppuVar13;
  ulong ******ppppppuVar14;
  ulong ******ppppppuVar15;
  ulong *******local_78;
  ulong *******pppppppuStack_70;
  ulong *******local_68;
  ulong ******local_60;
  long *local_58;
  
  lVar6 = *param_1;
  pppppppuVar1 = (ulong *******)param_1[1];
  uVar12 = (long)param_2 - lVar6 >> 5;
  if (pppppppuVar1 < (ulong *******)param_1[2]) {
    if (param_2 != pppppppuVar1) {
      FUN_0061bd88(&local_78,param_1 + 3,param_3,param_4,param_5);
                    /* try { // try from 0061aea4 to 0061aeaf has its CatchHandler @ 0061b304 */
      FUN_0061be64(param_1,param_2,param_1[1],param_2 + 4);
      lVar6 = lVar6 + uVar12 * 0x20;
      plVar4 = *(long **)(lVar6 + 0x18);
      if (((ulong ******)plVar4 == local_60) ||
         (uVar12 = (**(code **)(*plVar4 + 0x20))(), (uVar12 & 1) != 0)) {
        if (((ulong)*param_2 & 1) == 0) {
          *(undefined2 *)param_2 = 0;
        }
        else {
          **(undefined1 **)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 8) = 0;
          if (((ulong)*param_2 & 1) != 0) {
            plVar4 = *(long **)(lVar6 + 0x18);
            (**(code **)(*plVar4 + 0x18))
                      (plVar4,*(undefined8 *)(lVar6 + 0x10),(ulong)*param_2 & 0xfffffffffffffffe,1);
            *param_2 = (ulong ******)0x0;
          }
        }
        param_2[2] = (ulong ******)local_68;
        param_2[1] = (ulong ******)pppppppuStack_70;
        *param_2 = (ulong ******)local_78;
        return param_2;
      }
      if ((ulong ********)param_2 != &local_78) {
        pppppppuVar1 = (ulong *******)((ulong)local_78 >> 1 & 0x7f);
        pppppppuVar5 = (ulong *******)((ulong)&local_78 | 1);
        if (((ulong)local_78 & 1) != 0) {
          pppppppuVar1 = pppppppuStack_70;
          pppppppuVar5 = local_68;
        }
                    /* try { // try from 0061b250 to 0061b257 has its CatchHandler @ 0061b304 */
        FUN_02762710(param_2,pppppppuVar5,pppppppuVar1);
      }
      if (((ulong)local_78 & 1) == 0) {
        return param_2;
      }
      (**(code **)((long)*local_60 + 0x18))
                (local_60,local_68,(ulong)local_78 & 0xfffffffffffffffe,1);
      return param_2;
    }
    uVar11 = *param_4;
    uVar10 = *param_5;
    plVar4 = (long *)FUN_00612290();
    lVar6 = lVar6 + uVar12 * 0x20;
    param_2[1] = (ulong ******)0x0;
    param_2[2] = (ulong ******)0x0;
    *param_2 = (ulong ******)0x0;
    *(long **)(lVar6 + 0x18) = plVar4;
    bVar2 = *param_3;
    uVar12 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar12 = *(ulong *)(param_3 + 8);
    }
    if (uVar12 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar8 = *(byte **)(param_3 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    __n = uVar12 - uVar11;
    if (uVar10 <= uVar12 - uVar11) {
      __n = uVar10;
    }
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      __dest = (byte *)((long)param_2 + 1);
      *(byte *)param_2 = (byte)((int)__n << 1);
      if (__n == 0) goto LAB_0061b2bc;
    }
    else {
      uVar12 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar12,1);
      *(ulong *)(lVar6 + 8) = __n;
      *(byte **)(lVar6 + 0x10) = __dest;
      *param_2 = (ulong ******)(uVar12 | 1);
    }
    memcpy(__dest,pbVar8 + uVar11,__n);
LAB_0061b2bc:
    __dest[__n] = 0;
    param_1[1] = param_1[1] + 0x20;
    return param_2;
  }
  uVar10 = ((long)pppppppuVar1 - lVar6 >> 5) + 1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - lVar6;
  local_58 = param_1 + 3;
  if ((ulong)(lVar7 >> 5) < 0x3ffffffffffffff) {
    uVar11 = lVar7 >> 4;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (uVar10 == 0) {
      local_78 = (ulong *******)0x0;
      goto LAB_0061af5c;
    }
  }
  else {
    uVar10 = 0x7ffffffffffffff;
  }
  local_60 = (ulong ******)0x0;
  local_78 = (ulong *******)
             (**(code **)(*(long *)*local_58 + 0x10))((long *)*local_58,uVar10 << 5,8);
LAB_0061af5c:
  pppppppuStack_70 = local_78 + uVar12 * 4;
  local_60 = (ulong ******)(local_78 + uVar10 * 4);
                    /* try { // try from 0061af6c to 0061af7f has its CatchHandler @ 0061b324 */
  local_68 = pppppppuStack_70;
  FUN_0061c010(&local_78,param_3,param_4,param_5);
  pppppppuVar1 = pppppppuStack_70;
  pppppppuVar5 = (ulong *******)*param_1;
  if (pppppppuVar5 != param_2) {
    uVar10 = ((lVar6 + uVar12 * 0x20) - (long)pppppppuVar5) - 0x20;
    pppppppuVar9 = param_2;
    if (((uint)uVar10 >> 5 & 1) == 0) {
      ppppppuVar13 = param_2[-4];
      ppppppuVar15 = param_2[-1];
      ppppppuVar14 = param_2[-2];
      pppppppuStack_70[-3] = param_2[-3];
      pppppppuStack_70[-4] = ppppppuVar13;
      pppppppuStack_70[-1] = ppppppuVar15;
      pppppppuStack_70[-2] = ppppppuVar14;
      param_2[-4] = (ulong ******)0x0;
      param_2[-3] = (ulong ******)0x0;
      param_2[-2] = (ulong ******)0x0;
      pppppppuStack_70 = pppppppuStack_70 + -4;
      pppppppuVar9 = param_2 + -4;
    }
    if (0x1f < uVar10) {
      do {
        ppppppuVar13 = pppppppuVar9[-4];
        ppppppuVar15 = pppppppuVar9[-1];
        ppppppuVar14 = pppppppuVar9[-2];
        pppppppuStack_70[-3] = pppppppuVar9[-3];
        pppppppuStack_70[-4] = ppppppuVar13;
        pppppppuStack_70[-1] = ppppppuVar15;
        pppppppuStack_70[-2] = ppppppuVar14;
        pppppppuVar9[-4] = (ulong ******)0x0;
        pppppppuVar9[-3] = (ulong ******)0x0;
        pppppppuVar9[-2] = (ulong ******)0x0;
        ppppppuVar13 = pppppppuVar9[-8];
        ppppppuVar15 = pppppppuVar9[-5];
        ppppppuVar14 = pppppppuVar9[-6];
        pppppppuStack_70[-7] = pppppppuVar9[-7];
        pppppppuStack_70[-8] = ppppppuVar13;
        pppppppuStack_70[-5] = ppppppuVar15;
        pppppppuStack_70[-6] = ppppppuVar14;
        pppppppuVar9[-8] = (ulong ******)0x0;
        pppppppuVar9[-7] = (ulong ******)0x0;
        pppppppuVar9[-6] = (ulong ******)0x0;
        pppppppuVar9 = pppppppuVar9 + -8;
        pppppppuStack_70 = pppppppuStack_70 + -8;
      } while (pppppppuVar5 != pppppppuVar9);
    }
  }
  pppppppuVar5 = (ulong *******)param_1[1];
  if (pppppppuVar5 != param_2) {
    pbVar8 = (byte *)((long)pppppppuVar5 + (~uVar12 * 0x20 - lVar6));
    pppppppuVar9 = param_2;
    if (((uint)pbVar8 >> 5 & 1) == 0) {
      ppppppuVar13 = *param_2;
      ppppppuVar15 = param_2[3];
      ppppppuVar14 = param_2[2];
      local_68[1] = param_2[1];
      *local_68 = ppppppuVar13;
      local_68[3] = ppppppuVar15;
      local_68[2] = ppppppuVar14;
      param_2[1] = (ulong ******)0x0;
      param_2[2] = (ulong ******)0x0;
      pppppppuVar9 = param_2 + 4;
      *param_2 = (ulong ******)0x0;
      local_68 = local_68 + 4;
    }
    if ((byte *)0x1f < pbVar8) {
      do {
        ppppppuVar13 = *pppppppuVar9;
        ppppppuVar15 = pppppppuVar9[3];
        ppppppuVar14 = pppppppuVar9[2];
        local_68[1] = pppppppuVar9[1];
        *local_68 = ppppppuVar13;
        local_68[3] = ppppppuVar15;
        local_68[2] = ppppppuVar14;
        *pppppppuVar9 = (ulong ******)0x0;
        pppppppuVar9[1] = (ulong ******)0x0;
        pppppppuVar9[2] = (ulong ******)0x0;
        ppppppuVar13 = pppppppuVar9[4];
        ppppppuVar15 = pppppppuVar9[7];
        ppppppuVar14 = pppppppuVar9[6];
        local_68[5] = pppppppuVar9[5];
        local_68[4] = ppppppuVar13;
        local_68[7] = ppppppuVar15;
        local_68[6] = ppppppuVar14;
        pppppppuVar9[4] = (ulong ******)0x0;
        pppppppuVar9[5] = (ulong ******)0x0;
        pppppppuVar9[6] = (ulong ******)0x0;
        pppppppuVar9 = pppppppuVar9 + 8;
        local_68 = local_68 + 8;
      } while (pppppppuVar9 != pppppppuVar5);
    }
    pppppppuVar5 = (ulong *******)param_1[1];
  }
  pppppppuVar9 = (ulong *******)*param_1;
  *param_1 = (long)pppppppuStack_70;
  param_1[1] = (long)local_68;
  lVar6 = param_1[2];
  param_1[2] = (long)local_60;
  local_78 = pppppppuVar9;
  pppppppuStack_70 = pppppppuVar9;
  local_60 = (ulong ******)lVar6;
  while (pppppppuVar3 = pppppppuVar5, pppppppuVar3 != pppppppuVar9) {
    local_68 = pppppppuVar3 + -4;
    pppppppuVar5 = local_68;
    if (((ulong)pppppppuVar3[-4] & 1) != 0) {
      (*(code *)(*pppppppuVar3[-1])[3])
                (pppppppuVar3[-1],pppppppuVar3[-2],(ulong)pppppppuVar3[-4] & 0xfffffffffffffffe,1);
      pppppppuVar5 = local_68;
    }
  }
  if (local_78 != (ulong *******)0x0) {
    local_68 = pppppppuVar3;
    (**(code **)(*(long *)*local_58 + 0x18))
              ((long *)*local_58,local_78,(long)local_60 - (long)local_78,8);
  }
  return pppppppuVar1;
}


