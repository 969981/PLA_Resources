/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006172f4; name: FUN_006172f4
 */


void FUN_006172f4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Result *pRVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_60 [2];
  int local_58 [2];
  
  pRVar4 = (Result *)local_60;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar12 = param_2[3];
  uVar2 = param_2[2];
  uVar14 = param_2[5];
  uVar13 = param_2[4];
  uVar15 = param_2[6];
  uVar17 = param_2[9];
  uVar16 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar15;
  param_1[9] = uVar17;
  param_1[8] = uVar16;
  param_1[3] = uVar12;
  param_1[2] = uVar2;
  param_1[5] = uVar14;
  param_1[4] = uVar13;
  plVar7 = (long *)*param_2;
  param_1[10] = plVar7;
  uVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,0x148,8);
  FUN_00784460(uVar2,param_1[10]);
  param_1[0xb] = uVar2;
  param_1[0xc] = plVar7;
  uVar10 = param_2[1];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar7 = (long *)FUN_00612290();
  param_1[0x10] = plVar7;
  if (uVar10 != 0) {
    if (0x92492492492492 < uVar10) {
                    /* try { // try from 006176b8 to 006176bf has its CatchHandler @ 00617718 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar10 * 0x1c0,8);
    param_1[0xf] = puVar3 + uVar10 * 0x38;
    param_1[0xd] = puVar3;
    param_1[0xe] = puVar3;
    uVar6 = uVar10;
    if ((uVar10 & 1) != 0) {
      uVar6 = uVar10 - 1;
      puVar3[0x35] = 0;
      puVar3[0x34] = 0;
      puVar3[0x37] = 0;
      puVar3[0x36] = 0;
      puVar3[0x31] = 0;
      puVar3[0x30] = 0;
      puVar3[0x33] = 0;
      puVar3[0x32] = 0;
      puVar3[0x2d] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x2e] = 0;
      puVar3[0x29] = 0;
      puVar3[0x28] = 0;
      puVar3[0x2b] = 0;
      puVar3[0x2a] = 0;
      puVar3[0x25] = 0;
      puVar3[0x24] = 0;
      puVar3[0x27] = 0;
      puVar3[0x26] = 0;
      puVar3[0x21] = 0;
      puVar3[0x20] = 0;
      puVar3[0x23] = 0;
      puVar3[0x22] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1f] = 0;
      puVar3[0x1e] = 0;
      puVar3[0x19] = 0;
      puVar3[0x18] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0x17] = 0;
      puVar3[0x16] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3 = (undefined8 *)(param_1[0xe] + 0x1c0);
      param_1[0xe] = puVar3;
    }
    if (uVar10 != 1) {
      do {
        puVar3[0x35] = 0;
        puVar3[0x34] = 0;
        puVar3[0x37] = 0;
        puVar3[0x36] = 0;
        uVar6 = uVar6 - 2;
        puVar3[0x31] = 0;
        puVar3[0x30] = 0;
        puVar3[0x33] = 0;
        puVar3[0x32] = 0;
        puVar3[0x2d] = 0;
        puVar3[0x2c] = 0;
        puVar3[0x2f] = 0;
        puVar3[0x2e] = 0;
        puVar3[0x29] = 0;
        puVar3[0x28] = 0;
        puVar3[0x2b] = 0;
        puVar3[0x2a] = 0;
        puVar3[0x25] = 0;
        puVar3[0x24] = 0;
        puVar3[0x27] = 0;
        puVar3[0x26] = 0;
        puVar3[0x21] = 0;
        puVar3[0x20] = 0;
        puVar3[0x23] = 0;
        puVar3[0x22] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1c] = 0;
        puVar3[0x1f] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x19] = 0;
        puVar3[0x18] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
        puVar3[0x17] = 0;
        puVar3[0x16] = 0;
        puVar3[0x11] = 0;
        puVar3[0x10] = 0;
        puVar3[0x13] = 0;
        puVar3[0x12] = 0;
        puVar3[0xd] = 0;
        puVar3[0xc] = 0;
        puVar3[0xf] = 0;
        puVar3[0xe] = 0;
        puVar3[9] = 0;
        puVar3[8] = 0;
        puVar3[0xb] = 0;
        puVar3[10] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        lVar5 = param_1[0xe];
        param_1[0xe] = lVar5 + 0x1c0;
        *(undefined8 *)(lVar5 + 0x368) = 0;
        *(undefined8 *)(lVar5 + 0x360) = 0;
        *(undefined8 *)(lVar5 + 0x378) = 0;
        *(undefined8 *)(lVar5 + 0x370) = 0;
        *(undefined8 *)(lVar5 + 0x348) = 0;
        *(undefined8 *)(lVar5 + 0x340) = 0;
        *(undefined8 *)(lVar5 + 0x358) = 0;
        *(undefined8 *)(lVar5 + 0x350) = 0;
        *(undefined8 *)(lVar5 + 0x328) = 0;
        *(undefined8 *)(lVar5 + 800) = 0;
        *(undefined8 *)(lVar5 + 0x338) = 0;
        *(undefined8 *)(lVar5 + 0x330) = 0;
        *(undefined8 *)(lVar5 + 0x308) = 0;
        *(undefined8 *)(lVar5 + 0x300) = 0;
        *(undefined8 *)(lVar5 + 0x318) = 0;
        *(undefined8 *)(lVar5 + 0x310) = 0;
        *(undefined8 *)(lVar5 + 0x2e8) = 0;
        *(undefined8 *)(lVar5 + 0x2e0) = 0;
        *(undefined8 *)(lVar5 + 0x2f8) = 0;
        *(undefined8 *)(lVar5 + 0x2f0) = 0;
        *(undefined8 *)(lVar5 + 0x2c8) = 0;
        *(undefined8 *)(lVar5 + 0x2c0) = 0;
        *(undefined8 *)(lVar5 + 0x2d8) = 0;
        *(undefined8 *)(lVar5 + 0x2d0) = 0;
        *(undefined8 *)(lVar5 + 0x2a8) = 0;
        *(undefined8 *)(lVar5 + 0x2a0) = 0;
        *(undefined8 *)(lVar5 + 0x2b8) = 0;
        *(undefined8 *)(lVar5 + 0x2b0) = 0;
        *(undefined8 *)(lVar5 + 0x288) = 0;
        *(undefined8 *)(lVar5 + 0x280) = 0;
        *(undefined8 *)(lVar5 + 0x298) = 0;
        *(undefined8 *)(lVar5 + 0x290) = 0;
        *(undefined8 *)(lVar5 + 0x268) = 0;
        *(undefined8 *)(lVar5 + 0x260) = 0;
        *(undefined8 *)(lVar5 + 0x278) = 0;
        *(undefined8 *)(lVar5 + 0x270) = 0;
        *(undefined8 *)(lVar5 + 0x248) = 0;
        *(undefined8 *)(lVar5 + 0x240) = 0;
        *(undefined8 *)(lVar5 + 600) = 0;
        *(undefined8 *)(lVar5 + 0x250) = 0;
        *(undefined8 *)(lVar5 + 0x228) = 0;
        *(undefined8 *)(lVar5 + 0x220) = 0;
        *(undefined8 *)(lVar5 + 0x238) = 0;
        *(undefined8 *)(lVar5 + 0x230) = 0;
        *(undefined8 *)(lVar5 + 0x208) = 0;
        *(undefined8 *)(lVar5 + 0x200) = 0;
        *(undefined8 *)(lVar5 + 0x218) = 0;
        *(undefined8 *)(lVar5 + 0x210) = 0;
        *(undefined8 *)(lVar5 + 0x1e8) = 0;
        *(undefined8 *)(lVar5 + 0x1e0) = 0;
        *(undefined8 *)(lVar5 + 0x1f8) = 0;
        *(undefined8 *)(lVar5 + 0x1f0) = 0;
        *(undefined8 *)(lVar5 + 0x1c8) = 0;
        *(undefined8 *)(lVar5 + 0x1c0) = 0;
        *(undefined8 *)(lVar5 + 0x1d8) = 0;
        *(undefined8 *)(lVar5 + 0x1d0) = 0;
        puVar3 = (undefined8 *)(param_1[0xe] + 0x1c0);
        param_1[0xe] = puVar3;
      } while (uVar6 != 0);
    }
  }
  uVar10 = param_2[1];
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  plVar7 = (long *)FUN_00612290();
  param_1[0x14] = plVar7;
  if (uVar10 != 0) {
    if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 006176c0 to 006176c7 has its CatchHandler @ 006176c8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar10 * 8,8);
    param_1[0x13] = puVar3 + uVar10;
    param_1[0x11] = puVar3;
    param_1[0x12] = puVar3;
    uVar6 = uVar10;
    if ((uVar10 & 1) != 0) {
      *puVar3 = 0;
      puVar3 = (undefined8 *)(param_1[0x12] + 8);
      uVar6 = uVar10 - 1;
      param_1[0x12] = puVar3;
    }
    if (uVar10 != 1) {
      do {
        *puVar3 = 0;
        lVar5 = param_1[0x12];
        param_1[0x12] = lVar5 + 8;
        *(undefined8 *)(lVar5 + 8) = 0;
        puVar3 = (undefined8 *)(param_1[0x12] + 8);
        uVar6 = uVar6 - 2;
        param_1[0x12] = puVar3;
      } while (uVar6 != 0);
    }
  }
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x15),false,0);
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)param_1[0x12];
    puVar8 = (undefined8 *)param_1[0x11];
    if ((undefined8 *)param_1[0x11] != puVar3) {
      do {
        uVar2 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],param_1[2],0x1000);
        puVar9 = puVar8 + 1;
        *puVar8 = uVar2;
        puVar8 = puVar9;
      } while (puVar3 != puVar9);
      if (param_1[1] == 0) {
        return;
      }
    }
    lVar5 = 0;
    uVar10 = 0;
    do {
      pvVar11 = *(void **)(param_1[0x11] + uVar10 * 8);
      if (*(int *)(param_2 + 4) == -1) {
        iVar1 = FUN_00617900(param_2[5]);
        local_58[0] = nn::os::CreateThread
                                ((ThreadType *)(param_1[0xd] + lVar5),
                                 (_func_void_void_ptr *)&LAB_00617780,(void *)param_1[0xb],pvVar11,
                                 param_1[2],*(int *)(param_2 + 3),iVar1);
        iVar1 = -1;
        if (local_58[0] != 0) {
          pRVar4 = (Result *)local_58;
          goto LAB_006176a4;
        }
      }
      else {
        local_60[0] = nn::os::CreateThread
                                ((ThreadType *)(param_1[0xd] + lVar5),
                                 (_func_void_void_ptr *)&LAB_00617780,(void *)param_1[0xb],pvVar11,
                                 param_1[2],*(int *)(param_2 + 3),*(int *)(param_2 + 4));
        if (local_60[0] != 0) {
LAB_006176a4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,pRVar4,"");
        }
        iVar1 = -3;
      }
      nn::os::SetThreadCoreMask((ThreadType *)(param_1[0xd] + lVar5),iVar1,param_2[5]);
      nn::os::SetThreadName((ThreadType *)(param_1[0xd] + lVar5),(char *)(param_2 + 6));
      nn::os::StartThread((ThreadType *)(param_1[0xd] + lVar5));
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + 0x1c0;
    } while (uVar10 < (ulong)param_1[1]);
  }
  return;
}


