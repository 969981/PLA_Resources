/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00521a98; name: FUN_00521a98
 */


void FUN_00521a98(long *param_1,byte *param_2,byte *param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_04374b10 + 0x10);
  param_1[1] = 0;
  param_1[2] = 1;
  plVar3 = param_1 + 3;
  *plVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*param_2 & 1) == 0) {
    lVar8 = *(long *)(param_2 + 8);
    lVar7 = *(long *)param_2;
    param_1[5] = *(long *)(param_2 + 0x10);
    param_1[4] = lVar8;
    *plVar3 = lVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00521c30 to 00521c37 has its CatchHandler @ 00521c64 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar2 = *(void **)(param_2 + 0x10);
    if (uVar6 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x19);
      *(char *)plVar3 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_00521b44;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      param_1[3] = uVar4 | 1;
      param_1[4] = uVar6;
      param_1[5] = (long)pvVar5;
LAB_00521b44:
      memcpy(pvVar5,pvVar2,uVar6);
    }
    *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  }
  plVar3 = param_1 + 6;
  *plVar3 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((*param_3 & 1) == 0) {
    lVar8 = *(long *)(param_3 + 8);
    lVar7 = *(long *)param_3;
    param_1[8] = *(long *)(param_3 + 0x10);
    param_1[7] = lVar8;
    *plVar3 = lVar7;
    goto LAB_00521be4;
  }
  uVar6 = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00521c38 to 00521c3f has its CatchHandler @ 00521c40 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar2 = *(void **)(param_3 + 0x10);
  if (uVar6 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x31);
    *(char *)plVar3 = (char)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_00521bd0;
  }
  else {
    uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    param_1[6] = uVar4 | 1;
    param_1[7] = uVar6;
    param_1[8] = (long)pvVar5;
LAB_00521bd0:
    memcpy(pvVar5,pvVar2,uVar6);
  }
  *(undefined1 *)((long)pvVar5 + uVar6) = 0;
LAB_00521be4:
  param_1[9] = 0;
  puVar1 = PTR_LAB_04374b18;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x13] = (long)puVar1;
  param_1[0x17] =
       (long)"external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  param_1[0x14] = (long)param_1;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x90;
  return;
}


