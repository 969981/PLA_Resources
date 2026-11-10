/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3358; name: FUN_002e3358
 */


void FUN_002e3358(long *param_1,long *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  void *__dest;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *local_68;
  
  plVar1 = param_1 + 3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar1;
  param_1[4] = (long)plVar1;
  param_1[5] = 0;
  plVar14 = (long *)param_2[4];
  if (plVar14 == param_2 + 3) {
    lVar6 = 0;
    lVar10 = 0;
  }
  else {
    do {
                    /* try { // try from 002e33a4 to 002e33ab has its CatchHandler @ 002e3760 */
      FUN_002e3cd0(plVar1,plVar14 + 2);
      plVar14 = (long *)plVar14[1];
    } while (plVar14 != param_2 + 3);
    lVar10 = param_1[2];
    lVar6 = *param_1;
  }
  uVar13 = param_2[1] - *param_2 >> 5;
  if ((ulong)(lVar10 - lVar6 >> 5) < uVar13) {
    lVar11 = param_1[1];
    lVar10 = FUN_002e2e80(PTR_FUN_04373078);
    pvVar4 = (void *)*param_1;
    lVar6 = lVar10 + (lVar11 - lVar6);
    sVar5 = param_1[1] - (long)pvVar4;
    __dest = (void *)(lVar6 - sVar5);
    if (0 < (long)sVar5) {
      memcpy(__dest,pvVar4,sVar5);
      pvVar4 = (void *)*param_1;
    }
    *param_1 = (long)__dest;
    param_1[1] = lVar6;
    param_1[2] = lVar10 + uVar13 * 0x20;
    if (pvVar4 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  puVar2 = (uint *)param_2[1];
  if ((uint *)*param_2 == puVar2) {
    return;
  }
  lVar6 = param_2[4];
  puVar16 = (uint *)*param_2 + 4;
  lVar10 = param_1[4];
LAB_002e3480:
  do {
    uVar3 = puVar16[-4];
    if ((*(byte *)(lVar6 + 0x10) & 1) == 0) {
      if (lVar6 + 0x11 != *(long *)(puVar16 + -2)) {
LAB_002e3674:
                    /* try { // try from 002e3674 to 002e36cb has its CatchHandler @ 002e36cc */
        FUN_002ebea0("external/com_google_grpc_base/src/cpp/common/channel_arguments.cc",0x2d,2,
                     "assertion failed: %s","list_it_src->c_str() == a.key");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else if (*(long *)(lVar6 + 0x20) != *(long *)(puVar16 + -2)) goto LAB_002e3674;
    if ((*(byte *)(lVar10 + 0x10) & 1) != 0) {
      lVar11 = *(long *)(lVar10 + 0x20);
      lVar6 = *(long *)(lVar6 + 8);
      lVar10 = *(long *)(lVar10 + 8);
      if (uVar3 != 0) goto LAB_002e34d4;
LAB_002e3510:
      if ((*(byte *)(lVar6 + 0x10) & 1) == 0) {
        if (lVar6 + 0x11 != *(long *)puVar16) {
LAB_002e36a4:
          FUN_002ebea0("external/com_google_grpc_base/src/cpp/common/channel_arguments.cc",0x36,2,
                       "assertion failed: %s","list_it_src->c_str() == a.value.string");
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else if (*(long *)(lVar6 + 0x20) != *(long *)puVar16) goto LAB_002e36a4;
      if ((*(byte *)(lVar10 + 0x10) & 1) == 0) {
        param_2 = (long *)(lVar10 + 0x11);
      }
      else {
        param_2 = *(long **)(lVar10 + 0x20);
      }
      lVar6 = *(long *)(lVar6 + 8);
      lVar10 = *(long *)(lVar10 + 8);
      puVar12 = (uint *)param_1[1];
      puVar7 = (uint *)param_1[2];
      if (puVar12 == puVar7) goto LAB_002e3590;
LAB_002e3454:
      *(long *)(puVar12 + 2) = lVar11;
      *(long **)(puVar12 + 4) = param_2;
      *puVar12 = uVar3;
      *(undefined8 **)(puVar12 + 6) = local_68;
      param_1[1] = param_1[1] + 0x20;
LAB_002e3470:
      puVar12 = puVar16 + 4;
      puVar16 = puVar16 + 8;
      if (puVar12 == puVar2) {
        return;
      }
      goto LAB_002e3480;
    }
    lVar11 = lVar10 + 0x11;
    lVar6 = *(long *)(lVar6 + 8);
    lVar10 = *(long *)(lVar10 + 8);
    if (uVar3 == 0) goto LAB_002e3510;
LAB_002e34d4:
    if (uVar3 == 2) {
      local_68 = *(undefined8 **)(puVar16 + 2);
                    /* try { // try from 002e353c to 002e353f has its CatchHandler @ 002e36e0 */
      param_2 = (long *)(*(code *)*local_68)(*(undefined8 *)puVar16);
      puVar12 = (uint *)param_1[1];
      puVar7 = (uint *)param_1[2];
      if (puVar12 == puVar7) goto LAB_002e3590;
      goto LAB_002e3454;
    }
    if (uVar3 == 1) {
      param_2 = (long *)((ulong)param_2 & 0xffffffff00000000 | (ulong)*puVar16);
    }
    puVar12 = (uint *)param_1[1];
    puVar7 = (uint *)param_1[2];
    if (puVar12 != puVar7) goto LAB_002e3454;
LAB_002e3590:
    lVar15 = (long)puVar12 - *param_1 >> 5;
    uVar13 = lVar15 + 1;
    if (uVar13 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)puVar7 - *param_1;
    if ((ulong)(lVar8 >> 5) < 0x3ffffffffffffff) {
      uVar9 = lVar8 >> 4;
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) goto LAB_002e35d8;
      lVar8 = 0;
    }
    else {
      uVar13 = 0x7ffffffffffffff;
LAB_002e35d8:
      lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 5);
    }
    puVar12 = (uint *)(lVar8 + lVar15 * 0x20);
    *puVar12 = uVar3;
    *(long *)(puVar12 + 2) = lVar11;
    *(long **)(puVar12 + 4) = param_2;
    *(undefined8 **)(puVar12 + 6) = local_68;
    pvVar4 = (void *)*param_1;
    sVar5 = param_1[1] - (long)pvVar4;
    if (0 < (long)sVar5) {
      memcpy((void *)((long)puVar12 - sVar5),pvVar4,sVar5);
      pvVar4 = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar12 - sVar5);
    param_1[1] = (long)(puVar12 + 8);
    param_1[2] = lVar8 + uVar13 * 0x20;
    if (pvVar4 == (void *)0x0) goto LAB_002e3470;
    FUN_002e2ea0(PTR_LAB_04373088);
    puVar12 = puVar16 + 4;
    puVar16 = puVar16 + 8;
    if (puVar12 == puVar2) {
      return;
    }
  } while( true );
}


