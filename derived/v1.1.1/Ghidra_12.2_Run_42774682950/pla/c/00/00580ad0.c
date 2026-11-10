/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580ad0; name: FUN_00580ad0
 */


void FUN_00580ad0(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  size_t sVar3;
  byte *__dest;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_00580880();
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0x12) {
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    *(undefined8 *)pbVar5 = *(undefined8 *)(pbVar5 + 9);
    pbVar5[8] = pbVar5[0x11];
    if ((*param_1 & 1) == 0) {
      *param_1 = 0x12;
    }
    else {
      param_1[8] = 9;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    pbVar5[9] = 0;
    bVar2 = *param_1;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    if (uVar1 < 6) {
                    /* try { // try from 00580d20 to 00580d3f has its CatchHandler @ 00580d40 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar5 = param_1 + 1;
    pbVar4 = pbVar5;
    if ((bVar2 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x10);
    }
    uVar8 = (ulong)(uVar1 - 6 != 0);
    sVar3 = (uVar1 - 6) - uVar8;
    if (sVar3 != 0) {
      memmove(pbVar4 + 6,pbVar4 + 6 + uVar8,sVar3);
      bVar2 = *param_1;
    }
    lVar6 = uVar1 - uVar8;
    if ((bVar2 & 1) == 0) {
      *param_1 = (byte)((int)lVar6 << 1);
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar4[lVar6] = 0;
    bVar2 = *param_1;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar4 = pbVar5;
    if ((bVar2 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x10);
    }
    uVar8 = (ulong)(uVar1 - 3 != 0);
    sVar3 = (uVar1 - 3) - uVar8;
    if (sVar3 != 0) {
      memmove(pbVar4 + 3,pbVar4 + 3 + uVar8,sVar3);
      bVar2 = *param_1;
    }
    lVar6 = uVar1 - uVar8;
    if ((bVar2 & 1) == 0) {
      *param_1 = (byte)((int)lVar6 << 1);
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar4[lVar6] = 0;
    bVar2 = *param_1;
    pbVar4 = pbVar5;
    if ((bVar2 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x10);
    }
    __dest = pbVar4 + 5;
    if ((*__dest == 0x30) && (pbVar4[6] == 0x30)) {
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      if (uVar1 < 5) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar7 = uVar1 - 5;
      uVar8 = uVar7;
      if (1 < uVar7) {
        uVar8 = 2;
      }
      if (uVar7 - uVar8 != 0) {
        memmove(__dest,__dest + uVar8,uVar7 - uVar8);
        bVar2 = *param_1;
      }
      lVar6 = uVar1 - uVar8;
      if ((bVar2 & 1) == 0) {
        *param_1 = (byte)((int)lVar6 << 1);
      }
      else {
        *(long *)(param_1 + 8) = lVar6;
      }
      pbVar4[lVar6] = 0;
      bVar2 = *param_1;
      if ((bVar2 & 1) != 0) {
        pbVar5 = *(byte **)(param_1 + 0x10);
      }
      pbVar4 = pbVar5 + 3;
      if ((*pbVar4 == 0x30) && (pbVar5[4] == 0x30)) {
        uVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar1 = *(ulong *)(param_1 + 8);
        }
        if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar7 = uVar1 - 3;
        uVar8 = uVar7;
        if (1 < uVar7) {
          uVar8 = 2;
        }
        if (uVar7 - uVar8 != 0) {
          memmove(pbVar4,pbVar4 + uVar8,uVar7 - uVar8);
          bVar2 = *param_1;
        }
        lVar6 = uVar1 - uVar8;
        if ((bVar2 & 1) == 0) {
          *param_1 = (byte)((int)lVar6 << 1);
        }
        else {
          *(long *)(param_1 + 8) = lVar6;
        }
        pbVar5[lVar6] = 0;
      }
    }
  }
  return;
}


