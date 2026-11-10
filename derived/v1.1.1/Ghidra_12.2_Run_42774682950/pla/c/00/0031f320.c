/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031f320; name: FUN_0031f320
 */


void FUN_0031f320(byte *param_1)

{
  size_t __n;
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
    if (bVar1 >> 1 == 0) {
LAB_0031f344:
      uVar6 = 0;
      if ((int)uVar5 == 0) {
LAB_0031f3f4:
        if ((bVar1 & 1) == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          return;
        }
        **(undefined1 **)(param_1 + 0x10) = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        return;
      }
LAB_0031f40c:
      iVar4 = (int)uVar5;
      if (uVar6 != 0) {
        uVar5 = (ulong)uVar6;
        if ((bVar1 & 1) == 0) {
          uVar2 = (ulong)(bVar1 >> 1);
          pbVar3 = param_1 + 1;
          uVar7 = uVar2;
          if (uVar5 <= uVar2) {
            uVar7 = uVar5;
          }
          __n = uVar2 - uVar7;
        }
        else {
          uVar2 = *(ulong *)(param_1 + 8);
          pbVar3 = *(byte **)(param_1 + 0x10);
          uVar7 = uVar2;
          if (uVar5 <= uVar2) {
            uVar7 = uVar5;
          }
          __n = uVar2 - uVar7;
        }
        if (__n != 0) {
          memmove(pbVar3,pbVar3 + uVar7,__n);
          bVar1 = *param_1;
        }
        if ((bVar1 & 1) == 0) {
          *param_1 = (byte)((int)__n << 1);
        }
        else {
          *(size_t *)(param_1 + 8) = __n;
        }
        iVar4 = iVar4 - uVar6;
        pbVar3[__n] = 0;
      }
      if (0 < iVar4) {
        bVar1 = *param_1;
        uVar2 = (ulong)(bVar1 >> 1);
        uVar5 = (ulong)iVar4;
        uVar7 = uVar5;
        if ((bVar1 & 1) == 0) {
          do {
            uVar5 = uVar7 - 1;
            if (uVar2 <= uVar5) goto LAB_0031f574;
            if ((4 < param_1[uVar7] - 9) && (param_1[uVar7] != 0x20)) goto LAB_0031f524;
            uVar7 = uVar5;
          } while (0 < (long)uVar5);
        }
        else {
          do {
            uVar5 = uVar5 - 1;
            if (*(ulong *)(param_1 + 8) <= uVar5) goto LAB_0031f574;
            if ((4 < *(byte *)(*(long *)(param_1 + 0x10) + uVar5) - 9) &&
               (*(byte *)(*(long *)(param_1 + 0x10) + uVar5) != 0x20)) goto LAB_0031f524;
          } while (0 < (long)uVar5);
        }
      }
      return;
    }
  }
  else {
    uVar5 = (ulong)*(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) < 1) goto LAB_0031f344;
  }
  uVar7 = 0;
  if ((bVar1 & 1) == 0) {
    if ((ulong)(bVar1 >> 1) != 0) {
      do {
        if (((4 < param_1[uVar7 + 1] - 9) && (param_1[uVar7 + 1] != 0x20)) ||
           (uVar7 = uVar7 + 1, uVar5 == uVar7)) goto LAB_0031f3ec;
      } while (bVar1 >> 1 != uVar7);
    }
  }
  else if (*(ulong *)(param_1 + 8) != 0) {
    do {
      if (((4 < *(byte *)(*(long *)(param_1 + 0x10) + uVar7) - 9) &&
          (*(byte *)(*(long *)(param_1 + 0x10) + uVar7) != 0x20)) ||
         (uVar7 = uVar7 + 1, uVar5 == uVar7)) goto LAB_0031f3ec;
    } while (uVar7 < *(ulong *)(param_1 + 8));
  }
LAB_0031f574:
                    /* WARNING: Subroutine does not return */
  std::__basic_string_common<true>::__throw_out_of_range();
LAB_0031f3ec:
  uVar6 = (uint)uVar7;
  if (uVar6 == (uint)uVar5) goto LAB_0031f3f4;
  goto LAB_0031f40c;
LAB_0031f524:
  if (iVar4 + -1 == (int)uVar5) {
    return;
  }
  uVar5 = (long)(int)uVar5 + 1;
  if ((bVar1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (uVar5 <= uVar2) {
    if ((bVar1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      *param_1 = (byte)((int)uVar5 << 1);
    }
    else {
      pbVar3 = *(byte **)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) = uVar5;
    }
    pbVar3[uVar5] = 0;
    return;
  }
  goto LAB_0031f574;
}


